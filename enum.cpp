#include <iostream>
using namespace std;
 
enum Mes {Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez}; 

int main() {
	Mes m1 = Fev, m2 = Jul;
	
	cout << m1 << ' ' << m2 << endl;
		
	if(m2 > m1)
		cout << "Maior" << endl;
	
	system("PAUSE");
	return 0;
}
