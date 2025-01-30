#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		char *str;
	public:
		String(){ //Default constructor
			str = new char; //Returns a pointer to a single byte
			*str = '\0';
		}
		
		String(const char *s){
			str = new char[strlen(s) + 1]; //Returns a pointer to the first byte of the new memory block of string size + 1 bytes for \0
			strcpy(str, s);
		}
		
		~String(){ //Destructor
			//if str is not null
			if(str)
				delete[] str; //Frees memory back to the OS
		}
		
		void PrintS(){
			cout << str << endl;
		}
};

int main(){
	String s = "A vida eh uma longa estrada na qual corremos contra o tempo.", s1;
	
	s.PrintS();
	s1.PrintS();
	
	system("PAUSE");
	return 0;
}
