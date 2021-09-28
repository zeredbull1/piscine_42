#include <stdio.h>
int main(void)
{
    int i = 0;
    //char a[10][10];
    char **ptr;
    ptr = ft_split("a,bfdb,dfs", ",");
    //printf("%s \n", ptr[0]);
    while(ptr[i] != 0)
    {
        printf("%s at %i\n", ptr[i], i);
        i++;
    }
}