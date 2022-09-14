#include <iostream>

/*
Fac ̧a uma func ̧ao para calcular o fatorial de um n  ̃ umero  ́
inteiro n > 0. Fac ̧a um programa que leia um numero  ́
inteiro do teclado, em seguida utilize a func ̧ao para  ̃
calcular o seu fatorial e, por fim, exiba o resultado na tela.
*/

int calcFat(int num){

    int fat=1;

    for(int i=num; i>0; i--){

        fat=fat*i;

    }

    return fat;

}

int main(){

    int num;

    std::cout<<"Num: ";
    std::cin>>num;

    std::cout<<"Fatorial de "<<num<<" eh: "<< calcFat(num);

    return 0;

}