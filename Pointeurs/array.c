#include <stdio.h>
#include <stdlib.h>

int *create_array(int size) {
	int *array;
	array=malloc(size*sizeof(int));
	int *p; 
	int n=size; 
	p=array;
	for(int i=size;i>0;i--){
		*p=i;
		p++;
	}
	return array;

}

void display_array(int *array, int size) {
	printf("|");
	int *fin = array + size; 
	for(int *p=array;p<fin;++p){
		printf("%d",*p);
		printf("|");
	}
}

void display_array2(int *array, int size) {
	printf("|");
	for(int i=0;i<size;++i){
		printf("%d",array[i]);
		printf("|");
	}
}

int main() {
	display_array(create_array(50),50);
	printf("\n");
	display_array2(create_array(50),50);
}
