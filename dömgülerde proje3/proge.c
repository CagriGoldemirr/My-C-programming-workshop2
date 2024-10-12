#include<stdlib.h>
#include<stdio.h>
int main()
{
     int i;
     float examGrade,sumGrade,avarage;
     i = 1;
     avarage = 0.0;
     sumGrade =0.0;
     do{
        printf("%d th enter exam point :",i);
        scanf("%f",&examGrade);

        if(examGrade ==0){
            break;
        }

        else if(examGrade <0){
                printf("please enter positive number\n");
                continue;


            }

        else{


                sumGrade = sumGrade + examGrade;
                avarage = sumGrade/i;

            }i++;





     }
     while(examGrade!=0);
            printf("%f is avarage number",avarage);























































































    return 0;

}








































    /*int i;    //sil ve kendin yaz bastan
    float examGrade,sumGrade,avarage;
    i =1;
    examGrade =0.0;
    avarage =0.0;
    sumGrade = 0.0;
    do{

        printf("%d th exam grade",i);
        scanf("%f",&examGrade);
        if(examGrade==0){
            break;
        }
         else if(examGrade<0){
            printf("please enter a positive number");
            continue;
        }
         else{

            sumGrade += examGrade;
            avarage = sumGrade/i;
        }


        i++;

    }while(examGrade !=0);
    printf("%f",avarage);
    return 0;
}*/














    /*int  i;
    float examGrade,sumGrade,ortalama;
    i =0;
    sumGrade =0.0 ;
    do{
        printf("enter grade");
        scanf("%f",&examGrade);
        sumGrade = examGrade + sumGrade;
        i++;
        ortalama = sumGrade/i;
    }
    while(i<4);
    printf("%f",ortalama);



    return 0;
}*/



































    /*int notes,sayac,notes_toplam,ortalama;

    notes_toplam = 0;
    sayac = 0;

    while(sayac<5){


        printf("enter notes: ");
        scanf("%d",&notes);
        sayac++;
        notes_toplam = notes_toplam + notes;
        ortalama = notes_toplam/sayac;





        }




    printf("%d",ortalama);*/









































































