#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    scanf("%s%s",&a,&b);
    if(strcmp(strrev(a),b)==0)
    printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
