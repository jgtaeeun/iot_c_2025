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
//	//set은  자동으로 오름차순 정렬
//	for (auto e : s) cout << e << " ";
//	cout << endl;
//
//	//greater<int>는 STL 함수 객체(functor)로, 기본 비교 기준(less<int>)을 반대로 설정함.
//	for (auto e : s2) cout << e << " ";
//	cout << endl;
//
//	// vector는 자동 정렬되지 않는다 =>sort()함수 이용해 정렬함
//	vector<int > v = { 3,1,4,2 };
//	sort(v.begin(), v.end(), greater<int>());
//
//
//	for (auto e : v) cout << e << " ";
//	cout << endl;
//
//	return 0;
//}