#include <iostream>

class Base{
	protected:
		int BasInt;
};

class Derivada1 : virtual public Base {};
class Derivada2 : virtual public Base {};

class SuperDerivada : public Derivada1, Derivada2{
	public:
		int RetInt(){
			return BasInt; //no ambiguity, because Base is virtual in Derivada1 and Derivada2
		}
};

int main(){
	return 0;
}