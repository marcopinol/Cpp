#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		char *str;
	public:
		String(){ //Default constructor
			str = new char[1];
			*str = '\0';
		}
		
		String(const char *s){
			str = new char[strlen(s) + 1];
			strcpy(str, s);
		}
		
		String(const String& s){ //Copy constructor; His arg must be by reference
			str = new char[strlen(s.str) + 1];
			strcpy(str, s.str);
		}
		
		~String(){ //Destructor
			if(str)
				delete[] str;
		}
		
		void PrintS(){
			cout << str << endl;
		}
		
		void PrintS(int n){
			cout << str + n << endl;
		}
};

int main(){
	String s1 = "Construtor de copia";
	
	{
		String s2 = s1;
		s2.PrintS(2);
	}
	//Without the copy constructor, s1 would share the same memory address as s2, 
	//and after the previous block is executed, s1 would also be destroyed.
	s1.PrintS();
	
	system("PAUSE");
	return 0;
}
