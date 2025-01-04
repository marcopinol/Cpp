#include <iostream>
using namespace std;

int main(){
	int trid[3][2][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}}, {{7, 9, 3, 2}, {4, 6, 8, 3}}, {{7, 2, 6, 3}, {0, 1, 9, 4}}};
	
	int bid[3][2] = {{0, 1}, {2, 3}, {4, 5}};
	
	cout << bid[2][1] << '\n';
	cout << trid[0][1][1] << endl;
	
	return 0;
}
