
#define CAML_NAME_SPACE
#include<stdio.h>
#include<caml/mlvalues.h>
#include<caml/alloc.h>
#include<caml/memory.h>
#include<caml/fail.h>
#include<caml/callback.h>
#include<caml/custom.h>
#include<caml/intext.h>
#include<caml/threads.h>

CAMLprim value stub_sum(value a, value b)
{
	//printf("step1");
	CAMLparam2 (a, b);
	printf("%d %d", Int_val(a), Int_val(b));

	CAMLlocal1 (result);
	result = sum(Int_val(a), Int_val(b));
	//result = add(a,b);
	//result = a;
 	CAMLreturn(Val_int(result));
}
