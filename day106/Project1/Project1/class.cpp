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
		this->age = i_age;    //this.age�� �߸��� ǥ���̴�.
		
		//���ڿ� strcpy
		strcpy(this->name, i_name);
	}

	~Myclass() {}
		
};



int main()
{

	return 0;
}