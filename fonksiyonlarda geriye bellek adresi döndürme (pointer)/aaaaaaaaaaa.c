 #include<stdio.h>
#include<stdlib.h>
#include <math.h>

float* squareroot(float* ptr);

int main()
{

    float number;
    float* ptr = &number;
    printf("enter number \n");
    scanf("%f",&number);
    printf("adress of number : %x\n",&number);
    ptr = squareroot(&number);
    printf("square root of number : %.2f\n\n",*ptr);







    return 0;
}
float* squareroot(float* ptr)
{
    *ptr = sqrt(*ptr);
    return ptr;






}
