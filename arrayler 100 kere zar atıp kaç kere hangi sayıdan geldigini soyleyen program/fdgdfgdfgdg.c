#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 /// 100 kere zar at�p en sonda da su kadar su sy�dan geldi bu kadasr bu say�dan gelid

 //bununtekrar kendin dene 73. video

 int  i,zar[7],sayi,k;
 int main()
 {  srand(time(NULL));
    for(i=0;i<100;i++)
    {
        sayi = rand()%6+1;
        printf("%d\n",sayi);
        zar[sayi]++;




    }
    for(i=1;i<7;i++){
        printf("%d  say�s�ndan %d tane\n",i,zar[i]);


    }





    return 0;
 }
