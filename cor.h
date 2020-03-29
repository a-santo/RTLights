/*
 eFolio B
 21093 - Programacao por Objetos - 2018-2019
 Aluno: Andre Santo
 Numero: 1502142
*/

#ifndef CODIGO_COR_H
#define CODIGO_COR_H


class cor {

private:

    int estado; //estado da cor. ligado (0) ou desligado (1);
    int duracao;
    int maximo;

public:

    //construtor
    cor();

    //setters
    void setEstado(int est);
    void setDuracao(int dur);
    void setMaximo(int max);

    //getters
    int getEstado();
    int getDuracao();
    int getMaximo();

    //destrutor
    ~cor();

};

class verde : public cor {};
class amarela : public cor {};
class vermelha : public cor {};


#endif //CODIGO_COR_H
