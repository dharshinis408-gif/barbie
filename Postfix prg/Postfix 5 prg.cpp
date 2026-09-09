#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Push operation
void push(int item)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        exit(1);
    }

    stack[++top] = item;
}

// Pop operation
int pop()
{
    if (top < 0)
    {
        printf("Stack Underflow\n");
        exit(1);
    }

    return stack[top--];
}

// Postfix evaluation function
int evaluatePostfix(char *exp)
{
    int i;
    int operand1, operand2, result;

    for (i = 0; exp[i] != '\0'; i++)
    {
        // If operand, push into stack
        if (isdigit(exp[i]))
        {
            push(exp[i] - '0');
        }
        // If operator, perform operation
        else
        {
            operand2 = pop();
            operand1 = pop();

            switch (exp[i])
            {
                case '+':
                    result = operand1 + operand2;
                    break;

                case '-':
                    result = operand1 - operand2;
                    break;

                case '*':
                    result = operand1 * operand2;
                    break;

                case '/':
                    result = operand1 / operand2;
                    break;

                default:
                    printf("Invalid Operator\n");
                    exit(1);
            }

            push(result);
        }
    }

    return pop();
}

// Main function
int main()
{
    char postfix[MAX_SIZE];

    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    printf("Evaluated Result: %d\n", evaluatePostfix(postfix));

    return 0;
}