# c-util-libs
Useful library functions in C

## NAME
**debug**, **debugvar** -- print debugging information to stderr

**die**, **check** -- Verify that the conditional expression is true

**getutime** -- Get CPU time spent for user process in m seconds

## SYNOPSIS
```
#include "utils.h"

void debug(...);

void debugvar(char *fmt, expression);

void die(...);

void check(expression, ...);

#include "getutime.h"

long getutime(int diff);
```

## DESCRIPTION
The **debug**(), **debugvar**(), **die**() and **check**() functions output the source file name, line number, and function name of the calling source code, as well as the additional message specified with format and variable length argument similar to printf() function, to standard error output.

The **debug**() and **debugvar**() functions do not print anything if the macro 'DEBUG' is not defined. If 'DEBUG' is defined, they will display the message specified following the 'debug' at the beginning of the line.

The **die**() function will print 'error' at the beginning of the line, display the specified message and the system's error message, and then call the exit() function with the 'EXIT_FAILURE' value to terminate the program.

The **check**() function firstly evaluate the expression. If the value of the expression is not true, it will terminate the program with the same behavior as the die() function.

The **getutime**() function works like a stopwatch. Calling it with 'getutime(0)' resets the timekeeping, and 'getutime(1)' returns the elapsed time in micro seconds.

## SEE ALSO
err(3)
