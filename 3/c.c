#include <stdio.h>
#include<stdbool.h>

int main()
{
    //declaring the user defined function in the main function
    bool is_leap_year(int year);

    //Taking the year in question
    printf("Year: ");
    int Y=0;
    scanf("%d",&Y);

    //if Y is a leapyear, the function will return true. which will trigger he if statement
    if(is_leap_year(Y)) printf("\n%d is a leap Year\n",Y);
    //otherwis, Y is not a leap year
    else printf("\n%d is not a leap Year\n",Y);

    return 0;
}

//checks if the given integer is a leap year or not
bool is_leap_year(int year)
{
    //https://www.wikihow.com/Calculate-Leap-Years
    //we calculate if a number is evenly devisable by comparing the devised float number with a type casted integer number

    if(((year/4.0)==(int)(year/4.0)) && ((year/100.0)!=(int)(year/100.0))) return true;
    else return false;
}



/*Simplified:
#include<stdio.h>

int main(){
    printf("Year: ");
    int Y=0;
    scanf("%d",&Y);

    if(((Y/4.0)==(int)(Y/4.0)) && ((Y/100.0)!=(int)(Y/100.0))){
        printf("\n%d is a leap Year\n",Y);
    }
    else{
        printf("\n%d is not a leap Year\n",Y);
    }
    return 0;
}
*/