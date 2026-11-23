#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры точное значение
 * @return Считанное значение
 */
int getInt();

// Перечисление для фигур (константы)
enum figure
{
    TRIANGLE = 1,
    SQUARE,
    RHOMB,
    RECTANGLE
};

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    printf("Введите номер фигуры \n%d - Треугольник, \n%d - Квадрат, \n%d - Ромб, \n%d - Прямоугольник: ", TRIANGLE, SQUARE, RHOMB, RECTANGLE);
    int shape = getInt();
    switch (shape)
    {
        case TRIANGLE:
            printf("S = 0.5 * a * h\n");
            break;
        case SQUARE:
            printf("S = a * a\n");
            break;
        case RHOMB:
            printf("S = 0.5 * d1 * d2\n");
            break;
        case RECTANGLE:
            printf("S = a * b\n");
            break;
        default:
            printf("Другая фигура\n");
            break;
    }    
    return 0;
}

int getInt()
{
    int s = 0;
    if (scanf("%d", &s) != 1)
    {
        printf("Ошибка. Введённое значение должно являться целым числом.\n");
        exit(1);
    }
    return s;
}
