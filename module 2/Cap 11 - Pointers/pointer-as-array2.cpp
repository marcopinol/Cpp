#include <iostream>
using namespace std;

int main(){
	int M[5] = {92, 81, 70, 69, 58};
	int *p = M; //creates and initializes a variable pointer
	
	for(int i = 0; i< 5; i++)
		cout << *(p++) << endl; //Because p is a variable pointer, *(p++) is allowed
	
	system("PAUSE");
	return 0;
}
