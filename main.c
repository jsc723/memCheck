#include<stdio.h>
#include<stdlib.h>

#define MEMCHECK
#include "memCheck.h"

int main(){
	mem_start_region();
	int *p = (int *)malloc(sizeof(int)*4);
	mem_end_region();
	
	mem_start_region();
	p = (int *)malloc(sizeof(int)*6);
	free(p);
	mem_end_region();
	
	mem_show_result();
	return 0;
}


