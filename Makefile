CFLAGS = -O3 -Wall -Wextra
CPPFLAGS = -D_GNU_SOURCE

all: test_debug test_die test_check test_getutime

test_debug: CPPFLAGS += -DDEBUG
test_debug: test_debug.o utils.o

test_die: test_die.o utils.o

test_check: test_check.o utils.o

test_getutime: CPPFLAGS += -DDEBUG
test_getutime: test_getutime.o getutime.o utils.o

utils.o test_debug.o test_die.o test_check.o: utils.h

getutime.o test_getutime.o: getutime.h

clean:
	rm -f test_debug test_die test_check test_getutime *.o
