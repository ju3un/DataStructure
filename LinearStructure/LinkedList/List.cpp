#include "List.h"

List::List(int p_iData)
{
	m_pHeadNode = new LinkedNode(p_iData);
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
		LinkedNode* pNewNode = new LinkedNode(p_iData);

		/// TEST_CODE : FindNode()함수 완성 후 다시 수정 예정
		// List 마지막 노드에 추가
		LinkedNode* pFinalNode = m_pHeadNode;
		while ( pFinalNode->GetNextNode() != nullptr )
		{
			pFinalNode = pFinalNode->GetNextNode();
		}

		pFinalNode->SetNextNode(pNewNode);
		///
	}
	else // Head가 없을 때
	{
		m_pHeadNode = new LinkedNode(p_iData);
	}
}

void List::Add(int p_iIndex, int p_iData)
{
	// 특정 index와 전체 리스트 수와 검사하는 코드 추가

	/// 상황 : Index가 0 1 2 3 4인 총 5개 노드를 가지고 있다고 가정할 때
	///        Index 3에 추가하고 싶을 때
	/// SOLUTION
	/// 1. Index 2의 NextNode(Index 3의 노드 주소)를 저장해서 새로운 노드의 NextNode로 지정
	/// 2. Index 2의 NextNode를 새로운 노드로 지정

}

void List::Remove(int p_iIndex)
{

}

unsigned int List::GetListSize()
{
	return 0;
	//return m_iListSize;
}

/// TEST_CODE : Final이나 특정 index 노드의 주소를 찾기 위함 (기본 -1 : Final / 특정 노드 : index)
LinkedNode* List::findNode(int p_iIndex)
{
	if ( m_pHeadNode != nullptr )
	{
		LinkedNode* pFindNode = m_pHeadNode;
		
		/// 만약 p_iIndex가 -1일 경우는 마지막까지
		/// 아닌 경우에는 일단 iNowIndex와 p_iIndex 비교 
		/// 근데 이 때 그 Index가 실제 존재하는 건지는 반드시 검사하는 코드가 존재해야 함
		if ( p_iIndex == -1 )
		{
			while ( pFindNode->GetNextNode() != nullptr )
			{
				pFindNode = pFindNode->GetNextNode();
			}
		}
		else
		{
			int iNowIndex = 0;
			while ( iNowIndex <= p_iIndex )
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
