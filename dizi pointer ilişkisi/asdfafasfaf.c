#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{

    /*char name[7]; // bu ifade bellekte ard� ard�na gelen 7 byte l�k yer kapl�yor
    printf("ilk elemanin adresi : %x\n",&name[0]);
    printf("arrayin adi : %x\n",name);
    // bu  ussteki iki kodun da ciktisi ayni bu da su anlama geliyor
    // arraylerin ana adresi en bastaki byte�n adresidir
    //ayr�ca benim arrayimin ismi bir pointerdir
    /// !!!!bir array�n ad� o arrayin ilk elemaninin bellek adresidir(pointerd�r)(y�ld�zs�z olan)
    /* name = &name[0] adres ac�s�ndan bak�yoruz burada yani
    name+1 = &name[1]   name+1 in adresi ile &name[1] adresi ayni
    name+2 = &name[2]
    name+3 = &name[3]
    name+4 = &name[4]
    printf("adress : %x\n",name+1);
    printf("adress : %x\n",&name[1]);


    printf("deger : %c\n",name[0]); // degerleri de boyle yazdiriyoruz
    printf("deger : %c\n",*name);   // *name+0 == name[0],*name+1 == name[1]
    */

    char myLetters[7] = {'a','b','c','d','e','f','g'};
    int i;
    printf("ilk eleman�n adresi : %x\n",&myLetters[0]);
    printf("ilk eleman�n adresi : %x\n",myLetters);
    printf("------------\n");

    printf("2. eleman�n adresi : %x\n",&myLetters[1]);
    printf("2. eleman�n adresi : %x\n",myLetters+1);
    printf("------------\n");

    printf("5. eleman�n adresi : %x\n",&myLetters[4]);
    printf("5. eleman�n adresi : %x\n",myLetters+4);
    printf("------------\n");

    for(i=0;i<7;i++){
        printf("%d. eleman : %c\n",i,*myLetters+i);
        printf("****\n");
    }

    printf("ilk eleman�n degeri : %c\n",*myLetters);
    printf("ilk eleman�n degeri : %c\n",myLetters[0]);

    printf("ikinci eleman�n degeri : %c\n",*myLetters+1);
    printf("ikinci  eleman�n degeri : %c\n",myLetters[1]);







    return 0;
}
