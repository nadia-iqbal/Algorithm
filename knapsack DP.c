
#include<stdio.h>
int z[100][100];
int kas_dp(int w[],int p[],int m,int n);
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int p[100],w[100];
    int i,j;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&w[i],&p[i]);
    }
    int mama;
    mama=kas_dp(w,p,m,n);
    printf("%d\n",mama);

}
int kas_dp(int w[],int p[],int m,int n)
{
    int i,j;
    for(i=0;i<=n;i++)
        z[i][0]=0;

     for(j=0;j<=m;j++)
            z[0][j]=0;


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(w[i]>j)
            {
                z[i][j]=z[i-1][j];
            }

            else
            {
                if(z[i-1][j]>z[i-1][j-w[i]]+p[i])
                {
                    z[i][j]=z[i-1][j];
                }
                else{
                    z[i][j]=z[i-1][j-w[i]]+p[i];
                }
            }
        }
    }
    return z[n][m];
}
