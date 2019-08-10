#include<stdio.h>
#include "lib.h"

int sum (int a, int b){
	printf("a= %d\nb= %d\nsum= %d\n",a,b,(a-b));
	return a-b;
}

float fsum (float a, float b){
	printf("a= %f\n",a);
	return (a + b);
}

char str(char a){
	return a;
}
