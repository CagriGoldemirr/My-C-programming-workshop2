#include<stdio.h>
#include<stdlib.h>

// fonksiyonlar� pointerlarda kullanmak
// parametre olarak fpnksiyonlara nas�l pointer yollluyoruz

double getSquare(double *ptr);
int main()
{
    double number,result;
    printf("enter number \n");
    scanf("%lf",&number); // burada number�n adreisni fonksiyona yolluyorum fonks�yonda bu adresin
    //karls�l�gn� bulup karesini al�yor

    result = getSquare(&number);

    printf("square of number : %f\n\n",result);






    return 0;
}

double getSquare(double *ptr) // gonderdigim adresin *ptr ile �c�ndeki deggeri al�yorum
{
    return *ptr * *ptr;

}
