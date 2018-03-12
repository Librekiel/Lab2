#include "revert_string.h"
#include <string.h>
#include "../swap/swap.h"
#include <stdio.h>
#include <stdlib.h>

void RevertString(char *str)
{
	// your code here
	printf("length is %d",strlen(str)/2);
	for (int i=0; i<strlen(str)/2; i++)
	{
	    Swap(&str[i],&str[strlen(str)-1-i]);
	}
}

