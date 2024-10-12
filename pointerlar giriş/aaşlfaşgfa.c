 #include<stdio.h>
#include<stdlib.h>
/// pointeler bir degiskendir  icinde baska bir variblenin bellek adresini tutan bir varibledir
/// degiskenlerin (variavlelerin)temel amacý degeri,ya da bir seyi akýlda tutar
/// ramdaki her kutunun bir adresi var her adres bir deger tutar
// pointerlar dabir variavledir ve onlarda bellekte yer tutar
int main()
{
     char name  = 'F';
    ///ben boyle yazdýgýmda derleyici ramda 1 byte lýk yer  ayýrýyor ..... adresinde bu 'F' degerini tutuyor
    /// ben f i adresini tutan bir degisken hayal edicem
    /// Bir programda, bilgiler bilgisayarýn belleðinde belirli yerlerde saklanýr.
    ///Bu yerlere "bellek adresi" denir ve bu adresleri kullanarak bilgilere eriþebiliriz. Pointerlar, bu bellek adreslerini tutan özel deðiþkenlerdir.
    /// *** Yani, bir pointer, bellekteki bir verinin nerede saklandýðýný gösteren bir tür iþarettir.
    ///Pointerlar genellikle program içinde veriye dinamik bir þekilde eriþmek veya onunla çalýþmak için kullanýlýr.
    /// eger ben buradad char degilde int deseydim bellekte 4 byte lik yer kaplardý  ama ben bu 4 kutucuktan hangisinin adresini ana adres olarak  alacagým
    /// ben burada ana adres olarak en abstaký kutucugun adresini alacagým yanu tutulan bolgenýný 1. byte
    ///pointerlar sayesinde bellek adresine dogrudan erisim saglamamýzý saglar bu da hýzlý ve verþmlý program yazmamýzý saglar
    /// pointerlerinde kendþne göre bir degiskenleri var bu degiskenler sayesinde ramdaki adresleri tutabilirz
    int x =7;
    printf("int : %d\n",sizeof(int)); // bu int ýn bellekte kac kutucuk ayýrdýgýný soyluyor
    printf("double : %d\n",sizeof(double));
    printf("char : %d\n",sizeof(char));
    printf("float : %d\n",sizeof(float));
    printf("x adres : %x\n",&x); // buda ana degerimizin adresini yazdýrýyor ama parametreden once & kullanmamız gererk
    //Burada %x, bir tamsayının onaltılık (hexadecimal) formatta yazdırılması için kullanılan format belirleyicisidir.
    /// eger ben degiskenin adrsini kullanýcýya göstermek istiyrsam

    /// kutucugun ıcınde bir tane variable ,ve onun degeri ve de adres bulunur ama biz char degilde bir int veya baska bir sey tanımladıysak birden fazla kutucuk kullanırz ve adres olarak da en bastaki adresi ana adres olarak seceriz
    return 0;
}
