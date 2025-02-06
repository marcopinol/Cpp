#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		char *str;
	public:
		String(): str(nullptr)
		{}
		
		int Get(){
			char nome[100];
			gets(nome);
			str = new char[strlen(nome) + 1];
			strcpy(str, nome);
			return strcmp(str, "");
		}
		
		void Print() const{
			cout << str << endl;
		}
		
		bool operator<(String& s) const;
};

bool String::operator<(String& s) const{
	return (strcmp(str, s.str) < 0) ? true : false;
}

void ordena(String **p, int n){
	String *temp;
	int i, j;
	
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++)
			if(*(*(p + j)) < *(*(p + i))){
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
	}
}

int main(){
	String *p[100];
	int n;
	
	for(n = 0; ; n++){
		cout << "Digite nome ou [ENTER] para fim: ";
		p[n] = new String;
		if(p[n]->Get() == 0)
			break;
	}
	
	cout << "\n\nLista original:" << endl;
	int i;
	
	for(i = 0; i < n; i++)
		p[i]->Print();
		
	ordena(p, n);
	
	cout << "\n\nLista ordenada:" << endl;
	
	for(i = 0; i < n; i++){
		p[i]->Print();
		delete p[i];
	}
	
	system("PAUSE");
	return 0;
}
