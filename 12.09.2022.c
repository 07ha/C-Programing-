#include<stdio.h>

int main()
{
    int x;
    printf("enter the number  ");
    scanf("%d",&x);
    

   
    if(x%2==0)
        {
        printf("the number is  divisible by 2 \n");
        printf("the number is even /n");
        }
    else if(x%2 != 0)
        {
        printf("the number is not divisible by 2 \n");
        printf("the number is odd /n");
        }
    
    
}