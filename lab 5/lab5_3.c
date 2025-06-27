#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0 ;
    char text[1000];
    char find_text[100];
    printf("enter the text : ");
    fgets(text,sizeof(text),stdin);
    printf("enter the word to search : ");
    fgets(find_text,sizeof(find_text),stdin);
    for(int i = 0 ; i<strlen(text); i ++ )
    {
        int found =1 ;
        for (int j = 0 ; j < strlen(find_text)- 1 ; j++)
        {
            if (text[i + j] != find_text[j])
            {
                found = 0 ;
                break ;
            }
        }
        if (found )
        {
            printf("Occurrence at index : %d\n", i ) ;
            count ++  ;
        }
    }
    printf("Total number of occurrences : %d",count);
    return 0;
}
