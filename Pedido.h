#pragma once
#include "Cliente.h"
#include <string>
using namespace std;

struct Prato {
    string nome;
    double preco;
    int quantidadeEmStock;
    string dataValidade;

};

struct Bebida {
    string nome;
    double preco;
    int quantidadeEmStock;
};

class Pedido {
private:
    Prato prato;
    Bebida bebida;
    int quantidadePrato;
    int quantidadeBebida;
    int numMesa;
    double totalAPagar;
    Cliente cliente;
    bool refeicaoGratis;
    double total;
    bool sorteado; // Novo membro para rastrear se o pedido foi sorteado


public:
    Pedido(Prato prato, int quantidadePrato, Bebida bebida, int quantidadeBebida, int numMesa, Cliente cliente);
    Prato getPrato() const;
    Bebida getBebida() const;
    int getQuantidadePrato() const;
    int getQuantidadeBebida() const;
    int getNumMesa() const;
    double getTotalAPagar() const;
    void calcularTotal();
    Cliente getCliente() const;
    int getNumLinha() const;
    Cliente getNumCliente() const;

    // Nova função para verificar se o pedido foi sorteado
    bool foiSorteado() const;

    // Nova função para marcar o pedido como sorteado
    void marcarComoSorteado();
    void setSorteado(bool valor);
};
