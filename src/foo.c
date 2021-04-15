#include <stdio.h>
#include "funcs.h"

int foo(int flag)
{
    //int flag=0;
    if(flag){
	printf("hello foo world\n");
    }
    else{	
        printf("good bye\n");
    }
	return 0;
}
