#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int a,b;
    printf("nhap so thu nhat: ");
    scanf("%d", &a);
    printf("nhap so thu hai: ");
    scanf("%d", &b);
    int n=255-pow(2,b-1);
    printf("%d", a&n);
    return 0;
}

