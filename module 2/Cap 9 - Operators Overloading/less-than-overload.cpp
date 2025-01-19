#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		static const int MAX = 80;
		char strng[80];
	public:
		String(){ //Default constructor
			strng[0] = '\0';
		}
		
		String(const char s[]){
			if(strlen(s) < MAX)
				strncpy(strng, s, MAX);
		}
		
		String(char ch, int n);
		
		int len() const{
			return strlen(strng);
		}
		
		void printS() const{
			cout << strng << endl;
		}
		
		String operator +=(String& s);
		String operator +(String& s) const;
		
		bool operator < (String& s) const;
};

void ordena(String s[], int n);

int main(){
	String s[4] = {"Jose Carlos", "Denise", "Andre", "Helio"};
	
	cout << "\n\nLista original:" << endl;
	for(int i = 0; i < 4; i++){
		cout << "s[" << i << "] = ";
		s[i].printS();
	}	
	
	ordena(s, 4);
	
	cout << "\n\nLista ordenada:" << endl;
	for(int i = 0; i < 4; i++){
		cout << "s[" << i << "] = ";
		s[i].printS();
	}
	
	system("PAUSE");
	return 0;
}

String::String(char ch, int n){
	if(n < MAX){	
		int i;
		for(int i = 0; i < n; i++)
			strng[i] = ch;
		strng[i] = '\0';	
	}else{
		strng[0] = '\0';
	}
}

String String::operator +=(String& s){
	if(strlen(strng) + strlen(s.strng) < MAX)
		return strcat(strng, s.strng);
	return String(strng);
}

String String::operator +(String& s) const{
		char temp[MAX];
		strncpy(temp, strng, MAX);
		
		if(strlen(strng) + strlen(s.strng) < MAX){
			strcat(temp, s.strng);
		}
		
		return String(temp);
}

bool String::operator <(String& s) const{
	return (strcmp(strng, s.strng) < 0) ? true : false;
}

void ordena(String s[], int n){
	String temp;
	
	for(int i = 0; i < n; i++){ //Bubble sort
		for(int j = i + 1; j < n; j++){
			if(s[j] < s[i]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}
