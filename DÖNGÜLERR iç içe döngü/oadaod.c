#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int i,j;
    char input,character = 'A';
    //printf("enter number :");
    //scanf("%d",&number);
    printf("enter uppercase Letter :");
    scanf("%c",&input);
    for(i=1;i<=(input-'A'+1);i++){
        for(j=1;j<=i;j++){
                printf("%c",i);

        }
        printf("\n");
    }

    return 0;
}*/












   /* int i,j,number,k;
    printf("enter number :");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        for(j=1;j<=number-i;j++){
            printf(" ");
    }   for(j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");

    }
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            printf(" ");
    }   for(j=1;j<=number*2-1-(i*2);j++){
            printf("*");
        }
        printf("\n");

    }


    return 0;
}*/


































    /*int i,j,number;
    printf("enter number :");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        for(j=1;j<=number;j++){
            if(i==1 || i== number || j==1 ||j == number ){
            printf("* ");
            }
            else{
                printf("  ");
            }


        }printf("\n");
    }



    return 0;
}*/

























  /*int i,j,number;
   printf("enter number :");
   scanf("%d",&number);
   for(i =1;i<=number;i++){
       for(j =1;j<=number ;j++){ // j<number dmemmizin sebebi hangi soyıy girersem gireyim o kadar yıldız koymasının istiyorum
            if(i ==1 ||i == number || j == 1 || j ==number ){
                printf("* ");
            }
            else{
                printf("  ");
            }





        }printf("\n");
   }
   }
    return 0;*/



















    /*int i,j,number;
     printf("enter number :");
     scanf("%d",&number);
     for(i=1;i<=number;i++){
        for(j=i;j<=number;j++){
            printf("%d",i);

        }printf("\n");
     }









    return 0;
}  */



































     /*int i,number,j;

     printf("enter number :");
     scanf("%d",&number);
     for(i =1;i<=number;i++){
            for(j=1;j<=i;j++){
                printf("%d ",i);
            }printf("\n"); // bu ifade satır satır aşağı inmek için kullanılır

        }*/















































     //fibonacci sayı dizizsi algorithması
    /*int first =1,second =1,third,i,number;
    printf("enter number");
    scanf("%d,",&number);
    printf("1,1,");

    for(i =2;i<number;i++){
        third = first + second;
        printf("%d,",third);
        first = second;
        second = third;

    }







      return 0;


}*/

































    /*int number,i = 1,smallesstNumber =0,largestNumber=0;
    do{

    printf("%dth number",i);
    scanf("%d",&number);


    if(number == 0){
        break;
}   if(number<smallesstNumber){
        smallesstNumber = number;

    }
    if(number>largestNumber){
        largestNumber = number;
    }
        i++;
}
       while(number != 0);
       printf("\n the largest number %d\n",largestNumber);
       printf("\n the smallest number %d\n",smallesstNumber);

    return 0;
}*/



































     int i,j,sharp = 0 ;
     printf("enter the number of sharps : ");
     scanf("%d",&sharp);
     for(i=1;i<=sharp;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);

        }printf("\n");
     }
     for(i=1;i<=sharp;i++){
        for(j=i; sharp>=j ;j++){
            printf("%d",j);
        }
        printf("\n");
     }
    return 0;
}




















    /*int i,j;

    for(i =1;i<=4;i++){
        for(j =1;j<=3;j++){
            printf("hello world \n");

        }

        printf("----\n");


    }*/





















































