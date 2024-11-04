CC=gcc
CFLAGS=-std=c99 -Wall

$(info $(SHELL))

# additional flags for gcov
TESTFLAGS=-fprofile-arcs -ftest-coverage

main: main.c a_plus_b.h a_plus_b.c
	gcc -o main.exe main.c a_plus_b.c

test: test.c a_plus_b.h a_plus_b.c
	# build the test
	$(CC) $(CFLAGS) $(TESTFLAGS) -o test test.c a_plus_b.c

	# run the test, which will generate test-counter.gcna and test-counter.gcno
	./test

	# compute how test is covering counter.c
	gcov -c -p test-a_plus_b

clean:
	rm -f *.o test *.gcov *.gcda *.gcno