(* external print_hello: unit -> unit = "caml_print_hello"

let () =
  print_hello ()

 *)
external osum : int->int->int = "sum";;
external ofsum : float->float->float = "fsum";;
external ostr : char->char="str";;

Printf.printf "%d\n" (osum 10 4);
Printf.printf "%c\n" (ostr 't');