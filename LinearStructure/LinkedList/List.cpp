#include "List.h"

List::List(int p_iData)
{
	m_pHeadNode = new LinkedNode();

	m_pHeadNode->SetData(p_iData);
}


List::~List()
{
	// List size Ȯ���Ͽ� �� ��� �޸� ����
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

		// List size�� Ȯ���ϰ� ������ ��忡 �߰�


	}
	else // Head�� ���� ��
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
