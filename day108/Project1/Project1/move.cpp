#include <iostream>

int main()
{
	int n = 10;
	int& rn = n;  //����������
	rn = 14; 
	std::cout << rn << std::endl;

	return 0;
}