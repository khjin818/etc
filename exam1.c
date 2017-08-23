#include <stdio.h>

int main(){

	int a, arr[100]={1,};

	scanf("%d", &a);

	for(int i=0; i<a; i++){
		arr[i] = i;
	}
	
	printf("Hello\n");
	printf("a = %d\n", a);

	return 0;
}
