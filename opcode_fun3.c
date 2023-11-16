#include "monty.h"

/**
 * mydiv - add two elements on the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: the number of nodes
 */
void mydiv(stack_t **stack, unsigned int line_number)
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
		fprintf(stderr, "L%u: can't div, stack too short\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next->n == 0)
	{
		  header(var.stack_head);
		free(var.getl_info);
		fclose(var.fp_struct);
		fprintf(stderr, "L%u: division by zero\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	if (*stack != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->n = (*stack)->n / (*stack)->prev->n;
		(*stack)->prev = NULL;
		free(temp);
	}
}

/**
 * mymul - add mul elements on the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: the number of nodes
 */
void mymul(stack_t **stack, unsigned int line_number)
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
		fprintf(stderr, "L%u: can't mul, stack too short\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	if (*stack != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->n = (*stack)->n * (*stack)->prev->n;
		(*stack)->prev = NULL;
		free(temp);
	}
}

/**
 * mymod - mod two elements on the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: the number of nodes
 */
void mymod(stack_t **stack, unsigned int line_number)
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
		fprintf(stderr, "L%u: can't mod, stack too short\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next->n == 0)
	{
		  header(var.stack_head);
		free(var.getl_info);
		fclose(var.fp_struct);
		fprintf(stderr, "L%u: division by zero\n", var.n_lines);
		exit(EXIT_FAILURE);
	}
	if (*stack != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->n = (*stack)->n % (*stack)->prev->n;
		(*stack)->prev = NULL;
		free(temp);
	}
}
