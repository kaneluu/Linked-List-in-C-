#ifndef LIST_H
#define LIST_H

class List{
  private:
    typedef struct node{
      int data;
      node* next;
      }* nodePtr; //it will define NodePtr as struct node*
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
   public:
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
};

#endif