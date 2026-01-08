#include <iostream>
#include "clsMyString.h"
using namespace std;

int main() {
    
    clsMyString S1;

    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Sami 1";
    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Sami 2";
    cout << "S1 = " << S1.Value << endl;

    S1.Value = "Sami 3";
    cout << "S1 = " << S1.Value << endl;

    cout << "\n\nUndo: ";
    cout << "\n__________\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "S1 after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "S1 after undo = " << S1.Value << "\n";

    cout << "\n\nRedo: ";
    cout << "\n__________\n";

    S1.Redo();
    cout << "\nS1 after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "S1 after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "S1 after Redo = " << S1.Value << "\n";

    /*
      //OUTPUT

        S1 =
        S1 = Sami 1
        S1 = Sami 2
        S1 = Sami 3
        
        
        Undo:
        __________
        
        S1 after undo = Sami 2
        S1 after undo = Sami 1
        S1 after undo =
        
        
        Redo:
        __________
        
        S1 after Redo = Sami 1
        S1 after Redo = Sami 2
        S1 after Redo = Sami 3

    */


    system("pause>0");
    return 0;
}
