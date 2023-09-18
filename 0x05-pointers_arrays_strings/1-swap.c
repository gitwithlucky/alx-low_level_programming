/**
* swap_int - reset_to_98
* Description: 'reset_to_98'
* @b: ptr
* @a: ptr
* Return:  0
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

