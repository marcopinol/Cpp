#include <iostream>
using namespace std;

class Base{
	public:
		void Print(){
			cout << "Base" << endl;
		}
};

class Derivada0 : public Base{
	public:
		void Print(){
			cout << "Derivada0" << endl;
		}
};

class Derivada1 : public Base{
	public:
		void Print(){
			cout << "Derivada1" << endl;
		}
};

class Derivada2 : public Base{
	public:
		void Print(){
			cout << "Derivada2" << endl;
		}
};

int main(){
	Derivada0 d0;
	Derivada1 d1;
	Derivada2 d2;
	
	Base *ptr[3] = {&d0, &d1, &d2};
	
	for(int i = 0; i < 3; i++)
		ptr[i]->Print();
	
	system("PAUSE");
	return 0;
}
