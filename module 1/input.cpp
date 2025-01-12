#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//catching a data with cin input
	cout << "Digite sua idade em anos: ";
	int anos;
	
	cin >> anos;
	
	cout <<"\nSua idade em dias eh: " << (anos * 365) << endl;
	
	system("PAUSE");
	
	//reading multiple inputs
	cout << "\nDigite as notas das provas: ";
	float p1, p2, p3, p4;
	
	cin >> p1 >> p2 >> p3 >> p4;
	
	cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);
	cout << "\nMEDIA: " << (p1 + p2 + p3 + p4) / 4.0 << endl;
	
	system("PAUSE");
	
	return 0;
}
