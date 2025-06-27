#include<stdio.h>
#include<string.h>
int main()
{
    int count = 1 ;
    char text[1000];


    printf("enter the text : ");
    fgets(text,sizeof(text),stdin);
    for(int i =0 ; i < strlen(text); i++)
    {
        if ((text[i] == ' ' && text[i+1] != ' ' && text[i+1] !='\t'&& text[i+1] !='\n')
                ||(text[i] == '\t' && text[i+1] != ' ' && text[i+1] !='\t'&& text[i+1] !='\n'))
        {
            count ++ ;
        }
    }
    if (text[0] == ' '||text[0]=='\t'||text[0]=='\n') count -= 1;

    printf("the number of worlds is : %d\n", count);
    return 0 ;


}
