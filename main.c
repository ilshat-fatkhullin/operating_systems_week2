#include <stdio.h>
#include <float.h>
#include "limits.h"
#include <stdlib.h>
#include <memory.h>

//EXERCISE 1

void exercise_1()
{
    printf("Exercise 1:\n");

    int value0 = INT_MAX;
    float value1 = FLT_MAX;
    double value2 = DBL_MAX;
    printf("%d \n", value0);
    printf("%d \n", sizeof(value0));
    printf("%f \n", value1);
    printf("%d \n", sizeof(value1));
    printf("%lf \n", value2);
    printf("%d \n", sizeof(value2));
}

//EXERCISE 2

int get_line_length(char *array)
{
    int i = 0;
    while (array[i] != '\0')
    {
        i++;
    }
    return i;
}

void exercise_2() {

    printf("Exercise 2:\n");

    char input_line[256];
    fgets(input_line, 256, stdin);
    char output_line[get_line_length(input_line)];
    int j = 0;
    for (int i = get_line_length(input_line) - 1; i >= 0; i--)
    {
           output_line[i] = input_line[j];
           j++;
    }
    output_line[j] = '\0';
    printf("%s\n", output_line);
}


//EXERCISE 3

void exercise_3() {

    printf("Exercise 3:\n");

    printf("Enter n:\n");
    int n;
    scanf("%d", &n);
    int max_width = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        int width = 2 * (i + 1) - 1;
        int offset = (max_width - width) / 2;
        char line[max_width + 1];

        int index = 0;

        for (int j = 0; j < offset; j++)
        {
            line[index] = ' ';
            index++;
        }

        for (int j = 0; j < width; j++)
        {
            line[index] = '*';
            index++;
        }

        for (int j = 0; j < offset; j++)
        {
            line[index] = ' ';
            index++;
        }

        line[max_width] = '\0';
        printf("%s\n", line);
    }
}

//EXERCISE 4

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void exercise_4()
{
    printf("Exercise 4:\n");

    int first;
    int second;
    printf("Enter first number:\n");
    scanf("%d", &first);
    printf("Enter second number:\n");
    scanf("%d", &second);
    swap(&first, &second);
    printf("First number: %d\n", first);
    printf("Second number: %d\n", second);
}

//EXERCISE 5

void exercise_5()
{
    int choice;
    printf("Choice number from 0 to 2:\n");
    scanf("%d", &choice);
    int n;
    printf("Enter N:\n");
    scanf("%d", &n);
    switch (choice)
    {
        case 0:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 1:
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }

            for (int i = n / 2; i < n; i++)
            {
                for (int j = 0; j < n - i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }

            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
    }
}

int main()
{
    exercise_1();
    exercise_2();
    exercise_3();
    exercise_4();
    exercise_5();
    return 0;
}