#include<stdio.h>
#include<stdlib.h>
//   0123
//   1234  ekrandan boyle bit cýktý olsun istiyorum
//   2345

/*int main()
{   int i,j;
    int dizi[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            dizi[3][4]=i+j;
             printf("%d",i+j);
        }
            printf("\n");

    }

    return 0;
}*/


///iki boyutlu diziye dýþarýdan deger atama kullanýcýdan yani***
/*int main()
{   int Row; //satýr
    int coloum; //sutun
    int i,j;
    printf("enter row ");
    scanf("%d",&Row);
    printf("enter column ");
    scanf("%d",&coloum);


    int matrix[Row][coloum];
    for(i=0;i<Row;i++){
        for(j=0;j<coloum;j++){
            printf("\n matrix[%d][%d] =",i,j);
            scanf("%d",&matrix[i][j]);


        }


    }


    for(i=0;i<Row;i++){

        for(j=0;j<coloum;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

int main()   ///algoitma mantıgını anlamak ıcın guel bir ornek
{

    int i,j,size;
    printf("enter size of square matris(size<10)");
    scanf("%d",&size);
    int matrix[size][size];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
           matrix[i][j]=0;
        }
    }

    for(i=0;i<size;i++){
        matrix[i][i] =1;
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
        if(i+j==size-1 || i==j){
            printf("1 ");}
        else
            printf("0 ");
        }
        printf("\n");
    }

    return 0;
}


