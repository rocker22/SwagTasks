#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры точное значение
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Выводит значение y
 * @param x введённое значение
 */
double y(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf",y(x));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}

double y(const double x)
{
    const double a = 20.3;
    if (x>1)
        {
            return log10(x + 1);
        }
    if (x<=1)
        {
            return  sin(2.0) * sqrt(fabs(a * x));
        }
    else
    {
        printf("Error");
        exit(1);
    }
}
