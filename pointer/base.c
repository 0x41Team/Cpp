#include <stdio.h>
#include <conio.h>

int main() {
	int a = 5;
	int *b = &a;

	printf("\nGia tri cua bien a: %d", a);
	printf("\nDia chi cua bien a: %p", &a);
	printf("\n-------------------\n");

	printf("\nGia tri cua bien con tro b: %d", *b);
	printf("\nDia chi cua bien con tro b: %p", &b);
	printf("\nMien gia tri cua con tro b: %p", b);
	
	getchar();
	return 0;
	
}

