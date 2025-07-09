//#include <iostream>
//
//int& func()
//{
//	int val = 10;
//	return val;
//}
//
//int main()
//{
//	int& res = func();    //참조변수가 리턴하는 val은 func()의 지역변수이므로 func()함수종료 후 메모리상에서 사라진다.
//	std::cout << res << std::endl;
//	return 0;
//
//}