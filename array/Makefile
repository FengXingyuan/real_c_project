result:main array
	gcc main.o array.o -o result

main: main_clean main.c
	gcc -c -O0 main.c
main_optimize: main_clean main.c
	gcc -c -O2 main.c
main_clean:
	if [ -e main.o ] ; then rm main.o ; fi

array:array_clean array.c
	gcc -c -O0 array.c
array_optimize: my_array_clean array.c
	gcc -c -O2 array.c
array_clean:
	if [ -e array.o ] ; then rm array.o ; fi
	

release: main_optimize stack_optimize 
	gcc stack.o stack.o -o release

diff: result release
	./result
	./release

clean:
	if [ -e result ] ; then rm result ; fi

	if [ -e release ] ; then rm release ; fi

	rm *.o

