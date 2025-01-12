#include <iostream>
using namespace std;

int cube(const int&);
float cube(const float&);
double cube(const double&);

int main(){
	cout << cube(876) << endl;
	
	cout << cube(12.34) << endl;
	
	cout << cube(double(4567.35)) << endl;
	
	system("PAUSE");
	
	return 0;
}

int cube(const int& n){
	return n*n*n;
}

float cube(const float& n){
	return n*n*n;
}

double cube(const double& n){
	return n*n*n;
}
