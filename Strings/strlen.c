#include <stdio.h>

int my_strlen(const char *str){
	int taille=0;
	
	const char *p=str;
	while(*p != '\0'){
		taille=taille+1;
		++p;
	}
	return taille;
}

int main() {
	
	char str[]="bonjour"; 
	printf("longueur: %d",my_strlen(str));

}
