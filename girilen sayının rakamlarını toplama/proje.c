#include<stdio.h>
#include<stdlib.h>




int main()
{
    int number,x,y,z,m;
    printf("4 basamaklı bir sayı giriniz ");
    scanf("%d",&number);
    x = (number)/1000;
    y = (number %1000)/100;
    z = (number)%100 /10;
    m = (number)%10;
    printf("%d",x+y+z+m);






    return 0;

}














