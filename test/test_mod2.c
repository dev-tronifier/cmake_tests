/**
 * FIXME: Errors while compiling(until I manually copy my header files in
 *	target(/usr/local/include) in my case:
 *
 * In file included from ./test.c:1:0:
 * /usr/local/include/proj_name/module3.h:4:10: fatal error: module3/file00.h: No such file or directory
 * #include "module3/file00.h"
 *          ^~~~~~~~~~~~~~~~~~
 * compilation terminated.
 */

#include <proj_name/module2.h>
#include <stdio.h>

int main(){
	printf("%s\n%s\n", print_C(), print_D());

	return 0;
}
