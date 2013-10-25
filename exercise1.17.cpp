#include <iostream>

int main(void){
	std::cout<<"Enter 5 numbers:"<<std::endl;
	int a[5];
	int c=0;
	for(int i = 0; i<5;i++){
		std::cin>>a[i];
		if(a[i]<0)
			c++;
	}
	std::cout<<"Number of minus is "<<c<<std::endl;
}