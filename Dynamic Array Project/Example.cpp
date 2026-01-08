#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

int main() {
    
    clsDynamicArray<int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "Is Empty? " << MyDynamicArray.IsEmpty() << endl;
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items:\n";
    MyDynamicArray.PrintArray();
    
    cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << endl;

    MyDynamicArray.InsertAt(2, 500);
    cout << "\nArray Items after insert 500:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.InsertAtBeginning(500);
    cout << "\nArray Items after insert 500 at beginning:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.InsertBefore(2, 400);
    cout << "\nArray Items after insert 400 before index 2:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.InsertAfter(2, 600);
    cout << "\nArray Items after insert 600 after index 2:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.InsertAtEnd(700);
    cout << "\nArray Items after insert 700 at end:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.Reverse();
    cout << "\nArray Items after reverse:\n";
    MyDynamicArray.PrintArray();

    MyDynamicArray.DeleteItemAt(2);
    cout << "\nArray Items after deleting item(2):\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.DeleteFirstItem();
    cout << "\nArray Items after deleting first item:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.DeleteLastItem();
    cout << "\nArray Items after deleting last item:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    MyDynamicArray.DeleteItem(30);
    cout << "\nArray Items after deleting 30:\n";
    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintArray();

    int Index = MyDynamicArray.Find(30);
    if (Index == -1)
        cout << "\nIndex was not found!" << endl;
    else
        cout << "\n30 is found at index: " << Index << endl;

    MyDynamicArray.Resize(3);
    cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
    cout << "Array items after resize to 3 :\n";
    MyDynamicArray.PrintArray();
    
    MyDynamicArray.Resize(10);
    cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
    cout << "Array items after resize to 10 :\n";
    MyDynamicArray.PrintArray();

    MyDynamicArray.Clear();
    cout << "\nArray Items after clear:\n";
    MyDynamicArray.PrintArray();

    /*
      //OUTPUT

        Is Empty? 0
        Array Size: 5
        
        Array Items:
        10 20 30 40 50
        
        Item(2): 30
        
        Array Items after insert 500:
        Array Size: 6
        10 20 500 30 40 50
        
        Array Items after insert 500 at beginning:
        Array Size: 7
        500 10 20 500 30 40 50
        
        Array Items after insert 400 before index 2:
        Array Size: 8
        500 400 10 20 500 30 40 50
        
        Array Items after insert 600 after index 2:
        Array Size: 9
        500 400 10 600 20 500 30 40 50
        
        Array Items after insert 700 at end:
        Array Size: 10
        500 400 10 600 20 500 30 40 50 700
        
        Array Items after reverse:
        700 50 40 30 500 20 600 10 400 500
        
        Array Items after deleting item(2):
        Array Size: 9
        700 50 30 500 20 600 10 400 500
        
        Array Items after deleting first item:
        Array Size: 8
        50 30 500 20 600 10 400 500
        
        Array Items after deleting last item:
        Array Size: 7
        50 30 500 20 600 10 400
        
        Array Items after deleting 30:
        Array Size: 6
        50 500 20 600 10 400
        
        Index was not found!
        
        Array Size: 3
        Array items after resize to 3 :
        50 500 20
        
        Array Size: 10
        Array items after resize to 10 :
        50 500 20 -842150451 -842150451 -842150451 -842150451 -842150451 -842150451 -842150451
        
        Array Items after clear:

    */

    system("pause>0");
    return 0;
}
