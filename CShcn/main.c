#include <stdio.h>
#include <stdlib.h>
int S();
int C();
int main() {
    int a,b;
    scanf("%d\n%d",&a,&b);
    printf("%d\n",S(a,b));
    printf("%d",C(a,b));
    return 0;
}
int S(int a,int b)
{
    int s=a*b;
    return s;
}
int C(int a,int b)
{
    int c=(a+b)*2;
    return c;
}