#include<stdio.h>
#include<math.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    int z[t];
    for(k=0; k<t; k++)
    {
        int px,py,i,u,d,r,l;
        char s[100000];
        i=u=d=r=l=0;
        scanf("%d %d",&px,&py);
        scanf("%s",&s);
        while(s[i]!='\0')
        {
            if( s[i]=='U' || s[i]=='u')
                u++;
            else if(s[i]=='D' || s[i]=='d')
                d++;
            else if(s[i]=='R' || s[i]=='r')
                r++;
            else if(s[i]=='L' || s[i]=='l')
                l++;
            i++;
        }
        if(px>=0 && py>=0)
        {
            if(r>=px && u>=py)
                z[k] = 0;
            else
                z[k] = 1;
        }
        else if(px<0 && py<0)
        {
            if(l>=abs(px) && d>=abs(py))
                z[k] = 0;
            else
                z[k] = 1;
        }
        else if(px>=0 && py<0)
        {
            if(r>=px && d>=abs(py))
                z[k] = 0;
            else
                z[k] = 1;
        }
        else if(px<0 && py>=0)
        {
            if(l>=abs(px) && u>=py)
                z[k] = 0;
            else
                z[k] = 1;
        }
    }
    for(k=0; k<t; k++)
    {
        if(z[k]==0)
            printf("YES\n");
        else if(z[k]==1)
            printf("NO\n");
    }
    return 0;
}
