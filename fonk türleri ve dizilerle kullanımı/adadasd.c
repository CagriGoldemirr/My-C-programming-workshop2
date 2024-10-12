#include<stdio.h>
#include<stdlib.h>

/*void allNumbers(int MyNumber[6]){
    for(int i=0;i<6;i++){ //arraylar 0 dan baþladýðý için bizde i yi 0 dan baþlattýk
        printf("number is %d\n",MyNumber[i]); //yazdýrýrken önce arrayýmýn ismini sonra deðiþkeným olan i yi giriyorum ki arrayýmin içinde i dönsün
        //voidde geriye deger donduremeycegımız ıcın cıktıyı burada almamız gerek

    }



}
int ShowMe(int x){ // boyle kullanım daha cok yaygın
    return x+5; // atan printf blogunun ıcındekı 2 yi alacak ve int 2 yapacak ardınddan donduruken 5 ekleycek ve ardından assagıya kendi printf satırının ıcıne gırecek
    //normalde functionların ıcınde pritnf ile cıktı almayız sadece yapılacak ıslemı yaptırırrız
}
// TANIMLADIGIMIZ FONK ICINDE  SADECE ISLEMI YAPTIRIRP ANA FUNCTŞON ICINDE YANI MAİN FUNCTİONDA YAZDIRMAK DAHA MANTIKLI VE YAYGIN
// normalde void bir deger döndurmez  dondurmemesi ýcýn zaten void diye bir deger tanýmlýyoruz ama eger ben bir deger dondurusun istiyorsam dondururken dondurulen seyin adýný return den sonra yazmam gerek
//ana fonksiyonda yani main fonskiyonunda return olarak 0 degeri donduruyorduk ama kendý yazdýgýmýz fonksiyonda neyi dondurmek istiyorsak onu return ifadesinin sonuna yazýcaz





int main()
{

    //int x=2,y=4,z // ben diylewimki burada 4 5 tane variable tanýmlayacaðým ama bunlarý tek tek yazmak zor olmasada vakit kaybý olabilir isler buyuyunce
    //bunun icin arraylarý kullanýrýz
    int MyNumber[6] ={10,20,30,40,50,60};//ama böyle yaparak bir dizi tanýmlýyorum ve deðerlerimi bu diznin her bir elemanýna atayacagým benim arrayýmýn adý MyNumber
    // eger 100 adet variable tanýmlamak istersem tek tek degisken bulmak ve onlarý atamak yerine boyle yapabýlýrým
    allNumbers(MyNumber); // burad fonksiyonumu cagýrdým  ve argüman olarak  da ona MyNumber dedim

    printf("result is %d\n",ShowMe(2));//burada showme (2) yerine 7 dondurecek
    printf("sonuc is %d\n",ShowMe(14));

    return 0;
}*/


//int sumNumber(int x ,int y){
    //return x+y;


/*int substricton(int a,int b){
    return a-b;




}*/



// eger ben burada once toplama sonra o iki sayıyı carpmak istiyorsam void burada yetersiz kalır
// once 1 ve 6 yı yukarıdakı return ile topladım sonrabu degerı 5 ole carpıpı mynumber a esıtledım sonrada mynumber ı yazdırdım

/*int main()
{

    //int MyNumber=sumNumber(1,6)*5;
    //printf("that result is %d\n",MyNumber);

    int thatNumber =substricton(10,7)*5;
    printf("that sonuc  is %d\n",thatNumber);




    return 0;






}*/






/*void theMessage(){ // bu kısım declaration
    printf("I love c language\n"); // bu kısım definition burada fonksiyonu ttanımlıyoruz detay veriyoruz

//bır functşon temelde iki bolumden olusur 1.si burada fonksiyonu bildiriyoruz buna declaration da deniyor

}

int main()
{
// usta yazılımcılar once main fonksşyonunu yazıyor sonra fonksşyonu yazıyor yanı fonk mainın altındaki(ıcınde degıl)bloklarda bulunuyor. ama onlar main baslamadan mainin ustune yazacakları fonskiyonu bildriyorular yanı fonksiyonun declaration ve definiton bolumlerini ayırıyorlar


    theMessage(); //functionlarımızı boyle cagırıyorduk







    return 0;
}*/


/*void theMessage();  // fonksiyon boyle bıldırılıyor
int sumNumber(int x,int y);
int main()
{
    theMessage();
    return 0;
}
void theMessage(){
    printf("I love c language\n");

}*/





/*int sumNumber(int x , int y);
int main(){
    int sonuc = sumNumber(7,8);
    printf("number of sum is %d",sonuc);











    return 0;
}

int sumNumber(int x , int y){
    return x+y;
}*/

/*int getlargest(int,int,int);
int main()
{   int num1,num2,num3,maxnum;
    printf("enter three number");
    scanf("%d%d%d",&num1,&num2,&num3);
    maxnum = getlargest(num1,num2,num3);
    printf("%d is max number",maxnum);

    return 0;
}



int getlargest(int num1,int num2,int num3){

    if(num1>num2 && num1>num3){

        return num1;

    }

    else if(num2>num1 && num2 >num3){
        return num2;

    }
    else{
        return num3;
    }

}*/













