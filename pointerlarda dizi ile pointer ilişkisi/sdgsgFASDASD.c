#include<stdio.h>
#include<stdlib.h>


int main()
{
    char name[7];  // bu ifade bellekte 7 tane yan yana kutucugu ay�r�yor ve asl�nda her bir kutucuk da bir indextir
    printf("ilk eleman�n adresi %x\n",&name[0]);
    printf("arrayin adi %x",name);
    /// bu ust satirdaki kodlardan cikacak en ONEML� SONUC  bir arrayin adresinin adi ===  o arrayin ilk eleman�n�n bellek adresidir





    return 0;
}
