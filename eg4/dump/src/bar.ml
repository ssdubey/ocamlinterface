open Ctypes
open PosixTypes
open Foreign

let initfun = foreign "oinit" (int @-> returning int);;
let addfivefun = foreign "oadd_five" (int @-> returning int);;

(* let ocamlIsAlpha = foreign "isalpha" (int @-> returning int) *)

let () = begin
  let a = addfivefun 5 in 
  Printf.printf "%d" a
  (* let a = ocamlIsAlpha 5 in
    Printf.printf "%d" a *)
 
end






(* external initfun : unit -> unit = "oinit";;
external addfivefun : int -> int = "oadd_five";;

initfun();
Printf.printf "%d\n" (addfivefun 10); *)