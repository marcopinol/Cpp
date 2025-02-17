#include <iostream>
using namespace std;

class Base{
	private:
		int x;
	public:
		virtual void Print() = 0; //Pure virtual function (this method (function) will never be executed, so we equals this to 0),
								  //this is basicaly a polymorfic interface
};

class Derivada0 : public Base{
	private:
		int x;
	public:
		void Print() override{ //override means that method is being rewritten from an virtual method
			cout << "Derivada0" << endl;
		}
};

class Derivada1 : public Base{
	private:
		float x;
	public:
		void Print() override{
			cout << "Derivada1" << endl;
		}
};

int main(){
	Base *p[2];
	
	Derivada0 d0;
	Derivada1 d1;
	
	*(p + 0) = &d0;
	*(p + 1) = &d1;
	
	for(int i = 0; i < 3; i++){
		p[i]->Print();
	}
	
	system("PAUSE");
	return 0;
}
