
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/**
 * @brief Вычисляет объём конуса
 * @param R - радиус шара
 * @param a - угол при вершине в осевом сечении конуса
 * @return Рассчитанное значение
 */
double V(const double R, const double a);

/**
 * @brief Вычисляет полную площадь поверхности конуса
 * @param R - радиус шара
 * @param a - угол при вершине в осевом сечении конуса
 * @return Рассчитанное значение
 */
double S(const double R, const double a);

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
    double R = getDouble();
    printf("Введите угол при вершине в осевом сечении конуса: ");
    double a = getDouble();
    printf("Volume is %lf\n", V(R,a));
    printf("Square is %lf", S(R, a));
    return 0;
}

double V(const double R, const double a)
{
    return (1.0 / 3.0) * M_PI * pow(R * sin(a * M_PI / 180.0), 2) * R * (cos(a * M_PI / 180.0) + 1.0);
}


double S(const double R, const double a)
{
    return M_PI * (R * sin(a * M_PI / 180.0)) * ((R * sin(a * M_PI / 180.0)) + (2.0 * R * cos((a * M_PI / 180.0) / 2.0)));
}

double getDouble()
{
    double side1 = 0.0;
    scanf("%lf",&side1);
    return side1;
}
