#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x =7;
    int* ptr = &x; // bu ptr adresinde sadece ve sadece bir adres tutabilirz tuttugu adresin ýcýndekþ degeredde bir integer anlamýna geliyor
    // aslýnda ptr pointeri 7 ninn adresini tutuyor 7 de bir int oldugu ýcýn o yüzden int ptr yazdýk
     // ptr den onceki int pointeriýn türü degildir oranýn int olmasýnýn sebebi 7 nin bir integer olmasýdýr x in adresi ile ptr nin degeri ayný sey
     printf("x = %d \n",x);
     printf("adress of x :%x\n",&x); // x in bulundugu adresi yazdırır
     printf("ptr is :  :%x\n",ptr); // x in adresini ptr degiskeni tuttugu icin bu da x in adresini yazdıracak
     printf("adress of ptr :%x\n",&ptr);
     printf("x variable :  %d\n",*ptr); // bu da *ptr ifadesi sayesinde x in ya da ptr nin adresin, degil ptr nn degeri olan x adresindeki x degerini yazdýrýyor

    // adres yazdormak istiyorsam & kullanmalýyým parametreden once

    printf("------------\n");
    char harf = 'e';
    char* ptr2 = &harf;
    printf("harf is : %c\n",harf);
    printf("adress of harf %x\n",&harf);
    printf("ptr2 is :%x\n",ptr2);
    printf("adress of ptr2 : %x\n",&ptr2);
    printf("harf is : %c\n",*ptr2);


 //// bu ust taraf onemli hem pointer adresþeri yazdýrma,pointer ýn degisken oldugu ýcýn adresi ve degeri olmasý acýsýndan

    return 0;
}
