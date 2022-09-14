#include <iostream>

/*

Fac ̧a uma func ̧ao que receba um n  ̃ umero inteiro  ́ n > 0 e
determine se este e um n  ́ umero primo. A func ̧  ́ ao deve  ̃
retornar um valor booleano: true ou false. Prototipo:

*/

bool checkPrimo(int num){

    int nDivisores=0;

    // Testo todos os números de 1 até num para ver quantos divisores num possui
    for(int i=1; i<=num; i++){
        
        // Confiro se num é divisível pelo i do loop
        if (num%i==0){

            nDivisores++;

            // Se já houver 2 divisores e i != num, significa que, no mínimo, num tem 3 divisores, logo, já é possível afirmar que ele não é primo 
            if (nDivisores==2 && i!=num){
                return false;
            }
            
        }   

    }

    return true;

}

int main(){

    // Declaração
    int num;

    // Leitura
    std::cout<<"Numero: ";
    std::cin>>num;

    // Output
    if(checkPrimo(num)){

        std::cout<<"Num eh primo ";
        return 0;

    }

    std::cout<<"Num nao eh primo";

    return 0;
}