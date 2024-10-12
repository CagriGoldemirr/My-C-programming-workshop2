#include<stdio.h>
#include<stdlib.h>


int main()
{
    char name[7];  // bu ifade bellekte 7 tane yan yana kutucugu ayýrýyor ve aslýnda her bir kutucuk da bir indextir
    printf("ilk elemanýn adresi %x\n",&name[0]);
    printf("arrayin adi %x",name);
    /// bu ust satirdaki kodlardan cikacak en ONEMLÝ SONUC  bir arrayin adresinin adi ===  o arrayin ilk elemanýnýn bellek adresidir





    return 0;
}
