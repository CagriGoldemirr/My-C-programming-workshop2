#include<stdio.h>
#include<stdlib.h>





// kullan�c�dan al�nan say�lar� kar��la�t�r

// bbasit bir kitap sipari� ve indirim program� yapal�m


int main()
{

    int bookPrice,orderQuantity;// kitapsay�s� ve sipari� miktar�
    float  discountRate,nodiscountPrice,discountPrice,sum; // bu da kitab�n indirim oran� ve indirimzsiz fiyat� i�i�n tuttu�umuz veriablelar
    // indirim oran�,indirimsiz fiyat,kitab�n indirimli fiyat�,toplam vaeiables
    bookPrice = 20;
    orderQuantity =0;
    printf("ka� adet kitap istiyorsunuz");
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
    scanf("%d%d",&number1,&number2); //scanf ile iki tane veri al�rken iki  tane y�zden  nin aras�na virg�l gelmez.
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
