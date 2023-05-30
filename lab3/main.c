#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a-b==a)
        printf("Difference is equal to value %d",a);
    else if(a-b==b)
        printf("Difference is equal to value %d",b);
    else
        printf("Difference is not equal to any of the values entered");
    return 0;
}
