#include "LinkedNode.h"

class List
{
public:
	List() = default;
	List(int p_iData);
	~List();

	LinkedNode* GetHeadNode();

	void Add(int p_iData);
	void Add(int p_iIndex, int p_iData);

	unsigned int GetListSize();

private:
	LinkedNode* m_pHeadNode = nullptr;
	unsigned int m_iListSize = 0;
};