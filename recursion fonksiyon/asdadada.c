#include<stdlib.h>
#include<stdio.h>


/*int cifthesaplama(int);
int number = 0;
int main()
{
    printf("enter number");
    scanf("%d",&number);


    printf("%d",cifthesaplama(number));


    return 0;
}




int cifthesaplama(int number){
    if(number>0){
        if(number%2 == 0){
            return number+cifthesaplama(number-1);

    }
        else{
            return cifthesaplama(number-1);
        }
    }else{
        return 0;
    }




}*/


/*faktorialHesaplama(int);
int number;
int main()
{
    printf("enter number");
    scanf("%d",&number);

    printf("%d",faktorialHesaplama(number));






    return 0;
}

faktorialHesaplama(int number)
{
    if(number == 0){
        return 1;
    }
    else if (number>0){
        return number*faktorialHesaplama(number-1);
    }


}*/
// bunu bir kez daha dene kendin
/*int fibonacci(int);
sayi1 = 1;
sayi2 = 1;
int main()
{

    int sayi1,sayi2,sayi3,newsayi,number,i;
    printf("enter number");
    scanf("%d",&number);
    for(i=1;i<number;i++){
        printf(" %d" ,fibonacci(i));
    }






}

int fibonacci(int number)
{   if(number<=1){
    return number;
            }
    else{
        return fibonacci(number-1)+ fibonacci(number-2);
    }*/












/*int fibonacci(int);
int main()
{       int number,i;


        printf("enter  number\n");
        scanf("%d",&number);
        for(i =1;i<number;i++){
                printf("%d ",fibonacci(i));

        }




}




int fibonacci(int number)
{
    if(number<=1){
        return number;

    }
    else
        return fibonacci(number-1)+fibonacci(number-2);*/


/*int fibo();
int main()
{   int number,i;
    printf("enter number :");
    scanf("%d",&number);
    for(i=1;i<number;i++)
    {   printf("%d ",fibo(i));
    }








    return 0;
}
int fibo(int number)
 {


    if(number<=1){
        return number;
    }
    else
        return fibo(number-1)+fibo(number-2);



}*/

/*int fact();
int main()
{   int number;
    printf("enter number\n");
    scanf("%d",&number);

    printf("%d\n",fact(number));






    return 0;
}
int fact(int number)
{    if(number<0){
         printf("please enter posştive number");
         return ;}
     else if(number == 0){
       return 1;


    }
    else
        return  number *fact(number-1);




}*/

 // iteral olarak verilen fonksiyonu recurisve fonksiyona çevirme
 /*int fnk(int n,number)
 {

     printf("enter n number");
     scanf("%d",&number);
     int i,sum = 1;
     for(i = 1;i<n;i++){
        sum=sum+(i-1)*(i+1);
     }
     return sum;

 }*/



int fnkR();
int main()

{
     int n,x;
     //printf("enter n number");
     //scanf("%d",&n);
     x = fnkR(6);

     printf("%d",x);







    return 0;
}

int fnkR(int n)
{
    if(n<1){

        return 1;
    }







    return fnkR(n-1)+(n-1)*(n+1);

}


