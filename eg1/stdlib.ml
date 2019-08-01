#include<caml/mlvalues.h>
#include<caml/alloc.h>
#include<caml/memory.h>
#include<caml/fail.h>
#include<caml/callback.h>
#include<caml/custom.h>
#include<caml/intext.h>
#include<caml/threads.h>

CAMLprim value ocamladd(value a, value b)
{
  return add(a,b)
}
