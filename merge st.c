#include<stdio.h>
#define INF 21448346
void margeing(int a[],int p,int r);
void marge_sort(int a[],int p,int r);
int main ()
{
    int a[100],n;
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf ("\sorted arry is:\n");
    marge_sort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
void marging(int a[],int p,int q,int r)
{
    int n1=q-p+1,n2=r-q;
    int l[100],R[100],i,j;
    for(i=1;i<=n1;i++)
    l[i]=a[p+i-1];
    for(j=1;j<=n2;j++)
    R[j]=a[q+j];
    l[n1+1]=INF;
    R[n2+1]=INF;
    i=1,j=1;
    int k;
    for(k=p;k<=r;k++)
    {
        if(l[i]<=R[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;

        }
    }
}
void marge_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        int q=(p+r)/2;
        marge_sort(a,p,q);
        marge_sort(a,q+1,r);
        marging(a,p,q,r);
    }
}
