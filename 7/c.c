#include<stdio.h>

int main(){
    long factorial(int n);
    printf("%ld\n",factorial(5));
    return 0;
}

long factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}