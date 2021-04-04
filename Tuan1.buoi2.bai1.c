#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int n;
 	printf("thoi gian cua ban la: ");
 	scanf("%d", &n);
 	int a=(int) n/3600;
 	int b=(int) (n%3600)/60;
 	int c=(int) ((n%3600)%60);
 	printf("thoi gian cua ban la: %d gio, %d phut, %d giay",a,b,c);
 	
 	
 }
