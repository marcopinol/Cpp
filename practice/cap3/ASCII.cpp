#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	for(int i = 32; i <= 255; i++){
		unsigned char c = i;
		cout << '\t' << "char: " << c;
		cout << " | Decimal: " << dec << static_cast<int>(c) << " | Hex: " << hex << static_cast<int>(c) << "\n\n";
	}
	
	system("PAUSE");
	
	return 0;
}
