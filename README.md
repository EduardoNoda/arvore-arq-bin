Faça um programa em C para Linux que suporte as seguintes operações sobre uma árvore binária de busca que armazena chaves inteiras:

    Busca pela maior e menor chave na árvore;
    Busca por uma chave com valor x;
    Busca pelo sucessor e predecessor de uma chave com valor x;
    Inserção e remoção de uma chave com valor x;
    Impressão dos nós da árvore em pré-ordem, em ordem simétrica e em pós-ordem;
    Leitura e gravação da árvore em arquivo formato binário usando percurso em pré-ordem. A árvore não deve ser reconstruída através de operações de inserção;
    Desalocação da árvore.

Deve ser apresentada uma interface modo texto de simples uso que suporte todas as operações. Após a realização de cada operação solicitada pelo usuário, a árvore atualizada deve ser automaticamente impressa em tela (use print-ab.h em anexo). 

A seguinte estrutura de dados deve ser utilizada para representar em memória cada nó da árvore:
struct s_no
{
    int32_t chave:30;
    int32_t reservado:2; /* sem uso */
    struct s_no* esq;
    struct s_no* dir;
};

A seguinte struct deve ser utilizada para representar em arquivo cada nó da árvore:
struct s_arq_no
{
    int32_t chave:30;
    uint32_t esq:1;
    uint32_t dir:1;
};

Serão aceitos apenas os algoritmos apresentados/discutidos em sala de aula.


O código deve estar devidamente organizado, identado, comentado e sem warnings  usando  as  opções -Wall -Wextra -pedantic do gcc.

