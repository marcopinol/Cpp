#include <iostream>
using namespace std;

int main(){
	int i = 5, *pi;
	void *ptr; //Any address can be assigned to this pointer, it's like a 'joker' pointer, but it cannot access address content without a cast and other pointer
	
	ptr = &i;
	
	//cout << *ptr << endl; //ERROR
	
	pi = reinterpret_cast<int *>(ptr);
	
	cout << *pi << endl;
	
	system("PAUSE");
	return 0;
}
