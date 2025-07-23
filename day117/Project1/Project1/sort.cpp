//#include <iostream>
//#include <set>
//using namespace std;
//
//int main()
//{
//	multiset<int> ms = { 4,5,21,7,2 };
//	for (auto e : ms) cout << e << " ";
//	cout << endl;
//
//	ms.insert(7);
//	ms.insert(7);
//	ms.insert(7);
//	ms.insert(7);
//	multiset<int>::iterator it;
//	for (it = ms.begin(); it != ms.end(); it++) cout << *it << " ";
//	cout << endl;
//
//	cout << "7°¹¼ö:" << ms.count(7) << endl;
//	cout << "lower bound" << *(ms.lower_bound(7)) << endl;
//	cout << "upper bound" << *(ms.upper_bound(7)) << endl;
//
//
//	return 0;
//}