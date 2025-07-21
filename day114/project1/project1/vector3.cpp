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
		cout << v.at(i) << endl;  //������ ��Ҹ� ���� Ȯ�� �� ���� (���� ����� ���� �߻�)
	}
	printf("\n");
	vector<int>::iterator itr;
	for (itr = v.begin(); itr < v.end(); itr++)
	{
		cout << *itr << endl;
	}
	printf("\n");
	//vector ũ�⸦ ��Ÿ���� ǥ��ȭ�� ���� �ڷ���
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	printf("\n");
	//���� for��
	for (auto i : v)
	{
		cout << i << endl;
	}
	return 0;
}