#include "../include/val.h"

int val(int *x){
	struct event_base *base;
	base = event_base_new();
	const char *x = event_base_get_method(base);
	printf("Method:%s\n",x);
	event_base_free(base);

	puts("this is value ===");
	printf("X:%d\n",*x);
	return 0;
}
