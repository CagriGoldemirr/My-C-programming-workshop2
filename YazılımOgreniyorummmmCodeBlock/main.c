#include <stdio.h>
#include <stdlib.h>

int main()
{
    // this is my comment

    /*printf("this is my first code");*/  // "/* -*/ kullaran o iki iþaret arasýndaki tüm satýrlarý etkisisz hale getirebilirim


     // <<<\N \B \>>>>
    printf("Hello cagri!\n");
    printf("my second c code\nMy third c code\nI love my life\n"); // böyle yan yana yazsak bile çýktýsý alt alta oluyor ama çok temiz bir kod deðil o yüzden printf yapýp alt alta yazmak çok daha verimli
    printf("my life is\b beutiful\n"); // \b simgesi bundan önceki karakteri siler ve yazdýrmaz
    printf("my life is very\b\b very hard\n"); // eðer bu simgeden iki tane kullanýrsak iki tane siler önüne geldiði karakterden eðer bu simgenin önündde boþluk olsaydý boþluðu da silecekti çünkü boþluðu da karakter sayýyor
    printf("my \bname is cagri\n");      // böyle olunca çýktýsýnda my ve name ifadeleri birleþik oldu çünkü \b ifadesi iki kelime arasýndaki boþluðu sildi


    printf("the best actor is  De Niro");
    printf("the best actor is\t  De Niro\n"); // eðer \ t kullanýrsam  kullandýðým þeyden önce veya sonra birkaç karakterlik boþluk býrakýr eğer iki tane kullanırsaö daha fazla bosluk bırakıyor

    // veri türleri ve veriable

    char myLetter ='c'; // char character den geliyor tek bir harf,sayı karakteri depoluyor hafızada yani ben şuan ben myLetter değerini kullanarak c değerine ulaşabilirim depoldığım için


    int MyNumber = 7; // bunlardaki amaç   ileride bana lazım olursa diye int char vs kullanarak c yi 7 yi vs yi depolamak
    float MyNumber2 = 1.56;
    double MyNumber3 = 1.456; // double ve float farklı float 7 basamak saklar ama double floatın basamak sayısının yetmediği yerde 16 basamaağa kadar depolayabilir
    printf("%c\n", myLetter); // char değişkeni/verisi olduğu için çnce değişkene ait özelliği yazsdım sonra virgğül koyup değişkenimin adını ayazdım

    printf("%d\n",MyNumber);

    printf("%f\n",MyNumber2);

    printf("%lf\n",MyNumber3);

    int MyNumber4 = 31;
    printf("my luckiest number is %d\n",MyNumber4);
    printf("%s\n","Where have you been?"); // böyle de deirekt yazdırabilirsin öncesinde herhangi bir değişken ataması yapmamdan bunun çıktısı direkt where have you been oluyor?
    printf("%d\n", 25); //böyle de deirekt yazdırabilirsin öncesinde herhangi bir değişken ataması yapmamdan  bunun çıktısı direkt 25 oluyor

    // İNT VERİ TÜRÜ KULLANIMI


//     int MyNumber5 = 45;
//     printf("%d\n",MyNumber5); // normalde böyle öğrendık ama ileride bu şekilde atama yapıp kullanmayacağız bunun yerine şçyle yapıcaz

       int MyNumber6;
       MyNumber6 = 78;
       printf("%d\n",MyNumber6); // BÖYLE KULLANICAZ  VE ÇIKTISI 78 OLACAK

       int MyNumber7;
       MyNumber7 = 99;
       MyNumber7 = 62;
       printf("%d\n",MyNumber7); // burada ilk olarak değişkene 99 atadaım sonra aynı değişkene 62 atadım ve çıktısı da 62 oldu böylece kolaylıkla değişkeni tekrar bir değere ataamk yerine böyle kullanabilirz


        //TOPLAMA ÇIKARMA ÇARPMA BÖLME
       int MyNumber8,MyNumber9,MyNumber10,sum; // böyle yaparak aynı türden ifadeleri yan yana yazabilirz tek tek uğraşmaya gerek yok ama burada SUM üçümün toplamına eşitlediğim için SUM ı da yazdık
       MyNumber8 = 14;
       MyNumber9 = 15;
       MyNumber10 = 16;
       sum=(MyNumber8 + MyNumber9 + MyNumber10);
       printf("%d\n", sum ); //


       // SCANF FONKSİYONU










































 // ctrl + shift + c seçilen satırı veya satırları yoruma alır
 // ctrl + shift + x tuşuna basarak da yorumu kaldırabililriz






    /* phyton da falandirekt printf(MyNumber) yazıp çıktı alıyorduk ama c de böyle olmuyor her bir değişekenin türü üçün ayrı bir karakter kullanmak gerekiyor
    bunlarar FORMAT SPECİFİERS diyoruz*/
    /*char için %c
    int için %d
    long int için %ld
    float için %f
    string için  %s
    unsigned için %u
    double için %lf
    kullanılıyor */




    return 0;






}
