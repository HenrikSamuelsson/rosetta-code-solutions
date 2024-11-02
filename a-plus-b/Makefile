CC=gcc
CFLAGS=-std=c99 -Wall

# additional flags for gcov
TESTFLAGS=-fprofile-arcs -ftest-coverage

main: main.c a_plus_b.h a_plus_b.c
	# build the test
	$(CC) $(CFLAGS) -o main main.c a_plus_b.c

	# run the test, which will generate test-counter.gcna and test-counter.gcno
	./main

	# compute how test is covering counter.c
	# gcov -c -p test-counter

clean:
	rm -f *.o test *.gcov *.gcda *.gcno