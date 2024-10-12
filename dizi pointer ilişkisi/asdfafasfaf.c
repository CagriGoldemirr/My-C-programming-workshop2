#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{

    /*char name[7]; // bu ifade bellekte ardý ardýna gelen 7 byte lýk yer kaplýyor
    printf("ilk elemanin adresi : %x\n",&name[0]);
    printf("arrayin adi : %x\n",name);
    // bu  ussteki iki kodun da ciktisi ayni bu da su anlama geliyor
    // arraylerin ana adresi en bastaki byteýn adresidir
    //ayrýca benim arrayimin ismi bir pointerdir
    /// !!!!bir arrayýn adý o arrayin ilk elemaninin bellek adresidir(pointerdýr)(yýldýzsýz olan)
    /* name = &name[0] adres acýsýndan bakýyoruz burada yani
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
    printf("ilk elemanýn adresi : %x\n",&myLetters[0]);
    printf("ilk elemanýn adresi : %x\n",myLetters);
    printf("------------\n");

    printf("2. elemanýn adresi : %x\n",&myLetters[1]);
    printf("2. elemanýn adresi : %x\n",myLetters+1);
    printf("------------\n");

    printf("5. elemanýn adresi : %x\n",&myLetters[4]);
    printf("5. elemanýn adresi : %x\n",myLetters+4);
    printf("------------\n");

    for(i=0;i<7;i++){
        printf("%d. eleman : %c\n",i,*myLetters+i);
        printf("****\n");
    }

    printf("ilk elemanýn degeri : %c\n",*myLetters);
    printf("ilk elemanýn degeri : %c\n",myLetters[0]);

    printf("ikinci elemanýn degeri : %c\n",*myLetters+1);
    printf("ikinci  elemanýn degeri : %c\n",myLetters[1]);







    return 0;
}
