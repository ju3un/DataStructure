#include "List.h"

List::List(int p_iData)
{
	m_pHeadNode = new LinkedNode(p_iData);
}

List::~List()
{
	// List size Ȯ���Ͽ� �� ��� �޸� ����
	unsigned int iListSize = GetListSize();

	for ( int i = iListSize - 1; i >= 0; i-- )
	{
		Remove(i);
	}
}

LinkedNode* List::GetHeadNode()
{
	return m_pHeadNode;
}

void List::Add(int p_iData)
{
	if ( m_pHeadNode != nullptr )
	{
		LinkedNode* pNewNode = new LinkedNode(p_iData);

		// List ������ ��忡 �߰�
		findNode()->SetNextNode(pNewNode);
	}
	else // Head�� ���� ��
	{
		m_pHeadNode = new LinkedNode(p_iData);
	}
}

void List::Add(int p_iIndex, int p_iData)
{
	if ( m_pHeadNode != nullptr )
	{
		LinkedNode* pNewNode = new LinkedNode(p_iData);

		if ( p_iIndex == 0 )
		{
			LinkedNode* pTempNode = m_pHeadNode;
			m_pHeadNode = pNewNode;
			m_pHeadNode->SetNextNode(pTempNode);
		}
		else
		{
			LinkedNode* pPrevNode = findNode(p_iIndex - 1);
			LinkedNode* pNextNode = findNode(p_iIndex);

			pPrevNode->SetNextNode(pNewNode);

			if ( pNextNode != nullptr )
			{
				pNewNode->SetNextNode(pNextNode);
			}
		}
	}
	else
	{
		if ( p_iIndex == 0 )
		{
			m_pHeadNode = new LinkedNode(p_iData);
		}
	}
}

void List::Remove(int p_iIndex)
{
	if ( m_pHeadNode != nullptr )
	{
		if ( p_iIndex == 0 )
		{
			LinkedNode* pRemoveNode = m_pHeadNode;
			LinkedNode* pTempNode = pRemoveNode->GetNextNode();
			m_pHeadNode = pTempNode;

			pRemoveNode->RemoveNextNode();
			delete pRemoveNode;
			pRemoveNode = nullptr;
		}

		else
		{
			LinkedNode* pRemoveNode = findNode(p_iIndex);
			if ( pRemoveNode != nullptr )
			{
				LinkedNode* pPrevNode = findNode(p_iIndex - 1);
				LinkedNode* pNextNode = findNode(p_iIndex + 1);

				pPrevNode->RemoveNextNode();

				if ( pNextNode != nullptr )
				{
					pPrevNode->SetNextNode(pNextNode);
				}
				delete pRemoveNode;
				pRemoveNode = nullptr;
			}
		}
	}
}

unsigned int List::GetListSize()
{
	if ( m_pHeadNode != nullptr )
	{
		unsigned int iListSize = 1;

		LinkedNode* pNowNode = m_pHeadNode;
		while ( pNowNode->GetNextNode() != nullptr )
		{
			pNowNode = pNowNode->GetNextNode();
			iListSize++;
		}
		
		return iListSize;
	}
	return 0;
}

/// TEST_CODE : Final�̳� Ư�� index ����� �ּҸ� ã�� ���� (�⺻ -2 : Final / Ư�� ��� : index)
LinkedNode* List::findNode(int p_iIndex)
{
	if ( m_pHeadNode != nullptr )
	{
		LinkedNode* pFindNode = m_pHeadNode;
		
		if ( p_iIndex == -2 )
		{
			while ( pFindNode->GetNextNode() != nullptr )
			{
				pFindNode = pFindNode->GetNextNode();
			}
		}
		else
		{
			int iNowIndex = 0;
			while ( iNowIndex < p_iIndex )
			{
				if ( pFindNode->GetNextNode() != nullptr )
				{
					pFindNode = pFindNode->GetNextNode();
					iNowIndex++;
				}
				else
				{
					pFindNode = nullptr;
					break;
				}
			}
		}
		return pFindNode;
	}
	return nullptr;
}
