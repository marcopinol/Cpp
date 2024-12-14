#include <iostream>
//THIS CODE IS DIDACTIC, AND DOESN'T COMPILE	

extern int j; //externs variables are declared outside of any function, and can be accessed by any other function 
			  //andwill start with value 0 if not initialized
			  
extern int k = 237; //this variable class is created on compile time, different from auto variables that are created on runtime.

int main(){
	auto int n; //auto is default class for any variable, they are created in runtime, especificaly when the program locates their instruction, after 
			    //the execution of their code block, it's destroyed
				//they can be only accessed by instructions in the same code block and after your statement
				//via reference, some functions can access them too
				//they start with random value on their initialization, called garbage.		
	
	return 0;
}
