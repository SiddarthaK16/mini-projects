#include <stdio.h>

struct vector
{
    int i;
    int j;
};

void add(struct vector v1, struct vector v2)
{
    printf("Addition: %di + %dj\n", v1.i + v2.i, v1.j + v2.j);
}

void subtract(struct vector v1, struct vector v2)
{
    printf("Subtraction: %di + %dj\n", v1.i - v2.i, v1.j - v2.j);
}

void dot(struct vector v1, struct vector v2)
{
    int result = v1.i * v2.i + v1.j * v2.j;
    printf("Dot Product: %d\n", result);
}

void cross(struct vector v1, struct vector v2)
{
    // For 2D, cross product is scalar (determinant method)
    int result = v1.i * v2.j - v1.j * v2.i;
    printf("Cross Product (z-component): %d k\n", result);
}

int main()
{

    struct vector v1, v2;

    printf("Enter the x-component of vector 1 :");
    scanf("%d", &v1.i);
    printf("Enter the y-component of vector 1 :");
    scanf("%d", &v1.j);
    printf("Enter the x-component of vector 2 :");
    scanf("%d", &v2.i);
    printf("Enter the y-component of vector 2 :");
    scanf("%d", &v2.j);

    char operator;

    printf("Enter what operation you wanna perform(a=add,s=subtract,d=dot product,c=cross product) : ");
    scanf(" %c", &operator);

    switch (operator) // switch does not work for arrays,strings and all
    {
    case 'a':
        add(v1, v2);
        break;

    case 's':
        subtract(v1, v2);
        break;

    case 'd':
        dot(v1, v2);
        break;

    case 'c':
        cross(v1, v2);
        break;

    default:
        printf("Invalid !!");
        break;
    }

    return 0;
}