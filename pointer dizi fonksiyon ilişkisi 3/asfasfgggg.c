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
    //ama oyle tanimlayinca program boyunca bellekte yer kapl�yor
    //boyle tan�mlamak daha efektif bir yontem
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

/// ek olrark biz b�r dizideki elemanlar� yazd�r�ken bir dongu kuruyoruz
// bu dongunun �artlar�ndan birinide dongunun eleman sayisina gore yapiyoruz
// eger eleman say�s� degisirse ddizideki ben�m dongudeki sart� da degistirmem gerekr
// bu durumu cozmek icin size ad�nda bir degisken  olusturuo bunu sizeof ile kullanrak array�n boyukluugnu ona atayabililrz
/// int size = sizeof(numbers) gibi ama bunu herhangi bir elemana bolmem gerek cunku her bir int kutucugu4 byte
// o yuzden dogru kod soyle olmal� int size = sizeof(numbers)/sizeof(number[0);
