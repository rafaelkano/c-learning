
//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int temp;
	printf("a = % d\n", a);
	printf("b = % d\n", b); 
	temp = a;
	a = b;
	b = temp;
	printf("a = % d\n", a);
	printf("b = % d\n", b);
}