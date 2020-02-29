#include<stdio.h>
void activity(int s[], int f[], int n)
{
    int i=0, m;
    printf("%d to %d\n", s[0], f[0]);
    for(m=1; m<n; m++)
    {
        if(s[m]>=f[i])
        {
            printf("%d to %d\n", s[m], f[m]);
            i=m;
        }
    }
}
int main()
{
    int s[100], f[100], n;
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &s[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&f[i]);
    }
    int j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(f[j]>f[j+1])
            {
                int temp = f[j+1];
                f[j+1]=f[j];
                f[j]=temp;

                temp = s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }
        }
    }
    activity(s, f, n);
    return 0;
}
