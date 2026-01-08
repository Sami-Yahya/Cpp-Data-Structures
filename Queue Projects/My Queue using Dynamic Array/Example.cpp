#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;

int main() {
    
    clsMyQueueArr<int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "Queue:" << endl;
    MyQueue.Print();

    cout << "\nQueue Size: " << MyQueue.Size() << endl;
    cout << "\nQueue Front: " << MyQueue.front() << endl;
    cout << "\nQueue Back: " << MyQueue.back() << endl;

    MyQueue.pop();
    cout << "\nQueue after .pop():" << endl;
    MyQueue.Print();

    cout << "\nItem(2) by index: " << MyQueue.GetItem(2) << endl;

    MyQueue.Reverse();
    cout << "\nQueue after reverse:" << endl;
    MyQueue.Print();

    MyQueue.UpdateItem(2, 600);
    cout << "\nQueue after updating item(2) to 600:" << endl;
    MyQueue.Print();

    MyQueue.InsertAfter(2, 800);
    cout << "\nQueue after inserting 800 after item(2):" << endl;
    MyQueue.Print();

    MyQueue.InsertAtFront(1000);
    cout << "\nQueue after inserting 1000 at front:" << endl;
    MyQueue.Print();

    MyQueue.InsertAtBack(2000);
    cout << "\nQueue after inserting 2000 at back:" << endl;
    MyQueue.Print();

    MyQueue.Clear();
    cout << "\nQueue after .Clear():" << endl;
    MyQueue.Print();

    /*
      //OUTPUT

        Queue:
        10 20 30 40 50
        
        Queue Size: 5
        
        Queue Front: 10
        
        Queue Back: 50
        
        Queue after .pop():
        20 30 40 50
        
        Item(2) by index: 40
        
        Queue after reverse:
        50 40 30 20
        
        Queue after updating item(2) to 600:
        50 40 600 20
        
        Queue after inserting 800 after item(2):
        50 40 600 800 20
        
        Queue after inserting 1000 at front:
        1000 50 40 600 800 20
        
        Queue after inserting 2000 at back:
        1000 50 40 600 800 20 2000
        
        Queue after .Clear():
        
    */


    system("pause>0");
    return 0;
}
