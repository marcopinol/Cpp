#include <iostream>
using namespace std;

int main(){
	system("cls");
	
	for(int lin = 1; lin <= 8; lin++){
		for(int col = 1; col <= 8; col++){
			if((lin + col) % 2 == 0){
				cout << "\xdb\xdb";
			}else{
				cout << "  ";
			}
		}
	cout << endl;
	}
	
	system("PAUSE");
	
	return 0;
}
