#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int wordCount(char*);
int main()
{
    char message[50];
    puts("enter a sentence");
    gets(message);
    //printf("enter a sentence\n");
    //scanf("%s",&message);
    printf("there are  %d words in the sentence \n",wordCount(message));




    return 0;
}
int wordCount(char* ptr){
    int i =0,myword =0;
    while(ptr[i]!='\0'){
        if(ptr[i] == ' '){
            myword++;
        }



        i++;
    }
    return myword+1;





}
