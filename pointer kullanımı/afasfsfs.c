#include<stdio.h>
#include<stdlib.h>
    // pointerlar��n ana kullan�m amac� adresini tuuttuklar� variableleri islmeek icin kullan�l�r;
    //pointerlar ramda veriler �zerinde degisim,donusum yapabilir
int main()
{
     /*int x =7;
    int* ptr = &x;
    printf(" x is : %d\n",*ptr);
    printf("adress of x : %x\n",&x);
    printf("ptr is  %x\n",ptr);
    printf("adress of ptr :%x \n",&ptr);



    // *ptr ile tan�mlad�g�m�z x degiskeninin degerini degistirebililriz   yani x = *ptr
    *ptr =19;
    printf("x is : %d\n",*ptr);
    printf("new value of x  %d",x);*/


    /*double x = 3.14;
    double* ptr1= &x;
    double* ptr2 = &x;
    printf("ptr1  is : %f\n",*ptr1);
    printf("ptr2 is %f\n",*ptr2);
    *ptr2 = 23.9;
    printf("ptr1 is :%f\n",*ptr1); // ptr1 in degeri olan x in adresini degistirmeme ragmen neden *ptr2 nin c�kt�s� degisti cunku ptr1 ve ptr2 d adresini x ten o y�zden degerleiri beraber degisiyor
*/

// pointerlerin degerlerinin artt�r�l�p azalt�lmas� asl�nda b�u islem sadece bulunan adresi saga veya sola kayd�r�r

    // pointeren byten�n artt�r�p azalt�lmas�
    // eger pointerin degeri artt�rl�rsa bellekteki bir sonraki alani isgal eder
    char name = 'f';
    char* ptr = &name;
    printf("%x\n",ptr);
    ptr++;   //char �n veri boyutu 1 byte oldugu �c�n adreste 1 adm artcacak ama eger o yeni adresimizde baska bir deger varsa yan� biz oraya hareket etmeden once oras� bosdegilse o zaman da bir baska verininin alan�n� isgal etmis oluruz
     // ptr+=3 deseydik 3 ad�m atlayacakt�  ayr�ca veri turu char degilde int olsayd� o zaman her bir veri 4 byte olacakt� ve 3 3 artt�g� �c�n 12 birim saga veya sola kayacakt�
    printf("%x\n",ptr);


    return 0;
}
