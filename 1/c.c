#include<stdio.h>

int main(){
    //function diclaration in main function
    float celciusToFahrenheit(float Celcius);
    float C;
    scanf("%f",&C);

    //directly printing the return value of the custom function
    printf("\n%.2fº Celcius is %.2fº Fahrenheit\n",C,celciusToFahrenheit(C));
    //%.2f only takes value to 2 decimal places
}

//remember to put atleast one of the 
//constant values as a float,
//otherwise the devised answer of (9.0/5.0)
//would become an integer

float celciusToFahrenheit(float Celcius){
    return (((9.0/5.0)*Celcius)+32);
}


//Simplified version:
/*
    #include<stdio.h>
    int main(){
        float C;
        scanf("%f",&C);
        printf("\n%.2fº Celcius is %.2fº Fahrenheit\n",C,(((9.0/5.0)*C)+32));
    }
*/