#include<stdio.h>
#include<stdlib.h>

//strlen,strcat,strcpy
int main()
{
    char alphabet[] = {"abcdefghijklmnoprstuvyzxw"};

    printf(" lenght is  %d\n",strlen(alphabet));
    printf(" size  is  %d\n",sizeof(alphabet));

    //strlen fonksiyonu bir stringin uzunlugunu olcer
  // uzunlufg ile buyukluk arasýnda 1 fark var neden
  // cunku size of da \0 da sayiliyor

  printf("------------\n");
  // eger iki stringi birleþstirmek istiyorsam da
    char kelime1[30] = "hello ";
    char kelime2[] = "world";
    strcat(kelime1,kelime2);  // buradaki islem kelime 2 yi kelime 1 e ekliyor yani cümleyi kelime 1 tutuyor
    printf(" new sentence   is:%s\n",kelime1);


    printf("------------\n");

    char kelime3[30] = "hello  world"; // ben buradad kelim3 u kelime 4 de kopyalamak istiyorum
    char kelime4[30];
    strcpy(kelime4,kelime3); // burdad ilk ifade (kelime4) üzerine yazdirilan,ikinci ifade ise(kelime3) kopyalanilan ifade
// kelime 3 u kelime 4 un uzerne yapistiriyoruz.
    printf("%s\n",kelime4);


    printf("------------\n");

    //***** stringleri kiyaslamak istiyorsam neler yapmaliyim *****

    char kelime5[] = "hello  my country";
    char kelime6[] = "hello  my country";
    if(strcmp(kelime5,kelime6)==0){ // cmp = compare
    printf("they are same");
    }
    else
        printf("they are not same");





    return 0;

}
