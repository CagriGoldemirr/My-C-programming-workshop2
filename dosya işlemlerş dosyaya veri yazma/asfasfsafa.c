 #include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    FILE* fptr;
    fptr = fopen("C:\\Users\\Asus\\Desktop\\code block dosya islemlerine giris deneme2\\data.txt","w");
    // eger ben hemen ust satýrda 'w' kullanýrsam her calistirdigimda kodu bir onceki yazdiklarini silecek tekrardan yazdýracak her seferinde
    // ama 'a' kullanýrsam her calistirdigimda sifirlamak yerine uzerine ekleyerek gidecek
    char name ='R';
    char name2 = "cagri";
    char name3;
    //dosyayi dogru sekilde acip acmadigimizi kontrol etmek icin sunlari yapabilirz;
    if(fptr == NULL)
        printf("my file is  open unseccesful\n");
    else
        /*putc('e',fptr); // putc fonksiyonu ile sadece 1 karakteri yazdırabilirz boyle
        putc('z',fptr);

        putc('a',fptr);
        putc('n',fptr);*/

        for(name3='a';name3<='z';name3++){
        fputc(name3,fptr);
        fputc('\n',fptr);
    }
    fclose(fptr);



        //putc ile dosya icine tek bir karakter yazabilirm
        printf("data is written to file\n");
        fputc(name,fptr);




    return 0;
}
