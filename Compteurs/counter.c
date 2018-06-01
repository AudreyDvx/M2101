#include <stdio.h>

void print_hello(){
	static int counter=0;
	printf("Bonjour numéro %d !",counter+1);
	counter++;
}

int main() {
	print_hello();
	print_hello();
	print_hello();
	print_hello();
	print_hello();
	print_hello();
}
