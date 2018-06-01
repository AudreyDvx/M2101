#include <stdio.h>

double sum1(double *tab, int size) {
	double somme=0;
	for(int i=0;i<size;++i){
		somme=somme+tab[i];
	}
	return somme;
}

double sum2(double *tab, int size) {
	double somme=0;
	double *fin=tab+size; 
	for(double *p=tab;p<fin;++p){
		somme=somme+*p;
	}
return somme;
}

int main(void) {
	double tab[5]={100,10,1,0.1,0.01};

	double somme1=sum1(tab,5);
double somme2=sum2(tab,5);
	printf("Resultat fonction 1=%f",somme1);
	printf("Resultat fonction 2=%f",somme2);

}
