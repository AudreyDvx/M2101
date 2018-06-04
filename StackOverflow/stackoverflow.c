#include<stdio.h>

int fonction(int n) {
	int f=0;
	
	if(n<=0) {
		f=0;
	}
	if(n>=1) {
		f=1+(fonction(n-1));
	}
	return f;
}

int main() {
	printf("f(1000)=%d",fonction(1000));
	printf("f(1000000)=%d",fonction(1000000));
}
