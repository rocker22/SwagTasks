#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет 
 * @param f - сила тяги автомобиля
 * @param a - совершённая автомобилем работу
 * @return Рассчитанное значение
 */
double v(const double f, const double a);

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите силу тяги автомобиля (в кН): ");
    double f = getDouble();
    printf("Введите совершённую автомобилем работу (в МДж): ");
    double a = getDouble();
    printf("Путь, пройденный автомобилем равен %lf\n км", v(f, a));
    return 0;
}

double v(const double f, const double a)
{
    return a/f;
}

double getDouble()
{
    double s = 0.0;
    scanf("%lf",&s);
    return s;
}
