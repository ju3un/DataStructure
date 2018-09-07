#include "List.h"

List::List(int p_iData)
{
	m_pHeadNode = new LinkedNode();

	m_pHeadNode->SetData(p_iData);
}


List::~List()
{
	// List size 확인하여 각 노드 메모리 해제
}

LinkedNode* List::GetHeadNode()
{
	return m_pHeadNode;
}

void List::Add(int p_iData)
{
	if ( m_pHeadNode != nullptr )
	{
		LinkedNode* pNewNode = new LinkedNode();

		// List size를 확인하고 마지막 노드에 추가


	}
	else // Head가 없을 때
	{
		m_pHeadNode = new LinkedNode();

		m_pHeadNode->SetData(p_iData);
	}
}

void List::Add(int p_iIndex, int p_iData)
{

}

unsigned int List::GetListSize()
{
	return m_iListSize;
}
