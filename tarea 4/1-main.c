#include <stdio.h>

int main()
{
    float a;
    float m;
    float galon=0.264179;
    float i=1;
    float s;
    float divi;
    float consumo;
    float div(float a, float b)
    {
    return (a / b);
    }
    float mul(float a, float b)
    {
    return (a * b);
    }


    while (i==1)
    {
    
    printf("¿Cuantos litros consumio?\n");
    scanf("%f", &a);

    printf("¿Cuantas millas recorrio?\n");
    scanf("%f", &m);

    divi=div(a,galon);

    consumo = mul(divi,m);
    printf("Cantidad de millas por galon que consumio: %f\n", consumo);

    printf("¿Quiere continuar?\n 1=si\n 2=no \n");
    scanf("%f", &i);

    }
}