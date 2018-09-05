#pragma once

class Node
{
public:
	Node() = default;
	Node(int p_iData);
	~Node() = default;

	int GetData();

private:
	int m_iData;
};
