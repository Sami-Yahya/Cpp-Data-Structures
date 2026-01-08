#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main() {
    
    clsDblLinkedList<int> MyDblLinkedList;

    if (MyDblLinkedList.IsEmpty())
        cout << "Yes, List is empty.\n";
    else
        cout << "No, List is not empty.\n";

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N1 = MyDblLinkedList.Find(2);
    if (N1 != NULL)
        cout << "\nNode with value " << N1->value << " is found :-)\n";
    else
        cout << "\nNode is not found :-(\n";

    //insert after by node
    MyDblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter insterting 500 after 2:\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAtEnd(700);
    cout << "\nAfter insterting 700 at end:\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.Find(4);
    MyDblLinkedList.DeleteNode(N2);
    cout << "\nAfter deleting 4:\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteFirstNode();
    cout << "\nAfter deleting first node:\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteLastNode();
    cout << "\nAfter deleting last node:\n";
    MyDblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MyDblLinkedList.Size() << endl;

    if (MyDblLinkedList.IsEmpty())
        cout << "\nYes, List is empty.\n";
    else
        cout << "\nNo, List is not empty.\n";

    MyDblLinkedList.Reverse();
    cout << "\nLinked List Content after reverse:\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N3;
    N3 = MyDblLinkedList.GetNode(2);
    cout << "\nNode Value is: " << N3->value << endl;

    int NodeItem = MyDblLinkedList.GetItem(2);
    cout << "\nNode Item Value is: " << NodeItem << endl;

    MyDblLinkedList.UpdateItem(2, 900);
    cout << "\nLinked List Content after update:\n";
    MyDblLinkedList.PrintList();

    //insert after by index
    MyDblLinkedList.InsertAfter(1, 200);
    cout << "\nLinked List Content after insert:\n";
    MyDblLinkedList.PrintList();

    cout << "\nExecuting .Clear()\n";
    MyDblLinkedList.Clear();
    cout << "\nNumber of items in the linked list = " << MyDblLinkedList.Size() << endl;

    /*
     // OUTPUT

        Yes, List is empty.

        Linked List Content:
        1 2 3 4 5
        
        Node with value 2 is found :-)
        
        After insterting 500 after 2:
        1 2 500 3 4 5
        
        After insterting 700 at end:
        1 2 500 3 4 5 700
        
        After deleting 4:
        1 2 500 3 5 700
        
        After deleting first node:
        2 500 3 5 700
        
        After deleting last node:
        2 500 3 5
        
        Number of items in the linked list = 4
        
        No, List is not empty.
        
        Linked List Content after reverse:
        5 3 500 2
        
        Node Value is: 500
        
        Node Item Value is: 500
        
        Linked List Content after update:
        5 3 900 2
        
        Linked List Content after insert:
        5 3 200 900 2
        
        Executing .Clear()
        
        Number of items in the linked list = 0

    */

    system("pause>0");
    return 0;
}
