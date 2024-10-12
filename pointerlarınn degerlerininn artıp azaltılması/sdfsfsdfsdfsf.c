#include<stdio.h>
#include<stdlib.h>
// bir pointerın bytenınn artırıp azaltılması
/// pointer varableleri tam sayılar ile artıp azalabilir
// diyelimki elimzde char verş turunden deger var ben bu charı 1 byte arttırısam 1 birim saga kayar ramda ve adreside
///1 birim artar azaltırsamda tam tersi olur
///  ama benim elimde int olsa(4byte) ben bunu 1 kere arttırmak istiyorsam bu 4 byte saga veya sola kayar
//// kayma islemleri boyutu*arttılma miktarı seklinde oluyor
/// ornek vermek gerekirse diyeilimki elimde double var(8 byte) ben bunu 1 kere arttırmak
/// istiyorsam 1*8 den 8 birirm saga kaycak
/// ptr+=4 deersem ve ptr int ise 16 byte saga kayacak
int main()
{
    /*int x =7;
    int* ptr=&x;
    printf("adress of x : %x\n",ptr); //adress of x : 61fe14
    ptr++;
    printf("adress of x : %x\n",ptr); // adress of x : 61fe18
    // eger 61fe18 adresinde onemli bir veri varsa ben buı tasima islemini yaptıgım icin oradaki onemli oolan veriyi yok etmis
    //yerime kendi tasimis oldugum veriyi koymus olurum*/

    char name ='f';
    int sayi = 12;
    double sayi2 = 3.1456;

    char* ptrname = &name;
    int* ptrsayi = &sayi;
    double* ptrsayi2 = &sayi2;
    printf("adress of name : %x\n",ptrname);
    printf("adress of sayi : %x\n",ptrsayi);
    printf("adress of sayi2 : %x\n",ptrsayi2);
    printf("------------\n");
    ptrname+=4;
    printf("new adress of name : %x\n",ptrname);
    ptrsayi++;
    printf("new adress of sayi : %x\n",ptrsayi);
    ptrsayi2 = ptrsayi2 +2;
    printf("new adress of sayi2 : %x\n",ptrsayi2);



    return 0;
}
