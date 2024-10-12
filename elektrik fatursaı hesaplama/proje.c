#include<stdio.h>
#include<stdlib.h>

int main()

{
    float odenecekFatura, eskiBirimFiyat, yeniBirimFiyat;
    float enflasyon, eskiAboneucreti, yeniAboneucreti;
    int yeniOkuma, eskiOkuma, toplamHarcananElektrik;

    printf("enflasyon oranýný girin :");
    scanf("%f",&enflasyon);
    printf("önceki aya ait birirm faturayý girin");
    scanf("%f",&eskiBirimFiyat);
    printf("önceki aya ait abonelik ücretini girin");
    scanf("%f",&eskiAboneucreti);
    printf("bir önceki aya ait okuma deðerini girin");
    scanf("%d",&eskiOkuma);
    printf("bu aya ait okuma deðerini girin");
    scanf("%d",&yeniOkuma);

    toplamHarcananElektrik = yeniOkuma- eskiOkuma;
    yeniBirimFiyat = (eskiBirimFiyat*enflasyon)/100 + eskiBirimFiyat;
    yeniAboneucreti = (eskiAboneucreti*enflasyon)/100 + eskiAboneucreti;
    odenecekFatura = toplamHarcananElektrik*yeniBirimFiyat +yeniAboneucreti;
    printf("\nodeyeceðiniz fatura tutarý :%.2f\n", odenecekFatura);




    return 0;
}

















