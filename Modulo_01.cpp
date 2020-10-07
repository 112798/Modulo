#include <stdio.h>

int main(){
	int a = 6;
	int b = 4;
	
	int val_01 = a%b;
	
	printf("val_01: %d\n", val_01);
	
	float af = 6.0;
	float bf = 4.0;
	
	val_01 = (int)af%(int)bf;
}
