#include<stdio.h>
#include<stdlib.h>
int main()
{
     char message[] = "string is \"very\" important ";
    // c stirng icine string yazmaya izin vermiyor bundan kacinmak icin escape kullanmam gerek
    // backslashı onune ve sonuna koymam gerek ama dikkat et sonundaki icerde ilki disinda
    printf("%s\n",message);





    // boyle iki tane backslash atarak da saddece 1 tanesini yazdirabilirz
    char message2[] = "string \\ is \"very\" important ";
    printf("%s\n",message2);



    char message3[] = "string 'quite'  is \"very\" important ";
    printf("%s\n",message3);
    printf("-----------------\n");
    // \t bir tab bosluk  birakir


    // ben bir pointera bir string atayabilirm burdna bunu ogrenmliyizfor(i=0;i<size;i++){

            printf("% c ",*(kelime+i));
        }

    char message4[] = "how are you today";
    char* messageptr = &message4;
    int i;

    while(*(messageptr+i) != '\0'){
        printf("%c",*(messageptr+i));
        i++;
    }

    return 0;
}

