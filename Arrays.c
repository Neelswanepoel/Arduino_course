#include <stdio.h>
#include <math.h>

int main(){
    
    int first_array[2];

    printf("Please enter two numbers\n");

    printf("First number: ");
    scanf("%d", &first_array[0]);
    printf("Second number: ");
    scanf("%d", &first_array[1]);
    

    printf("The two numbers entered are:\n");

    for(int i = 0; i < 2; i++)
    {
        printf("%d\n", first_array[i]);
    }

    printf("Enter one of the commands below for the respective math operation:\n Sum: +\n Subtract: -\n Multiply: x\n Divide: /\n Your command: ");

    char math_op;
    scanf(" %c", &math_op);

    // printf("%c", math_op);

    if (math_op == '+')
    {
        int sum_val = first_array[0] + first_array[1];
        printf("The two numbers summed is %d", sum_val);
    }

    else if (math_op == '-')
    {
        int sub_val = first_array[0] - first_array[1];
        printf("The two numbers substracted is %d", sub_val);
    }

    else if (math_op == 'x')
    {
        int mult_val = first_array[0] * first_array[1];
        printf("The two numbers multiplied is %d", mult_val);
    }

    else if (math_op == '/')
    {
        double div_val = (double) first_array[0] / (double) first_array[1];
        printf("The two numbers divided is %lf", div_val);
    }

    return 0;
}
