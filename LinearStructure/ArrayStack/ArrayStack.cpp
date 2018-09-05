// ArrayStack.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#pragma once
#include "Stack.h"
#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	Stack stack(5);

	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);

	std::cout << stack.Top() << std::endl;
	std::cout << stack.Pop() << std::endl;
	std::cout << stack.Top() << std::endl;

	return 0;
}

