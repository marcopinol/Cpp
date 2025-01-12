#include <iostream>
#include <cstring>
using namespace std;

void strdel(char s[], int pos);

int main(){
	char str[] = "Carrta";
	
	cout << str << endl;
	strdel(str, 2);
	cout << str << endl;
	
	system("PAUSE");
	return 0;
}

void strdel(char dest[], int src){
	strcpy(dest + src, dest + src + 1); //copy the whole string from dest + src + 1 till \0 to dest + src, "shifting" the string.
}
