#include<stdio.h>
#include<stdlib.h>


double getSquare(double *ptr);
int main()
{
    double number,result;
    printf("enter a number ");
    scanf("%lf",&number);
    result = getSquare(&number); // burayad number degiskeniinn adresibi girmemizin sebebi number ın adresini *ptre alıyor bu adresi alınca numberın degiskenınıe ulasıyor
    printf("square number is : %f",result);






    return 0;
}

double getSquare(double *ptr)
{


    return *ptr * *ptr;

}
