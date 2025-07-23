//#include <iostream>
//#include <list>
//
//using namespace std;
//
//int main() {
//	//list<int> li = { 1,2,3 };
//	//list <int> li2 = { 4,5 };
//
//	//auto it = li.begin();
//	//li.splice(it, li2);
//	//for (auto e : li) cout << e << " ";
//	//cout << endl;
//
//	list<string> obj;
//	obj.push_back(string("Hello"));
//	obj.push_back(string("Hello2"));
//	obj.push_back(string("Hello3"));
//	for (auto e : obj) cout << e << " ";
//	cout << endl;
//
//	list<string> arg(obj); //복사생성자
//	obj.splice(++obj.begin(), arg);
//	cout << "obj container" << obj.size() << ", " << "arg container" << arg.size() << endl;
//	return 0;
//}