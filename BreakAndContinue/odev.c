#include <stdlib.h>
#include <stdlib.h>
int main()

{   int i;
    for(i=0;i<10;i++){
        if(i==7){
            break;



        }
        printf("%d\n",i);
    }



    /*int i=0;
    while(i<=10){
        if(i==7){

            break;
        }
        printf("%d\n",i);

        i++;


    }*/


    // continue yani devam et komutu bir ifadeyi atlamak i�in kullan�l�yor

//    int i;
//    for(i=0;i<=10;i++){
//        if(i==5){
//            continue; // burada continue ifadesi  i == 5 olunca d�ng�y� bir defal���na atla ba�a d�n sanki i== 5 olmus gibi davran
//
//        }
//        printf("%d\n",i);
//

//    }






    int i=0;
    while(i<=10){
        if(i==5){
            i++;
            continue;


        }
        printf("%d\n",i);
        i++;
    }





















































    return 0;
}
