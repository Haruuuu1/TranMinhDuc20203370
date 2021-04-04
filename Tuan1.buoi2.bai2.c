#include <stdio.h>
#include <stdlib.h>

int main(){
	float m;
	printf("thoi gian: ",m);
	scanf("%f", &m);
	float n;
	printf("cong: ",n);
	scanf("%f", &n);
	#define TEST n*m*24/3600000;
	float b=TEST;
	printf("tien la: %.0f VND", b*3500);
 

}
