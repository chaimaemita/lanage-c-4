#include <stdio.h>
#include <stdlib.h>
int addition(int a, int b)
{

    return a+b;

}

int main()
{
    int a,b;
    printf("entrer la valeur de a: \n");
    scanf("%d",&a);

    printf("entrer la valeur de b: \n");
    scanf("%d",&b);

    printf("l'addition de ces nombres est: %d\n", addition(a,b));

    return 0;
}
