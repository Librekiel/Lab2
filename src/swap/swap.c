#include "swap.h"

void Swap(char *left, char *right)
{
	// ваш код здесь
	char buffer = *left;
	*left = *right;
	*right = buffer;
}
