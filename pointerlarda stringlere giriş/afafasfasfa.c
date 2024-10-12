#include<stdio.h>
#include<stdlib.h>

// pointerlarda stringlere giriþ
// string nedir?
// cift tirnak icine yazilan metinsel ifadelerdir
// phytondaki gibi stringler üzerinde matematiksel islem yapamayiz
//  burada bir stringi yazdirirken %s kullaniyoruz
int main()
{

       //  "string is very important"



       // "hello c";
        // "1923" // sayý olmasýna ragmen cift tirnaga aldigim icinartýk bu da bir string
        char greetings[]="hello world"; // ramda her bir karakteri ayri bir kareye koyuyor
        int i ;
        printf("%s\n",greetings);


         // bu direkt cümleyi-kelimeyi yazdýrýr ama ben tek tek karakter yazdirmak istiyorsam dongu ve %c kullanmaliyim

     for(i=0;i<10;i++){

            printf("%c\n",greetings[i]);
        }



        // her stringin sonunda bir \0(null)kararkteri vardýr bu da bos demektir
        // gorevi de stringin son buldugunun belirtir
        printf("--------\n");
        /// karakterleri de degistirebilirz
        char kelime[]="merhabalar";
        char kelime2[] = {'m','e','r','h','a','b','a','l','a','r','\0'};
        kelime[9] = 'y';
        printf("%s\n",kelime);
        // yukaridaki sekilde stringimin son harfini degistirebildim





        printf("-------\n");
        int size= sizeof(kelime)/sizeof(kelime[0]);
        int size2 = sizeof(kelime2)/sizeof(kelime2[0]);



        printf("size : %lu\n",size); // bunun sonunc 11 cýktý 11 karakterden olustugu icin


        printf("size2 :%lu\n",size2); // ama bunu sýnucu da 11 cýktý ama buradad null u ben kendim koydum yaný bunun sýnunda gizli bir null yok ben kendim koydugum icin

        // normlade benim keilme kararkterin 10 karakterden olusuyor ama ben sizeý yazýrýnca 11 cýktýýsný veriyor
        // cunku sondaki null karakteinide sayiyor da ondan
        for(i=0;i<size;i++){

            printf("% c ",*(kelime+i));
        }







    return 0;
}
