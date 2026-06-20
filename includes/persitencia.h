#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include <stdint.h>
#include "arvore.h"

typedef struct s_arq_no
{
    int32_t chave:30;
    uint32_t esq:1;
    uint32_t dir:1;
} s_arq_no;

s_no* carregar_arvore(const char* arq_nome);
int salvar_arvore(const char* arq_nome, s_no* raiz);

#endif