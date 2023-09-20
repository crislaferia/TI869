#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.1415
#define areaCirculo(r) ((PI)*(r)*(r))
#define perimetroCirculo(r) (2*(PI)*(r))
#define areaQuadrado(l) ((l)*(l))
#define perimetroQuadrado(l) (4*(l))
#define areaRetangulo(a,b) ((a)*(b))
#define perimetroRetangulo(a,b) ((2*(a))+(2*(b)))
#define areaTriangulo(b,h) (((b)*(h))/2)
#define perimetroTriangulo(b,c1,c2) ((b)+(c1)+(c2))

void leDados(float *valor)
{
    
    printf("Digite um valor: ");
    scanf("%f", valor);
}

int main ()
{

float v1, v2, v3;
int op;

setlocale(LC_ALL, "Portuguese");

do {
    printf("\n\n\tMENU DE OPCOES:\n");
    printf("\t1 - Calcular a Area do Circulo.\n");
    printf("\t2 - Calcular o Perimetro de um Circulo.\n");
    printf("\t3 - Calcular a Area do Quadrado.\n");
    printf("\t4 - Calcular o Perimetro de um Quadrado.\n");
    printf("\t5 - Calcular a Area do Retangulo.\n");
    printf("\t6 - Calcular o Perimetro do Retangulo.\n");
    printf("\t7 - Calcular a Area do Triangulo.\n");
    printf("\t8 - Calcular o Perimetro do Triangulo.\n");
    printf("\t9 - Sair!\n");
    printf("\nEscolha sua Opcao:");
    scanf ("%i",&op);
    switch (op){
        case 9 : break;
        case 1 : leDados(&v1);
        printf("\n Área do circulo de raio %f; %f\n",v1, areaCirculo(v1)); 
        break;
        case 2 : leDados (&v1);
        printf("\nPerímetro do Círculo de Raio %.f: %.f \n",v1 ,perimetroCirculo(v1));
        break ;
        case 3 : leDados (&v1);
        printf("\nA área do quadrado é igual à %.lf.\n",areaQuadrado(v1));
        break;
        case 4 :leDados (&v1);
        printf("\nO perímetro do quadrado é igual ao %.lf. \n" ,perimetroQuadrado(v1));
        break;
        case  5 : leDados (&v1), leDados (&v2);
        printf("\nA área do retângulo com base %.0f e altura %.0f é igual à %.lf.\n" ,
        v1, v2, areaRetangulo(v1,v2));
        break;
        case   6 : leDados (&v1), leDados (&v2);
        printf("\n O perímetro do retângulo com base %.0f e altura %.0f é igual à %.lf.\n",v1, v2, perimetroRetangulo(v1,v2));
        break;
        case    7 : leDados (&v1), leDados (&v2);
        printf("\n A área do triângulo, com base %.0f e altura %.0f: %.f.\n", v1,v2,areaTriangulo(v1,v2));
        break;
        case     8 : leDados (&v1), leDados (&v2) , leDados (&v3);
        printf("\n O perímetro do triângulo: %f.\n", perimetroTriangulo(v1,v2,v3));
        break; 
   
    }

}while(op!=9);

    return 0;
}