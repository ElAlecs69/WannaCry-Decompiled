typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef unsigned short    word;
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef ushort WORD;

typedef int (*FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef ulong DWORD;

typedef uchar BYTE;

typedef HINSTANCE HMODULE;

typedef BYTE *LPBYTE;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef void *HANDLE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef void *PVOID;

typedef ulong ULONG_PTR;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef CHAR *LPCSTR;

typedef CONTEXT *PCONTEXT;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};



undefined DAT_00401540;
undefined DAT_00402060;
string s_winsta0\default_00403010;
string s_SeTcbPrivilege_00403020;
string s_WTSQueryUserToken_00403030;
string s_wtsapi32.dll_00403044;
string s_DestroyEnvironmentBlock_00403054;
string s_CreateEnvironmentBlock_0040306c;
void *ExceptionList;
string s_userenv.dll_00403084;
string s_CloseHandle_00403090;
string s_GetCurrentProcess_0040309c;
string s_WTSGetActiveConsoleSessionId_004030b0;
string s_kernel32.dll_004030d0;
string s_CreateProcessAsUserA_004030e0;
string s_DuplicateTokenEx_004030f8;
string s_AdjustTokenPrivileges_0040310c;
string s_LookupPrivilegeValueA_00403124;
string s_OpenProcessToken_0040313c;
string s_advapi32.dll_00403150;
string s_WTSFreeMemory_00403160;
string s_WTSEnumerateSessionsA_00403170;
string s_Wtsapi32.dll_00403188;
undefined DAT_004031b4;
undefined DAT_004031b8;
undefined4 DAT_004031b0;
undefined4 DAT_004031ac;
undefined *PTR__adjust_fdiv_00402044;
undefined DAT_004031bc;
int DAT_004031a0;
int DAT_004031a8;
int DAT_004031a4;
undefined *PTR__acmdln_00402058;
undefined LAB_004016c8;
undefined DAT_00402070;
undefined DAT_00403000;
undefined DAT_00403004;
undefined DAT_00403008;
undefined DAT_0040300c;

undefined4 __cdecl FUN_00401000(undefined4 param_1,int param_2,undefined2 param_3,int param_4)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  int iVar3;
  char **ppcVar4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  char *local_dc [11];
  undefined2 local_b0;
  int local_9c;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  FARPROC local_88;
  FARPROC local_7c;
  undefined4 local_78;
  undefined4 local_74;
  FARPROC local_70;
  FARPROC local_6c;
  FARPROC local_64;
  FARPROC local_60;
  FARPROC local_5c;
  FARPROC local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  FARPROC local_44;
  undefined4 local_3c;
  FARPROC local_38;
  HANDLE local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00402060;
  puStack_10 = &DAT_00401540;
  local_14 = ExceptionList;
  local_3c = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_8c = 0;
  local_78 = 0;
  local_74 = 0;
  local_30 = (HANDLE)0x0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  ExceptionList = &local_14;
  pHVar1 = GetModuleHandleA(s_advapi32_dll_00403150);
  if ((pHVar1 != (HMODULE)0x0) ||
     (pHVar1 = LoadLibraryA(s_advapi32_dll_00403150), pHVar1 != (HMODULE)0x0)) {
    local_44 = GetProcAddress(pHVar1,s_OpenProcessToken_0040313c);
    local_88 = GetProcAddress(pHVar1,s_LookupPrivilegeValueA_00403124);
    local_6c = GetProcAddress(pHVar1,s_AdjustTokenPrivileges_0040310c);
    local_64 = GetProcAddress(pHVar1,s_DuplicateTokenEx_004030f8);
    local_58 = GetProcAddress(pHVar1,s_CreateProcessAsUserA_004030e0);
    if (((local_44 != (FARPROC)0x0) &&
        ((((local_88 != (FARPROC)0x0 && (local_6c != (FARPROC)0x0)) && (local_64 != (FARPROC)0x0))
         && (local_58 != (FARPROC)0x0)))) &&
       ((pHVar1 = GetModuleHandleA(s_kernel32_dll_004030d0), pHVar1 != (HMODULE)0x0 ||
        (pHVar1 = LoadLibraryA(s_kernel32_dll_004030d0), pHVar1 != (HMODULE)0x0)))) {
      local_60 = GetProcAddress(pHVar1,s_WTSGetActiveConsoleSessionId_004030b0);
      local_5c = GetProcAddress(pHVar1,s_GetCurrentProcess_0040309c);
      local_38 = GetProcAddress(pHVar1,s_CloseHandle_00403090);
      if ((local_60 != (FARPROC)0x0) &&
         (((local_5c != (FARPROC)0x0 && (local_38 != (FARPROC)0x0)) &&
          ((pHVar1 = GetModuleHandleA(s_userenv_dll_00403084), pHVar1 != (HMODULE)0x0 ||
           (pHVar1 = LoadLibraryA(s_userenv_dll_00403084), pHVar1 != (HMODULE)0x0)))))) {
        local_7c = GetProcAddress(pHVar1,s_CreateEnvironmentBlock_0040306c);
        local_70 = GetProcAddress(pHVar1,s_DestroyEnvironmentBlock_00403054);
        if ((((local_7c != (FARPROC)0x0) && (local_70 != (FARPROC)0x0)) &&
            ((pHVar1 = GetModuleHandleA(s_wtsapi32_dll_00403044), pHVar1 != (HMODULE)0x0 ||
             (pHVar1 = LoadLibraryA(s_wtsapi32_dll_00403044), pHVar1 != (HMODULE)0x0)))) &&
           (pFVar2 = GetProcAddress(pHVar1,s_WTSQueryUserToken_00403030), pFVar2 != (FARPROC)0x0)) {
          local_8 = 0;
          iVar3 = (*local_5c)(0x28,&local_3c);
          iVar3 = (*local_44)(iVar3);
          if ((iVar3 != 0) &&
             (iVar3 = (*local_88)(0,s_SeTcbPrivilege_00403020,&local_94), iVar3 != 0)) {
            local_f0 = 1;
            local_ec = local_94;
            local_e8 = local_90;
            local_e4 = 2;
            iVar3 = (*local_6c)(local_3c,0,&local_f0,0x10,&local_54,local_98);
            if (iVar3 != 0) {
              if ((param_2 == -1) && (param_2 = (*local_60)(), param_2 == -1)) {
                local_9c = param_2;
                local_unwind2(&local_14,0xffffffff);
                ExceptionList = local_14;
                return 0;
              }
              local_9c = param_2;
              iVar3 = (*pFVar2)(param_2,&local_8c);
              if ((iVar3 != 0) &&
                 (iVar3 = (*local_64)(local_8c,0x2000000,0,1,1,&local_78), iVar3 != 0)) {
                ppcVar4 = local_dc;
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *ppcVar4 = (char *)0x0;
                  ppcVar4 = ppcVar4 + 1;
                }
                local_e0 = 0x44;
                local_dc[1] = s_winsta0_default_00403010;
                local_b0 = param_3;
                iVar3 = (*local_7c)(&local_74,local_78,1);
                if ((iVar3 != 0) &&
                   (iVar3 = (*local_58)(local_78,param_1,0,0,0,0,0x400,local_74,0,&local_e0,
                                        &local_30), iVar3 != 0)) {
                  if (param_4 != 0) {
                    WaitForSingleObject(local_30,0xffffffff);
                  }
                  local_8 = 0xffffffff;
                  FUN_00401398();
                  ExceptionList = local_14;
                  return 0;
                }
              }
            }
          }
          local_unwind2(&local_14,0xffffffff);
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0xffffffff;
}



void FUN_00401398(void)

{
  undefined4 uVar1;
  int unaff_EBX;
  int unaff_EBP;
  code *pcVar2;
  
  if (*(int *)(unaff_EBP + -0x28) == unaff_EBX) {
    pcVar2 = *(code **)(unaff_EBP + -0x34);
  }
  else {
    pcVar2 = *(code **)(unaff_EBP + -0x34);
    (*pcVar2)(*(int *)(unaff_EBP + -0x28));
  }
  if (*(int *)(unaff_EBP + -0x2c) != unaff_EBX) {
    (*pcVar2)(*(int *)(unaff_EBP + -0x2c));
  }
  if (*(int *)(unaff_EBP + -0x70) != unaff_EBX) {
    uVar1 = (**(code **)(unaff_EBP + -0x6c))(*(int *)(unaff_EBP + -0x70));
    *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
  }
  if (*(int *)(unaff_EBP + -0x74) != unaff_EBX) {
    (*pcVar2)(*(int *)(unaff_EBP + -0x74));
  }
  if (*(int *)(unaff_EBP + -0x88) != unaff_EBX) {
    (*pcVar2)(*(int *)(unaff_EBP + -0x88));
  }
  if (*(int *)(unaff_EBP + -0x38) != unaff_EBX) {
    uVar1 = (**(code **)(unaff_EBP + -0x68))(*(int *)(unaff_EBP + -0x38));
    *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
    (*pcVar2)(*(undefined4 *)(unaff_EBP + -0x38));
  }
  return;
}



uint FUN_00401420(void)

{
  undefined4 uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC unaff_EBP;
  int iVar4;
  uint unaff_EDI;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  FARPROC local_4;
  
  local_8 = 0;
  hModule = LoadLibraryA(s_Wtsapi32_dll_00403188);
  if (hModule == (HMODULE)0x0) {
    return 0xffffffff;
  }
  pFVar2 = GetProcAddress(hModule,s_WTSEnumerateSessionsA_00403170);
  if (pFVar2 == (FARPROC)0x0) {
    return 0xffffffff;
  }
  pFVar3 = GetProcAddress(hModule,s_WTSFreeMemory_00403160);
  if (pFVar3 == (FARPROC)0x0) {
    return 0xffffffff;
  }
  puVar6 = &local_c;
  local_10 = 0;
  local_c = 0;
  local_4 = pFVar3;
  (*pFVar2)(0,0,1,&local_10);
  uVar1 = local_10;
  if (puVar6 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar5 = 0;
  if (unaff_EDI != 0) {
    iVar4 = 0;
    do {
      FUN_00401000(uVar1,*(int *)(iVar4 + (int)puVar6),5,0);
      Sleep(100);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
      pFVar3 = unaff_EBP;
    } while (uVar5 < unaff_EDI);
  }
  (*pFVar3)(puVar6);
  return unaff_EDI;
}



uint FUN_00401510(void)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)__p___argc();
  if (*piVar1 < 2) {
    return 0;
  }
  __p___argv();
  uVar2 = FUN_00401420();
  return uVar2;
}



void __cdecl local_unwind2(void)

{
                    // WARNING: Could not recover jumptable at 0x00401546. Too many branches
                    // WARNING: Treating indirect jump as call
  local_unwind2();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char **local_74;
  _startupinfo local_70;
  uint local_6c;
  char **local_68;
  int local_64;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00402070;
  puStack_10 = &DAT_00401540;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_004031b4 = 0xffffffff;
  _DAT_004031b8 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_004031b0;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_004031ac;
  _DAT_004031bc = *(undefined4 *)_adjust_fdiv_exref;
  FUN_004016cb();
  if (DAT_004031a0 == 0) {
    __setusermatherr(&LAB_004016c8);
  }
  FUN_004016b6();
  initterm(&DAT_00403008,&DAT_0040300c);
  local_70.newmode = DAT_004031a8;
  __getmainargs(&local_64,&local_74,&local_68,DAT_004031a4,&local_70);
  initterm(&DAT_00403000,&DAT_00403004);
  pbVar2 = *(byte **)_acmdln_exref;
  if (*pbVar2 != 0x22) {
    do {
      if (*pbVar2 < 0x21) goto LAB_0040163f;
      pbVar2 = pbVar2 + 1;
    } while( true );
  }
  do {
    pbVar2 = pbVar2 + 1;
    if (*pbVar2 == 0) break;
  } while (*pbVar2 != 0x22);
  if (*pbVar2 != 0x22) goto LAB_0040163f;
  do {
    pbVar2 = pbVar2 + 1;
LAB_0040163f:
  } while ((*pbVar2 != 0) && (*pbVar2 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_00401510();
                    // WARNING: Subroutine does not return
  exit(local_6c);
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x004016aa. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



void __cdecl initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004016b0. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm();
  return;
}



void FUN_004016b6(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



void FUN_004016cb(void)

{
  return;
}



uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x004016cc. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}


