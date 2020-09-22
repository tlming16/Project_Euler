import std.stdio;
import std.string;
import std.conv;
import std.random;
import std.range;
import std.algorithm; 
import std.format:format;
import std.concurrency;
alias FiberRange =std.concurrency.Generator;
struct Node{
  int element;
  Node * left;
  Node * right;

  void insert(int element) {
    if ( element<this.element) {
      insertOrset(left,element);
    }else if (element>this.element){
      insertOrset(right,element);
    }else {
      throw new Exception(format("%s exists",element));
    }
  }
  auto opSlice() const {
    return byNode(&this);
  }
  void print() const {
    if (left) {
      left.print();
      write(' ');
    }
    write(element);
    if (right){
      write(' ');
      right.print();
    }
  }
}
void nextNode( const(Node) * node){
  if (!node){
    return ;
  }
  nextNode(node.left);
  yield( node);
  nextNode(node.right);
}
auto byNode(const (Node) * node){
  return new FiberRange!(const(Node)*)(()=>nextNode(node));
}
void insertOrset(ref Node * node,int e){
  if (!node){
    node =new Node(e);
  }else {
    node.insert(e);
  }
}

struct Tree{
  Node * root;
  void insert(int e){
    insertOrset(root,e);
  }
  void print() const {
    if (root){
      root.print();
    }
  }
  auto opSlice() const {
    return byNode(this).map!(n=>n.element);
  }
}
auto byNode(const(Tree) tree){
  if (tree.root){
    return byNode(tree.root);
  }else {
    alias RangeType = typeof(return);
    return new RangeType((){}) ;// empty range;
  }
}
Tree makeRandomTree(size_t n){
  auto num =iota((n*10).to!int)
  .randomSample(n,Random(unpredictableSeed)).array;
  randomShuffle(num);
  auto tree = Tree();
  num.each!(e=>tree.insert(e));
  return tree;
}

void main(){
  auto tree = makeRandomTree(10);
  //tree.print();
  writeln(tree[]);
}