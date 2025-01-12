#include <iostream>
using namespace std;

int main() {
	for(int lin = 1; lin < 25; lin++){
		for(int col = 1; col < 25; col++){
			if(col == lin || col == 25 - lin)
				cout << '\xDB';
			else
				cout << '\xB0';
		}
		cout << endl;
	}
	
	system("PAUSE");
	
	return 0;
}
