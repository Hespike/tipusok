#include<stdio.h>

int main(){
	int a = -10; // Előjeles egész
	char c = 'a'; // Előjeles karakter
	float f = 3.14; // Előjeles legebőpontos szám
	double d = 235.23234; // 8bájtos lebegőpontos szám

	printf("a = %d\n" , a);
	printf("c = %c\n" , c);
	printf("f = %f\n" , f);
	printf("f = %lf\n" , d);
	return 0;
}