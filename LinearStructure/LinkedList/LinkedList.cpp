// LinkedList.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include "List.h"

int _tmain(int argc, _TCHAR* argv[])
{
	List list(3);

	list.Add(4);
	list.Add(5);
	list.Add(6);

	std::cout << list.findNode(2);

	return 0;
}

