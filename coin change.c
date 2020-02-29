#include<stdio.h>
int main()
{
    int d[200];
    int i,j,n,p;
    printf("How Many Coin: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d",&j);
    int c[100],s[100];
    c[0]=0;
    for(p=1;p<=j;p++)
    {
        int min =10000;
        for(i=1;i<=n;i++)
        {
            if(d[i]<=p)
            {
                if((c[p-d[i]]+1<min))
                {
                    min=c[p-d[i]]+1;
                    s[p]=d[i];
                    c[p]=min;
                }
            }
        }
    }
    printf("Coin Used : %d\n",c[j]);
    while(j>0)
    {
        printf("Coin Used : %d ", s[j]);
        j=j-s[j];
    }
}
