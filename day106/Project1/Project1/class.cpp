#include <iostream>

class Myclass {
private:
	int id ;
	char name[20];
	int age;

public :
	Myclass(int i_id, char i_name[20] , int i_age)
	{ 
		this->id = i_id;
		this->age = i_age;    //this.age는 잘못된 표현이다.
		
		//문자열 strcpy
		strcpy(this->name, i_name);
	}

	~Myclass() {}
		
};



int main()
{

	return 0;
}