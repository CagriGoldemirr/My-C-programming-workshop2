#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>


int main()
{
    // isalnum asl�nda karakter s�n�f�n� kontorl eder ama sadewce harf veya say� olup olmad�g�n kontrole eder

   /* int number;
    printf("enter a number 0-255 :");
    scanf("%d",&number);
    printf("the character you entered :%c\n",number); // burada %c kullanmamz�n nedeni girdigimiz say�n�n asc�� degerini yazd�rmak
    if(isalnum(number)){ // A-Z,a-z,0-9
        printf("correct \n"); // isalnum  karakterin tipini s�ylerken asc�� degerine g�re soyluyor
    }
    else
        printf("wrong\n");*/
     //isalpha
    /*int number;
    printf("enter a number 0-255 :");
    scanf("%d",&number);
    printf("the character you entered :%c\n",number);
    if(isalpha(number)){  // isalpha da sadece buyuk ve kucuk harflerin sadece asc�� degerini yans�t�yor A-Z,a-z
        printf("correct \n");
    }
    else
        printf("wrong\n");*/


    // isdigit
    /*int number;
    printf("enter a number 0-255 :");
    scanf("%d",&number);
    printf("the character you entered :%c\n",number);
    if(isdigit(number)){ // isdigit te sadece say�lar� kontrol ediyor 0-9 ras�nda olup olmad�gn� kontrol ediyor

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



    printf("%c\n",toupper('n')); //toupper da bir kucuk harfi buyuk harfe cevirmek �c�n kullan�l�r
    printf("%d\n",toupper('m'));

    return 0;

}


     // isupper sadece buyuk harfleri yazd�r�r A-Z
     // isspace  de karakterin bosluk karakteri olup olmad�g�n� s�yler asc�� degeri 32 olan�n soncu 1 adet bosluktur


