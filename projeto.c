#include<stdio.h>
float raio,vol;

int main()
{
    printf("Digite o raio da esfera.\n");
    scanf("%f",&raio);
    
    vol=(4.0/3.0)*3.14159*raio*raio*raio;
    
    printf("O volume da esfera é %.5f ou %.2f\n",vol,vol);
    
    return 0;
}
