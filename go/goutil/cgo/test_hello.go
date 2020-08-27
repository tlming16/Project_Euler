package main 

/*
#cgo LDFLAGS: -L. -lhello 
#include<stdio.h>
#include<stdlib.h>
#include"hello.h"
*/
import "C"
import (
	"unsafe"
)

func main(){
	s:=" hello\n";
	cs:=C.CString(s);
	C.hello(cs);
	defer C.free(unsafe.Pointer(cs));


}