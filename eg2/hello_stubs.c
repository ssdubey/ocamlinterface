/*#include <stdio.h>
#include <caml/mlvalues.h>

CAMLprim value
caml_print_hello(value unit)
{
    printf("Hello\n");
    return Val_unit;
}*/


#include<stdio.h>
#include<caml/mlvalues.h>


CAMLprim value osum(value a, value b)
{
	//printf("%c %d", a, b);
	CAMLparam2 (a, b);
	//printf("%c %d", a, b);
	CAMLlocal1 (result);
	//result = add(a,b);
	result = a;
 	//CAMLreturn(result);
}
