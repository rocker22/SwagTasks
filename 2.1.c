#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет площать квадрата с заданной стороной
 * @param side сторона квадрата
 * @return Рассчитанное значение
 */
double s(const double side);

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что сторона - положительное число
 * @param side - считанное значение стороны квадрата
 */
void checkSide(const double side);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    printf("Введите номер дня недели: ");
    double n1 = getDouble();
    printf("Введите номер месяца: ");
    double n2 = getDouble();
    checkn1(n1);
    checkn2(n2);
    printf("Square is %lf\n",s(side1));
    return 0;
}

double s(const double side)
{
    return pow(side,2);
}

double getDouble()
{
    double side1 = 0.0;
    if (scanf("%lf",&side1) != 1)
        {
            printf("Error");
            exit(1);
        }
    return side1;
}

void checkSide(const double side)
{
   if (side <= 0)
   {
       printf("Error");
       exit(1);
   }
}
