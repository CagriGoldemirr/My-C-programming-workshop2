#include<stdlib.h>
#include<stdio.h>
int main()
{   int i,sayi,factorial;
    printf("enter sayi : ");
    scanf("%d",&sayi);
    factorial = 1;

    for(i =1;i<=sayi;i++){

        factorial = factorial * i;
    }

    printf("%d! factorial is %d",sayi,factorial);



















    return 0;
}




    /*int  kare_sayisi;
    double bugday_tanesi;
    double toplam_bugday;
    bugday_tanesi = 1;
    toplam_bugday = 0;
    for(kare_sayisi = 1;kare_sayisi<=64;kare_sayisi++){
            printf("%d. kare icin bilgine verilecek bugday sayisi %f \n",kare_sayisi,bugday_tanesi);

            bugday_tanesi = bugday_tanesi *2;
            toplam_bugday = bugday_tanesi + toplam_bugday;


    }

    printf("%f tane bugday tanesi",toplam_bugday);





    return 0;
}*/
