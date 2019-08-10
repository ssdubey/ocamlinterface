(* open Slib;; *)

external osum : int->int->int = "stub_sum";;
(* external ofsum : float->float->float = "fsum";; *)
(* external ostr : char->char="str";; *)

Printf.printf "%d\n" (osum 8 6)
(* Printf.printf "%d\n" (osum 8 5); *)
(* Printf.printf "%c\n" (ostr 't'); *)
(* Printf.printf "%f\n" (ofsum 4.0 5.0); *)
