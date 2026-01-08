#include <iostream>
#include "clsMyStack.h"
using namespace std;

int main() {

    clsMyStack<int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);

    cout << "Stack:" << endl;
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size() << endl;
    cout << "\nStack Top: " << MyStack.Top() << endl;
    cout << "\nStack Bottom: " << MyStack.Bottom() << endl;

    MyStack.pop();
    cout << "\nStack after .pop():" << endl;
    MyStack.Print();

    cout << "\nItem(2) by index: " << MyStack.GetItem(2) << endl;

    MyStack.Reverse();
    cout << "\nStack after reverse:" << endl;
    MyStack.Print();

    MyStack.UpdateItem(2, 600);
    cout << "\nStack after updating item(2) to 600:" << endl;
    MyStack.Print();
    
    MyStack.InsertAfter(2, 800);
    cout << "\nStack after inserting 800 after item(2):" << endl;
    MyStack.Print();

    MyStack.InsertAtFront(1000);
    cout << "\nStack after inserting 1000 at front:" << endl;
    MyStack.Print();

    MyStack.InsertAtBack(2000);
    cout << "\nStack after inserting 2000 at back:" << endl;
    MyStack.Print();

    MyStack.Clear();
    cout << "\nStack after .Clear():" << endl;
    MyStack.Print();

    /*
      //OUTPUT

        Stack:
        50 40 30 20 10
        
        Stack Size: 5
        
        Stack Top: 50
        
        Stack Bottom: 10
        
        Stack after .pop():
        40 30 20 10
        
        Item(2) by index: 20
        
        Stack after reverse:
        10 20 30 40
        
        Stack after updating item(2) to 600:
        10 20 600 40
        
        Stack after inserting 800 after item(2):
        10 20 600 800 40
        
        Stack after inserting 1000 at front:
        1000 10 20 600 800 40
        
        Stack after inserting 2000 at back:
        1000 10 20 600 800 40 2000
        
        Stack after .Clear():
        

    */


    system("pause>0");
    return 0;
}
