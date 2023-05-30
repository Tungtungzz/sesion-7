#include <stdio.h>
#include <stdlib.h>
void Menu();
void Kiemtrasodu();
int Ruttien();
int Guitien();
int main() {
    int sodu=0;
    char luachon;
    do{
        Menu();
        scanf("%c",&luachon);
        getchar();
        switch (luachon)
        {
            case 'a':
                Kiemtrasodu(sodu);
                break;
            case'b':
                sodu = Ruttien(sodu);
                break;
            case'c':
                sodu= Guitien(sodu);
                break;
        }
    }while(luachon!='d');
    return 0;
}
void Menu()
{
    printf("a. Kiem tra so du\n");
    printf("b. Rut tien\n");
    printf("c. Gui tien\n");
    printf("d. Thoat\n");
}
void Kiemtrasodu(int a)
{
    printf("%d\n",a);
}
int Ruttien(int a)
{
    printf("Nhap so tien ban muon rut\n");
    int b;
    scanf("%d",&b);
    if(a>=b)
        return a=a-b;
    else
        return a;
}
int Guitien(int a)
{
    printf("Nhap so tien ban muon gui\n");
    int b;
    scanf("%d",&b);
    return a=a+b;
}