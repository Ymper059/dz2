#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int a = 253;
    double b = 58;
    double d  = 1.9;

    double c = a * b / 1000;
    double f = c  / d ;

    printf("За год одна курица-несушка дает %d яиц.\n", a);
    printf("Масса одного яйца составляет %.0f г.\n", b);
    printf("Общая масса яиц за год: %.3f кг.\n", c  );
    printf("Живая масса курицы: %.1f кг.\n", d );
    printf("Продукция несушки превосходит ее массу в %.2f раза.\n", f );

    return 0;
}