#include<stdio.h>
#include<stdlib.h>

int main(){
    int matrix[2][2][2];
    //int matrix[2][3][4] =  {{1,2,3,4} , {1,2,3,4} ,  {1,2,4,5}}       ,     {{1,34,5,6} , {1,543,65,34} ,  {12,54,65,34}}; // uc boyutlu dizi ornegi
               // 2 parantez ac ,her brir parantezin icine 3 parantez ac io actýgnýn her paratntezin ýcýne 4 adet veri gir

    int j,k,i;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("\n matrix[%d][%d][%d] =",i,j,k);
                scanf("%d",&matrix[i][j][k]);

            }
            printf("\n");

        }printf("\n\n");
    }
    printf("\n");




    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("%d",matrix[i][j][k]);

            }
            printf("\n");

        }printf("\n\n");
    }

    return 0;
}
