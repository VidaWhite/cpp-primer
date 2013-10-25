#include <iostream>
#include <math.h>

int main(){
	int base, exponent;
	long result = 1;
	std::cout<<"enter base and exponent:"<<std::endl;
	std::cin>>base>>exponent;
	if(exponent < 0){
		std::cout<<"exponent can't be smaller than 0."<<std::endl;
		return -1;
	}
	else if(exponent > 0){
		for(int cnt = 0; cnt < exponent; cnt++)
			result*=base;
	}
	std::cout<<base
		     <<" rised to the power of "
			 <<exponent<<": "
			 <<result<<std::endl;
	/*int ival = 1.01;
	std::cout<<ival<<std::endl;*/
	return 0;
}