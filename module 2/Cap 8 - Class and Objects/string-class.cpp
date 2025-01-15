#include <iostream>
#include <cstring>

#define MAX 80
using namespace std;

class String{
	private:
		char str[MAX];
	public:
		String(){ //Default constructor
			str[0] = '\0';
		}
		
		String(char ch, int n);	//Constructor - copies n times ch
		
		explicit String(const char s[]);
		
		int Len() const{
			return strlen(str);
		}
		
		void Print() const{
			cout << str << endl;
		}
};

int main(){
	String S1('=', 22), S2("Feliz Ano Novo! ");
	//String S3 = "Estamos no Verao."; //This statement converts the array implicitly on String object before the assignment
	String S3("Estamos no Verao."); //Calls the constructor String(const char s[])
	String S4("Chamando o construtor!"), S5; //S4 calls the constructor String(const char s[])
	//S4 = "Chamando o construtor!"; //This statement converts the array implicitly on String object before the assignment
	//Calls the constructor String(const char s[])
	
	cout << "S1 = ";
	S1.Print();
	cout << "S2 = ";
	S2.Print();
	cout << "S3 = ";
	S3.Print();
		
	cout << "S4 = ";
	S4.Print();
	
	S5 = S1;
	
	cout << "S5 = ";
	S5.Print();
	cout << endl;
	
	cout << "Tamanho de S1 = " << S1.Len() << endl;
	cout << "Tamanho de S2 = " << S2.Len() << endl;
	cout << "Tamanho de S3 = " << S3.Len() << endl;
	cout << "Tamanho de S4 = " << S4.Len() << endl;
	cout << "Tamanho de S5 = " << S5.Len() << endl;
	cout << endl;
	
	system("PAUSE");
	return 0;
}

String::String(char ch, int n){
	int i;
	for(i = 0; i < n; i++){
		str[i] = ch;
	}
	str[i] = '\0';
}

String::String(const char s[]){
	strcpy(str, s);
}
