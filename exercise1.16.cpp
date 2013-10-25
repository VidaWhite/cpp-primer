#include <iostream>

int main(void){
	int v1, v2;
	std::cout<<"Enter two numbers: "<<std::endl;
	std::cin>>v1>>v2;
	if(v1 >= v2)
		std::cout<<"The bigger one is "<<v1<<"."<<std::endl;
	else
		std::cout<<"The bigger one is "<<v2<<"."<<std::endl;
}