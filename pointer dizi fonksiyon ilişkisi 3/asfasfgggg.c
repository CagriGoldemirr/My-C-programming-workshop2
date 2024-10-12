#include<stdio.h>
#include<stdlib.h>
#include <math.h>
void myarray(int* numbers,int size);
int main()
{


    int numbers[6] = {1,2,3,4,5,6};
    int size;
    size = sizeof(numbers)/sizeof(numbers[0]);
    /// ben bu diziyi  glolbal olarak da tanimlayabilirdim
    //ama oyle tanimlayinca program boyunca bellekte yer kaplýyor
    //boyle tanýmlamak daha efektif bir yontem
    myarray(numbers,size);
    return 0;
}
void myarray(int* numbers,int size)
{

    int i=0;
    for(i=0;i<size;i++){
        *(numbers+i) = *(numbers+i) * 3;
        printf("%d\n",numbers[i]);
    }

}

/// ek olrark biz bþr dizideki elemanlarý yazdýrýken bir dongu kuruyoruz
// bu dongunun þartlarýndan birinide dongunun eleman sayisina gore yapiyoruz
// eger eleman sayýsý degisirse ddizideki beným dongudeki sartý da degistirmem gerekr
// bu durumu cozmek icin size adýnda bir degisken  olusturuo bunu sizeof ile kullanrak arrayýn boyukluugnu ona atayabililrz
/// int size = sizeof(numbers) gibi ama bunu herhangi bir elemana bolmem gerek cunku her bir int kutucugu4 byte
// o yuzden dogru kod soyle olmalý int size = sizeof(numbers)/sizeof(number[0);
