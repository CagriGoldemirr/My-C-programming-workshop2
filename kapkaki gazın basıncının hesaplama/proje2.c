#include<stdio.h>
#include<stdlib.h>

//kapal� bir kaptaki gaz�n bas�nc�n� hesaplayan program
// bas�n� =(mol say�s�*R sabiti * s�cakl�k)/hacim


int main()
{
    float b,r,sum;
    int  m,h,s;
    r = 0.82;


    printf("bas�nc� giriniz");
    scanf("%f",&b);
    printf("mol say�s�n� giriniz");
    scanf("%d",&m);
    printf("s�cakl�k giriniz");
    scanf("%d",&s);
    printf("hacim giriniz");
    scanf("%d",&h);
    b = (m*r*s)/h;
    printf("%f",b);




    return 0;
}




