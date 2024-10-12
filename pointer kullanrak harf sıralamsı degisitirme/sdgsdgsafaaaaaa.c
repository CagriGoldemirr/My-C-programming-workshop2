#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void charactersScroll(char* characters,int size);
int main()
{
    int size,i,j;
    char characters[7] = {'Y','a','z','i','l','i','m'};
    size = sizeof(characters)/sizeof(characters[0]);


    for(i=0;i<size;i++){
        charactersScroll(characters,size);

        for(j=0;j<size;j++){
             printf("%c",characters[j]);
        }printf("\n");
    }



    return 0;
}


void charactersScroll(char* characters,int size)
{   int i;
    int j;
    char k;
    for(i=0;i<size+1;i++){
            k = characters[0];
        for(j=0;j<=size-1;j++){
               characters[j] = characters[j+1];



        }
    characters[size-1] = k;
    }




}
