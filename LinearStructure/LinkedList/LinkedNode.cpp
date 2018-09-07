#include "LinkedNode.h"


LinkedNode::LinkedNode(int p_iData)
{
	m_iData = p_iData;
}

LinkedNode::~LinkedNode()
{

}

void LinkedNode::SetData(int p_iData)
{
	m_pNextNode->m_iData = p_iData;
}

void LinkedNode::SetNextNode(LinkedNode* p_pNextNode)
{
	m_pNextNode = p_pNextNode;
}

LinkedNode* LinkedNode::GetNextNode()
{
	return m_pNextNode;
}
