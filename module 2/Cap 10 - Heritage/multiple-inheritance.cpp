#include <iostream>
using namespace std;

class X
{};

class Y
{};

class Z : public X, public Y //Z inherits X and Y
{};

int main(){
	return 0;
}
