/*
 eFolio B
 21093 - Programacao por Objetos - 2018-2019
 Aluno: Andre Santo
 Numero: 1502142
*/

#include "controlador.h"

void opcoesRuaSesamo() {

    int ciclos;
    int cor;

    controladorRua c;

    std::cout << "Por favor, digite o numero de ciclos completos que deseja ver? (min: 1, max: 5000)" << std::endl;
    std::cout << "Um ciclo completa-se quando sao percorridas as 3 cores do semaforo." << std::endl;
    std::cout << "Opcao: ";
    std::cin >> ciclos;
    std::cout << std::endl;
    std::cout << "Por favor, escolha a cor inicial do semaforo:" << std::endl;
    std::cout << "1 - Verde" << std::endl;
    std::cout << "2 - Amarela" << std::endl;
    std::cout << "3 - Vermelha" << std::endl;
    std::cout << "Opcao: ";
    std::cin >> cor;

    cor = cor - 1; //as cores comecam do 0

    if((ciclos >= 1 && ciclos <= 5000) && (cor >= 0 && cor <= 2)) {

        c.inicializarControladorRua(cor, ciclos);

    } else {

        std::cout << "Numero de ciclos ou numero de cor invalido. Por favor, tente novamente!" << std::endl;
        return;

    }

}

void opcoesFerrovia() {

    float velocidade; //velocidade a que o comboio viaja
    float distancia; //distancia a que o comboio deve estar do cruzamento (antes e depois)

    controladorFerrovia c;

    std::cout << "Por favor, digite a distancia a que se encontra o comboio (min: 5, max: 10000)" << std::endl;
    std::cout << "Distancia: ";
    std::cin >> distancia;
    std::cout << std::endl;
    std::cout << "Por favor, digite a velocidade a que o comboio se desloca (min: 1, max: 1000):" << std::endl;
    std::cout << "Velocidade: ";
    std::cin >> velocidade;

    if((distancia >= 5 && distancia <= 10000) && (velocidade >= 1 && velocidade <= 1000)) {

        c.inicializarControlador(distancia, velocidade);

    } else {

        std::cout << "Distancia ou velocidade invalidas. Por favor, tente novamente!" << std::endl;
        return;

    }


}

int main() {

    int opcao;

    do {


        std::cout << "###########################################################" << std::endl;
        std::cout << "#         Controlador de semaforos da Rua Sesamo          #" << std::endl;
        std::cout << "###########################################################" << std::endl;
        std::cout << "# 1 - Semaforo da Rua                                     #" << std::endl;
        std::cout << "# 2 - Semaforo da Ferrovia                                #" << std::endl;
        std::cout << "###########################################################" << std::endl;
        std::cout << "# 0 - Sair                                                #" << std::endl;
        std::cout << "###########################################################" << std::endl;
        std::cout << std::endl;
        std::cout << "Opcao: ";
        std::cin >> opcao;

        if(opcao==1)
            opcoesRuaSesamo();
        if(opcao==2)
            opcoesFerrovia();


    } while (opcao!=0);


    return 0;
}