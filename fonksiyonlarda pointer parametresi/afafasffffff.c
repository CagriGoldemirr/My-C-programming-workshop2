#include<stdio.h>
#include<stdlib.h>

// fonksiyonlarý pointerlarda kullanmak
// parametre olarak fpnksiyonlara nasýl pointer yollluyoruz

double getSquare(double *ptr);
int main()
{
    double number,result;
    printf("enter number \n");
    scanf("%lf",&number); // burada numberýn adreisni fonksiyona yolluyorum fonksþyonda bu adresin
    //karlsýlýgný bulup karesini alýyor

    result = getSquare(&number);

    printf("square of number : %f\n\n",result);






    return 0;
}

double getSquare(double *ptr) // gonderdigim adresin *ptr ile ýcýndeki deggeri alýyorum
{
    return *ptr * *ptr;

}
