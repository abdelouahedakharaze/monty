#include "monty.h"

/**
 * myadd - add two elements on the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: the number of nodes
 */
void myadd(stack_t **stack, unsigned int line_number)
{
	size_t n = 0;
	stack_t *temp = *stack;

	line_number = line_number;
	n = dlistint_len(var.stack_head);
	if (n < 2)
	{
		  header(var.stack_head);
		free(var.getl_info);
		fclose(var.fp_struct);
		fprintf(stderr, "L%u: can't add, stack too short\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	if (*stack != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->n = (*stack)->n + (*stack)->prev->n;
		(*stack)->prev = NULL;
		free(temp);
	}
}

/**
 * pynop - do nothing
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: the number of nodes
 */
void pynop(stack_t **stack, unsigned int line_number)
{
	stack = stack;
	line_number = line_number;
}

/**
 * mypop - delete the element on the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: the number of nodes
 */
void mypop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	line_number = line_number;
	if (temp == NULL)
	{
		  header(var.stack_head);
		free(var.getl_info);
		fclose(var.fp_struct);
		fprintf(stderr, "L%u: can't pop an empty stack\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	if (*stack)
	{
		(*stack)->prev = NULL;
	}
	free(temp);
}

/**
 * mysub - sub two elements on the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: the number of nodes
 */
void mysub(stack_t **stack, unsigned int line_number)
{
	size_t n = 0;
	stack_t *temp = *stack;

	line_number = line_number;
	n = dlistint_len(var.stack_head);
	if (n < 2)
	{
		  header(var.stack_head);
		free(var.getl_info);
		fclose(var.fp_struct);
		fprintf(stderr, "L%u: can't sub, stack too short\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	if (*stack != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->n = (*stack)->n - (*stack)->prev->n;
		(*stack)->prev = NULL;
		free(temp);
	}
}
