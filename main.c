#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("enter the year :");
	scanf("%i",&a);
	
	if (a%4==0 && a%100!=0 || a%400==0)
		printf("the year is À±³â");
		
	else
		printf("the year is not À±³â");
	return 0;
}
