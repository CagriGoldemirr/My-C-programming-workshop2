#include<stdio.h>
#include<stdlib.h>
/*void print();
int main(){ // herhangi bir k�me parantezinin i�inde olan veya herhangi bir fonskiyonun i�inde olan de�i�kenlere biz lokal de�i�kenler diyoruz ancak t�m fonksiyonlar� kapsayan hepsinde �al��an de�i�kenlere global de�iikenler diyoruz
    int superVariable = 7; //supervariable bir lokal de�i�ken ��nk� sadece main i�inde �al���yor
    print();



    return 0;
}


void print(){

    printf("%d\n",superVariable);



}*/ //eger ben bu kodu �al��t�rmak istersem kod void fonksiyonunun i�indeki printf den dolay� hata verecek ��nk� void fonksiyonunda supervariable diye bir degisken tan�mlamad�m bu y�zden supervariable degiskeni bir local degisken





/*void print();
int superVariable = 2; // eger supervaraiableyi b�yle tan�mlarsak global deg�sken oluyor ve �sted�g�m�z yerde kulland�g�m�zda sonuc veriyor ama onu global sekilde tan�mlad�g�m�z �c�n sonucta da global degerini veriyor �stersek ona local olarak farkl� deger de versek direkt global� yazd�r�yor
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
