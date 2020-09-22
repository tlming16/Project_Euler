import std.stdio;
import std.format;
struct Point {
  int x;
  int y;
  void toString(void delegate(const(char)[]) sink) const {
      sink.formattedWrite!"(%s,%s)"(x, y);
}
}
struct Color {
  ubyte r;
  ubyte g;
  ubyte b;
  void toString(void delegate(const(char)[]) sink) const {
    sink.formattedWrite!"RGB:%s,%s,%s"(r, g, b);
}
}
struct ColoredPoint {
  Color color;
  Point point;
  void toString(void delegate(const(char)[]) sink) const {
    sink.formattedWrite!"{%s;%s}"(color, point);
}
}
struct Polygon {
  ColoredPoint[] points;
  void toString(void delegate(const(char)[]) sink) const {
    sink.formattedWrite!"%s"(points);
}
}
void main() {
  auto polygon = Polygon(
      [ ColoredPoint(Color(10, 10, 10), Point(1, 1)),
        ColoredPoint(Color(20, 20, 20), Point(2, 2)),
        ColoredPoint(Color(30, 30, 30), Point(3, 3)) ]);
  writeln(polygon);
}