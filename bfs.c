#include <stdio.h>
#include <stdlib.h>>

typedef enum {
    BRANCO,
    CINZA,
    PRETO
} Cor;

typedef struct Vizinho{
    int id_vizinho;
    struct Vizinho* prox;
} Vizinho;

typedef struct Grafo{
    int id_vertice;
    Vizinho* primeiro_vizinho;
    struct Grafo* prox;
    int* visitado;
    Cor cor;
} Grafo;

typedef struct Elist{
    Aresta** arestas;
    int v;
    int E;
} Elist;

typedef struct Aresta{
    int v;
    int w;
    int u;
} Aresta;

//Função 1: Executar a busca a partir de um vértice qualquer. Recebe o grafo e um vértice de origem s e executa a BFS a partir dele. Ao final, cada vértice v do grafo deve ter registrados a sua cor, a sua distância v.d e o seu predecessor v.pi. 

void pinta_branco(Grafo* g){
    Grafo* atual=g;

    while(atual!=NULL){
        atual->cor=BRANCO;
        atual=atual->prox;
    }
}

int busca(Grafo* g, int s){

    pinta_branco(g);

    g=busca_vertice(g, s);

    while(g!=NULL){
        g->cor=CINZA;

        while(g->primeiro_vizinho->prox !=NULL){
            Vizinho* atual=NULL;
            Vizinho* anterior=NULL;

            atual=g->primeiro_vizinho;  

            anterior=atual;
            atual=atual->prox;
        }

        g->cor=PRETO;

        g=g->prox;
    }

}