// BubbleSort.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Bubble.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Input NUMBERS including space: ";

	std::string sNumbers;
	std::getline(std::cin, sNumbers);

	/// �ߺ� ���� �˻�, 2�� �̻��� ���� �Է� �˻� �߰� ����

	Bubble bubble(sNumbers);
	bubble.Start();

	return 0;
}

