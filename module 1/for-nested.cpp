#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	system("cls");
	for(int k = 0; k <= 1; k++){
		cout << endl;
		
		for(int i = 1; i <= 4; i++){
			cout << "TABUADA DO " << setw(1) << (i + 4 * k + 1) << '\t';
		}
		cout << endl;
		for(int i = 1; i <= 9; i++){
			for(int j = 2 + 4 * k; j <= 5 + 4 * k; j++){
				cout << setw(3) << j << " x" << setw(2) << i << " = " << setw(2) << j * i << '\t';
			}
			cout << endl;
		}
	}
	return 0;
}
