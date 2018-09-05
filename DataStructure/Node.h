#include <iostream>

class Node
{
public:
	Node() = delete;
	Node(int p_iData);
	~Node() = default;
	
	int GetData();

private:
	int m_iData;
};