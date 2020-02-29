
#include<stdio.h>
int main()
{
    int a[100][100],b,c,i,j,m,n;
    scanf("%d",&n);
    j=n/2;
    i=0;
    for(m=1;m<=n*n;m++)
    {
        a[i][j]=m;
        if(m%n==0)
        {
           i++;
        }
        else
        {
            if(i==0)
            {
                i=n-1;
                j++;

            }
            else if(i>0)
            {
                i--;
                j++;
                if(j>n-1)
                {
                    j=0;
                }
            }
        }

    }
    for(b=0;b<n;b++)
    {
        for(c=0;c<n;c++)
        {
            printf("%5d",a[b][c]);
        }
        printf("\n\n");
    }
    return 0;

}

