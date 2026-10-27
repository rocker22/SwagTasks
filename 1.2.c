
#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет объём конуса
 * @param r - радиус шара
 * @param a - угол при вершине в осевом сечении конуса
 * @return Рассчитанное значение
 */
double v(const double r, const double a);

/**
 * @brief Вычисляет полную площадь поверхности конуса
 * @param r - радиус шара
 * @param a - угол при вершине в осевом сечении конуса
 * @return Рассчитанное значение
 */
double s(const double r, const double a);

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
    printf("Введите радиус шара: ");
    double r = getDouble();
    printf("Введите угол при вершине в осевом сечении конуса: ");
    double a = getDouble();
    printf("Volume is %lf\n", v(r,a));
    printf("Square is %lf", s(r, a));
    return 0;
}

double v(const double r, const double a)
{
    return (1.0 / 3.0) * M_PI * pow(r * sin(a * M_PI / 180.0), 2) * r * (cos(a * M_PI / 180.0) + 1.0);
}


double s(const double r, const double a)
{
    return M_PI * (r * sin(a * M_PI / 180.0)) * ((r * sin(a * M_PI / 180.0)) + (2.0 * r * cos((a * M_PI / 180.0) / 2.0)));
}

double getDouble()
{
    double side1 = 0.0;
    scanf("%lf",&side1);
    return side1;
}
