#include <iostream>
using namespace  std;

//int add (int a, int b)
//{
//	return a + b;
//}
//
//
//double add(	double a,	double b)
//{
//	return a + b;
//}

template <typename T>
T add(T a, T b)
{
	return a + b;
}
int main()
{
	cout << add(3, 4)<< endl; 
	cout << add(3.3, 4.4) << endl;

	return 0;
}