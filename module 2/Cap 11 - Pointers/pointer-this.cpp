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
		
		String(const String& s){ //Copy constructor
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
		
		void PrintA();
};

int main(){
	String s1 = "Ponteiro this";
	
	{
		String s2 = s1;
		s2.PrintS(2);
	}

	s1.PrintS();
	cout << endl;
	s1.PrintA();
	cout << endl;
	s1.PrintS();
	
	system("PAUSE");
	return 0;
}
//Didatic code
void String::PrintA(){
	//'this' is a const pointer and cannot be modified
	String temp = *this; //'*this' is a object's content accessing via object's pointer 'this'
	cout << this << endl; //'this' is a object's pointer that call this method, if s1 call PrintA(), 'this' is s1 address
	cout << "Endereco de temp: " << &temp << endl;
	cout << "Conteudo do objeto: ";
	temp.PrintS();
}
