/*
 eFolio B
 21093 - Programacao por Objetos - 2018-2019
 Aluno: Andre Santo
 Numero: 1502142
*/

#include "cor.h"

cor::cor() {

    duracao = 0; //duracao (tempo decorrido)
    estado = 0; //estado da lampada, por defeito desligado
    maximo = 0; //tempo maximo que a lampada pode estar num dado determinado estado (em segundos). -1 para nao ter tempo maximo

}

void cor::setEstado(int est) {

    estado = est;

}

void cor::setDuracao(int dur) {

    duracao = dur;

}

void cor::setMaximo(int max) {

    maximo = max;

}

int cor::getEstado() {

    return estado;

}

int cor::getDuracao() {

    return duracao;

}

int cor::getMaximo() {

    return maximo;

}

cor::~cor() = default;
