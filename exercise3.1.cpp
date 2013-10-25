#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	long result = 1;
	int base, exponent;
	cout<<"Enter base and exponent:"<<endl;
	cin>>base>>exponent;
	if ( exponent < 0 ){
		cout<<"Exponent can not be smaller than zero."<<endl;
		return -1;
	}
	else {
		for( int i = 0; i < exponent; i++)
			result *= base;
	}
	cout<<base<<" rised to the power of "<<exponent<<":"<<result<<endl;
	return 0;
}