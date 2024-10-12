#include<stdio.h>
#include<stdlib.h>

/*int main()
{






      ////// bu alttakı kodu for dongusu kullanrak yapmaya calis///
    int enterNumber,i;
    printf("enter number");
    scanf("%d",&enterNumber);
    if(enterNumber>1){
        if(enterNumber% 2 == 0 && enterNumber !=2){


            printf(" %d is not prime number",enterNumber);

        }
        else if(enterNumber ==2){
            printf("%d is prime number",enterNumber);
        }
        else{

            for (i=2;i<enterNumber;i++){
                    if(enterNumber%i==0){
                            printf("%d is prime number",enterNumber);
                    break;

                    }


            }
            }
        }



    else{

        printf("%d is not prime number",enterNumber);
    }

    return 0;
}*/












  // girilen sayinin asal olup olmadýgýný anlayan program
    /* int enterNumber,i;
    printf("enter number");
    i = 2;
    scanf("%d",&enterNumber);
    if(enterNumber>1){
        if(enterNumber%i == 0 && enterNumber !=2){


            printf(" %d is not prime number",enterNumber);

        }
        else if(enterNumber ==2){
            printf("%d is prime number",enterNumber);
        }
        else{

            while(i==2){

                printf("%d is prime number",enterNumber);
                i++;
            }
        }


    }
    else{

        printf("%d is not prime number",enterNumber);
    } */
















    // basit bir carpim tablosu
int main()
{
    int i,number;
    number =0;
    i=1;
    printf("enter number  from 1 to 10 : \n");
    scanf("%d",&number);
    if(number <10 && number >=1){
        while(i<=10){
            printf("%d x %d = %d \n",number,i,number*i);
            i++;
        }


    }
    else{
        printf("this number is not in the 10>number>1 ");
    }





    return 0;

}
















































































