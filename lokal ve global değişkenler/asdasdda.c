#include<stdio.h>
#include<stdlib.h>
/*void print();
int main(){ // herhangi bir küme parantezinin içinde olan veya herhangi bir fonskiyonun içinde olan deðiþkenlere biz lokal deðiþkenler diyoruz ancak tüm fonksiyonlarý kapsayan hepsinde çalýþan deðiþkenlere global deðiikenler diyoruz
    int superVariable = 7; //supervariable bir lokal deðiþken çünkü sadece main içinde çalýþýyor
    print();



    return 0;
}


void print(){

    printf("%d\n",superVariable);



}*/ //eger ben bu kodu çalýþtýrmak istersem kod void fonksiyonunun içindeki printf den dolayý hata verecek çünkü void fonksiyonunda supervariable diye bir degisken tanýmlamadým bu yüzden supervariable degiskeni bir local degisken





/*void print();
int superVariable = 2; // eger supervaraiableyi böyle tanýmlarsak global degýsken oluyor ve ýstedýgýmýz yerde kullandýgýmýzda sonuc veriyor ama onu global sekilde tanýmladýgýmýz ýcýn sonucta da global degerini veriyor ýstersek ona local olarak farklý deger de versek direkt globalý yazdýrýyor
int main(){
    int superVariable = 7;
    print("%d",superVariable);
    print();



    return 0;
}


void print(){

    printf("%d\n",superVariable);



}*/



void increase();
void decrease();
int x = 7;
int main(){
    printf("x:%d\n",x);
    increase();
    printf("x:%d\n",x);
    decrease();
    decrease();
    decrease();
    printf("x:%d\n",x);




    return 0;


}
void increase(){

    x++;
}
void decrease(){
    x--;
}
