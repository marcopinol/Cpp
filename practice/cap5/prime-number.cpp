#include <iostream>
using namespace std;

int isPrime(int x);

int main(){
	int x = 29;
	
	cout << isPrime(x) << endl;
	
	system("PAUSE");
	
	return 0;
}

int isPrime(int x){
	if(x <= 2)
		return 0;
	else{
		for(int i = 2; i * i <= x; i++){	
			if(x % i == 0)
				return 0;
		}
		return 1;
	}          
}
