#include<stdlib.h>
#include<stdio.h>
int findLenght2(char* messages);
int findLenght(char messages[],int size);
int main()
{

    /*char messages[100];
    puts("enter a sentence :");
    gets(messages);
   int size =sizeof(messages)/sizeof(messages[0]);


    printf("lenght of sentence : %d ",findLenght(messages, size));



    return 0;
}
int findLenght(char messages[],int size){

    int lenght =0;
    for(int i=0;i<size;i++){
        if(messages[i] == '\0'){
            break;
        }
        else if(messages[i] != ' '){
            lenght = lenght +1;
        }


    }
    return lenght;
    */


    char messages[100];
    puts("enter a sentence :");
    gets(messages);

    printf("lenght of sentence : %d\n ",findLenght2(messages));



    return 0;


}

int findLenght2(char* messages){
    int i =0;
    while(messages[i] !='\0'){
        i++;
    }
    return i;


}

