#include<stdio.h>
#include<unistd.h>

char ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 65 || str[i] > 122)
        {
            printf("found it!");
            
        }
        write(1,&str[i],1);
        i++;
    }
    return 0;
}

int main (void)
{
    char treta[] = "Sênior de 2 anos";
    char date[] = "2022/07/09";
    char string;

    string = 136;

    ft_strlen(treta);
    return 0;
}