// Project Euler - smallest multiple
// problme - 5
#include <iostream>
using namespace std;

int main()
{
	int i;
	long int num = 2520;
	for(int i=11;i<=20;i++){
		if(num % i != 0){
			long int temp = num;
			while(num % i == 0)
				num += temp; 
		}
	}
	cout<<num;
	
	return 0;
}
