// BubbleSort.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Bubble.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Input NUMBERS including space: ";

	std::string sNumbers;
	std::getline(std::cin, sNumbers);

	/// 중복 숫자 검사, 2개 이상의 숫자 입력 검사 추가 예정

	Bubble bubble(sNumbers);
	bubble.Start();

	return 0;
}

