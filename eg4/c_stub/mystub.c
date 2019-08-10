#include<stdio.h>
#include<caml/mlvalues.h>
#include<caml/alloc.h>
#include<caml/memory.h>
#include<caml/fail.h>
#include<caml/callback.h>
#include<caml/custom.h>
#include<caml/intext.h>
#include<caml/threads.h>

CAMLprim value oinit(value unit)
{
	init();
}

CAMLprim value oadd_five(value a)
{
	CAMLparam1(a);
	CAMLlocal1(res);
	res = add_five(Int_val(a));
	CAMLreturn(Val_int(res));	
}

