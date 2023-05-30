#include <stdio.h>
#include <stdlib.h>
int S();
int C();
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    char ch;
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
        case 'c':
            printf("%d",C(a,b));
            break;
        case 'd':
            printf("%d\n",S(a,b));
            break;
    }
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