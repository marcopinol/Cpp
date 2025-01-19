//To cast an object to basic type, we use type casting operator overload
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
		
		String(const char s[]){
			strncpy(strng, s, MAX);
		}
		
		String(int i){
			itoa(i, strng, 10);
		}
		
		operator int() const{ //Don't have return type
			return atoi(strng);
		}
		
		void printS() const{
			cout << strng << endl;
		}
};

int main(){
	String S;
	int x = 1234;
	
	S = x; //Calls String(int i) implicitly
	
	cout << "S = ";
	S.printS();
	
	//=============================================================
	
	String A = "3256";
	int y;
	
	//y = int(A); or y = static_cast<int>(A);
	y = A; //Calls the int() type casting overload
	
	cout << "A = ";
	A.printS();
	
	system("PAUSE");
	return 0;
}
