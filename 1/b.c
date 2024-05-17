#include<stdio.h>

int main(){
    //function diclaration
    void i();
    void ii();

    i();
    ii();
}

//user defined functions
void i()
{
    int a = 4, b = 5;
    b = a++ + a--;
    a = ++b + b--;
    printf("\n\n(i)\n\ta = %d\n\tb = %d",a,b);
}
void ii()
{
    int x = 10;
    int b = x++;
    int c = b--;
    int a = -b + c++;
    printf("\n\n(ii)\n\ta = %d\n\tb = %d\n\tc = %d\n", a, b, c);
}