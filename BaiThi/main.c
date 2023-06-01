#include <stdio.h>
#include <stdlib.h>
int isEvenNumber(int a);
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=n+1;i<m;i++)
    {
        if(isEvenNumber(i)==1)
            printf("%d\n",i);
    }
    return 0;
}
int isEvenNumber(int a)
{
if(a%2==0)
    return 1;
else
    return 0;
}