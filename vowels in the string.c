#include <stdio.h>

int main()
{
    int x;
    char str[100];
    int i ; int count = 0;
    printf("enter the string \n");
    scanf("%s",&str);
    printf("enter the number of elements\n");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("the no. of vowels is %d .\n",count);
}