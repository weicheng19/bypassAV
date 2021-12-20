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
typedef N_STDCALL_PTR(NI32, tyProc__9b1AZ3AfnxJABiQ9b6lLDjDQ) (NI32 CodePage, NI32 dwFlags, NU16* lpWideCharStr, NI32 cchWideChar, NIM_CHAR* lpMultiByteStr, NI32 cbMultiByte, NIM_CHAR* lpDefaultChar, NI32* lpUsedDefaultChar);
typedef N_STDCALL_PTR(NI32, tyProc__uaa3EeY5nSKYBlex9baos2Q) (NU16* P1);
typedef N_STDCALL_PTR(NI32, tyProc__ZrYgC1xSVfR0hlv62dg3eA) (NI32 CodePage, NI32 dwFlags, NIM_CHAR* lpMultiByteStr, NI32 cbMultiByte, NU16* lpWideCharStr, NI32 cchWideChar);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
static N_INLINE(NIM_CHAR*, amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_105)(NimStringDesc* s);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NU16*, amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_111)(NimStringDesc* s);
static N_INLINE(NimStringDesc*, plusdollar__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_695)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, UTF8minusgtwstring__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_117)(NIM_CHAR* source, NI L);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, newWString_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_63)(NI L);
STRING_LITERAL(TM__zjeWotTwb2UTl5yWEPxJRw_4, "kernel32", 8);
STRING_LITERAL(TM__zjeWotTwb2UTl5yWEPxJRw_5, "kernel32", 8);
STRING_LITERAL(TM__zjeWotTwb2UTl5yWEPxJRw_10, "oleaut32", 8);
STRING_LITERAL(TM__zjeWotTwb2UTl5yWEPxJRw_11, "oleaut32", 8);
N_LIB_PRIVATE NIM_BOOL isOpenArrayStringable_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_559;
static void* TM__zjeWotTwb2UTl5yWEPxJRw_2;
tyProc__9b1AZ3AfnxJABiQ9b6lLDjDQ Dl_143654930_;
static void* TM__zjeWotTwb2UTl5yWEPxJRw_8;
tyProc__uaa3EeY5nSKYBlex9baos2Q Dl_143654939_;
tyProc__uaa3EeY5nSKYBlex9baos2Q Dl_143654921_;
tyProc__ZrYgC1xSVfR0hlv62dg3eA Dl_143654923_;
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == ((NimStringDesc*) NIM_NIL));
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_CHAR*, amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_105)(NimStringDesc* s) {
	NIM_CHAR* result;
	result = (NIM_CHAR*)0;
	result = ((NIM_CHAR*) (nimToCStringConv(s)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, UNICODEminusgtstring__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_188)(NU16* source, NI L) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NI32 mLen;
		NIM_CHAR* T5_;
		NI32 T6_;
		if (!!((source == 0))) goto LA3_;
		mLen = Dl_143654930_(((NI32) 65001), ((NI32) 0), source, ((NI32) (L)), ((NIM_CHAR*) NIM_NIL), ((NI32) 0), ((NIM_CHAR*) NIM_NIL), ((NI32*) NIM_NIL));
		if ((mLen) < ((NI) 0) || (mLen) > ((NI) 2147483647)){ raiseRangeErrorI(mLen, ((NI) 0), ((NI) 2147483647)); }
		result = mnewString(((NI) (mLen)));
		T5_ = (NIM_CHAR*)0;
		T5_ = amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_105(result);
		T6_ = (NI32)0;
		T6_ = Dl_143654930_(((NI32) 65001), ((NI32) 0), source, ((NI32) (L)), T5_, mLen, ((NIM_CHAR*) NIM_NIL), ((NI32*) NIM_NIL));
		(void)(T6_);
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU16*, winstrConverterBSTRToLPWSTR_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_645)(NU16* x) {
	NU16* result;
	result = (NU16*)0;
	result = ((NU16*) (x));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, newWString_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_63)(NI L) {
	NimStringDesc* result;
	NI TM__zjeWotTwb2UTl5yWEPxJRw_14;
	NI TM__zjeWotTwb2UTl5yWEPxJRw_15;
	result = (NimStringDesc*)0;
	if (nimAddInt(((NI) (L)), ((NI) 1), &TM__zjeWotTwb2UTl5yWEPxJRw_14)) { raiseOverflow(); };
	if (nimMulInt((NI)(TM__zjeWotTwb2UTl5yWEPxJRw_14), ((NI) 2), &TM__zjeWotTwb2UTl5yWEPxJRw_15)) { raiseOverflow(); };
	if (((NI)(TM__zjeWotTwb2UTl5yWEPxJRw_15)) < ((NI) 0) || ((NI)(TM__zjeWotTwb2UTl5yWEPxJRw_15)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__zjeWotTwb2UTl5yWEPxJRw_15), ((NI) 0), ((NI) 2147483647)); }
	result = mnewString(((NI) ((NI)(TM__zjeWotTwb2UTl5yWEPxJRw_15))));
	return result;
}
static N_INLINE(NU16*, amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_111)(NimStringDesc* s) {
	NU16* result;
	NIM_CHAR* T1_;
	result = (NU16*)0;
	T1_ = (NIM_CHAR*)0;
	T1_ = amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_105(s);
	result = ((NU16*) (T1_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, UTF8minusgtwstring__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_117)(NIM_CHAR* source, NI L) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NI32 wLen;
		NU16* T5_;
		NI32 T6_;
		if (!!((source == 0))) goto LA3_;
		wLen = Dl_143654923_(((NI32) 65001), ((NI32) 0), source, ((NI32) (L)), ((NU16*) NIM_NIL), ((NI32) 0));
		if ((wLen) < ((NI) 0) || (wLen) > ((NI) 2147483647)){ raiseRangeErrorI(wLen, ((NI) 0), ((NI) 2147483647)); }
		result = newWString_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_63(((NI) (wLen)));
		T5_ = (NU16*)0;
		T5_ = amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_111(result);
		T6_ = (NI32)0;
		T6_ = Dl_143654923_(((NI32) 65001), ((NI32) 0), source, ((NI32) (L)), T5_, wLen);
		(void)(T6_);
	}
	LA3_: ;
	return result;
}
static N_INLINE(NimStringDesc*, plusdollar__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_695)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_CHAR* T1_;
	result = (NimStringDesc*)0;
	T1_ = (NIM_CHAR*)0;
	T1_ = amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_105(s);
	if (((s ? s->Sup.len : 0)) < ((NI) 0) || ((s ? s->Sup.len : 0)) > ((NI) 2147483647)){ raiseRangeErrorI((s ? s->Sup.len : 0), ((NI) 0), ((NI) 2147483647)); }
	result = UTF8minusgtwstring__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_117(T1_, ((NI) ((s ? s->Sup.len : 0))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU16*, winstrConverterStringToLPWSTR_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_692)(NimStringDesc* x) {
	NU16* result;
	NimStringDesc* T1_;
	NU16* T2_;
	result = (NU16*)0;
	T1_ = (NimStringDesc*)0;
	T1_ = plusdollar__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_695(x);
	T2_ = (NU16*)0;
	T2_ = amp__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZwinstr_111(T1_);
	result = ((NU16*) (T2_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, winim_winstrDatInit000)(void) {
if (!((TM__zjeWotTwb2UTl5yWEPxJRw_2 = nimLoadLibrary(((NimStringDesc*) &TM__zjeWotTwb2UTl5yWEPxJRw_4)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__zjeWotTwb2UTl5yWEPxJRw_5));
	Dl_143654930_ = (tyProc__9b1AZ3AfnxJABiQ9b6lLDjDQ) nimGetProcAddr(TM__zjeWotTwb2UTl5yWEPxJRw_2, "WideCharToMultiByte");
if (!((TM__zjeWotTwb2UTl5yWEPxJRw_8 = nimLoadLibrary(((NimStringDesc*) &TM__zjeWotTwb2UTl5yWEPxJRw_10)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__zjeWotTwb2UTl5yWEPxJRw_11));
	Dl_143654939_ = (tyProc__uaa3EeY5nSKYBlex9baos2Q) nimGetProcAddr(TM__zjeWotTwb2UTl5yWEPxJRw_8, "SysStringLen");
	Dl_143654921_ = (tyProc__uaa3EeY5nSKYBlex9baos2Q) nimGetProcAddr(TM__zjeWotTwb2UTl5yWEPxJRw_2, "lstrlenW");
	Dl_143654923_ = (tyProc__ZrYgC1xSVfR0hlv62dg3eA) nimGetProcAddr(TM__zjeWotTwb2UTl5yWEPxJRw_2, "MultiByteToWideChar");
}

