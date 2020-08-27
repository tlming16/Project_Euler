# cgo

- 编译c函数为动态链接库  

```
# include <stdio.h> 
void hello( char *s);
```

```c
# include "hello.h" 
void hello(char *s){
  printf("hello cgo! \n %s",s);
}
```

- 编译成 动态链接库

  ```
  gcc -shared -fPIC -o libhello.dll hello.c
  ```


- 编写 go main函数

  ```go
  // test_hello.go 
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
  ```

- 运行  

  ```
  go run test_hello.go 
  ```

- https://golang.org/cmd/cgo/#hdr-C_references_to_Go



