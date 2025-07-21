//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	//cout<< "[v[i], v.size(), v.capacity()]" << endl; //size는 vector안의 원소의 크기         capacity는 vector의 크기
//	//for (int i = 0; i <= 32; i++)
//	//{
//	//	v.push_back(i + 1);
//	//	cout << "[" << v[i] << ", " << v.size() <<", " << v.capacity() << "]" << endl;
//	//}
//
//	vector <int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.insert(v1.begin(), 5);
//	v1.insert(find(v1.begin(), v1.end(), 3), 20); //v1의 원소중에서 3을 찾아서 3 앞에 20을 넣어라
//	v1.push_back(7);
//	v1.pop_back();
//	for (auto i : v1)
//	{
//		cout << i << endl;
//	}
//	
//	return 0;
//}