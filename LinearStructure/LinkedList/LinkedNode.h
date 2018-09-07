#include "../DataStructure/Node.h"

class LinkedNode
	: public Node
{
public:
	LinkedNode() = default;
	LinkedNode(int p_iData);
	~LinkedNode() override;

	void SetData(int p_iData) override;

	void SetNextNode(LinkedNode* p_pNextNode);
	LinkedNode* GetNextNode();


private:
	LinkedNode* m_pNextNode = nullptr;
};