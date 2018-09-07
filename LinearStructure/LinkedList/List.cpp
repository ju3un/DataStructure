#include "List.h"

List::List(int p_iData)
{
	m_pHeadNode = new LinkedNode(p_iData);
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
		LinkedNode* pNewNode = new LinkedNode(p_iData);

		/// TEST_CODE : FindNode()�Լ� �ϼ� �� �ٽ� ���� ����
		// List ������ ��忡 �߰�
		LinkedNode* pFinalNode = m_pHeadNode;
		while ( pFinalNode->GetNextNode() != nullptr )
		{
			pFinalNode = pFinalNode->GetNextNode();
		}

		pFinalNode->SetNextNode(pNewNode);
		///
	}
	else // Head�� ���� ��
	{
		m_pHeadNode = new LinkedNode(p_iData);
	}
}

void List::Add(int p_iIndex, int p_iData)
{
	// Ư�� index�� ��ü ����Ʈ ���� �˻��ϴ� �ڵ� �߰�

	/// ��Ȳ : Index�� 0 1 2 3 4�� �� 5�� ��带 ������ �ִٰ� ������ ��
	///        Index 3�� �߰��ϰ� ���� ��
	/// SOLUTION
	/// 1. Index 2�� NextNode(Index 3�� ��� �ּ�)�� �����ؼ� ���ο� ����� NextNode�� ����
	/// 2. Index 2�� NextNode�� ���ο� ���� ����

}

unsigned int List::GetListSize()
{
	//return m_iListSize;
}

/// TEST_CODE : Final�̳� Ư�� index ����� �ּҸ� ã�� ���� (�⺻ -1 : Final / Ư�� ��� : index)
LinkedNode* List::FindNode(int p_iIndex)
{
	if ( m_pHeadNode != nullptr )
	{
		int iNowIndex = 0;
		LinkedNode* pFindNode = m_pHeadNode;
		
		/// ���� iNowIndex�� -1�� ���� ����������
		//while ( pFindNode->GetNextNode() != nullptr )
		//{
		//	pFindNode = pFindNode->GetNextNode();
		//}
		/// �ƴ� ��쿡�� �ϴ� iNowIndex�� p_iIndex �� 
		/// �ٵ� �� �� �� Index�� ���� �����ϴ� ������ �ݵ�� �˻��ϴ� �ڵ尡 �����ؾ� ��



		return pFindNode;
	}
	return nullptr;
}
