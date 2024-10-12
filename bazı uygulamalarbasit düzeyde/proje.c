#include<stdio.h>
#include<stdlib.h>

//girilen sayýnýn birler ve onlar bsaamaðýný bbulan program
// girilen dört sayýnýn aritmetik ortalamsýnýnbulan progrma

int main()
{
    int number,birlerB,onlarB;
    printf("enter you number");
    scanf("%d",&number);
    birlerB = (number %10);
    onlarB = ((number %100)/10);
    printf("birler basamagi : %d\n",birlerB);
    printf("onlar basamagi : %d\n",onlarB);


}








































