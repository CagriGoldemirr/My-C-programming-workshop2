#include<stdio.h>
#include<stdlib.h>

//veri�eri bir sat�r s�t�n gibi depolamak istiyorsak
//�ok boyutlu dizilere ihtiya� duyyuoruz
// biz c de genellikle en fazla 3 boyutlu dizi kullan�yoruz daha fazlas�
//bellekte �ok yer kapl�yor eger >3 den fazla olmas� gereiyorsa baska
//y�ntemler kullanmam�z gerek

//en cok 3 boyutlu diziler kullan�l�r t�pk� bir tablo gibi
// cok boyutlu array ,arraylerin oldugu bir dizidir
int main()
{
    int matrix[2][3]={{2,5,7,},{5,8,0}}; // buradad 2 sat�r say�s� gibi dusun 3 � de s�tun say�s� gibi dusun sat�r say�s� = kume icinde kac tane kume var onu soyluyor sutun say�s�da kumeler�n icindeki deger adedini soyluyor

    printf("%d\n",matrix[0][0]); // ilk koseli parantein �c�ndeki index kac�nc� indexteki  k�medenin icine girmemiz gerektigini soyluyor
    printf("%d\n",matrix[0][2]); // ikinci koseli parnatez ise o girilen koseli paranteizn icindeki kac�nc� index oldugunu soyluyor
    printf("%d\n",matrix[1][2]);
    printf("%d\n",matrix[0][0]);

//cok boyutlu dizideki elemanlar� nas�l degistirirz?
    matrix[0][2] =100;
    printf("%d",matrix[0][2]);
    int i=0,j=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\n",matrix[i][j]);
    }}


    return 0;
}
