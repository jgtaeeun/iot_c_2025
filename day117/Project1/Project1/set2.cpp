//#include <iostream>
//#include <set>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	set <int> s = { 2,3,4,5,9,8 };
//	set<int, greater<int>> s2 = { 2,3,5,6,9,8 };
//	
//	//set��  �ڵ����� �������� ����
//	for (auto e : s) cout << e << " ";
//	cout << endl;
//
//	//greater<int>�� STL �Լ� ��ü(functor)��, �⺻ �� ����(less<int>)�� �ݴ�� ������.
//	for (auto e : s2) cout << e << " ";
//	cout << endl;
//
//	// vector�� �ڵ� ���ĵ��� �ʴ´� =>sort()�Լ� �̿��� ������
//	vector<int > v = { 3,1,4,2 };
//	sort(v.begin(), v.end(), greater<int>());
//
//
//	for (auto e : v) cout << e << " ";
//	cout << endl;
//
//	return 0;
//}