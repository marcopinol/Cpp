#include <iostream>
using namespace std;

class Rec{
	private:
		static int n; //an unique item for all objects
	public:
		Rec(){ //Default constructor
			n++;
		}
		int getRec() const{
			return n;
		}
};

int Rec::n = 0; //Need for compile time

int main(){
	Rec r1, r2, r3; //Executes the default constructor 3 times
	
	cout << r1.getRec() << endl;
	cout << r2.getRec() << endl;
	cout << r3.getRec() << endl;
	
	system("PAUSE");
	return 0;
}
