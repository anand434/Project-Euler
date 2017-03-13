// Project Euler 
// Problem - Lexicographic permutations

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

// this function is for sorting purpose
int compare(const void * a , const void * b)
{    return (*(char *)a - *(char *)b); }

// a utility function to swap two chars
void swap(char* a , char* b){
    char t = *a;
    *a = *b;
    *b = t;
}

// Function to index for ceiling element
int findCeil(char str[] , char first , int l , int h){
    int ceilIndex = l;

    for(int i=l+1; i <= h; i++)
        if(str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;

    return ceilIndex;
}
// Printing all Permutaion values
void sortedPermutation(char str[]){
    
    int size = strlen(str);
    
    // instead of qsort() use
    // #include<algorithm> for sort() method
    qsort(str , size , sizeof(str[0]) , compare);
    
    bool isFineshed = false;
    int count = 1;
    //true
    while(!isFineshed){
        if(count == 1000000){ 
            cout << str << "\n" ;
            break;
        }
        else 
            count++;
        
        int i;
        for(i = size-2 ; i >= 0; i--)    
            if(str[i] < str[i+1])
                break;
            
        if(i == -1)
            isFineshed = true;

        else{

            int ceilIndex = findCeil(str , str[i] , i+1 , size-1);

            swap(&str[i] , &str[ceilIndex]);

            qsort(str + i + 1 , size - i - 1 , sizeof(str[0]) , compare);
        }    
    }    
}

int main(){
    char str[] = "0123456789" ;
    sortedPermutation(str);  
    return 0;
}

