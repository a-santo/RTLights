/*
 eFolio B
 21093 - Programacao por Objetos - 2018-2019
 Aluno: Andre Santo
 Numero: 1502142
*/

#include "controlador.h"

#ifdef _WIN32
#define LIMPAR_ECRA "cls"
#else
#define LIMPAR_ECRA "clear"
#endif


// ************** classe controlador **************

controlador::controlador() = default;

std::string controlador::stringCorLuzLigada(semaforo s) {

    if(s.getLuzLigada() == 0)
        return "Verde";


    else if(s.getLuzLigada() == 1)
        return "Amarela";


    else if(s.getLuzLigada() == 2)
        return "Vermelha";

    else
        return "O semaforo esta desligado";


}

void controlador::esperarSegundos(int milissegundos) {

    std::this_thread::sleep_for(std::chrono::milliseconds(milissegundos)); //aguardar X milissegundos

}

void controlador::visualizarSemaforo(semaforo s) {

    //adaptado de http://saravitaya.tripod.com/_ArtTransportation.html

    if(s.getLuzLigada() == 0) { //esta ligada a luz verde


        std::cout << "                            ## " << std::endl;
        std::cout << "                           _[]_" << std::endl;
        std::cout << "                          [____]" << std::endl;
        std::cout << "                      .----'  '----." << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /####\\   |" << std::endl;
        std::cout << "                      |   \\####/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      '--.______.--'" << std::endl;
        std::cout << "                            ##" << std::endl;

        return;

    }

    if(s.getLuzLigada() == 1) { //esta ligada a luz amarela

        std::cout << "                            ##" << std::endl;
        std::cout << "                           _[]_" << std::endl;
        std::cout << "                          [____]" << std::endl;
        std::cout << "                      .----'  '----." << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /####\\   |" << std::endl;
        std::cout << "                      |   \\####/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      '--.______.--'" << std::endl;
        std::cout << "                            ##" << std::endl;

        return;

    }

    if(s.getLuzLigada() == 2) { //esta ligada a luz vermelha

        std::cout << "                            ##" << std::endl;
        std::cout << "                           _[]_" << std::endl;
        std::cout << "                          [____]" << std::endl;
        std::cout << "                      .----'  '----." << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /####\\   |" << std::endl;
        std::cout << "                      |   \\####/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      '--.______.--'" << std::endl;
        std::cout << "                            ##" << std::endl;
        return;

    }

    if(s.getLuzLigada() == -1) { //o semaforo esta desligado

        std::cout << "                            ##" << std::endl;
        std::cout << "                           _[]_" << std::endl;
        std::cout << "                          [____]" << std::endl;
        std::cout << "                      .----'  '----." << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      |    .==.    |" << std::endl;
        std::cout << "                      |   /::::\\   |" << std::endl;
        std::cout << "                      |   \\::::/   |" << std::endl;
        std::cout << "                      |    `\"\"`    |" << std::endl;
        std::cout << "                      '--.______.--'" << std::endl;
        std::cout << "                            ##" << std::endl;
        return;

    }

}

float controlador::arredondar(float numero) {

    return std::roundf(numero * 10) / 10;

}

controlador::~controlador() = default;

// *****************************************************************
// ************** classe do controlador da Rua Sesamo **************
// *****************************************************************
controladorRua::controladorRua() = default;

void controladorRua::inicializarControladorRua(int corComeco, int ciclos, int maxVerde, int maxAmarela, int maxVermelha) {

    int i;
    semaforoA s;

    //definir a luz por onde comecar o ciclo do semaforo
    s.setLuzLigada(corComeco);

    //definir o maximo que cada luz pode estar ligada
    s.setMaxLampadaVerde(maxVerde);
    s.setMaxLampadaAmarela(maxAmarela);
    s.setMaxLampadaVermelha(maxVermelha);

    for(i = 0; i < ciclos; i++) {

        s = percorrerCiclo(s);

    }

    //desligar o semaforo e mostrar o status uma ultima vez
    s.setLuzLigada(-1);
    visualizarStatusGeral(s);
    std::cout << "# Tempo restante: Nao disponivel                          #" << std::endl;
    std::cout << "###########################################################" << std::endl;


}

semaforoA controladorRua::incrementarContador(semaforoA s) {

    if(s.getLuzLigada() == 0)
        s.setDuracaoLampadaVerde(s.getDuracaoLampadaVerde() + 1);
    else if(s.getLuzLigada() == 1)
        s.setDuracaoLampadaAmarela(s.getDuracaoLampadaAmarela() + 1);
    else if(s.getLuzLigada() == 2)
        s.setDuracaoLampadaVermelha(s.getDuracaoLampadaVermelha() + 1);

    return s;

}

semaforoA controladorRua::percorrerCiclo(semaforoA s) {

    if(s.getLuzLigada() == 0) { //o ciclo comeca no sinal verde

        s = cicloVerde(s);
        s = cicloAmarelo(s);
        s = cicloVermelho(s);

    } else if(s.getLuzLigada() == 1) { //o ciclo comeca no sinal amarelo

        s = cicloAmarelo(s);
        s = cicloVermelho(s);
        s = cicloVerde(s);

    } else if(s.getLuzLigada() == 2) { //o ciclo comeca no sinal vermelho

        s = cicloVermelho(s);
        s = cicloVerde(s);
        s = cicloAmarelo(s);

    }

    return s;

}

void controladorRua::visualizarStatusGeral(semaforoA s) {

    system(LIMPAR_ECRA);
    std::cout << "###########################################################" << std::endl;
    std::cout << "#            Sistema de semaforos da Rua Sesamo           #" << std::endl;
    std::cout << "###########################################################" << std::endl;
    std::cout << std::endl;
    visualizarSemaforo(s); //ver estado actual do semaforo
    std::cout << std::endl;
    std::cout << "###########################################################" <<std::endl;
    std::cout << "# Luz Ligada: " << std::left << std::setw(43) << stringCorLuzLigada(s) << " #" << std::endl;

}

semaforoA controladorRua::cicloVerde(semaforoA s) {

    while(s.getEstadoLampadaVerde() == 1) {

        visualizarStatusGeral(s);
        std::cout << "# Tempo restante: " << std::left << std::setw(39) << s.getMaxLampadaVerde()-s.getDuracaoLampadaVerde() << " #" << std::endl;
        std::cout << "###########################################################" << std::endl;
        s = incrementarContador(s); //aumenta 1 segundo a luz ligada
        esperarSegundos(1000); //aguarda um segundo
        if(s.getDuracaoLampadaVerde() == s.getMaxLampadaVerde()) {

            s.setLuzLigada(1); //liga a luz amarela e desliga as restantes
            s.setDuracaoLampadaVerde(0); //voltar o contador da lampada a 0

        }
    }

    return s;

}

semaforoA controladorRua::cicloAmarelo(semaforoA s) {

    while(s.getEstadoLampadaAmarela() == 1) {

        visualizarStatusGeral(s);
        std::cout << "# Tempo restante: " << std::left << std::setw(39) << s.getMaxLampadaAmarela() - s.getDuracaoLampadaAmarela() << " #" << std::endl;
        std::cout << "###########################################################" << std::endl;
        s = incrementarContador(s); //aumenta 1 segundo a luz ligada
        esperarSegundos(1000);
        if (s.getDuracaoLampadaAmarela() == s.getMaxLampadaAmarela()) {

            s.setLuzLigada(2); //liga a luz vermelha e desliga as restantes
            s.setDuracaoLampadaAmarela(0); //voltar o contador da lampada a 0

        }
    }

    return s;

}

semaforoA controladorRua::cicloVermelho(semaforoA s) {

    while(s.getEstadoLampadaVermelha() == 1) {

        visualizarStatusGeral(s);
        std::cout << "# Tempo restante: " << std::left << std::setw(39) << s.getMaxLampadaVermelha()-s.getDuracaoLampadaVermelha() << " #" << std::endl;
        std::cout << "###########################################################" << std::endl;
        s = incrementarContador(s); //aumenta 1 segundo a luz ligada
        esperarSegundos(1000);
        if(s.getDuracaoLampadaVermelha()==s.getMaxLampadaVermelha()) {

            s.setLuzLigada(0); //liga a luz verde e desliga as restantes
            s.setDuracaoLampadaVermelha(0); //voltar o contador da lampada a 0

        }
    }

    return s;

}


controladorRua::~controladorRua() = default;

// *****************************************************
// ************** controlador da Ferrovia **************
// *****************************************************
controladorFerrovia::controladorFerrovia() = default;

float controladorFerrovia::calcularSegundos(float distancia, float velocidade) {

    float segundos = 0;

    segundos = distancia / velocidade;
    segundos = segundos * 60;
    segundos = segundos * 60;

    return segundos;


}

void controladorFerrovia::calcularEstimativasTempoVelocidade(semaforoB s, float &segundosAntesCruzamento,
                                                             float &segundosAposCruzamento, bool passouCruzamento) {

    std::cout << "###########################################################" << std::endl;
    std::cout << "#                          PAINEL                         #" << std::endl;
    std::cout << "###########################################################" << std::endl;
    std::cout << "# Velocidade (km/h): " << std::left << std::setw(36) << s.getVelocidade() << " #" << std::endl;
    std::cout << "# Distancia (km): ";

    if(s.getDistancia() == 0) {
        std::cout << std::left << std::setw(40) << "<1 " << "#" << std::endl;
    } else
        std::cout << (passouCruzamento ? "+":"-") << std::left << std::setw(38) << s.getDistancia() << " #" << std::endl;

    std::cout << "# Passou Cruzamento: " << std::left << std::setw(36) << (passouCruzamento ? "SIM" : "NAO") << " #" << std::endl;
    std::cout << "# Tempo: ";
    if(passouCruzamento) {
        std::cout << "+" << std::left << std::setw(47) << segundosAposCruzamento <<" #" << std::endl;
        segundosAposCruzamento = arredondar(segundosAposCruzamento += 0.1);

    }

    else {
        std::cout << "-" << std::left << std::setw(47) << segundosAntesCruzamento << " #" << std::endl;
        segundosAntesCruzamento = arredondar(segundosAntesCruzamento -= 0.1);
    }
    std::cout << "###########################################################" << std::endl;


}

void controladorFerrovia::inicializarControlador(float distancia, float velocidade) {

    semaforoB s;

    s.setDistancia(distancia); //definir a distancia inicial e final a que o comboio esta do cruzamento
    s.setVelocidade(velocidade); //definir a velocidade a que o comboio esta a viajar
    s.setLuzLigada(0); //ligar a luz verde por defeito.

    float segundosAntesCruzamento = arredondar(calcularSegundos(distancia, velocidade)); //definir quantos segundos faltam ate o comboio chegar ao cruzamento
    float segundosAposCruzamento = 0;
    float segundosPorKm = arredondar(calcularSegundos(1, velocidade)); //calcular quantos segundos sao necessarios para percorrer 1km
    float contador = 0; //contador de segundos para verificar se ja foi percorrido 1 km
    float contarLuzAmarela = 0; //para contar os segundos que a luz amarela esta ligada
    float distanciaFinal = 0; //para contar a distancia percorrida depois de passado o cruzamento
    bool passouCruzamento = false; //para assinalar se o comboio passou o cruzamento

    while(distanciaFinal < distancia) {

        s = controladorLuzes(s, s.getDistancia(), contarLuzAmarela); //controlar as luzes

        system(LIMPAR_ECRA);

        calcularEstimativasTempoVelocidade(s, segundosAntesCruzamento, segundosAposCruzamento, passouCruzamento);
        visualizarSemaforo(s); //visualizar o semaforo

        std::cout << "###########################################################" << std::endl;
        std::cout << "# Luz ligada: " << std::left << std::setw(43) << stringCorLuzLigada(s) << " #" << std::endl;
        std::cout << "# Sinal sonoro: " << std::left << std::setw(41) << (s.getSinalSonoro() ? "LIGADO" : "DESLIGADO" ) << " #" << std::endl;
        std::cout << "###########################################################" << std::endl;

        esperarSegundos(100); //aguardar 0,1 segundos
        contador = arredondar(contador += 0.1);

        calcularDistancia(s, passouCruzamento, segundosPorKm, distanciaFinal, contador);

        if(segundosAntesCruzamento <= 0) { //o contador chegou a zero ou menos de zero, passamos o cruzamento

            passouCruzamento = true;

        }
    }

    //mostrar ao utilizador mais uma vez o status final
    system(LIMPAR_ECRA);
    s.setLuzLigada(-1); //desligar o semaforo
    s = controladorLuzes(s, s.getDistancia(), contarLuzAmarela);
    calcularEstimativasTempoVelocidade(s, segundosAntesCruzamento, segundosAposCruzamento, passouCruzamento);
    visualizarSemaforo(s);
    std::cout << "Luz ligada: " << stringCorLuzLigada(s) << std::endl;
    std::cout << "Sinal sonoro: " << (s.getSinalSonoro() ? "LIGADO" : "DESLIGADO" ) << std::endl;

}

void controladorFerrovia::calcularDistancia(semaforoB &s, bool passouCruzamento, float segundosPorKm,
        float &distanciaFinal, float &contador) {

    if(!passouCruzamento && contador == segundosPorKm) { //contagem descrescente dos kms ATE do cruzamento

        s.setDistancia(s.getDistancia() - 1);
        contador = 0;

    }

    if(passouCruzamento && contador == segundosPorKm) { //contagem crescente dos kms percorridos APOS cruzamento

        s.setDistancia(s.getDistancia() + 1);
        distanciaFinal += 1;
        contador = 0;

    }

}

semaforoB controladorFerrovia::controladorLuzes(semaforoB s, float distancia, float &contarLuzAmarela) {


    if(distancia > 5) {
        //se estiver a 5km do cruzamento, a luz e sempre verde
        if(s.getLuzLigada() != -1) //apenas mudar a luz se o semaforo nao estiver desligado
            s.setLuzLigada(0);
        s.setSinalSonoro(false); //desligar o sinal sonoro
    }

    else if(distancia <= 5 && contarLuzAmarela < 5) {
        //se estiver a menos de 5km, ligar a luz amarela (durante 5 segundos)
        if(s.getLuzLigada() != -1) //apenas mudar a luz se o semaforo nao estiver desligado
            s.setLuzLigada(1);
        contarLuzAmarela += 0.1;
        s.setSinalSonoro(true); //ligar o sinal sonoro
    }

    else if(distancia <= 5 && contarLuzAmarela >= 5) //... passados 5 segundos, ligar entao a luz vermelha
        if(s.getLuzLigada() != -1) //apenas mudar a luz se o semaforo nao estiver desligado
            s.setLuzLigada(2);

    return s;

}

controladorFerrovia::~controladorFerrovia() = default;

