#include<stdio.h>
#include<stdlib.h>

int main()

{
    float odenecekFatura, eskiBirimFiyat, yeniBirimFiyat;
    float enflasyon, eskiAboneucreti, yeniAboneucreti;
    int yeniOkuma, eskiOkuma, toplamHarcananElektrik;

    printf("enflasyon oran�n� girin :");
    scanf("%f",&enflasyon);
    printf("�nceki aya ait birirm faturay� girin");
    scanf("%f",&eskiBirimFiyat);
    printf("�nceki aya ait abonelik �cretini girin");
    scanf("%f",&eskiAboneucreti);
    printf("bir �nceki aya ait okuma de�erini girin");
    scanf("%d",&eskiOkuma);
    printf("bu aya ait okuma de�erini girin");
    scanf("%d",&yeniOkuma);

    toplamHarcananElektrik = yeniOkuma- eskiOkuma;
    yeniBirimFiyat = (eskiBirimFiyat*enflasyon)/100 + eskiBirimFiyat;
    yeniAboneucreti = (eskiAboneucreti*enflasyon)/100 + eskiAboneucreti;
    odenecekFatura = toplamHarcananElektrik*yeniBirimFiyat +yeniAboneucreti;
    printf("\nodeyece�iniz fatura tutar� :%.2f\n", odenecekFatura);




    return 0;
}

















