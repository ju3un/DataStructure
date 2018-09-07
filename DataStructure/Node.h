#pragma once

class Node
{
public:
	Node() = default;
	Node(int p_iData)
	{
		m_iData = p_iData;
	}
	virtual ~Node() = default;

	virtual int GetData()
	{
		return m_iData;
	}
	virtual void SetData(int p_iData) = 0;

protected:
	int m_iData;
};
