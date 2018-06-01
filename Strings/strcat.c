#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *src){
	
	char *p =dest;
	const char *v=src;

	
	while(*p != '\0'){
		
		++p;	
	}
	while(*v != '\0'){
		*p=*v;
		++v;	
		++p;
	}
	*p='\0';
	return dest;
 	
}

int main() {
	char dest[]="bon";
	char src[]="jour";
	
	printf("Concatenation: %s",my_strcat(dest,src));

}

               


