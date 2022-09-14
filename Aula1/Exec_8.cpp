#include <iostream>
#include <cmath>

// Sintaxe pow
// std::pow(base, expoente)

/*

Fac ̧a um programa que leia um numero inteiro  ́ n e um
numero real  ́ x. Em seguida calcule a seguinte soma
S =
Pn
i=0
x
i utilizando uma func ̧ao.

*/

float calcSomatorio(float numF, int numI){

    // Declaração
    float somatorio=0;

    // Somatório
    while (numI>=0){

        // Faço a potência elevada ao respectivo expoente do loop e somo esse valor ao que já há em somatorio 
        somatorio+=std::pow(numF,numI);

        // Descreço o expoente a cada loop (ele chega no máximo até 0)
        numI--;

    }

    return somatorio;

}

int main(){

    // Declaração
    int numI;
    float numF;

    // Leitura
    std::cout<<"NumI: ";
    std::cin>>numI;

    std::cout<<"NumF: ";
    std::cin>>numF;

    // Output
    std::cout<<"Somatorio = "<< calcSomatorio(numF, numI);
    
    return 0;

}