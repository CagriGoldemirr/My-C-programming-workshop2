#include<stdio.h>
#include<stdlib.h>

//gets ve puts
int main()
{
    //PUTSSS
    //puts functionu adres al�r(pointer ve array giib)
    // puts bu adrresteki \0 karakterine kdarki olan karakterleri ekranan yazd�r�r

    char* messagesPtr = "what an interenting language";
    char myarray[40] = "hello my world";
    // alttaki gib putsu boyle kullanarak hic pritnf yazdirmadan direkt boyle yazdirabilirz


    puts(messagesPtr); // puts adresi c  al�r ve bu adresteki veriye ulasip onu yazdirir
    puts(myarray);  // bunlari yazdirdi ama alta alta yazdirdi yan yaan yazdirmadi
    //ben cumlelerin sonunda \n kullanmad�m puts funcitonu \0 karakter�n� \n karakte�ne ceviriyor
    // boylece alt alta yazdiriyor
    /// GETSSS

     //istenilen sayidan karakterin okunarak bir adrese yerlestirlmesini yapar ayr�ca ek olarak en sona
     // da nulll karakterini koyar

    char message[5];
    printf("please enter a sentence: ");
    gets(message);  /// bub function klavyeden girilen stringin arrayin ayirdigi alandan daha uzun olup olmadigini kontrol edemiyor
    puts("\nyour sentencece : ");
    puts(message);



    return 0;
}
