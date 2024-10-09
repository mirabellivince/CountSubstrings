#include <stdio.h>
#include <string.h>

int count_substrings(char string[])
{
    int count = 0;
    char *str = string;
    
    while(*str!='\0')
    {
        if(*str == '\n' || *str == '\t' || *str == ' ')
        {
            count++;
        }
        str++;
    }
    
    
    
    
    return count;
}


int main()
{
    char word[] = "Hi my name is wumpy \n j";
    int breaks = count_substrings(word);
    printf("Hello World");
    printf("\n%d",breaks);

    return 0;
}
