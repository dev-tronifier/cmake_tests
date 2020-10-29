/**
 * Compile using:
 * gcc test_mod1.c -o test_mod1 -lmodule1
 */

#include <proj_name/module1.h>
#include <stdio.h>

int main(){
	printf("%s\n%s\n", print_A(), print_B());

	return 0;
}
