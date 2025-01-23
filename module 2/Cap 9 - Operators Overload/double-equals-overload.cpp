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
		
		String(char ch, int n);
		
		String(const char s[]){
			strncpy(strng, s, 80);
		}
		
		int len() const{
			return strlen(strng);
		}
		
		void printS() const{
			cout << strng << endl;
		}
		
		String getStr(){
			gets(strng);
			return String(strng);
		}
		
		String operator +=(String& s);
		String operator +(String& s) const;
		
		bool operator <(String& s) const;
		bool operator ==(String& s) const;
};

void ordena(String s[], int n);

int main(){
	String s[80], b("");
	int i = 0;

	for(i; i < 80; i++){
		cout << "Digite nome ou [ENTER] para terminar:";
		if(s[i].getStr() == b){
			s[i] = String("\0");
			break;
		}
	}
	
	cout << "\n\nLista original:" << endl;
	for(int j = 0; j < i; j++){
		cout << "s[" << j << "] = ";
		s[j].printS();
	}	
	
	ordena(s, i);
	
	cout << "\n\nLista ordenada:" << endl;
	for(int j = 0; j < i; j++){
		cout << "s[" << j << "] = ";
		s[j].printS();
	}
	
	system("PAUSE");
	return 0;
}

String::String(char ch, int n){
	if(n < MAX){
		int i = 0;
		for(i; i < n; i++)
			strng[i] = ch;
		strng[i] = '\0';
	}else
		strng[0] = '\0';
}

String String::operator +=(String& s){
	if(strlen(strng) + strlen(s.strng) < MAX)
		strcat(strng, s.strng);
	return String(strng);
}

String String::operator +(String& s) const{
	char temp[MAX];
	strcpy(temp, strng);
	
	if(strlen(temp) + strlen(s.strng) < MAX)
		strcat(temp, s.strng);
		
	return String(temp);
}

bool String::operator <(String& s) const{
	return (strcmp(strng, s.strng) < 0) ? true : false;
}

bool String::operator ==(String& s) const{
	return (strcmp(strng, s.strng) == 0) ? true : false;
}

void ordena(String s[], int n){
	String temp;
	
	//Bubble sort
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			if(s[j] < s[i]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
}
