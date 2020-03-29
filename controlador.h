/*
 eFolio B
 21093 - Programacao por Objetos - 2018-2019
 Aluno: Andre Santo
 Numero: 1502142
*/

#ifndef CODIGO_CONTROLADOR_H
#define CODIGO_CONTROLADOR_H

#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include <cmath>
#include "semaforos.h"

class controlador {

public:

    controlador();

    void esperarSegundos(int milissegundos); //esperar X milissegundos
    std::string stringCorLuzLigada(semaforo s); //devolve a cor que esta ligada (string);
    void visualizarSemaforo(semaforo s); //ver o semaforo
    float arredondar(float numero); //arredonda ate a casa decimal mais proxima (uma casa decimal)

    ~controlador();

};


class controladorRua : public controlador {

public:

    controladorRua();

    //funcoes do controlador da Rua Sesamo
    void inicializarControladorRua(int corComeco, int ciclos, int maxVerde=25, int maxAmarela=5, int maxVermelha=30); //Controlador da Rua Sesamo
    void visualizarStatusGeral(semaforoA s); //visualizar o status geral do semaforo
    semaforoA incrementarContador(semaforoA s); //aumenta o tempo decorrido para cada luz que esta ligada em 1 segundo
    semaforoA percorrerCiclo(semaforoA s); //percorre um ciclo completo (as 3 cores)
    semaforoA cicloVerde(semaforoA s); //ligar o sinal verde, esperar o maximo que cada lampada pode estar ligada e depois desligar
    semaforoA cicloAmarelo(semaforoA s); //ligar o sinal amarelo, esperar o maximo que cada lampada pode estar ligada e depois desligar
    semaforoA cicloVermelho(semaforoA s); //ligar o sinal vermelho, esperar o maximo que cada lampada pode estar ligada e depois desligar

    ~controladorRua();

};

class controladorFerrovia : public controlador {

public:

    controladorFerrovia();

    //funcoes do controlador da ferrovia
    float calcularSegundos(float distancia, float velocidade); //calcula quantos segundos sao necessarios para o comboio percorrer X km a velocidade X
    void inicializarControlador(float distancia, float velocidade); //inicializar o controlador da ferrovia
    semaforoB controladorLuzes(semaforoB s, float distancia, float &contarLuzAmarela); //controla a luz que deve estar ligada num dado momento
    void calcularEstimativasTempoVelocidade(semaforoB s, float &segundosAntesCruzamento, float &segundosAposCruzamento,
                                            bool passouCruzamento); //calcula e mostra tempo/velocidade ate/apos passar cruzamento
    void calcularDistancia(semaforoB &s, bool passouCruzamento, float segundosPorKm,
            float &distanciaFinal, float &contador); //calcula as distancias antes/pos cruzamento

    ~controladorFerrovia();


};

#endif //CODIGO_CONTROLADOR_H
