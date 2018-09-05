#include "Stack.h"

Stack::Stack(unsigned int p_iCapacity)
{
	m_iCapacity = p_iCapacity;

	m_pNodes = new Node*[m_iCapacity];
}

Stack::~Stack()
{
	delete m_pNodes;
	m_pNodes = nullptr;
}

void Stack::Push(int p_iData)
{
	if ( m_iTopIndex >= m_iCapacity )
	{
		return;
	}

	m_pNodes[m_iTopIndex++] = new Node(p_iData);
}

int Stack::Pop()
{
	m_iTopIndex--;

	int iTopData = m_pNodes[m_iTopIndex]->GetData();

	delete m_pNodes[m_iTopIndex];

	m_pNodes[m_iTopIndex] = nullptr;

	return iTopData;
}

int Stack::Top()
{
	return m_pNodes[m_iTopIndex - 1]->GetData();
}

unsigned int Stack::GetCapacity()
{
	return m_iCapacity;
}

unsigned int Stack::GetTopIndex()
{
	return m_iTopIndex;
}