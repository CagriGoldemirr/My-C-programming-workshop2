#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int numbers[6] = {1,2,3,4,5,6};
int main()
{
    char myletter[5] = {'x','y','z','k','l'};
    int mynumbers[5] = {7,45,65,34,76};
    int i=0;

    printf("---myletter degerleri ----\n");
    for(i=0;i<5;i++){
        printf("%d. eleman : %c\n",i+1,*(myletter+i));
    }


    printf("---MYnumbers degerleri ----\n");


    for(i=0;i<5;i++){
        printf("%d. eleman : %d\n",i+1,mynumbers[i]);
    }

    printf("----myletter adresleri----\n");

    for(i=0;i<5;i++){
        printf("adress myletter[%d] : %x:\n",i,myletter+i);
    }

    printf("-----mynumbers adreslerş-----\n");
    for(i=0;i<5;i++){
        printf("adress mynumbers[%d] : %x:\n",i,&mynumbers+i);
    }







    return 0;
}
