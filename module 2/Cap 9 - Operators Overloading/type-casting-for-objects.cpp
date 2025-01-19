//To cast an basic type to object, we use an one-argument constructor.
#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		static const int MAX = 80;
		char strng[MAX];
	public:
		String(){ //Default constructor
			strng[0] = '\0';
		}
		
		String(const char s[]){ //Constructor that cast array to String
			strncpy(strng, s, MAX);
		}
		
		String(int n){
			itoa(n, strng, 10); //Int to ASC base dec
		}
		
		void printS() const{
			cout << strng << endl;
		}
};

int main(){
	String S;
	int x = 1234;
	
	S = x; //Calls String(int n) constructor implicitly
	
	cout << "S = ";
	S.printS();
	
	system("PAUSE");
	return 0;
}
