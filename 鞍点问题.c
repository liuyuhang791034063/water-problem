#include<stdio.h>
int main()
{
    int m,n,i,j,max,min,num=0,p,q,note;
    scanf("%d %d",&m,&n);
    int a[m][n],b[n];
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    for (i=1;i<=m;i++)
    {
        min=a[i][1];
        for (j=1;j<=n;j++)
           if (a[i][j]<min)
                min = a[i][j];
        for (j=1;j<=n;j++)
            if (a[i][j]==min)
            {
                note=0;
                for (q=1;q<=m;q++)
                    if (a[q][j]>min)
                    {
                        note=1;break;
                    }
                if (note==0)
                {
                    num++;
                    printf("(%d,%d,%d)",i,j,a[i][j]);
                }
            }
    }
    if (num==0)
        printf("NONE");
}
