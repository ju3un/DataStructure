#include <iostream>
#include <vector>
#include <string>

class Bubble
{
public:
	Bubble(const std::string& p_sNumbers);
	~Bubble();

	void Start();

private:
	std::vector<int> m_vNumberList;

	void spiltNumbers(const std::string& p_sNumbers);

	void sortAscending();
	void sortDescending();
};