# Linked-List-in-C++
How to create a linked list in C++
using three files: a header file, a implementation file, and a main file

First we need to understand the concept of Linked List. A linked list contains of several nodes that have the same structure.
The structure of a node include an integer variable (it can be different type of variable), and a node type pointer.

NODE
==========
| int    |
| pointer|---->
==========
OR

struct node {
  int data;
  node* next;
}

As we can see, the int variable is the node's data and the pointer always points to another node.
The logic here is to create three different nodes to build our linked list.

For example we declare:

node* n;
node* t;
node* h;

So right now we have three pointers of node data, let's build our list.

n = new node; // we have "n" point to newly created node
n->data = 1; // assign first data
t = n; // "t" will follow "n" one step beind
h = n; // "h" will stay as the head of the list

n = new node;
n->data = 2;
// now we connect these two nodes by using "t"
// at this point, the pointer part in "t" has not pointer to the new node that we have just created yet
// so we access the next part of "t" and let it point to "n"

t->next = n; // this line is the key to connect the first node and second node

// but "t" is still at the first node so we need to move it
t = t->next; // make it point to the one where "n" is locating at

// we continue to build our list and let's set out limit at four
n = new node;
n->data = 3;
t->next = n;
n = new node;

// since we want "t" to be one step behind "n"
// so at this point we we will assign "n" to the newly created node first
// and then we make "t" points to t->next

t = t->next; // right now "t" is at the third node
n->data = 4;
t->next = n; // connects the last nodes

// to finish our list simply write
n->next = NULL;

