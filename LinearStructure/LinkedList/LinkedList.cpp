// LinkedList.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include "List.h"

int _tmain(int argc, _TCHAR* argv[])
{
	List list(1);

	list.Add(2);
	list.Add(3);
	list.Add(4);
	list.Add(0, 0);

	list.Remove(0);
	list.Remove(2);
	int iSize = list.GetListSize();

	return 0;
}

