/**
 * Compile using:
 * gcc test_main.c -o test_main -lproj_name
 */

#include <proj_name/proj_name.h>
#include <stdio.h>

int main(){
	printf("%s\n%s\n%s\n%s\n%s\n%s\n", print_A(), print_B(),
		print_C(), print_D(), print_E(), print_F());
	return 0;
}
