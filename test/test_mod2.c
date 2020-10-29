/**
 * Compile using:
 * gcc test_mod2.c -o test_mod2 -lmodule2
 */

#include <proj_name/module2.h>
#include <stdio.h>

int main(){
	printf("%s\n%s\n", print_C(), print_D());

	return 0;
}
