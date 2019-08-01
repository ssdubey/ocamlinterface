#include "lib.h"
#include<stdio.h>
#include<caml/mlvalues.h>
#include<caml/alloc.h>
#include<caml/memory.h>
#include<caml/fail.h>
#include<caml/callback.h>
#include<caml/custom.h>
#include<caml/intext.h>
#include<caml/threads.h>

CAMLprim value ocamladds(value a, value b)
{
	printf("%c %d", a, b);
	CAMLparam2 (a, b);
	printf("%c %d", a, b);
	CAMLlocal1 (result);
	//result = add(a,b);
	result = a;
 	//CAMLreturn(result);
}
