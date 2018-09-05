#pragma once

#include "Node.h"

class Stack
{
public:
	Stack() = delete;
	Stack(unsigned int p_iCapacity);
	~Stack();

	void Push(int p_iData);
	int Pop();
	int Top();

	unsigned int GetCapacity();
	unsigned int GetTopIndex();

private:
	Node** m_pNodes = nullptr;
	unsigned int m_iCapacity;
	unsigned int m_iTopIndex = 0;
};