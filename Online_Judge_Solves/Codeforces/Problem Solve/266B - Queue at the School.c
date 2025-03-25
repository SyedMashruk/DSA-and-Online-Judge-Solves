#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d %d",&n,&t);
    char a[n+1],b[n+1],temp;
    scanf("%s",&a);
    strcpy(b,a);
    while(t--)
    {
        i=0;
        while(a[i]!='\0')
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                temp=b[i+1];
                b[i+1]=b[i];
                b[i]=temp;
            }
            i++;
        }
        strcpy(a,b);
    }
    printf("%s\n",b);
    return 0;
}
