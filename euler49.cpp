#include <bits/stdc++.h>
using namespace std;

void genPrims(long n){
	for(long i = 2; i <= sqrt(n) ; i++)
}

void swap(char *x , char *y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char *a , int l , int r){
	if(l == r)
		cout << a << "\n";
	else {
		for(int i = l ; i <= r ; i++){
			swap((a+l) , (a+i));
			permute(a , l+1 , r);
			swap((a+l) , (a+i)); //backtrack
		}
	}
}

int main(){
	char str[] = "1487" ;
	int n = strlen(str);
	permute(str , 0 , n-1);
	return 0;
}