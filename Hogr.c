#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("cual es tu nombre?\n");
    int age = get_int("cual es tu edad?\n");
    char sex = get_char("Sexo (F o M)\n ");
    float num = get_float("Ingrese un numero con decimal\n");


    printf ("Me llamo, %s\n", name);
    printf ("Tengo, %d\n", age);

    if (sex == 'f' || sex == 'F')
    {
         printf ("Soy mujer\n");
    }
    else if (sex=='m'||sex=='M')
    {
         printf ("Soy hombre\n");
    }
    else if (sex != 'f' && sex != 'F' && sex != 'm' && sex != 'M')
    {
         printf ("Usted no selecciono un sexo correcto\n");
    }

    float res = num*num;
     printf ("El cuadrado de %f\n",num);
     printf ("Es: %f\n", res);
}