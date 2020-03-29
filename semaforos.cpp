/*
 eFolio B
 21093 - Programacao por Objetos - 2018-2019
 Aluno: Andre Santo
 Numero: 1502142
*/

#include "semaforos.h"

semaforo::semaforo() {

    lampadaVerde.setDuracao(0); //tempo decorrido da lampada verde
    lampadaVerde.setEstado(0); //estado da cor (desligado)
    lampadaAmarela.setDuracao(0); //tempo decorrido da lampada amarela
    lampadaAmarela.setEstado(0); //estado da cor (desligado)
    lampadaVermelha.setDuracao(0); //tempo decorrido da lampada vermelha
    lampadaVermelha.setEstado(0); //estado da cor (desligado)

    //por defeito, nenhuma luz esta ligada, por isso colocar em -1
    luzLigada = -1;

}

//**********************************************
// ***** estado e duracao da lampada verde *****
//**********************************************

void semaforo::setDuracaoLampadaVerde(int duracao) {

    lampadaVerde.setDuracao(duracao);

}

int semaforo::getEstadoLampadaVerde() {

    return lampadaVerde.getEstado();

}

int semaforo::getDuracaoLampadaVerde() {

    return lampadaVerde.getDuracao();

}

//*************************************************
//***** estado e duracao da lampada amarela *******
//*************************************************


void semaforo::setDuracaoLampadaAmarela(int duracao) {

    lampadaAmarela.setDuracao(duracao);

}

int semaforo::getEstadoLampadaAmarela() {

    return lampadaAmarela.getEstado();

}

int semaforo::getDuracaoLampadaAmarela() {

    return lampadaAmarela.getDuracao();

}

//*************************************************
//***** estado e duracao da lampada vermelha ******
//*************************************************

void semaforo::setDuracaoLampadaVermelha(int duracao) {

    lampadaVermelha.setDuracao(duracao);

}

int semaforo::getEstadoLampadaVermelha() {

    return lampadaVermelha.getEstado();

}

int semaforo::getDuracaoLampadaVermelha() {

    return lampadaVermelha.getDuracao();

}

//*********************************************************
//***** definir/verificar qual a luz que esta ligada ******
//*********************************************************

void semaforo::setLuzLigada(int luz) {

    luzLigada = luz;

    if(luz == 0) {
        //liga a luz verde, desliga as restantes
        lampadaVerde.setEstado(1);
        lampadaAmarela.setEstado(0);
        lampadaVermelha.setEstado(0);
    }

    else if (luz == 1) {
        //liga a luz amarela, desliga as restantes
        lampadaVerde.setEstado(0);
        lampadaAmarela.setEstado(1);
        lampadaVermelha.setEstado(0);
    }

    else if (luz == 2) {
        //liga a luz vermelha, desliga as restantes
        lampadaVerde.setEstado(0);
        lampadaAmarela.setEstado(0);
        lampadaVermelha.setEstado(1);
    }

    else if (luz == -1) {

        //-1 implica que se pretende desligar todas as luzes (desligar o semaforo)
        lampadaVerde.setEstado(0);
        lampadaAmarela.setEstado(0);
        lampadaVermelha.setEstado(0);

    }
}

int semaforo::getLuzLigada() {

    return luzLigada;

}

semaforo::~semaforo() = default;

semaforoA::semaforoA() {

    lampadaVerde.setMaximo(25); //maximo (em segundos) que pode estar ligada, por defeito
    lampadaAmarela.setMaximo(5); //maximo (em segundos) que pode estar ligada, por defeito
    lampadaVermelha.setMaximo(30); //maximo (em segundos) que pode estar ligada, por defeito

}

void semaforoA::setMaxLampadaVerde(int max) {

    lampadaVerde.setMaximo(max);

}

void semaforoA::setMaxLampadaAmarela(int max) {

    lampadaAmarela.setMaximo(max);

}

void semaforoA::setMaxLampadaVermelha(int max) {

    lampadaVermelha.setMaximo(max);

}

int semaforoA::getMaxLampadaVerde() {

    return lampadaVerde.getMaximo();

}

int semaforoA::getMaxLampadaAmarela() {

    return lampadaAmarela.getMaximo();

}

int semaforoA::getMaxLampadaVermelha() {

    return lampadaVermelha.getMaximo();

}

semaforoA::~semaforoA() = default;

semaforoB::semaforoB() {

    lampadaVerde.setMaximo(-1); //maximo (em segundos) que pode estar ligada (sem limite: -1)
    lampadaAmarela.setMaximo(-1); //maximo (em segundos) que pode estar ligada (sem limite: -1)
    lampadaVermelha.setMaximo(-1); //maximo (em segundos) que pode estar ligada (sem limite: -1)
    distancia = 0; //distancia a que o comboio esta do cruzamento (em km)
    velocidade = 0; //velocidade actual do comboio (km/h)
    sinalSonoro = false; //sinal sonoro ligado (true) ou desligado (false)
}

void semaforoB::setDistancia(float dist) {

    distancia = dist;

}

void semaforoB::setVelocidade(float velo) {

    velocidade = velo;

}

void semaforoB::setSinalSonoro(bool valor) {

    sinalSonoro = valor;

}

float semaforoB::getDistancia() {

    return distancia;

}

float semaforoB::getVelocidade() {

    return velocidade;

}

bool semaforoB::getSinalSonoro() {

    return sinalSonoro;

}

semaforoB::~semaforoB() = default;