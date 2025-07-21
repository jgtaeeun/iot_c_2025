//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector <int> arr;
//	vector <int> v(10); //크기가 10인 벡터
//	vector <int> v2 = { 10,20,30,40,50 };
//
//	cout << "arr size:" << arr.size() <<  endl;
//	cout << "v size:" << v.size() << endl;
//	cout << "v2 size:" << v2.size() << endl;
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("v[%d] : %d\n", i, i);
//	}
//	for (auto i : v)   //범위기반 for, 향상된 for문
//	{
//		cout << i << endl;
//	}
//
//	cout << "v2의 첫번째 요소값: " << *v2.begin() << endl;
//	cout << "v2의 마지막 요소값: " << *(v2.end()-1) << endl;
//
//	return 0;
//}