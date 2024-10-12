#include<stdio.h>
#include<stdlib.h>

//veriþeri bir satýr sütün gibi depolamak istiyorsak
//çok boyutlu dizilere ihtiyaç duyyuoruz
// biz c de genellikle en fazla 3 boyutlu dizi kullanýyoruz daha fazlasý
//bellekte çok yer kaplýyor eger >3 den fazla olmasý gereiyorsa baska
//yöntemler kullanmamýz gerek

//en cok 3 boyutlu diziler kullanýlýr týpký bir tablo gibi
// cok boyutlu array ,arraylerin oldugu bir dizidir
int main()
{
    int matrix[2][3]={{2,5,7,},{5,8,0}}; // buradad 2 satýr sayýsý gibi dusun 3 ü de sütun sayýsý gibi dusun satýr sayýsý = kume icinde kac tane kume var onu soyluyor sutun sayýsýda kumelerýn icindeki deger adedini soyluyor

    printf("%d\n",matrix[0][0]); // ilk koseli parantein ýcýndeki index kacýncý indexteki  kümedenin icine girmemiz gerektigini soyluyor
    printf("%d\n",matrix[0][2]); // ikinci koseli parnatez ise o girilen koseli paranteizn icindeki kacýncý index oldugunu soyluyor
    printf("%d\n",matrix[1][2]);
    printf("%d\n",matrix[0][0]);

//cok boyutlu dizideki elemanlarý nasýl degistirirz?
    matrix[0][2] =100;
    printf("%d",matrix[0][2]);
    int i=0,j=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\n",matrix[i][j]);
    }}


    return 0;
}
