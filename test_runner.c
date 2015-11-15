#include <stdio.h>
#include "minunit.h"

int tests_run = 0;

int square(int x);

int square(int x){
	return x*x;
}

int square_01(){
	int x=5;
	_assert("Error, is not squaring\n", square(x) == 25);
	return 0;
}

int all_tests(){
	_test(square_01);
	return 0;
}

int main(int argc, char *argv[]){
	int result = all_tests();
	if(result == 0)
		printf("PASSED\n");
	printf("Tests run: %d\n", tests_run);
	
	return result != 0;
}