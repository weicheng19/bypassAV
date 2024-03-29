/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(void*, tyProc__81VIzYkqwzDl7rl3af0pZg) (NU16* lpszAgent, NI32 dwAccessType, NU16* lpszProxy, NU16* lpszProxyBypass, NI32 dwFlags);
typedef N_STDCALL_PTR(NI32, tyProc__9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI32, tyProc__Jf1Ud3fyK3FJ9a0p2hXD9akg) (void* hSession, NI32 nResolveTimeout, NI32 nConnectTimeout, NI32 nSendTimeout, NI32 nReceiveTimeout);
typedef N_STDCALL_PTR(void*, tyProc__RFwzZ679c39c5tm4O7Tpzjeg) (void* hSession, NU16* lpszServerName, NU16 nServerPort, NI32 dwFlags);
typedef N_STDCALL_PTR(void*, tyProc__VvL5F9ctiPFd9cY0CxFJmncg) (void* hConnect, NU16* lpszVerb, NU16* lpszObjectName, NU16* lpszVersion, NU16* lpszReferrer, NU16** lplpszAcceptTypes, NI32 dwFlags);
typedef N_STDCALL_PTR(NI32, tyProc__GDtgFkYwnC8EJx7gppgoYg) (void* hRequest, NU16* lpszHeaders, NI32 dwHeadersLength, NI32 dwModifiers);
typedef N_STDCALL_PTR(NI32, tyProc__aux9clEFrOZ9cb4mZ9cYQop4g) (void* hRequest, NU16* lpszHeaders, NI32 dwHeadersLength, void* lpOptional, NI32 dwOptionalLength, NI32 dwTotalLength, NU32 dwContext);
typedef N_STDCALL_PTR(NI32, tyProc__wS8JrJMcfFBzgzuqJGOAAg) (void* hRequest, void* lpReserved);
typedef N_STDCALL_PTR(NI32, tyProc__5V5gHAr7e9bsH0OKztxYmCw) (void* hRequest, NI32 dwInfoLevel, NU16* pwszName, void* lpBuffer, NI32* lpdwBufferLength, NI32* lpdwIndex);
typedef N_STDCALL_PTR(NI32, tyProc__mID4zaJ5rXbvlxUmzwPGLw) (void* hFile, void* lpBuffer, NI32 dwNumberOfBytesToRead, NI32* lpdwNumberOfBytesRead);
typedef N_STDCALL_PTR(NI32, tyProc__ah5wcFv3UG20t2vgXBy0Fg) (void* hInternet);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
STRING_LITERAL(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_4, "winhttp", 7);
STRING_LITERAL(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_5, "winhttp", 7);
STRING_LITERAL(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_10, "kernel32", 8);
STRING_LITERAL(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_11, "kernel32", 8);
static void* TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2;
tyProc__81VIzYkqwzDl7rl3af0pZg Dl_121634853_;
static void* TM__QKVX4J9cZAm8ZUU9a29cFkvnA_8;
tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_121634843_;
tyProc__Jf1Ud3fyK3FJ9a0p2hXD9akg Dl_121634859_;
tyProc__RFwzZ679c39c5tm4O7Tpzjeg Dl_121634865_;
tyProc__VvL5F9ctiPFd9cY0CxFJmncg Dl_121634870_;
tyProc__GDtgFkYwnC8EJx7gppgoYg Dl_121634878_;
tyProc__aux9clEFrOZ9cb4mZ9cYQop4g Dl_121634883_;
tyProc__wS8JrJMcfFBzgzuqJGOAAg Dl_121634891_;
tyProc__5V5gHAr7e9bsH0OKztxYmCw Dl_121634894_;
tyProc__mID4zaJ5rXbvlxUmzwPGLw Dl_121634901_;
tyProc__ah5wcFv3UG20t2vgXBy0Fg Dl_121634906_;
N_LIB_PRIVATE N_NIMCALL(void, puppy_windefsDatInit000)(void) {
if (!((TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2 = nimLoadLibrary(((NimStringDesc*) &TM__QKVX4J9cZAm8ZUU9a29cFkvnA_4)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__QKVX4J9cZAm8ZUU9a29cFkvnA_5));
	Dl_121634853_ = (tyProc__81VIzYkqwzDl7rl3af0pZg) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpOpen");
if (!((TM__QKVX4J9cZAm8ZUU9a29cFkvnA_8 = nimLoadLibrary(((NimStringDesc*) &TM__QKVX4J9cZAm8ZUU9a29cFkvnA_10)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__QKVX4J9cZAm8ZUU9a29cFkvnA_11));
	Dl_121634843_ = (tyProc__9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_8, "GetLastError");
	Dl_121634859_ = (tyProc__Jf1Ud3fyK3FJ9a0p2hXD9akg) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpSetTimeouts");
	Dl_121634865_ = (tyProc__RFwzZ679c39c5tm4O7Tpzjeg) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpConnect");
	Dl_121634870_ = (tyProc__VvL5F9ctiPFd9cY0CxFJmncg) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpOpenRequest");
	Dl_121634878_ = (tyProc__GDtgFkYwnC8EJx7gppgoYg) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpAddRequestHeaders");
	Dl_121634883_ = (tyProc__aux9clEFrOZ9cb4mZ9cYQop4g) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpSendRequest");
	Dl_121634891_ = (tyProc__wS8JrJMcfFBzgzuqJGOAAg) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpReceiveResponse");
	Dl_121634894_ = (tyProc__5V5gHAr7e9bsH0OKztxYmCw) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpQueryHeaders");
	Dl_121634901_ = (tyProc__mID4zaJ5rXbvlxUmzwPGLw) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpReadData");
	Dl_121634906_ = (tyProc__ah5wcFv3UG20t2vgXBy0Fg) nimGetProcAddr(TM__QKVX4J9cZAm8ZUU9a29cFkvnA_2, "WinHttpCloseHandle");
}

