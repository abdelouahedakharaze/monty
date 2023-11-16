#include "monty.h"

/**
 * execute_opcode - interpreter operations
 * @op_code: content line
 *
 * Return: void
 */
void execute_opcode(char *op_code)
{
	unsigned int i = 0;
	instruction_t opcode_func[] = {
	    {"push", my_push},
	    {"pall", mypall},
	    {"pint", mypint},
	    {"swap", myswap},
	    {"pop", mypop},
	    {"add", myadd},
	    {"nop", pynop},
	    {"sub", mysub},
	    {"div", mydiv},
	    {"mul", mymul},
	    {"mod", mymod},
	    {NULL, NULL},
	};

	while ((opcode_func[i].opcode != NULL))
	{
		if (strcmp(opcode_func[i].opcode, op_code) == 0)
		{
			opcode_func[i].f(&var.stack_head, var.n_lines);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", var.n_lines, op_code);
	free(var.getl_info);
	  header(var.stack_head);
	fclose(var.fp_struct);
	exit(EXIT_FAILURE);
}
