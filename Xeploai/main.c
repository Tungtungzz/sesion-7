#include <stdio.h>
#include <stdlib.h>
char Xeploai();
int main() {
    int a;
    scanf("%d",&a);
    printf("%c",Xeploai(a));
    return 0;
}
char Xeploai (int a)
{
    if(a>=90)
        return 'A';
    else if (a>=80 && a<90)
        return 'B';
    else if (a>=70 && a<80)
        return 'C';
    else if (a>=60 && a<70)
        return 'D';
    else
        return 'F';
}