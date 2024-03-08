#include <stdio.h>
#include <stdlib.h>

double suma(double valor1, double valor2){
    double resultado;
    resultado=valor1+valor2;
    return resultado;
}
double resta(double valor1, double valor2){
    double resultado;
    resultado=valor1-valor2;
    return resultado;
}
double multi(double valor1, double valor2){
    double resultado;
    resultado=valor1*valor2;
    return resultado;

}double division(double valor1, double valor2){
    double resultado;
    resultado=valor1/valor2;
    return resultado;
}
int main (int argc, char *argv []){
    int operacion, res;
    double op1, op2;
    do{
        printf("¿Qué operación quieres realizar?\n");
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Multiplicar\n");
        printf("4.Dividir\n");
        scanf("%i", &operacion);
    }while ((operacion!= 1 ) && (operacion!= 2) && (operacion!= 3) && (operacion!= 4));
    printf("Introduce el primer operador:");
    scanf("%lf", &op1);
    printf("Introduce el segundo operador:");
    scanf("%lf", &op2);
    if (operacion==1)
        res=suma(op1, op2);
    else if (operacion==2)
        res=resta(op1, op2);
    else if (operacion==3)
        res=multi(op1, op2);
    else{
        res=div(op1, op2);
    }
    printf("El resutado de la operación entre %i y %i es:%lf\n", op1, op2, res);
    return EXIT_SUCCESS;
}
