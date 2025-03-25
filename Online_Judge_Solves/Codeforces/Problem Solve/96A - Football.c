#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s",&a);
    int i,j,n=strlen(a),k=0;
    for(i=0; i<n; i++)
    {
        int count=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
                {
                    count++;
                }
            else
                break;
        }
        if(count==7)
        {
            k++;
            break;
        }
    }
    if(k==0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
