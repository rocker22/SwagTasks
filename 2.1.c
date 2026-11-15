#include <stdio.h>
#include <stdlib.h>

// Перечисление для дней недели (константы)
enum Days {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// Перечисление для месяцев (константы)
enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};


/**
 * @brief Считывает с клавиатуры точное значение
 * @return Считанное значение
 */
int getInt();

/**
 * @brief Выводит название дня недели по номеру
 * @param num Введённый номер
 */
void printDayOfWeek(int num);

/**
 * @brief Выводит название месяца по номеру
 * @param num Введённый номер
 */
void printMonth(int num);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    printf("Введите номер: \n");
    int num = getInt();

    printf("\nНазвание дня недели:\n");
    printDayOfWeek(num);

    printf("\nНазвание месяца:\n");
    printMonth(num);

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


void printDayOfWeek(int num)
{
    switch (num)
    {
        case MONDAY:    printf("Понедельник\n"); break;
        case TUESDAY:   printf("Вторник\n"); break;
        case WEDNESDAY: printf("Среда\n"); break;
        case THURSDAY:  printf("Четверг\n"); break;
        case FRIDAY:    printf("Пятница\n"); break;
        case SATURDAY:  printf("Суббота\n"); break;
        case SUNDAY:    printf("Воскресенье\n"); break;
        default:        printf("Дня недели с таким номером не существует (1-7)\n"); break;
    }
}

void printMonth(int num)
{
    switch (num)
    {
        case JANUARY:   printf("Январь\n"); break;
        case FEBRUARY:  printf("Февраль\n"); break;
        case MARCH:     printf("Март\n"); break;
        case APRIL:     printf("Апрель\n"); break;
        case MAY:       printf("Май\n"); break;
        case JUNE:      printf("Июнь\n"); break;
        case JULY:      printf("Июль\n"); break;
        case AUGUST:    printf("Август\n"); break;
        case SEPTEMBER: printf("Сентябрь\n"); break;
        case OCTOBER:   printf("Октябрь\n"); break;
        case NOVEMBER:  printf("Ноябрь\n"); break;
        case DECEMBER:  printf("Декабрь\n"); break;
        default:        printf("Месяца с таким номером не существует (1-12)\n"); break;
    }
}
