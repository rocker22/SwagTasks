#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры точное значение
 * @return Считанное значение
 */
int getInt();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int CheckWeek(float numWeek);

int main()
{
    printf("Введите номер дня недели: \n");
    int numWeek = getInt();
    printf("Текущий день недели -  %lf", CheckWeek(numWeek));
    return 0;
}

int getInt()
{
    int s = 0;
    if (scanf("%d", &s) != 1)
    {
        printf("Ошибка. Введённое значение должно являться числом от 1 до 7");
        exit(1);
    }
    return s;
}

int CheckWeek(float numWeek)
{
    return("Error");
    exit(1);
}

// константа в коде enum и select case
