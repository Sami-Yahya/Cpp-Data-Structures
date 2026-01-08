#pragma once

#include <iostream>
#include <string>
using namespace std;

template <class T>
class clsDblLinkedList
{
protected:
    
    int _Size = 0;

public:

	class Node
	{
    public:
		T value;
		Node* prev;
		Node* next;
	};

	Node* head = NULL;

    void InsertAtBeginning(T Value)
    {
        Node* newNode = new Node();
        newNode->value = Value;
        newNode->prev = NULL;
        newNode->next = head;

        if (head != NULL)
        {
            head->prev = newNode;
        }

        head = newNode;
        _Size++;
    }

    void InsertAfter(Node* current, T Value)
    {
        if (current == NULL)
            return;

        Node* newNode = new Node();
        newNode->value = Value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL)
        {
            current->next->prev = newNode;
        }
        current->next = newNode;
        _Size++;
    }

    void InsertAtEnd(T Value)
    {
        Node* newNode = new Node();
        newNode->value = Value;
        newNode->next = NULL;

        if (head == NULL)
        {
            newNode->prev = NULL;
            head = newNode;
        }
        else
        {
            Node* current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
        _Size++;
    }

    Node* Find(T Value)
    {
        Node* current = head;

        while (current != NULL)
        {
            if (current->value == Value)
                return current;

            current = current->next;
        }

        return NULL;
    }

    void DeleteNode(Node*& NodeToDelete)
    {
        if (head == NULL || NodeToDelete == NULL)
            return;

        if (head == NodeToDelete)
        {
            head = NodeToDelete->next;
        }

        if (NodeToDelete->next != NULL)
        {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }

        if (NodeToDelete->prev != NULL)
        {
            NodeToDelete->prev->next = NodeToDelete->next;
        }

        delete NodeToDelete;
        _Size--;
    }

    void DeleteFirstNode()
    {
        if (head == NULL)
            return;

        Node* temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }

        delete temp;
        _Size--;
    }

    void DeleteLastNode()
    {
        if (head == NULL)
            return;

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;

        //we find the node before last node
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;
        _Size--;
    }

    void PrintNodeDetails(Node* current)
    {
        if (current->prev != NULL)
            cout << current->prev->value;
        else
            cout << "NULL";

        cout << " <--> " << current->value << " <--> ";

        if (current->next != NULL)
            cout << current->next->value << "\n";
        else
            cout << "NULL";
    }

    void PrintListDetails()
    {
        cout << "\n";

        Node* current = head;
        while (current != NULL)
        {
            PrintNodeDetails(current);
            current = current->next;
        }
        cout << "\n";
    }

    void PrintLinkedList()
    {
        Node* current = head;

        cout << "NULL <--> ";
        while (current != NULL) {
            cout << current->value << " <--> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }

    void PrintList()
    {
        Node* current = head;

        while (current != NULL)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    short Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);

        /*if (head == NULL)
            return true;
        else
            return false;*/
    }

    void Clear()
    {
        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    }

    void Reverse()
    {
        if (IsEmpty() || head->next == NULL)
            return;

        Node* current = head;
        Node* temp = nullptr;

        while (current != nullptr)
        {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            current = current->prev;
        }

        if (temp != nullptr)
        {
            head = temp->prev;
        }
    }

    Node* GetNode(int Index)
    {
        int Counter = 0;

        if (Index > _Size - 1 || Index < 0)
            return NULL;

        Node* current = head;
        while (current != NULL && (current->next != NULL))
        {
            if (Counter == Index)
                break;

            current = current->next;
            Counter++;
        }

        return current;
    }

    T GetItem(int Index)
    {
        Node* ItemNode = GetNode(Index);

        if (ItemNode != NULL)
            return ItemNode->value;
        else
            //better than return NULL; because it converts it to 0, which may considered as the value of the item
            throw std::out_of_range("Index not found!");
            
    }

    bool UpdateItem(int Index, T NewValue)
    {
        Node* ItemNode = GetNode(Index);

        if (ItemNode != NULL)
        {
            ItemNode->value = NewValue;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool InsertAfter(int Index, T Value)
    {
        Node* ItemNode = GetNode(Index);

        if (ItemNode != NULL)
        {
            InsertAfter(ItemNode, Value);
            return true;
        }
        else
            return false;
    }

};
