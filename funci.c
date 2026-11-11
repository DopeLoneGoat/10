


float plosha(float a) {
    return (a * a) / 4.0;
}

void opred(int a) {
    printf("\nОПРЕДЕЛЕНИЕ: Прямоугольный (перевернутый) треугольник — это геометрическая фигура, образованная тремя отрезками, которые соединяют три точки, не лежащие на одной прямой. Углы при основании равны 45 градусам. Треугольник с основанием %d. Треугольник с площадью %.f\n", a, plosha(a));
}

void risun(int a, char sym) {
    if (a % 2 == 0) {
        a++;
    }
    int h = a / 2;
    printf("\n");

    for (int i = 0; i <= h; i++) {

        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        int aa = a - 2 * i;

        if (i == 0) {
            for (int j = 0; j < aa; j++) {
                printf("%c", sym);
            }
        }
        else if (aa == 1) {
            printf("%c", sym);
        }
        else {
            printf("%c", sym);
            for (int j = 0; j < aa - 2; j++) {
                printf(" ");
            }
            printf("%c", sym);
        }
        printf("\n");
    }
}