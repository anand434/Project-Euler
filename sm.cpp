#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
vector<int>::iterator i;
void findPrimes(int num){
	v.push_back(2);
	int count = 0;
	for(int i=3;i<=num;i+=2){
		for(int j=1;j<=i;j++)
			if(i%j==0)
				count++;
			if(count == 2)
				v.push_back(i);
			count=0;
	}
}
//number of i multiples
// 2*3*2*5*2*7*2*3*2*11* 
// 13 14 15 16 17 18*19 
int main(){
	int num =20;
	int ar[20] ,iz=0;
	long int prod = 1;
	findPrimese(num);
	for(i=v.begin();i!=v.end();i++){
		if(*i == 2)
			ar[iz] = *i;
		else if(*i == 3)
			ar[iz] = 3;
		else if(*i == 4)
	}
}
