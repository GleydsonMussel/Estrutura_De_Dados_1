#include <iostream>

/*
Fac ̧a um programa que leia os valores logicos de  ́ X, Y e Z e
armazene o resultado das seguintes operac ̧oes l  ̃ ogicas:  ́
I (X && Y) || (X && !Z)
I (X || Y) && (!X && Z)
*/

int main(){

    // Declração
    bool X,Y,Z, exp1,exp2;

    // Leitura, valores bool devem ser lidos como 0 (false) e 1 (true)
    std::cout<<"X: ";
    std::cin>>X;

    std::cout<<"Y: ";
    std::cin>>Y;

    std::cout<<"Z: ";
    std::cin>>Z;

    // Processamento
    exp1=(X && Y) || (X && !Z);
    exp2=(X || Y) && (!X && Z);

    // Saida Para printar "true" ou "false", é necessário usar o operador ternário para selecionar o texto adequado a ser printado, isso entre (), para que 1° o texto certo seja selecionado, e aí o cout o printe.
    std::cout<<"exp1: " << (exp1?"true":"false") << "\n";
    std::cout<<"exp2: " << (exp2?"true":"false");

    return 0;
}