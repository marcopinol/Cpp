#include <iostream>
using namespace std;

int strlen(char *s);
void strcpy(char *dest, char *orig);
void strncpy(char *dest, char *orig, int n);
int strcmp(char *s, char *t);

int main(){
	char string[] = "Testando", teste[15];
	
	cout << "Tamanho: " << strlen(string) << endl;
	
	strncpy(teste, string, 5);
	
	cout << teste << endl;
	
	system("PAUSE");
	return 0;
}

int strlen(char *s){
	int cont = 0;
	while(*s != '\0'){
		cont++;
		s++;
	}
	return cont;
}

void strcpy(char *dest, char *orig){
	while((*dest++) = *(orig++));
}

void strncpy(char *dest, char *orig, int n){
	int i = 0;
	for(; i < n && *orig != '\0'; i++)
		*(dest++) = *(orig++);
	for(; i < n; i++)
		*(dest++) = '\0';
}

int strcmp(char *s, char *t){
	while(*s == *t && *s && *t){ //While *s == *t and *s is not null (*s != '\0') and t is not null (*t != '\0')
		s++; //Go foward in memory to compare the next char
		t++; //Go foward in memory to compare the next char
	}
	return *s - *t;
}
