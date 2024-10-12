#include<stdlib.h>
#include<stdio.h>
#include<math.h>



int main()
{   //getch
    char myKey;
    printf("bir tusa basiniz\n");
    myKey = getchar();
    // eger getch degilde getchar yaparsak tusa bastıktan sonra enter a basmamız gerek kodun devam etmmesi ıcın ama getch() de entera basmadan kod direk calısıyor
     // getch() C dilinde kullanýlan bir fonksiyondur ve genellikle klavyeden bir tuþa basýlmasýný beklemek için kullanýlýr. Bu fonksiyon, bir tuþa basýlana kadar programýn beklemesini saðlar ve kullanýcýnýn girdiði tuþun ASCII deðerini döndürür.
    printf("%c tusuna bastiniz \n",myKey);
    printf("tusun ASCII degeri  : %d\n",myKey);
    //putch
   putchar(65);
   putchar(32);
   putchar(67);
   putchar(69);


    //hic printf yazmadan firek böyle çıktı alavbiliyoruz putcharın ıcındekı degerın ASCII kodunu yazdırıypr




    return 0;
}
