#include <stdio.h>

int main()
{
	int n;
	printf("Enter wise number:\n");
	scanf("%d",&n);
    int x[n],i;
    printf("Enter the %d number:\n", n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nx[%d] is %d",i,x[i]);
    }
    printf("\n");
    return 0;
}

