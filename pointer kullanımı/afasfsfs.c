#include<stdio.h>
#include<stdlib.h>
    // pointerlarýýn ana kullaným amacý adresini tuuttuklarý variableleri islmeek icin kullanýlýr;
    //pointerlar ramda veriler üzerinde degisim,donusum yapabilir
int main()
{
     /*int x =7;
    int* ptr = &x;
    printf(" x is : %d\n",*ptr);
    printf("adress of x : %x\n",&x);
    printf("ptr is  %x\n",ptr);
    printf("adress of ptr :%x \n",&ptr);



    // *ptr ile tanýmladýgýmýz x degiskeninin degerini degistirebililriz   yani x = *ptr
    *ptr =19;
    printf("x is : %d\n",*ptr);
    printf("new value of x  %d",x);*/


    /*double x = 3.14;
    double* ptr1= &x;
    double* ptr2 = &x;
    printf("ptr1  is : %f\n",*ptr1);
    printf("ptr2 is %f\n",*ptr2);
    *ptr2 = 23.9;
    printf("ptr1 is :%f\n",*ptr1); // ptr1 in degeri olan x in adresini degistirmeme ragmen neden *ptr2 nin cýktýsý degisti cunku ptr1 ve ptr2 d adresini x ten o yüzden degerleiri beraber degisiyor
*/

// pointerlerin degerlerinin arttýrýlýp azaltýlmasý aslýnda býu islem sadece bulunan adresi saga veya sola kaydýrýr

    // pointeren bytenýn arttýrýp azaltýlmasý
    // eger pointerin degeri arttýrlýrsa bellekteki bir sonraki alani isgal eder
    char name = 'f';
    char* ptr = &name;
    printf("%x\n",ptr);
    ptr++;   //char ýn veri boyutu 1 byte oldugu ýcýn adreste 1 adm artcacak ama eger o yeni adresimizde baska bir deger varsa yaný biz oraya hareket etmeden once orasý bosdegilse o zaman da bir baska verininin alanýný isgal etmis oluruz
     // ptr+=3 deseydik 3 adým atlayacaktý  ayrýca veri turu char degilde int olsaydý o zaman her bir veri 4 byte olacaktý ve 3 3 arttýgý ýcýn 12 birim saga veya sola kayacaktý
    printf("%x\n",ptr);


    return 0;
}
