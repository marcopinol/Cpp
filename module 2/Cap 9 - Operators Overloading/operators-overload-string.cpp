#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		static const int MAX = 80;
		char strng[MAX];
	public:
		String(){
			strng[0] = '\0';
		}
		
		String(char ch, int n);
		
		String(const char s[]){
			strcpy(strng, s);
		}
		
		int len() const{
			return strlen(strng);
		}
		
		void printS() const{
			cout << strng << endl;
		}
		
		String operator +=(String& s);
		String operator +(String& s) const;
};

int main(){
	String S1("Feliz Aniversario! "), S2 = "Denise";
	String S3= "Bom dia! ", S4, S5;
	
	cout << "S1 = ";
	S1.printS();
	cout << "S2 = ";
	S2.printS();
	cout << "S3 = ";
	S3.printS();
	cout << endl;
	
	S3 += S2; //S3.operator +=(S2);
	S4 = S1 + S2; //S4 = S1.operator +(S2);
	S5 = S1 + S1; //S5 = S1.operator +(S1);
	
	cout << "S3 = ";
	S3.printS();
	cout << "S4 = ";
	S4.printS();
	cout << "S5 = ";
	S5.printS();
	
	system("PAUSE");
	return 0;
}

String::String(char ch, int n){
	int i;
	for(i = 0; i < n; i++)
		strng[i] = ch;
	strng[i] = '\0';	
}

String String::operator +=(String& s){
	if(strlen(strng) + strlen(s.strng) < MAX)
		strcat(strng, s.strng);
	return String(strng);
}

String String::operator +(String& s) const{
	char temp[MAX];
	strcpy(temp, strng);
	
	if(strlen(strng) + strlen(s.strng) < MAX)
		strcat(temp, s.strng);
	
	return String(temp);
}
