#include<stdlib.h>
#include<stdio.h>
void myMessage(){
    printf("hello\n");       //buranın çıktısı  olmayacak çünkü biz bu fonksiyonu çağırmıyoruz bir fonk ancak çağırıdığında çalışır
        // geriye bir sey dondurmeyeceksem

                                // void kullannirim
    }
void nameList(char name[],int age){ //artık buradaki name cagri oluyor ayrıca functionların içibdeki variablellara degisken degil parametre diyoruz

    printf("%s is %d years old\n",name,age);



}




int main()
{               // kodu bir kez yazýp istedigim zamaan
                //  cagrýp istedigim zaman kullanabilirlm


    nameList("cagri", 23); // FOksiyon böyle çağırılır ancak böyle çalışır ve bunun çıktısı da hello olacaktır
    // ayrıca buradaki "cagri" ifadesine argüman denir

    nameList("ali",43);
    nameList("beyza",45); //tek tek printf demek yerine böyle kolayca istediğim değeri atar yazdırırım
    nameList("caner",45);






    return 0;
}
