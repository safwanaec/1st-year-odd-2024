#include<stdio.h>
int main(){
    //the given series is the fibonacci series
    //we are asked to print to the 8th number of the fibonacci series
    //we will take 'i' as the starting number which will change at every iteration
    //'n' as the end of the sequence
    //'a' and 'b' as two latest numbers of the sequence who we will keep track of
    //'temp' will be needed to swap the value of 'a' and 'b'
    int i=0,n=8,a=0,b=1,temp;

    while(i<n){
        
        //for the 1st and second numbers of the sequencee, we will print them individually
        if(i==0){
            printf("%d ",a);
            i++;
        }
        else if(i==1){
            printf("%d ",b);
            i++;
        }
        //for the numbers from the 3rd of the sequence to infinity, we can use the sum of the previous two numbers
        //and swap them accordingly for next itteration 
        else{
            temp = b;
            b = a+b;
            a = temp;
            printf("%d ",b);
            i++;
        }
    }
    return 0;
}

/*simplify:
#include<stdio.h>
int main(){
    int i=0,a=0,b=1,temp;

    while(i<8){
        if(i==0){
            printf("%d %d ",a,b);
            i+=2;
        }
        else{
            temp = b;
            b = a+b;
            a = temp;
            printf("%d ",b);
            i++;
        }
    }
    return 0;
}
*/


//since they told us to just print the given series using a while loop, we could do this...
/*Trick(might get you a 0 but is technically not wrong):
#include<stdio.h>
int main(){
    int i=0;
    while(i<1){
        printf("0 1 1 2 3 5 8 13");
        i++;
    }
    return 0;
}
*/
//idk use at your own risk