#include <stdio.h>
#include <stdlib.h>

 // tbmmde toplantý yeter sayýsýnýn saðlanýp saðlanmadýðýný kontrol eden program

 // girirlen sayýnýn tek mi çift mi olduðunun bulan program


int main()
{
        //girilen sayının karekökünün bir tam sayı olup olmadığını bulan program
    int number,numberSQ;
    printf("enter number");
    scanf("%d",&number);
    numberSQ = ("f",sqrt(number));

    if( number< 0){
        printf("please enter positive number");

    }
    else{

        if (numberSQ*numberSQ == number){
            printf("number's squaere is  %d",numberSQ);
    }
        else{
            printf("%d has not squareroot ",number);
    }
    }

   //printf("%f",sqrt(16));//square rooot karekök demek






























   // girilen sayını özel sayı olup olmadığını yazdıran program

   // abcd = (ab+cd)((ab ve cd çarpım durumunda değil o rakamlar yan yana yazılmış ve yeni sayı oluşmuş)  özel sayı bu

   /*int number1,NewNumber;
   printf("enter your  number");
   scanf("%d",&number1);
   NewNumber = ((number1/100)+(number1%100))*((number1/100)+(number1%100));
   if(NewNumber == number1){



        printf("%d is a special number",number1);

   }
   else{

        printf("%d is not special number",number1);
   }*/

































   //kenar uzunluklarý girilen üçgenin türünü bulan programý yazýnýz

    // a = hipotenüs,b ve c diğer kenarlar
    // eğer açı 90 derece ise  a2 = b2 +c2 dik üçgen
    //eğer açı 90 dereceden küçükse  a2 < b2 +c2  dar açılı üçgen
    // eğer açı 90 dereceden büyükse a2 > b2 + c2 geniş açı

    /*int a,b,c;
    char longestside;
    printf("enter three edge");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
       longestside ='a';

    }
    else if (b>a && b>c){
        longestside = 'b';

    }else{
        longestside = 'c';


    }

    //-------------------------
    if(longestside == a){
            if(a*a == b*b+c*c){
                printf("dik ucgen");

            }
            else if(a*a>b*b+c*c){
                printf("genis acili ucgen");


            }
            else if(a*a<b*b+c*c){

                printf("dar acili ucgen");
            }
            else{
                printf("ucgen olusturmaz");
            }




    }
    else if(longestside == b){
            if(b*b == a*a+c*c){
                printf("dik ucgen");

            }
            else if(b*b>a*a+c*c){
                printf("genis acili ucgen");


            }
            else if(b*b<a*a+c*c){

                printf("dar acili ucgen");
            }
            else{
                printf("ucgen olusturmaz");
            }






    }
    else{
            if(c*c == a*a+b*b){
                printf("dik ucgen");

            }
            else if(b*b>a*a+c*c){
                printf("genis acili ucgen");


            }
            else if(c*c<a*a%b*b){

                printf("dar acili ucgen");
            }
            else{

                printf("ucgen olusturmaz");
            }


    }*/







    /*int a,b,c; //a,b,c
    printf("enter three edge");
    scanf("%d%d%d",&a,&b,&c);

    if(a*a == b*b + c*c){
            printf("dik üçgen");
    }
    else if(a*a>b*b+c*c){
            printf("genis acili ucgen");



    }
    else{


            printf("dar acili ucgen");
    }*/






































    // kullanýcýdan alýnan üç sayýnýn en büyüðünü ve en küçüüðünü bulan programý yazdýrýnýz

        /*int sayi1,sayi2,sayi3,max,min;
        printf("sayilari giriniz");
        scanf("%d %d %d", &sayi1,&sayi2,&sayi3);
        if(sayi1>sayi2&& sayi1>sayi3){
                max=sayi1;

        }
        else if(sayi2>sayi3 && sayi2>sayi1){
                max = sayi2;

            }
        else {
                max = sayi3;

        }
        if(sayi1<sayi2&& sayi1<sayi3){
                min = sayi1;

        }
        else if(sayi2<sayi3 && sayi2<sayi1){
                min = sayi2;

            }
        else {
                min = sayi3;

        }

        printf("%d is max sayi\n\n",max);
        printf("%d is min sayi\n",min); */











































    /*int sayi;
    printf("sayi giriniz");
    scanf("%d",&sayi);
    if (sayi%2 == 0){
            printf("sayi cift sayidir");
    }else{
        printf("sayi is not off number \n");
        printf("%d is not odd number",sayi);


    }*/

























     /*int partyA,partyB,partyC,guncelMM;
     const int sumguncelMM;
     guncelMM = 600;
     printf(" Her bir partideki Milletvekili sayýrlarýný giriniz: ");
     scanf("%d%d%d",&partyA,&partyB,&partyC);
     guncelMM = partyA + partyB + partyC;
     if(partyA+partyB+partyC<200){
            printf("toplantý yapýlamaz ");




     }else{
         printf("toplantý yapýlabilir");



     }*/







































     /*int yeterSayisi;
     printf("yeter sayisini giriniz");
     scanf("%d",&yeterSayisi);
     if (yeterSayisi>50){
            printf("kanun kabul edilmiþtir\n");
     }
     else if (yeterSayisi<50){
            printf("kanun kabul edilmemiþtir\n");
     }
     else{

         printf("kanun baþka bir oturuma býrakýlmýþtýr\n");
     }*/















    return 0;

}





