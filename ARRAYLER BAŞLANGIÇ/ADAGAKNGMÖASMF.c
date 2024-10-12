#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    //sýmdý bir sýnýf olsa ve ben o sýnýftaki her bir ogrencinin notunu variable  olarak tutmak istesem ben her birine ayrý variable ve degisken atamam gerek bunu daha kolay hale getirmek icin arraylar bize yardým ediyor
    //int x=7,y=15,z=24,a=3,b=37;

    //bu notes dizisi 5 elemanlý ama indis olarak bakarsak 0ç indisten bakmamýz gerekr
    // eger ben kac tane veri depolayacagýmý biliyorsam yaný (sýnýftaký ogrencý sayýsýný biliyrosam) koseli parantez  ýcýne ý sayýyý yazabililrm
    //arrayler 0  dan baslar
    //dizi ýcýndeki bir degeri ekýð kullanmak veya yazdýrmak istiyorsam indis mantýgýna göre yazmam lazým yaný notees[2] =24 tür
    //ben normalde (nt x=7,y=15,z=24,a=3,b=37;) boyle tanýmlarken degýskenlerý bunlar bellekte ayrýlan býrbýrýnden bagýmsýz býrere ayrý kutucuklardýr ve bu kutucuklarýn adlarý da degiskenlerin adýdýr ýclerýnde de degiskenlerin degeri vardýr
    //ama dizi tanýmlarken hepsi bir kutunun  ýcýndeký cekmecelerdeký gibi dusunebilirsin tek bir kutu var ancak her biri onun cýýdeký ayrý bir cekmecede
    /*int notes[] ={7,19,24,3,37};
    int i;
    printf("%d\n",notes[0]);

    for(i=0;i<5;i++){

        printf("%d",notes[i]);
        printf(" \n");



    }*/
    ///////


    /*0double numbers[3] = {25.0,56.0,98.0};
    int  i;
    double sum = 0.0;
    for(i=0;i<3;i++)
    {   sum = sum + numbers[i];





    }

    printf("%.3f",sum/3.0);*/

    /////////
    // buradak bos bir dizi tanýmladým o diziyi döngünün ýcýne atarak i degerleri ile carparak o diziyi doldurdum

    /*int i;
    int mySquare[20];
    for(i=0;i<20;i++){
        mySquare[i] = i*i;
        printf("%d\n",mySquare[i]);

    }*/

    //////////
    // buradaarraylere deger girirp o degeri okuyan program
    /*int  myArray[5],myValue;
    int i,k;
    for(i=0;i<5;i++){
        printf("enter  %d. numbers of array",i);
        scanf("%d",&myValue);
        myArray[i] = myValue;
        printf("%d\n",myArray[i]);


    }

    printf("----");
    for(k=0;k<5;k++){

        printf("%d\n",myArray[k]);
    }*/


    ///////// karakter dizileri //karakterler üzerinde dizi ile dönme,islem yapna

    /*char name[] = "fehmi";
    printf("%s",name);
    printf("%c",name[0]);*/ // eger dizinin belli karakterni yazdıracaksam %c kullanmalıyım

/////
    char name[10];
    printf("enter name : \n");
    /// eger scanf ile arasında bosluk olan iki kelime alacaksam scanf yerine gets(alacagım degisken fonksiyonunu kullanmama gerek
    gets(name);

    printf(" your name is  : %s",name);


    return 0;
}
