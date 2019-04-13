#include <str.h>

int str(char *string){
	printf("hellowotld \n");
	return 0;
}


int main(){
	char str_read[1024];
	printf("Please INPUT something end by [ENTER]\n");
	scanf("%s",str_read);
	return str(str_read);

}
