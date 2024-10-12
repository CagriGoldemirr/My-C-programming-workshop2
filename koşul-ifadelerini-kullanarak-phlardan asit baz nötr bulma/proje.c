#include<stdio.h>
#include<stdlib.h>
int main()
{


    float ph;
    printf("enter the PH :");
    scanf("%f",&ph);

    if(ph>=0 && 14>ph){
            if (ph>7){
                if(ph>10){

                    printf("%f is strong alkaline",ph);

                }
                else{
                    printf("%f is weak alkaline",ph);

                }
            }
            else if (ph == 7){
                printf("%f is notr");




            }
            else{
                if(ph<3){

                    printf("%f is strong acid",ph);
                }
                else{

                    printf("%f is weak acid",ph);
                }




            }





            }



















































    return 0;
}















































