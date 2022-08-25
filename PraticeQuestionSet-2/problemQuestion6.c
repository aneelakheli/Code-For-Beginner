#include <stdio.h>

int main()
{
    int x[10];
    int i;
    printf("Enter the 10 number:\n")
    for(i=0;i<10;i++)
    {
        printf("Enter the value of x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\nx[%d] is %d",i,x[i]);
    }
    printf("\n");
    return 0;
}

