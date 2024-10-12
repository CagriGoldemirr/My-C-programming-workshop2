#include<stdlib.h>
#include<stdio.h>
int birlikcevir(int); //YARIDA BIRAKTIM
int onlukcevir(int);
int main()
{
    int number =0,d1,d2,d3,d4;
    while(number != -1){
        printf("enter four digit number \n:");
        scanf("%d\n",&number);
        if(number == -1){
            break;
        }
         d1 = (number%10); // birlre
         d2 = ((number%100)/10); //onlar
         d3 = ((number%1000)/100); // yüzler
         d4 =  (number/1000);// binler
         if(d4 !=1){
              birlikcevir(d4);
              printf(" bin \n");
    }    if(d4 == 1){

            printf(" bin \n");
    }
         if(d3 !=1){
              birlikcevir(d3);
              printf(" yüz \n");


    }
         if(d3 != 0 ){
            printf(" yüz \n");

          }
























    return 0;
}

void birlikcevir(int number)
{
    switch(number){
        case 1:printf("bir");break;
        case 2:printf("iki");break;
        case 3:printf("uc");break;
        case 4 :printf("dort");break;
        case 5 :printf("bes");break;
        case 6:printf("altý");break;
        case 7:printf("yedi");break;
        case 8:printf("sekiz");break;
        case 9:printf("dokuz");break;



}
}
void onlukcevir(int number){
    switch(number){
        case 1:printf("on");break;
        case 2:printf("yirmi");break;
        case 3:printf("otuz");break;
        case 4 :printf("kirk");break;
        case 5 :printf("elli");break;
        case 6:printf("altmis");break;
        case 7:printf("yetmis");break;
        case 8:printf("seksen");break;
        case 9:printf("doksan");break;


    }



}



