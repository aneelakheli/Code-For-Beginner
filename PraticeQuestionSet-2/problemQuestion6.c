#include <stdio.h>

int main()
{
    int x[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the value of x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nx[%d] is %d",i,x[i]);
    }
    printf("\n");
    return 0;
}

