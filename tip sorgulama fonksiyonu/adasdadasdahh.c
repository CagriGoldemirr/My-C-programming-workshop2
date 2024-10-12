#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>


int main()
{
    // isalnum aslýnda karakter sýnýfýný kontorl eder ama sadewce harf veya sayý olup olmadýgýn kontrole eder

   /* int number;
    printf("enter a number 0-255 :");
    scanf("%d",&number);
    printf("the character you entered :%c\n",number); // burada %c kullanmamzýn nedeni girdigimiz sayýnýn ascýý degerini yazdýrmak
    if(isalnum(number)){ // A-Z,a-z,0-9
        printf("correct \n"); // isalnum  karakterin tipini söylerken ascýý degerine göre soyluyor
    }
    else
        printf("wrong\n");*/
     //isalpha
    /*int number;
    printf("enter a number 0-255 :");
    scanf("%d",&number);
    printf("the character you entered :%c\n",number);
    if(isalpha(number)){  // isalpha da sadece buyuk ve kucuk harflerin sadece ascýý degerini yansýtýyor A-Z,a-z
        printf("correct \n");
    }
    else
        printf("wrong\n");*/


    // isdigit
    /*int number;
    printf("enter a number 0-255 :");
    scanf("%d",&number);
    printf("the character you entered :%c\n",number);
    if(isdigit(number)){ // isdigit te sadece sayýlarý kontrol ediyor 0-9 rasýnda olup olmadýgný kontrol ediyor

        printf("correct \n");
    }
    else
        printf("wrong\n");*/
    //islower
    /*int number;
    printf("enter a number 0-255 :");
    scanf("%d",&number);
    printf("the character you entered :%c\n",number);
    if(islower(number)){ // bu da sdece kucuk harfleri veriri
            printf("correct \n");
    }
    else
        printf("wrong\n");*/



    printf("%c\n",toupper('n')); //toupper da bir kucuk harfi buyuk harfe cevirmek ýcýn kullanýlýr
    printf("%d\n",toupper('m'));

    return 0;

}


     // isupper sadece buyuk harfleri yazdýrýr A-Z
     // isspace  de karakterin bosluk karakteri olup olmadýgýný söyler ascýý degeri 32 olanýn soncu 1 adet bosluktur


