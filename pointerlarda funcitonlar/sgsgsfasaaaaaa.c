#include<stdio.h>
#include<stdlib.h>


double getSquare(double *ptr);
int main()
{
    double number,result;
    printf("enter a number ");
    scanf("%lf",&number);
    result = getSquare(&number); // burayad number degiskeniinn adresibi girmemizin sebebi number �n adresini *ptre al�yor bu adresi al�nca number�n degisken�n�e ulas�yor
    printf("square number is : %f",result);






    return 0;
}

double getSquare(double *ptr)
{


    return *ptr * *ptr;

}
