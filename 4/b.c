#include<stdio.h>
int main(){
    int sumE=0;
    int sumO=0;

    int n=0;


    do{
        if(n%2==0){
            sumE+=n;
        }
        else sumO+=n;

        n++;
    }
    while(n<=50);

    printf("\nSum of even numbers from 1 to 50 = %d\n",sumE);
    printf("\nSum of odd numbers from 1 to 50 = %d\n",sumO);

    return 0;
}