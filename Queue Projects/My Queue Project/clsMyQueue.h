#pragma once

#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsDblLinkedList<T> _QueueLinkedList;

public:

	void push(T Value)
	{
		_QueueLinkedList.InsertAtEnd(Value);
	}

	void pop()
	{
		_QueueLinkedList.DeleteFirstNode();
	}

	int Size()
	{
		return _QueueLinkedList.Size();
	}

	bool IsEmpty()
	{
		return _QueueLinkedList.IsEmpty();
	}

	T front()
	{
		return _QueueLinkedList.GetItem(0);
	}

	T back()
	{
		return _QueueLinkedList.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return _QueueLinkedList.GetItem(Index);
	}

	void Reverse()
	{
		_QueueLinkedList.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_QueueLinkedList.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T Value)
	{
		_QueueLinkedList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_QueueLinkedList.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		_QueueLinkedList.InsertAtEnd(Value);
	}

	void Clear()
	{
		_QueueLinkedList.Clear();
	}

	void Print()
	{
		_QueueLinkedList.PrintList();
	}

};
