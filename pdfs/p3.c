#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        for(i=1; i<=n/2; i++)
        {
            for(j=1; j<=i; j++)
                printf("%d ",j%2);
            for(j=1; j<=2+4*(n/2 -i); j++)
                printf(" ");
            for(j=1; j<=i; j++)
                printf("%d ",j%2);
            printf("\n");
        }
        for(i=1; i<=n; i++)
            printf("%d ",i%2);
        printf("\n");
        for(i=n/2+2; i<=n; i++)
        {
            for(j=1; j<=n-i+1; j++)
                printf("%d ",j%2);
            for(j=1; j<=2+4*(i-n/2-2); j++)
                printf(" ");
            for(j=1; j<=n-i+1; j++)
                printf("%d ",j%2);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
