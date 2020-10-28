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

#include <proj_name/module3.h>

int main(){
	return 0;
}
