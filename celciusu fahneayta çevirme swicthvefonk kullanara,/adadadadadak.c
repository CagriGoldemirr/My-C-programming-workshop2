#include<stdlib.h>
#include<stdio.h>
int CelToFah(int c);
int FahToCel(int f);
int main()
{
    int number;
    char choose;
    printf("fa>cel icin c \n"); //// c ye t�kl�yorum  bu sat�r  i�in calisiyor kod
    printf("cel>fa icin  f \n"); // f ye t�kl�yorum bu satir icin calisiyor kod
    printf("seciminizi girin :");
    scanf("%c",&choose);
    switch(choose){
        case 'c':
            printf("fah degerini giriniz");
           scanf("%d",&number);
            printf("celcius degeri : %d\n",FahToCel(number) );
            break;

        case 'f':

            printf("cel degerini giriniz");
            printf("%d",&number);
            printf("fah degeri : %d\n",CelToFah(number));
            break;
        default :
            printf("yanlis deger girdiniz");
            break;
    }

    return 0;
}

int CelToFah(int c)
{
        return (c*9/5)+32;


}

int FahToCel(int f)
{
        return (f-32)*5/9;



}
 // buradad ne ogrend�m ben iki string de�eri onlaru e�itleyerek k�yaslamak sitiyorsam (elma= armut) vs gibi c buna direkt olarak izin vermiyor eger ben bunu yapmak istersem ek bir fonksiyona ihtiyac duyar�m o y�zden o fonk kullanmak yerine switch kullanmak daha basit
