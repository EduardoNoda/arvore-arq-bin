#ifndef ARVORE_H
#define ARVORE_H

#include <stdint.h>

typedef struct s_no {
    int32_t chave:30;
    int32_t reservado:2;
    struct s_no *esquerda;
    struct s_no *direita;
} s_no;

int32_t busca_por_maior(const s_no raiz);
int32_t busca_por_menor(const s_no raiz);
int32_t busca_sucessor_de_elemento(const s_no raiz, int32_t elemento);
int32_t busca_predecessor_de_elemento(const s_no raiz, int32_t elemento);
void inserir_elemento(s_no raiz);
void remover_elemento(s_no raiz, const int32_t elemento);

#endif