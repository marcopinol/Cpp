#include <iostream>
using namespace std;

int main(){
	int M[5] = {92, 81, 70, 69, 58};
	
	for(int i = 0; i < 5; i++)
		cout << *(M + i) << endl; //M + i == &M[i], and *(M + i) == M[i]; *(M++) is illegal because it is a constant pointer
		
	//Array names are constant pointers and cannot be incremented, it's like try this: 3++;
		
	system("PAUSE");
	return 0;
}
