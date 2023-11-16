#include "monty.h"

/**
 * my_push - adds a new node at the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: void.
 */
void my_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	line_number = line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free(var.getl_info);
		fclose(var.fp_struct);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = var.node_data;

	new->next = *stack;
	new->prev = NULL;
	if ((*stack) != NULL)
	{
		(*stack)->prev = new;
	}

	*stack = new;
}

/**
 * mypall - prints all the values on the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: void.
 */
void mypall(stack_t **stack, unsigned int line_number)
{
	stack_t *printer_aux = *stack;

	printer_aux = *stack;
	line_number = line_number;

	while (printer_aux != NULL)
	{
		printf("%d\n", printer_aux->n);
		printer_aux = printer_aux->next;
	}
}

/**
 * mypint - prints the value at the top of the stack.
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: void.
 */
void mypint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(var.getl_info);
		fclose(var.fp_struct);
		  header((*stack));
		exit(EXIT_FAILURE);
	}

	printf("%d\n", ((*stack))->n);
}

/**
 * myswap - swaps the top two elements of the stack.
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: void.
 */
void myswap(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free(var.getl_info);
		fclose(var.fp_struct);
		  header((*stack));
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
