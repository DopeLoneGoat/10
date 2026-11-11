#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "zagol.h"
float plosha(float a);
void opred(int a);
void risun(int a, char sym);
float ploshab(float b);

int main() {
    setlocale(LC_CTYPE, "RUS");
    int a;
    int b;
    char sym;
    int cikl;



    do {
        printf("\n--- МЕНЮ ---\n");
        printf("1) Рассчитать площадь\n");
        printf("2) Вывести определение фигуры\n");
        printf("3) Нарисовать фигуру\n");
        printf("0) Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &cikl);

        switch (cikl) {
        case 1:
            printf("Введите длину стороны a (основание): ");
            scanf("%d", &a);
            float perv = plosha(a);
            printf("Площадь фигуры: %.f\n", perv);
            printf("Введите длину стороны a (основание): ");
            scanf("%d", &a);
            float vtor = plosha(a);
            printf("Площадь фигуры: %.f\n", vtor);
            if (perv > vtor) {
                printf("Площадь первого треуголька больше площади второго.");
                return 0;
            }
            else if (perv < vtor) {
                printf("Площадь второго треуголька больше площади первого.");
                return 0;
            }
            else (perv == vtor); {
                printf("треугольники равны.");
            }
            break;
        case 2:
            printf("Введите длину стороны a (основание): ");
            scanf("%d", &a);
            opred(a);
            break;
        case 3:
            printf("Введите длину стороны a (основание): ");
            scanf("%d", &a);
            printf("Введите символ для рисования: ");
            scanf(" %c", &sym);
            risun(a, sym);
            break;
        case 0:
            printf("Программа завершена.\n");
            break;
        default:
            printf("Введите длину стороны a (основание): ");
        }
    } while (cikl != 0);

    return 0;
}
