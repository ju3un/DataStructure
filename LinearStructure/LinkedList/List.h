#include "LinkedNode.h"

class List
{
public:
	List() = default;
	List(int p_iData);
	/// 생성자에 list 여러 인자도 받게끔하자
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

/// 기능 완성 후 스마트 포인터로 수정!!!