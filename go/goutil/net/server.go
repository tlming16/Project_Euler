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