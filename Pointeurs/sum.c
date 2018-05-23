#include <stdio.h>

double sum1(double *tab, int size) {
	printf(" [ "); 
	for(int i=0;i<size;++i){
		printf("%f ",tab[i]);
	}
	printf("]\n");
}

double sum2(double *tab, int size) {
	printf(" [ "); 
	double *fin=tab+size; 
	for(double *p=tab;p<fin;++p){
		printf("%f ",*p);
	}
	printf("]\n");
}

int main(void) {
	float tab[5];
	tab[0]=100;
	tab[1]=10;
	tab[2]=1;
	tab[3]=0.1;
	tab[4]=0.01;
	
	sum1(tab[],5);
	sum2(tab[],5);

}
