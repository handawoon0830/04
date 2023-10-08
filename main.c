#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("input the second:");
	scanf("%d", &a);
	
	printf("The time for %d is %d : %d : %d",a, a/3600, a%3600/60, a%3600%60);
	return 0;
}
