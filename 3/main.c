#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "sum.h"
#include "get.h"

int main(){
	int x = 10;
	int y = 20;
	int z = sum(&x,&y);
	puts("This is Main");
	printf("Z:%d\n",z);
	x = 20;
	z = get(&x,&y);
	printf("Z:%d\n",z);
	return 0;
}
