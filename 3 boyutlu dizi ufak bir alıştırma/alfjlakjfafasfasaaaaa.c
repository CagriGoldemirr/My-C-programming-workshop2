#include<stdio.h>
#include<stdlib.h>
/*    1/2/3 satis temsilcisi
            --matematik kitabý
                --okula kac adet sattý
                --kýrtasiyeye kaö adet sattý


            -- yazýlým kitabý
                --okula kac adet sattý
                --kýrtasýyeye kac adet sattý */
 /// bu projey ayný femi uyar gibi yapmaya calis yendiden

int i,j,k;
int sales[3][2][2];
void writeSales();
void  readSales();
int main()
{



    readSales();
    writeSales();







    return 0;
}


void readSales(){

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){


                scanf("%d",&sales[i][j][k]);
            }
        }
    }




}
void writeSales(){




    for(i=0;i<3;i++){
            printf("%d. representive :",i+1);
        for(j=0;j<2;j++){
                printf("type book %d",j+1);
            for(k=0;k<2;k++){

                printf("sales[%d][%d][%d] = %d",i,j,k ,sales[i][j][k]);

            }
        }printf("\n");
    }










}
