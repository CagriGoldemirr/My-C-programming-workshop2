#include<stdio.h>
#include<stdlib.h>





// kullanıcıdan alınan sayıları karşılaştır

// bbasit bir kitap sipariş ve indirim programı yapalım


int main()
{

    int bookPrice,orderQuantity;// kitapsayısı ve sipariş miktarı
    float  discountRate,nodiscountPrice,discountPrice,sum; // bu da kitabın indirim oranı ve indirimzsiz fiyatı içiçn tuttuğumuz veriablelar
    // indirim oranı,indirimsiz fiyat,kitabın indirimli fiyatı,toplam vaeiables
    bookPrice = 20;
    orderQuantity =0;
    printf("kaç adet kitap istiyorsunuz");
    scanf("%d",&orderQuantity);
    if (orderQuantity>=60){
            discountRate = 30.0;
            discountPrice = (orderQuantity*bookPrice)-(orderQuantity*bookPrice*30)/100


            printf("your  book price is %f ",discountPrice);
    }else if(60>orderQuantity>30){
        discountRate = 20.0;

        printf("your book price is : %f",);
    }
     else if (30>orderQuantity>10){
            discountRate = 12.0;
            printf("your  book price is %f ",);
    }
    else{

            discountRate = 0.1;
            printf("your  book price is %f ",);
    }






























































    /*int number1,number2;
    printf("enter two number: ");
    scanf("%d%d",&number1,&number2); //scanf ile iki tane veri alırken iki  tane yüzden  nin arasına virgül gelmez.
    if (number1>number2){
            printf("number1>number2");
    }
    else if(number2>number1){
            printf("number2>number1");

    }else{
        printf("number2 == number1");
    }*/



    return 0;















}
