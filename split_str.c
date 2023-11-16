#include "monty.h"

/**
 * split_str - Splits a string into segments.
 * @str_to_split: The string to be divided.
 * Return: The segmented version of the input string.
 */
char *split_str(char *str_to_split)
{
	char *op_code = NULL;
	char *argument = NULL;

	op_code = strtok(str_to_split, " \n\t");
	if (strcmp(op_code, "push") == 0)
	{
		argument = strtok(NULL, " \n\t");
		is_digit(argument);
		var.node_data = atoi(argument);
	}
	return (op_code);
}
