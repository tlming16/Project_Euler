# go net

- server.go 

- client.go 

  ```go
  // server.go
  package main 
  import (
  	"fmt"
  	"net"
  )
  
  func main(){
  	// 主机 监听端口
  	listen,err := net.Listen("tcp","127.0.0.1:8000");
  	if err!=nil {
  		fmt.Println("err =",err);
  		return 
  	}
  	defer listen.Close()
  	cnt:=0
  	for {
  		// 建立连接
  		conn,err:=listen.Accept()
  		if err!=nil{
  			fmt.Println("err = ",err)
  			return 
  		}
  		// 发送消息
  		conn.Write([]byte("welcome to go net world!\n")) 
  		buf:=make([]byte,1024) 
  		// 接收消息
  		n,er:=conn.Read(buf) 
  		if er!=nil{
  			fmt.Println("err = ",er)
  			return 
  		}
  		cnt++;
  		fmt.Printf("this is the %d th message:%s\n",cnt,string(buf[:n]));
  		var s string
  		conn.Read(buf);
  		fmt.Printf(string(buf))
  		fmt.Scanf("%s",&s);
  		conn.Write([]byte(s));
  		// 关闭连接
  		defer conn.Close()
  	}
  }
  ```

  

```go
// client.go 
package main 
import (
	"fmt"
	"net"
)

func main(){
	conn,err:=net.Dial("tcp","127.0.0.1:8000")
	if err!=nil{
		fmt.Println("err = ",err);
	}
	defer conn.Close()
		buf:=make([]byte,1024)
		n,e:=conn.Read(buf)
		if e!=nil{
			fmt.Println("read err : ",e);
		}else {
			fmt.Println(string(buf[:n]))
		}
		conn.Write([]byte("I AM CLIENT!"));
		conn.Write([]byte("what do you want to say?"))
		conn.Read(buf)
		fmt.Println(string(buf))

}
```

