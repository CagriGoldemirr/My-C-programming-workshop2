#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{

    /*int number,i;
    for(i=1;i<10;i++){
        number = rand()%10 +1; // buradaki %10 ifadesi  = rand fýnksiyonu [0-9] sayýlarý arasýnda sayý veriyor number degiskenine rastgele sayýmý sýnýrlýyorum böylce
        // eger rand()%10+1 yazarsam da  her buldugu degiskene 1 ekleyecek böylece artýk [0-9] arasý degþl [1-10] arasý deger ureteccek
        printf("%d. rastgele sayi :%d \n",i,number);
 // rand funciton buradad rastegel sayý uretiyor ve her seferinde urettigi sayýyý number degiskenine atýyor ama her seferinde sadece belirli  sayýlarý veriyor

    }*/





    /*int i,number;
    srand(time(NULL)); //BOYLE YAPINCA HER SEFERDE FARKLI sayi diiznleri çýkartýyor sayýlar ayný oalbilr ancak sýralarý farklý oluyor
    for(i=1;i<10;i++){
        number = rand()%100 +1;
        printf("%d. rastgele sayi :%d \n",i,number);
    }*/





    //sayi tahmin oyunu

    int randomNumber,guessNumber,guessCount,score = 100;
    srand(time(NULL));
    randomNumber = rand()%100+1;
    printf(" random number is : %d\n",randomNumber);
    for(guessCount =0;guessCount<100;guessCount++){
        printf("enter your number");
        scanf("%d",&guessNumber);
        if(guessNumber == randomNumber){
            printf("dogru cevap");
            printf(" your score is :%d",score);
            break;
        }
        else{
            printf("yanlis cevap\n");
            score = score -1;
            printf("your score is  : %d\n",score);
        }



    }




    /*int randomNumber,guessNumber,guessCount,score = 100;
    srand(time(NULL));
    randomNumber = rand()%100+1;
    printf(" random number is : %d\n",randomNumber);
    for(guessCount;guessCount<100;guessCount++){
        printf("enter your number");
        scanf("%d",guessNumber);
        switch(randomNumber){
        case guessNumber:
            printf("dogru cevap");
            printf(" your score is :%d",score);
            break;

        default:
            printf("yanlis cevap\n");
            score = score -1;
            printf("your score is  : %d\n",score);

        }











    }*/
























    return 0;
}




