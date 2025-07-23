#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, string> m;
	m.insert(pair<int, string>(40, "me"));
	m.insert(pair<int, string>(35, "show"));

	map<int, string>::iterator itr;
	for (itr = m.begin(); itr != m.end(); itr++) cout << "[" << itr->first << "," << itr->second << "]" << " ";
	cout << endl;


	map<int, string> m2;
	m2[1] = "one";
	m2[2] = "two";

	for (itr = m2.begin(); itr != m2.end(); itr++) cout << "[" << itr->first << "," << itr->second << "]" << " ";
	cout << endl;

	map<string,int> m3;
	m3.insert({"one",1});
	m3.emplace("two",2);
	m3.emplace("three", 3);

	map<string,int>::iterator itr2;
	for (itr2 = m3.begin(); itr2 != m3.end(); itr2++) cout << "[" << itr2->first << "," << itr2->second << "]" << " ";
	cout << endl;
	return 0;
}