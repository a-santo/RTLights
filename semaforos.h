/*
 eFolio B
 21093 - Programacao por Objetos - 2018-2019
 Aluno: Andre Santo
 Numero: 1502142
*/

#ifndef CODIGO_SEMAFOROS_H
#define CODIGO_SEMAFOROS_H

#include "cor.h"

class semaforo {

protected: //protegidos em vez de private para que possam ser acedidos pelas classes-filho (herança)

    verde lampadaVerde;
    amarela lampadaAmarela;
    vermelha lampadaVermelha;
    int luzLigada; //para definir a luz que esta ligada (0=verde, 1=amarela, 2=vermelha, -1=desligado);

public:

    //construtor
    semaforo();

    //setters
    void setDuracaoLampadaVerde(int duracao);
    void setDuracaoLampadaAmarela(int duracao);
    void setDuracaoLampadaVermelha(int duracao);
    void setLuzLigada(int luz);

    //getters
    int getEstadoLampadaVerde();
    int getDuracaoLampadaVerde();

    int getEstadoLampadaAmarela();
    int getDuracaoLampadaAmarela();

    int getEstadoLampadaVermelha();
    int getDuracaoLampadaVermelha();

    int getLuzLigada();

    //destrutor
    ~semaforo();

};

class semaforoA : public semaforo {

public:

    //construtor
    semaforoA();

    //setters
    void setMaxLampadaVerde(int max);
    void setMaxLampadaAmarela(int max);
    void setMaxLampadaVermelha(int max);

    //getters
    int getMaxLampadaVerde();
    int getMaxLampadaAmarela();
    int getMaxLampadaVermelha();

    //destrutor
    ~semaforoA();

};

class semaforoB : public semaforoA {

private:

    float distancia; //distancia a que o comboio esta do cruzamento
    float velocidade; //velocidade do comboio
    bool sinalSonoro; //para assinalar se o sinal sonoro esta ligado (true) ou desligado (falso)

public:

    //construtor
    semaforoB();

    //setters
    void setDistancia(float dist);
    void setVelocidade(float velo);
    void setSinalSonoro(bool valor);

    //getters
    float getDistancia();
    float getVelocidade();
    bool getSinalSonoro();

    //destrutor
    ~semaforoB();

};

#endif //CODIGO_SEMAFOROS_H
