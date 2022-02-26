#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,sayi;
	int faktoriyel;
	
	printf("Faktoriyeli alinacak sayi:  ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("Sonucunuz: %d ",faktoriyel);
	
	return 0;
}
