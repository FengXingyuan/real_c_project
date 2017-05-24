#include <stdio.h>

#include "include/array.h"

int main(void) {
	int x;	
	printf("Test Stack:\n");
        while ( ! is_full_stack() ) {
		scanf("%d", &x);
		push_stack(x);
		printf("push %d into the stack\n",x);
	}
	while ( !is_empty_stack() ) {
		x = pop_stack();

		printf("pop %d out of the stack\n",x);
	}
	printf("Test Stack Right!\n");

	printf("Test Queue:\n");
	        while ( ! is_full_queue() ) {
		scanf("%d", &x);
		push_queue(x);
		printf("push %d into the queue\n",x);
	}
	while ( !is_empty_queue() ) {
		x = pop_queue();

		printf("pop %d out of the queue\n",x);
	}
	printf("Test Queue Right!\n");


	return 0;
}
