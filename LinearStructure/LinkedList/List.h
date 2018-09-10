#include "LinkedNode.h"

class List
{
public:
	List() = default;
	List(int p_iData);
	/// �����ڿ� list ���� ���ڵ� �ްԲ�����
	~List();

	LinkedNode* GetHeadNode();

	void Add(int p_iData);
	void Add(int p_iIndex, int p_iData);
	void Remove(int p_iIndex);

	unsigned int GetListSize();

private:
	LinkedNode* m_pHeadNode = nullptr;

	LinkedNode* findNode(int p_iIndex = -2);
};

/// ��� �ϼ� �� ����Ʈ �����ͷ� ����!!!