#include <iostream>
using namespace std;

inline int impar(int x){
	return (x % 2 == 0 ? 0 : 1);
}

inline int maior(int x, int y, int z){
	return (x > y ? (x > z ? x : z) : (y > z ? y : z));
}

inline int isNumber(char ch){
	return (ch >= 48 && ch <= 57 ? 1 : 0);
}

inline int toNumber(char ch){
	return ((int)(ch - '0'));
}

int main(){
	int x = 7, y = 8, z = 9;
	char ch = '2';
	
	cout << impar(x) << endl;
	cout << maior(y, z, x) << endl;
	cout << isNumber(ch) << endl;
	cout << toNumber(ch) << endl;
	
	system("PAUSE");
	
	return 0;
}
