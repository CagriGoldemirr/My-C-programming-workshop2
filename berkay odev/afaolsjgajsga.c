#include<stdio.h>
#include<stdlib.h>



int main()
{   int fatura = 0,toplamTutar = 0,vade,faturaSayisi,ortalamaVADE,i;
    printf("vade degerini giriniz : ");
    scanf("%d",&vade);
    printf("fatursa sayýsnýn giriniz");
    scanf("%d",&faturaSayisi);
    for(i=0;i<faturaSayisi;i++){
        printf("fatura degerini giriniz :");
        scanf("%d",&fatura);
        toplamTutar = toplamTutar + fatura;


j
    }
    if(toplamTutar != 0){
    ortalamaVADE = (toplamTutar*vade)/toplamTutar;
    printf("%d",ortalamaVADE);
    }
    else
        printf("toplam tutar 0 olmamaloý");












    return 0;
}





