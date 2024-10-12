#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//dosyaya veri yazdýrma ve dosyadan programam veri almlayi ogrenecegiz
//bu islemler veritabaný yailimciliginin baslangiclaridir
//ogretmenim bu derste verilerin normalde program bitince/kapanýnca kayboldugunu söyledi ama dosya iþlemlerinde bunun onlenecegini soyledi

//ChatGPT
//Evet, öðretmeninizin bahsettiði doðru. C programlarý genellikle çalýþtýklarý süre boyunca bellekte tutulan verilere eriþirler. Ancak program sona erdiðinde veya
 //kapatýldýðýnda, bellekteki veriler genellikle temizlenir ve kaybolur. Bu durum, programýn çalýþma zamaný boyunca elde edilen geçici bilgilerin kalýcý olmasýný engeller.

//Dosya iþlemleri, verilerin disk üzerinde bir dosyada depolanmasýný saðlar. Bu sayede, program sona erse bile veriler kalýcý bir þekilde saklanabilir.
 //Dosyaya yazma ve dosyadan okuma iþlemleri, verilerin program sona erdiðinde dahi korunmasýný saðlar. Bu, kullanýcýlarýn veya baþka programlarýn ayný verilere eriþebileceði anlamýna gelir.
int main()
{
    // program bitince beni verim kayboluyor  ben bunu dosya islemleri ile engellleyebililrm yani bir verimi kalýcý olarark ramda ona yer tutabililrm
    // bu islemler hem veri kaliciligin saglar hemde  veriler uzerinde oynamayi saglar
    // diyelimki bir okuldaki ogrenci adlarini ve numaralarini tutan bir
    // veri lazým bunu dosyada tutarak istedigim zaman onlara ulasabilirm

    // dosyaya veri yazmak icin 3 adim vardir
    //1* doyayi ac
    //2* gerekli fonk ve program ile veriyi dosyaya yazdiracagiz
    //3* acilan dosyayi kapatacaz

    FILE *fptr;
    fptr=fopen("data.txt","r");
    // bu data.txt dosyasý eger benim bu kodlarý yazdýgým klasor ýcnde yoksa kendisi data.txt diye dosya olusturacak
    // eger varsa da onu silecek ve yeni bir data.txt olusturacak ustunde islem yapacagiz artik

     // bu fopen iki parametre alacak
    // 1.si dosyanin yolunu isteyecek
    //2.si dosyanin acilma amacini isstiyor

    fclose(fptr);
    // *** diyelimki ben baska bir yerde olsturmak istiyorum kalosoru kodu yazdigim klasorun ýcýnde olmasin
// o zaman ne yapmaliym
    FILE *fptr2;
    fptr2=fopen("C:\\Users\\Asus\\Desktop\\code block dosya islemlerine giris deneme2\\data.txt","w");
    // ustteki iki satir kodda masaustunde yeni klasor olusturdum icine de data.txt dosyasini koydum sonra sað tik ile yol olarak
    // kopyalayip 1. cift tirnagin icine kpydumim
    // ama c de tek '\' isaretini c ye anltamak icin çift kullanmak gerkiyor(escape/kacis metodu dersinde ogrendim)
    // o yuzden tek \ ý cift hale getirmem gerek
    // programýn calistirmadadn klasorun ýcndeki data txt yi sildim sonra kodu calistirdim
    // sonrasýnda klasorunun ýcýnde data txt metin dosyasi olustu(eger anlamadiysan dosya islemlerine girs 1.  viedeo)
    // diyleimki metin dosyasini icine bir seyler yazdim sonra kodu tekrar calistiridm ve tekrar metin dosyasinin icine baktim
    //yazdigim veriler kaybolmus cunku benim  amac olarak 2 týrnagimin icinde "w" yaziyor yani write o yuzden "W"
    // kisacasi "w" oldugu zamanlar dikkatli olmalyiiz elimizdeki veriden de  olabilirz
    //"w" yi  ilk defa dosya olusturacgimzi zaman kulllamak mantýklý eger bir sey eklemek vs istiyorsak "a" kullanmaliyiz


    //




    return 0;
}
