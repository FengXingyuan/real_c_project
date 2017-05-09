result:main stack
	gcc main.o stack.o -o result

main: main_clean main.c
	gcc -c -O0 main.c
main_optimize: main_clean main.c
	gcc -c -O2 main.c
main_clean:
	if [ -e main.o ] ; then rm main.o ; fi

stack:stack_clean stack.c
	gcc -c -O0 stack.c
tack_optimize: my_stack_clean stack.c
	gcc -c -O2 stack.c
stack_clean:
	if [ -e stack.o ] ; then rm stack.o ; fi
	

release: main_optimize stack_optimize 
	gcc stack.o stack.o -o release

diff: result release
	./result
	./release

clean:
	if [ -e result ] ; then rm result ; fi

	if [ -e release ] ; then rm release ; fi

	rm *.o

