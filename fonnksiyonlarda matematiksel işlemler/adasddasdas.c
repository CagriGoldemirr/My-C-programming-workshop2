#include<stdio.h>
#include<stdlib.h>
#include "myMath.h"
/*
int main()
{   float base =0;
    float result =0;
    int exponent =0;
    printf("enter base and exponent number value :");
    scanf("%f%d",&base,&exponent);
    result = exponentiation(base,exponent);
    printf("result is %f\n",result);



















    return 0;
}

float exponentiation(float x,int y) // x taban oluyor y ise üs oluyor
{   float result = 1;
    int i;
    if(y<0){
        for(i=0;i<-y;i++){
                result = result*1/x;

        }
    }
     else{
        for(i=0;i<y;i++){
            result = (result*x);

        }

     }






    return result;
















}*/


int main(int choose,int x,int y)
{  choose = 0;
   menu();
   printf("choose a number (1-5)\n");
   scanf("%d",&choose);
   switch(choose){
    case 1: printf("enter two number :");
            scanf("%d%d",&x,&y);
            printf("min number is %d\n",min(x,y));
            break;
    case 2: printf("enter two number :");
            scanf("%d%d",&x,&y);
            printf("max number is %d\n",max(x,y));
            break;
    case 3: printf("enter one number :");
            scanf("%d",&x);
            printf("square number is %d\n",square(x));
            break;
    case 4: printf("enter one number :");
            scanf("%d",&x);
            printf("cube number is %d\n",cube(x));
            break;
    case 5: printf("enter one number :");
            scanf("%d",&x);
            printf("absolute number is %d\n",absolute(x));
            break;
    default:printf("you should choose between 1-5 ");
            break;

   }













    return 0;
}

void menu(){
    printf("\n");
    printf("***********\n");
    printf("*   MENU   *\n");
    printf("***********\n");
    printf("1-minumun\n");
    printf("2-maximum\n");
    printf("3-kare al\n");
    printf("4-küp al\n");
    printf("5-mutlak al\n");
}

int min(int x,int y){
    if(x>y){
        return y;
    }
    else {
        return x;
    }


}
int max(int x ,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }

}
int square(int x){
    return (x*x);





}
int cube(int x){
    return (x*x*x);


}

int absolute(int x){
    if(x<0){
        return -x;

    }
    else{
        return x;
    }
}








