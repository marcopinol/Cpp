#include <iostream>
using namespace std;

int main(){
	char s1[] = "Ponteiros"; //Constant pointer
	char *s2 = "Ponteiros"; //Variable pointer (this will pop a warning, but it's just an example)
	
	cout << s1 << endl;
	cout << s2 << endl;

//  s1++; Illegal because it is a constant pointer
	s2++; //Ok
	
	cout << s2 << endl;
	
	system("PAUSE");
	return 0;
}
