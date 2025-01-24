//Shows one cenary of ambiguity in heritage
#include <iostream>
using namespace std;

class X{
	public:
		void Print(){
			cout << "Classe X " << endl;
		}
};

class Y{
	public:
		void Print(){
			cout << "Classe Y " << endl;
		}
};

class Z : public Y, public X
{};

int main(){
	Z obj;
	//obj.Print(); Compilation error
	
	obj.X::Print();
	obj.Y::Print();
	
	system("PAUSE");
	return 0;
}
