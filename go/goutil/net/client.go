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
		n1,_:=conn.Read(buf)
		fmt.Println(string(buf[:n1]))

}