#include <iostream>

int main(void){
	std::cout<<"Enter two numbers: "<<std::endl;
	int v1, v2;
	std::cin>>v1>>v2;
	int lower, uper;
	if(v1 <= v2){
		lower = v1;
		uper = v2;
	}
	else{
		lower = v2;
		uper = v1;
	}
	int i = 0;
	for(int val = lower;val<=uper;val++){
		std::cout<<" "<<val;
		i++;
		if(i == 10){
			i=0;
			std::cout<<std::endl;
		}
	}
}