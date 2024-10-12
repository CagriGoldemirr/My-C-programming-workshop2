#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    // 1 2 3 4 5 6 7
    int number[7];
    int i;
    printf("enter array numbers \n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&number[i]);



    }
    printf("---orginial order---\n");
    for(i=0;i<7;i++)
    {
        printf("%d\n",number[i]);

    }

    printf("----end to start----\n");
    for(i=6;i>=0 ;i--){
            printf("%d\n",number[i]);


    }








    return 0;
}
