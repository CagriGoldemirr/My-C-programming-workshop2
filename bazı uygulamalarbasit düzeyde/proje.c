#include<stdio.h>
#include<stdlib.h>

//girilen say�n�n birler ve onlar bsaama��n� bbulan program
// girilen d�rt say�n�n aritmetik ortalams�n�nbulan progrma

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








































