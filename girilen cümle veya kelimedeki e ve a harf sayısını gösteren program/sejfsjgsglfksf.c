#include<stdio.h>
#include<stdlib.h>

 //nokta ile biten bir c�mleyi karakter arrayine okutal�m sonra
 //c�mlede ka� tane a ve e harfi oldugunu heasplayal�m




int main()
{   int k =0,m=0;
    char x[100];
    int i =0;


    printf("enter a sentence\n :");

    do{

    scanf("%c",&x[i]);
    if(x[i]=='e'){
        k=k+1;
    }
    else if(x[i] =='a'){

        m=m+1;

    }
     else
        continue;


    i++;
    }while(x[i] != '.');

    printf("%d tane e harfi var \n",k);
    printf("%d tane  a harfi var ",m);





    return 0;

}
