#include<stdio.h>
#include<stdlib.h>


// tek bir harf ise %c ama kelime,cmle ise %s
struct students{  // burada bir degislen turu tanimliyoruz
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;


};
// struct kurma
///birkaç variable turunu tek bir yerde gruplandýrmak icin
// ben oyle bir variable istiyorum ki (ornek olarak) hem harf,hem sayi,hem string tutsun
// kendi variable turumu oluturabiliyorum
// ornek olarak ben bir okuldaki ogrencilerin not ve adlarini tutmam gerekiyor
// bunu iki tane array tutarak yaparým ama struct sayesinde hem ismi hem notu tutabililrm
int main()
{
    int myarray[]={1,2,3,4,5};
    char message[30] = {"cagri goldemir"};

    struct students x;
    // struct students x = ['A','cagri','goldemir',1923,95.23];  boyle de tanıimlayabilirdim
    // ama bu üstteki sattirin siralamasi kafaya göre degil veri turlerinini sirasina gore
    //x.myLetter;
    //x.name;
    //x.lastname;
    //x.no;
    //x.score;



    x.myLetter ="A";
    x.name = "cagri";
    x.lastname = "goldemir";
    x.no = 1923;
    x.score = 95.23;

    printf("letter : %c\n",x.myLetter);
    printf("name  : %s\n",x.name);
    printf("lastname  : %s\n",x.lastname);
    printf("no : %d\n",x.no);
    printf("score : %f\n",x.score);

    // x adinda bir variable var turu de struct
    // STRUCT GÝRÝS VÝDEOSUNUN 2. YARISININ ÝZLE

    return 0;
}
