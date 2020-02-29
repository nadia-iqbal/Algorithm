#include<stdio.h>
#include<string.h>
int c[100][100];
char back[100][100];
int lcs_len(char x[],char y[])
{
    int m=strlen(x),n=strlen(y),i,j;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
         c[i][j]=0;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                back[i][j]='C';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                back[i][j]='U';
            }
            else
                 {
                     c[i][j]=c[i][j-1];
                     back[i][j]='L';
                 }
        }
    }
    return c[m][n];
}
void print(char back[][100],char x[],int i,int j)
{
    if(i==0||j==0)
    {
    return;
    }

else if(back[i][j]=='C')
{
    print (back,x,i-1,j-1);
    printf("%c",x[i-1]);
}
else if(back[i][j]=='U')
{
    print (back,x,i-1,j);
}
else
   print(back,x,i,j-1);
}
int main()
{
    char x[100],y[100];
    gets(x);
    gets(y);
    int len=lcs_len(x,y);
    printf("LCS length:%d\n",len);
    print(back,x,strlen(x),strlen(y));

}
