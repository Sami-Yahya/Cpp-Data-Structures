#pragma once

#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

template <class T>
class clsMyQueueArr
{
protected:
	clsDynamicArray<T> _QueueDynamicArray;

public:

	void push(T Value)
	{
		_QueueDynamicArray.InsertAtEnd(Value);
	}

	void pop()
	{
		_QueueDynamicArray.DeleteFirstItem();
	}

	int Size()
	{
		return _QueueDynamicArray.Size();
	}

	bool IsEmpty()
	{
		return _QueueDynamicArray.IsEmpty();
	}

	T front()
	{
		return _QueueDynamicArray.GetItem(0);
	}

	T back()
	{
		return _QueueDynamicArray.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return _QueueDynamicArray.GetItem(Index);
	}

	void Reverse()
	{
		_QueueDynamicArray.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_QueueDynamicArray.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T Value)
	{
		_QueueDynamicArray.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_QueueDynamicArray.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		_QueueDynamicArray.InsertAtEnd(Value);
	}

	void Clear()
	{
		_QueueDynamicArray.Clear();
	}

	void Print()
	{
		_QueueDynamicArray.PrintArray();
	}

};
