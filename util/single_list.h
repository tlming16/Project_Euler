#ifndef SINGLE_LIST_H
#define SINGLE_LIST_H
namespace util{
struct node{
  int value;
  node * next;
  node(int v=0):value(v),next(nullptr){
  }
  ~node()=default;
};

node * delete_node(node * head,node* to_delete){
  if(to_delete==nullptr) return head;
  node * head_before;
  node * cur=head;
  while( cur&& cur->value!=to_delete->value){
    head_before=cur;
    cur=cur->next;
  }
  if (cur==nullptr) { // not found
    return head;
  }
  else if (head_before==nullptr){ // first element
    node * res =head->next;
    delete head;
    return res;
  }
  else { // in the middle 
    head_before->next=cur->next;
    delete cur;
  }
  return head;
}

}// end namespace util;
#endif 