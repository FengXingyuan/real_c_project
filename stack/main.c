#include <stdio.h>

#include "include/stack.h"

int main(void) {
	int x;	

        while ( ! is_full() ) {
		scanf("%d", &x);
		push(x);
	}
	

	while ( !is_empty() ) {
		x = pop();

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
