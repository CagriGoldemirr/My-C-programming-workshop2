#include<stdlib.h>
#include<stdio.h>
#include<math.h>
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

////////////////////

/*int fnkR();
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

}*/



//////////////////////
//iteral türü
/*int sum(int n);

int main() {
    int n, sn, x;
    printf("enter n :\n");
    scanf("%d", &n);
    x = sum(n);
    printf("%d", x);
    return 0;
}

int sum(int n) {
    int sp = 1, sc = 1, sn = 1;
    for (int i = 1; i <= n; i++) {
        sn = i + sp + sc;
        sp = sc;
        sc = sn;
    }
    return sn;
}*/



/*int sumR();
int main(){
    int n,x;
    printf("enter number n");
    scanf("%d",&n);
     x = sumR(n);
    printf("%d",x);





    return 0;
}

int sumR(int n){

    if(n<1){

        return 1;
    }
    else if(n==1){
        return 3;
    }
    else
         return n+sumR(n-1)+sumR(n-2);


}*/




///////////////
/*int f();
int main()
{   int a,k =0,x;
    printf("enter a:\n");
    scanf("%d",&a);
    x = f();
    printf("%d",f(a,k));


    return 0;
}


int f(int a,int k)
{

    while(a>0){


        k+=a%3;
        a/=3;


    }

    return k;
}*/

/*int Frck(int a);
int main()
{
    int a,k =0,x;
    printf("enter a:\n");
    scanf("%d",&a);
    x = Frck(a);
    printf("%d",Frck(a));








    return 0;
}
int Frck(int a)
{
    if(a<1){
            return 0;
    }
    else
        return a%3+Frck(a/3);





}*/






/////

/*int is_balanced(char str[]);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (is_balanced(str)) {
        printf("The string is balanced.\n");
    } else {
        printf("The string is not balanced.\n");
    }

    return 0;
}

int is_balanced(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            count++;
        } else if (str[i] == ')') {
            count--;
            if (count < 0) {
                return 0; // Dengesiz durumu tespit edildi
            }
        }
    }

    return count == 0;
}*/





/////////

 /*int is_balanced();
int main()
{
    printf("%d\n",is_balanced("()()()()()");
    printf("%d\n",is_balanced("(((()))))");

    if(count == 0){
        printf("dengede");
    }
    else
        printf("dengede degil");





    return 0;
}


int is_balanced(char str[],int i,int count)
{   count = 0;
    if(str[i] == '('){
        count ++;
        return is_balanced(i+1);
       }
    else if(str[i] == ')'){
        count --;
        return is_balanced(i+1);

    }



}*/
 ///bunda ýteratiften recursiveye çevirme yok enver özarslan 8. video
/*int fark(int n);
int  main()
{   int n,x;
    printf("enter n :");
    scanf("%d",&n);
    x = fark(n);
    printf("%d\n",x);







    return 0;
}


int fark(int n){
    if(n<1){
        return 0;
    }
    else if(n%2 != 0){
        return (n%10)*(n%10)+fark(n/10);
    }
   else if(n%2 == 0){
        return -1*((n%10)*(n%10)) + fark(n/10);
   }

}*/
/////////// enver özarslan  9.video
/*double factorial(int n);
double seriR(double x,int n);  //
int main()
{   int n;
    double x;
    printf("enter n and x");
    scanf("%d%lf",&n,&x);
    x = seriR(x,n);
    printf("%lf",x);












    return 0;
}

double factorial(int n)
{
    if(n<0){
        return 0;

    }
    else if(n==0)
    {

        return 1;

    }
    else
        return n*factorial(n-1);


}
double seriR(double x, int n)
{   if(n>0)

      return (pow(-1,n)*pow(x,(2*n+1))/factorial(2*n+1))+ seriR(x,n-1);


}*/
 // buradan ne ogrendým ?
 // fonk declaration ve definiton kýsýmlarýnda içleri ayný olacak
 // double da %lf kullanýýyor
 //  recursive fonksiyolnlarda genel bir kural bulmaya calis




//// enver özarslan 10. video bu iteral hali
/*int toplam(int n,int i,int sum);
int main()
{   int n,x,sum,i;
    //printf("enter n");
    //scanf("%d",&n);
    x = toplam(4,2,1);
    printf("%d",x);
    return 0;
}

int toplam(int n,int i,int sum)
{
    for(i=2;i<=n;i++){
        sum = sum*(i-1)+i;


    }return sum;


}*/

//recursive hali
int toplam(int n);
int main()
{   int n,x,sum,i;
    printf("enter n");
    scanf("%d",&n);
    x = toplam(4);
    printf("%d",x);
    return 0;
}
int toplam(int n)
{
        if(n>=2){
                 return  (toplam(n-1)*(n-1))+n;
        }
        else
            return 1;


}

//burada ne ogrendim recursive fonksiyonda bir kural buluyorduk ama burada kurak bulurken kuralda  kendi girdigimiz/kullanýcýdan aldýgýmýz degerý koymamýz gerek ek baska deger lerde olabilir ancak kullanýcýdan aldýgýmýz deger(n) yogunlas








