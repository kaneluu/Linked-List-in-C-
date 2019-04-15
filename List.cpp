#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List(){
  head = NULL;
  curr = NULL;
  temp = NULL;
}

void List::AddNode(int addData) {
  nodePtr n = new node;
  n->next = NULL; //attach n to the end of the list
  n->data = addData;
  
  // check if there is a list already
  if (head != NULL){
    curr = head; //making curr point to the head
    while (curr->next != NULL) // check if we are at the end of the list
    {
      curr = curr->next; // advances curr pointer to the end of the list
    }
    curr->next = n; // connects curr to the end of the list
  }
  else // when we do not have at least 1 element in the list
  {
    head = n;
  }
}

void List::DeleteNode(int delData) {
  nodePtr delPtr = NULL;
  temp = head;
  curr = head;
  
  // check while the curr pointer is not at the end of the list
  // and its data is not the one we want to delete
  
  while (curr != NULL && curr->data != delData) {
    temp = curr;
    curr = curr->next;
   }
   
   if (curr == NULL) // if we cannot find the one we are looking for despite of traveling the whole list
   {
    cout << delData << " was not in the list \n";
    delete delPtr; // since we do not want to get an error indicating that there is an unused variable
   }
   
   else
   {
    delPtr = curr; // delPtr is pointing to the one we want to delete
    // These two lines patche the hole in the list
    curr = curr->next;
    temp->next = curr;
    
    if (delPtr == head)
    {
      head = head->next;
      temp = NULL;
    }
    delete delPtr;
    cout << "The value " << delData << " was deleted\n";
   }
 }
 
 void List::PrintList() {
  curr = head;
  while (curr != NULL)
  {
    cout << curr-data;
    curr = curr->next;
  }
}
