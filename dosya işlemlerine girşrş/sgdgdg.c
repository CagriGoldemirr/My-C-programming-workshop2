#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//dosyaya veri yazd�rma ve dosyadan programam veri almlayi ogrenecegiz
//bu islemler veritaban� yailimciliginin baslangiclaridir
//ogretmenim bu derste verilerin normalde program bitince/kapan�nca kayboldugunu s�yledi ama dosya i�lemlerinde bunun onlenecegini soyledi

//ChatGPT
//Evet, ��retmeninizin bahsetti�i do�ru. C programlar� genellikle �al��t�klar� s�re boyunca bellekte tutulan verilere eri�irler. Ancak program sona erdi�inde veya
 //kapat�ld���nda, bellekteki veriler genellikle temizlenir ve kaybolur. Bu durum, program�n �al��ma zaman� boyunca elde edilen ge�ici bilgilerin kal�c� olmas�n� engeller.

//Dosya i�lemleri, verilerin disk �zerinde bir dosyada depolanmas�n� sa�lar. Bu sayede, program sona erse bile veriler kal�c� bir �ekilde saklanabilir.
 //Dosyaya yazma ve dosyadan okuma i�lemleri, verilerin program sona erdi�inde dahi korunmas�n� sa�lar. Bu, kullan�c�lar�n veya ba�ka programlar�n ayn� verilere eri�ebilece�i anlam�na gelir.
int main()
{
    // program bitince beni verim kayboluyor  ben bunu dosya islemleri ile engellleyebililrm yani bir verimi kal�c� olarark ramda ona yer tutabililrm
    // bu islemler hem veri kaliciligin saglar hemde  veriler uzerinde oynamayi saglar
    // diyelimki bir okuldaki ogrenci adlarini ve numaralarini tutan bir
    // veri laz�m bunu dosyada tutarak istedigim zaman onlara ulasabilirm

    // dosyaya veri yazmak icin 3 adim vardir
    //1* doyayi ac
    //2* gerekli fonk ve program ile veriyi dosyaya yazdiracagiz
    //3* acilan dosyayi kapatacaz

    FILE *fptr;
    fptr=fopen("data.txt","r");
    // bu data.txt dosyas� eger benim bu kodlar� yazd�g�m klasor �cnde yoksa kendisi data.txt diye dosya olusturacak
    // eger varsa da onu silecek ve yeni bir data.txt olusturacak ustunde islem yapacagiz artik

     // bu fopen iki parametre alacak
    // 1.si dosyanin yolunu isteyecek
    //2.si dosyanin acilma amacini isstiyor

    fclose(fptr);
    // *** diyelimki ben baska bir yerde olsturmak istiyorum kalosoru kodu yazdigim klasorun �c�nde olmasin
// o zaman ne yapmaliym
    FILE *fptr2;
    fptr2=fopen("C:\\Users\\Asus\\Desktop\\code block dosya islemlerine giris deneme2\\data.txt","w");
    // ustteki iki satir kodda masaustunde yeni klasor olusturdum icine de data.txt dosyasini koydum sonra sa� tik ile yol olarak
    // kopyalayip 1. cift tirnagin icine kpydumim
    // ama c de tek '\' isaretini c ye anltamak icin �ift kullanmak gerkiyor(escape/kacis metodu dersinde ogrendim)
    // o yuzden tek \ � cift hale getirmem gerek
    // program�n calistirmadadn klasorun �cndeki data txt yi sildim sonra kodu calistirdim
    // sonras�nda klasorunun �c�nde data txt metin dosyasi olustu(eger anlamadiysan dosya islemlerine girs 1.  viedeo)
    // diyleimki metin dosyasini icine bir seyler yazdim sonra kodu tekrar calistiridm ve tekrar metin dosyasinin icine baktim
    //yazdigim veriler kaybolmus cunku benim  amac olarak 2 t�rnagimin icinde "w" yaziyor yani write o yuzden "W"
    // kisacasi "w" oldugu zamanlar dikkatli olmalyiiz elimizdeki veriden de  olabilirz
    //"w" yi  ilk defa dosya olusturacgimzi zaman kulllamak mant�kl� eger bir sey eklemek vs istiyorsak "a" kullanmaliyiz


    //




    return 0;
}
