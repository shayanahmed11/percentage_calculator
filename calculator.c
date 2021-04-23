#include<stdio.h>
int main()
{
	int total, obtained;
	printf("enter obtained marks:");
	scanf("%d", &obtained);
	printf("enter total marks:");
	scanf("%d", &total);
	printf("your percentage is %d", (obtained*100) / total);
}