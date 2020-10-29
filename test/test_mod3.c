/**
 * Compile using:
 * gcc test_mod3.c -o test_mod3 -lmodule3
 */

#include <proj_name/module3.h>
#include <stdio.h>

int main(){
	printf("%s\n%s\n", print_E(), print_F());

	return 0;
}
