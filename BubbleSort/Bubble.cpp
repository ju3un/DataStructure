#include "Bubble.h"

Bubble::Bubble(const std::string& p_sNumbers)
{
	spiltNumbers(p_sNumbers);
}

Bubble::~Bubble()
{
	m_vNumberList.clear();
}

void Bubble::spiltNumbers(const std::string& p_sNumbers)
{
	std::string sNumbers = p_sNumbers;
	std::string sTemp;

	for ( auto i : sNumbers )
	{
		if ( i != ' ' )
		{
			sTemp.append(1, i);		/// string& append (size_t n, char c);
		}
		else
		{
			m_vNumberList.push_back(std::stoi(sTemp));
			sTemp.clear();
		}
	}

	/// TEST_CODE : 매우 지저분한 코드...ㅇ우웩
	if ( sTemp.empty() == false )
	{
		m_vNumberList.push_back(std::stoi(sTemp));
		sTemp.clear();
	}
}

void Bubble::Start()
{
	std::cout << "--------------------" << std::endl;
	std::cout << "1. Ascending Order" << std::endl;
	std::cout << "2. Descending Order" << std::endl;
	std::cout << "--------------------" << std::endl;
	
	unsigned int iOption = 0;
	
	do
	{
		std::cout << "Select what you order : ";
		std::cin >> iOption;

	}while( iOption != 1 && iOption != 2 );

	if(iOption == 1)
		sortAscending();
	else if( iOption == 2 )
		sortDescending();

	for ( auto i : m_vNumberList )
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void Bubble::sortAscending()
{
	int iSize = m_vNumberList.size();
	
	for ( int n = 0; n < (iSize * (iSize - 1)) / 2; n++ )
	{
		for ( int i = 0, j = i + 1; j < (iSize - n); i++, j++ )
		{
			if ( m_vNumberList.at(i) > m_vNumberList.at(j) )
			{
				int iTemp = m_vNumberList.at(j);
				m_vNumberList.erase(m_vNumberList.begin() + j);
				m_vNumberList.insert(m_vNumberList.begin() + i, iTemp);
			}
		}
	}
}

void Bubble::sortDescending()
{
	int iSize = m_vNumberList.size();

	for ( int n = 0; n < (iSize * (iSize - 1)) / 2; n++ )
	{
		for ( int i = iSize - 1, j = i - 1; j >= n; i--, j-- )
		{
			if ( m_vNumberList.at(i) > m_vNumberList.at(j) )
			{
				int iTemp = m_vNumberList.at(i);
				m_vNumberList.erase(m_vNumberList.begin() + i);
				m_vNumberList.insert(m_vNumberList.begin() + j, iTemp);
			}
		}
	}
}
