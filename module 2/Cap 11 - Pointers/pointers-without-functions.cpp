#include <iostream>
using namespace std;

int main(){
	int x = 4, y = 7;
	
	cout << "&x = " << &x << "\t  x = " << x << endl;
	cout << "&y = " << &y << "\t  y = " << y << endl;
	cout << endl;
	
	int *px, *py;
	px = &x; //px != *px; When we write px, we're calling the address that px store, when we use *px we're calling for the content inside 
	py = &y;			//this address px, an int in this case.
	
	cout << "(endereco de memoria) px = " << px << "\t  (conteudo do endereco) *px = " << *px << endl;
	cout << "(endereco de memoria) py = " << py << "\t  (conteudo do endereco) *py = " << *py << endl;
	cout << endl;
	
	system("PAUSE");
	return 0;
}
