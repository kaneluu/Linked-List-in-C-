#include <cstdlib>
#include "List.h"

using namespace std;

int main()
{
    List Kane;
    
    Kane.AddNode(3);
    Kane.AddNode(5);
    Kane.AddNode(7);
    Kane.AddNode(9);
    Kane.PrintList();
    
    Kane.DeleteNode(5);
    Kane.PrintList();
    
    Kane.DeleteNode(1);
    Kane.PrintList();
}
