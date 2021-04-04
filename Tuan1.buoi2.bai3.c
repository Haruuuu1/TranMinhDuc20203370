#include <stdio.h>
#include <stdlib.h>
#define P 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float n;
	printf("ban kinh la: ");
	scanf("%f", &n);
	printf("duong kinh la: %.2f cm \n\ dien tich la: %.2f cm^2 \n\ chu vi la: %.2f cm", 2*n, n*n*P, n*2*P);
	return 0;
}
