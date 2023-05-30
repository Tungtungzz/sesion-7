#include <stdio.h>
#include <stdlib.h>
int q=0,w=0,e=0;
float tong=0;
void Menu();
float Chondo(char a);
void Tinhtien(char a);
int main() {
    char luachon;
    do {
        Menu();
        scanf("%c",&luachon);
        getchar();
        Tinhtien(luachon);
    }while(luachon!='d');
    return 0;
}
void Menu()
{
    printf("a. Espresso - $2.50\n");
    printf("b. Cappuccino - $3.00\n");
    printf("c. Latte - $3.50\n");
    printf("d. Quit\n");
}
float Chondo(char a)
{
switch(a)
{
    case 'a':
        return 2.5;
    case 'b':
        return 3;
    case 'c':
        return 3.5;
    default:
        return 0;
}
}
void Tinhtien(char a)
{
    if(a=='a')
    {
        tong+=Chondo(a);
        q++;
    }
    else if(a=='b')
    {
        tong+=Chondo(a);
        w++;
    }
    else if(a=='c')
    {
        tong+=Chondo(a);
        e++;
    }
    else if(a=='d')
    {
        if(q!=0)
            printf("Espresso: %d\n",q);
        if(w!=0)
            printf("Cappuccino: %d\n",w);
        if(e!=0)
            printf("Latte: %d\n",e);
        printf("%f",tong);
    }
}
