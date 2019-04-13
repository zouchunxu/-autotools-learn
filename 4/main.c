#include "include/common.h"

int main(){
	puts("current threads sleep 2 sceonds");
	sleep(2);
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
