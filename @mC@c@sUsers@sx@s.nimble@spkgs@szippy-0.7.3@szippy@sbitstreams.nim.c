/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w;
typedef struct tyObject_ZippyError__cuFDdsiUF1yWdvcbJ19aijg tyObject_ZippyError__cuFDdsiUF1yWdvcbJ19aijg;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w {
NI pos;
NimStringDesc* data;
NI bitCount;
NU64 bitBuf;
NU bitPos;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_ZippyError__cuFDdsiUF1yWdvcbJ19aijg {
  tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, fillBitBuf_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_18)(tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* b);
static N_INLINE(void, incPos_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_87)(tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* b, NU bits);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_system_5356)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5354)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5305)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5311)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5349)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
extern TNimType NTIrefzippyerror__da4gLSgMwOCwCaJSZe17sg_;
extern TNimType NTIzippyerror__cuFDdsiUF1yWdvcbJ19aijg_;
STRING_LITERAL(TM__7rCnxYg56U0HCf5pOiFXFw_2, "Cannot read further, at end of buffer", 37);
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5258;
N_LIB_PRIVATE N_NIMCALL(void, initBitStream_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_10)(NimStringDesc* data, NI pos, tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* Result) {
	(*Result).pos = 0;
	unsureAsgnRef((void**)&(*Result).data, NIM_NIL);
	(*Result).bitCount = 0;
	(*Result).bitBuf = 0;
	(*Result).bitPos = 0;
	unsureAsgnRef((void**) (&(*Result).data), copyString(data));
	(*Result).pos = pos;
}
static N_INLINE(void, fillBitBuf_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_18)(tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* b) {
	{
		while (1) {
			if (!((*b).bitCount <= ((NI) 56))) goto LA2;
			{
				if (!(((*b).data ? (*b).data->Sup.len : 0) <= (*b).pos)) goto LA5_;
				goto LA1;
			}
			LA5_: ;
			(*b).bitBuf = (NU64)((*b).bitBuf | (NU64)((NU64)(((NU64) (((NU8)((*b).data->data[(*b).pos]))))) << (NU64)((*b).bitCount)));
			(*b).pos += ((NI) 1);
			(*b).bitCount += ((NI) 8);
		} LA2: ;
	} LA1: ;
}
N_LIB_PRIVATE N_NIMCALL(NU16, readBits_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_32)(tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* b, NU bits) {
	NU16 result;
	result = (NU16)0;
	{
		if (!((*b).bitCount < ((NI) 16))) goto LA3_;
		fillBitBuf_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_18(b);
	}
	LA3_: ;
	result = ((NU16) ((NU64)((*b).bitBuf & (NU64)((NU64)((NU64)((NU64)(1ULL) << (NU64)(bits))) - (NU64)(1ULL)))));
	(*b).bitBuf = (NU64)((NU64)((*b).bitBuf) >> (NU64)(bits));
	(*b).bitCount -= ((NI) (bits));
	return result;
}
static N_INLINE(void, incPos_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_87)(tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* b, NU bits) {
	(*b).pos += ((NI) ((NU)((NU32)((NU)((NU32)(bits) + (NU32)((*b).bitPos))) >> (NU32)(((NI) 3)))));
	(*b).bitPos = (NU)((NU)((NU32)(bits) + (NU32)((*b).bitPos)) & ((NU) 7));
}
N_LIB_PRIVATE N_NIMCALL(void, skipRemainingBitsInCurrentByte_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_98)(tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* b) {
	NI mod8;
	{
		if (!((NU32)(((NU) 0)) < (NU32)((*b).bitPos))) goto LA3_;
		incPos_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_87(b, (NU)((NU32)(((NU) 8)) - (NU32)((*b).bitPos)));
	}
	LA3_: ;
	mod8 = (NI)((*b).bitCount % ((NI) 8));
	{
		if (!!((mod8 == ((NI) 0)))) goto LA7_;
		(*b).bitCount -= mod8;
		(*b).bitBuf = (NU64)((NU64)((*b).bitBuf) >> (NU64)(mod8));
	}
	LA7_: ;
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU32)(((NU) (x))) < (NU32)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT_system_5354)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_system_5305((&gch_system_5258.zct), c);
}
static N_INLINE(void, decRef_system_5356)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent__system_716((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent__system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT_system_5354(c);
	}
	LA4_: ;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5311)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent__system_716(((NI) (ptrdiff_t) (usr)), ((NI) 8));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_system_5311(p);
	decRef_system_5356(T1_);
}
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef_system_5349)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent__system_696((*c).refcount, ((NI) 8));
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_system_5311(src);
		incRef_system_5349(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_system_5311((*dest));
		decRef_system_5356(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
N_LIB_PRIVATE N_NIMCALL(void, readBytes_6758Z85sersZxZOnimbleZpkgsZzippy4548O55O51ZzippyZbitstreams_51)(tyObject_BitStream__W3e33VTPq8R7agQzFZnF0w* b, NimStringDesc** dst, NI start, NI len) {
	NI posOffset;
	posOffset = (NI)((*b).bitCount / ((NI) 8));
	{
		tyObject_ZippyError__cuFDdsiUF1yWdvcbJ19aijg* T5_;
		NimStringDesc* T6_;
		if (!(((*b).data ? (*b).data->Sup.len : 0) < (NI)((NI)((*b).pos - posOffset) + len))) goto LA3_;
		T5_ = (tyObject_ZippyError__cuFDdsiUF1yWdvcbJ19aijg*)0;
		T5_ = (tyObject_ZippyError__cuFDdsiUF1yWdvcbJ19aijg*) newObj((&NTIrefzippyerror__da4gLSgMwOCwCaJSZe17sg_), sizeof(tyObject_ZippyError__cuFDdsiUF1yWdvcbJ19aijg));
		(*T5_).Sup.Sup.Sup.Sup.m_type = (&NTIzippyerror__cuFDdsiUF1yWdvcbJ19aijg_);
		(*T5_).Sup.Sup.Sup.name = "ZippyError";
		T6_ = (NimStringDesc*)0;
		T6_ = (*T5_).Sup.Sup.Sup.message; (*T5_).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__7rCnxYg56U0HCf5pOiFXFw_2));
		if (T6_) nimGCunrefNoCycle(T6_);
		asgnRef((void**) (&(*T5_).Sup.Sup.Sup.parent), ((Exception*) NIM_NIL));
		raiseExceptionEx((Exception*)T5_, "ZippyError", "readBytes", "bitstreams.nim", 53);
	}
	LA3_: ;
	copyMem_system_1727(((void*) ((&(*dst)->data[start]))), ((void*) ((&(*b).data->data[(NI)((*b).pos - posOffset)]))), ((NI) (len)));
	(*b).pos = (NI)((NI)((*b).pos - posOffset) + len);
	(*b).bitCount = ((NI) 0);
	(*b).bitBuf = 0ULL;
}
