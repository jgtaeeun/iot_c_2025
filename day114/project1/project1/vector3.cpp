#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);


	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " " ;
		cout << v.at(i) << endl;  //벡터의 요소를 범위 확인 후 접근 (범위 벗어나면 예외 발생)
	}
	printf("\n");
	vector<int>::iterator itr;
	for (itr = v.begin(); itr < v.end(); itr++)
	{
		cout << *itr << endl;
	}
	printf("\n");
	//vector 크기를 나타내는 표준화된 정수 자료형
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	printf("\n");
	//향상된 for문
	for (auto i : v)
	{
		cout << i << endl;
	}
	return 0;
}