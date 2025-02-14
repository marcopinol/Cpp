#include <iostream>
#include <cstring>
using namespace std;

void inverte(const char *s);

int main(){
	const char *s1 = "Cesar";
	
	cout << s1 << ' ';
	inverte(s1);
	cout << endl;
	
	system("PAUSE");
	return 0;
}

void inverte(const char *s){
	int i = strlen(s) - 1; //discarding '\0' from loop
	for(i; i >= 0; i--){
		cout << *(s + i);
	}
}
