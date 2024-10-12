#include<stdio.h>
#include<stdlib.h>

//kapalý bir kaptaki gazýn basýncýný hesaplayan program
// basýnç =(mol sayýsý*R sabiti * sýcaklýk)/hacim


int main()
{
    float b,r,sum;
    int  m,h,s;
    r = 0.82;


    printf("basýncý giriniz");
    scanf("%f",&b);
    printf("mol sayýsýný giriniz");
    scanf("%d",&m);
    printf("sýcaklýk giriniz");
    scanf("%d",&s);
    printf("hacim giriniz");
    scanf("%d",&h);
    b = (m*r*s)/h;
    printf("%f",b);




    return 0;
}




