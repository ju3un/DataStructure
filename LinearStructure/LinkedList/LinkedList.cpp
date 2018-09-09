// LinkedList.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

