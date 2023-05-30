#include <stdio.h>
#include <stdlib.h>
int S();
int G();
int main() {
    int a,b;
    scanf("%d\n%d",&a,&b);
    char c;
    scanf("%c\n",&c);
    switch(c)
    {
        case 'c':
            printf("%d",G(a,b));
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
int G(int a,int b)
{
    int c=(a+b)*2;
    return c;
}