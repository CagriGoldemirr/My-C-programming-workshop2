#include<stdio.h>
#include<stdlib.h>
/// pointerlar adresini tuttuklar� variableleri i�lemektir


int main()
{
    int x =7;
    int* ptr =&x;
    /// x degiskenini kulllanmadan sadece ptr kullnarak x in degerini degistirebilir myiz EVET
    printf("adress of x : %x\n",ptr);
    printf("adress of ptr : %x\n",&ptr);
    printf("value of x :%d\n",*ptr);
    *ptr =19; /// boyle yaprak *ptr== x oldugu icin degerini art�k 19 yapm�s oluyorum
    printf("new value of x :%d\n",*ptr);
    printf("value of x : %d",x);

    return 0;

}
