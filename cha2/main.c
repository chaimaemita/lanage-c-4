#include <stdio.h>
#include <stdlib.h>
void change(int* b)
{
    *b=20;
}

int main()
{
    int a=10;
    int *p=&a;

    printf("la valeur de a est :10 \n");
    change(&a);
    printf("la valeur de a apres le changement est:%d",a);
    return 0;
}
