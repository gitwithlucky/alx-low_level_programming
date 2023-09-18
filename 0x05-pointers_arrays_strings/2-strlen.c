/**
* _strlen - reset_to_98
* Description: '_strlen'
* @s: ptr
* Return:  0
*/

int _strlen(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

