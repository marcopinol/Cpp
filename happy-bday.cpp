#include <iostream>
using namespace std;

void line(int q);

int main(){
	
	line(22);
	cout << endl;
	
	cout << "* FELIZ ANIVERSARIO! *"<< endl;
	
	line(22);
	cout << endl;
	
	system("PAUSE");

	return 0;
}

void line(int q){
	for(int i = 0; i < q; i++)
		cout << '*';
}
