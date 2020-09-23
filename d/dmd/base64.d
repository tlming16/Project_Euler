import std.base64;
import std.stdio;

void main(){
  ubyte [] data= [0x14,0xfb,0x9c,0x03,0xd9,0x7e];

  const (char) [] encoded =Base64.encode(data);
  writeln(encoded);
  ubyte [] decoded = Base64.decode("FPUCA91+");
  writeln(decoded);
}