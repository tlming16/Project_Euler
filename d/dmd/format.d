import std.stdio;
import std.string;
import std.format:format;// 
struct Point{
  int x;
  int y;
  string toString() const {
    return format("(%s,%s)",x,y);
  }
}

struct Color{
  ubyte r;
  ubyte g;
  ubyte b;
  string toString() const {
    return format("(RGB:%d,%d,%d)",r,g,b);
  }
}

struct ColorPoint{
  Color c;
  Point p;
  string toString() const {
    return format("{%s,%s}",c,p);
  }
}

struct Polygon{
  ColorPoint [] points;
  string toString() const {
    return format("%s",points);
  }
}

void main(){
  auto polygon =Polygon(
    [ ColorPoint(Color(10,10,10),Point(0,0)),
     ColorPoint(Color(23,45,13),Point(2,3)),
     ColorPoint(Color(34,45,12),Point(3,4))
    ]
    ); 
  writeln(polygon);
}