#include <iostream>
using namespace std;

typedef void FuncType(char x, float y); //study more in depth late
FuncType minhaFunc;

int main(){
	minhaFunc(97, 14.5);
	cout << endl;
	
	system("PAUSE");
	return 0;
}

void minhaFunc(char x, float y){
	cout << "y: " << y << " x : " << x;
}
