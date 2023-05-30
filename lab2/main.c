#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a*b>1000)
        printf("a*b>1000");
    else
        printf("a*b<1000");
    return 0;
}
