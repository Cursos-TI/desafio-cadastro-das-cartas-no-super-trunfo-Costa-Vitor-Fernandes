#include <stdio.h>
struct Carta{
    char nome_cidade[50],estado[4],codigo_carta[4];
    float pib, area, densidade_populacional, pib_per_capita;
    int populacao, n_pontos_turisticos;
};
void ExibirCarta(struct Carta carta1,
    struct Carta carta2){
    printf("Carta1:\n");
    printf("NOME : %s,\n ESTADO: %s,\n CODIGO DA CARTA: %s,\n PIB: %f,\n AREA: %f,\n POPULAÇÃO: %d,\n PONTOS TURISTICOS: %d,\n DENSIDADE POPULACIONAL: %f,\n PIB per Capita: %f,", carta1.nome_cidade, carta1.estado, carta1.codigo_carta, carta1.pib, carta1.area, carta1.populacao, carta1.n_pontos_turisticos, carta1.densidade_populacional, carta1.pib_per_capita);
    printf("\n\n\n\n\n Carta2:\n");
    printf("NOME : %s,\n ESTADO: %s,\n CODIGO DA CARTA: %s,\n PIB: %f,\n AREA: %f,\n POPULAÇÃO: %d,\n PONTOS TURISTICOS: %d,\n DENSIDADE POPULACIONAL: %f,\n PIB per Capita: %f,", carta2.nome_cidade, carta2.estado, carta2.codigo_carta, carta2.pib, carta2.area, carta2.populacao, carta2.n_pontos_turisticos, carta2.densidade_populacional, carta2.pib_per_capita);
};
void Cadastro(struct Carta *carta, int i){
    printf("CADASTRO DE CARTA NUMERO %d \n", i);
    printf("Insira as informações da Carta\n");
    printf("Digite o nome da cidade:\n ");
    scanf("%s", carta->nome_cidade);
    printf("Digite o estado:\n ");
    scanf("%s", carta->estado);
    printf("Digite o código da carta:\n");
    scanf("%s", carta->codigo_carta);
    printf("Digite o PIB:\n ");
    scanf("%f", &carta->pib);
    printf("Digite a Area:\n ");
    scanf("%f", &carta->area);
    printf("Digite a População:\n ");
    scanf("%d", &carta->populacao);
    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &carta->n_pontos_turisticos);
    printf("Carta Inserida:\n");
    carta->densidade_populacional= carta->populacao/carta->area;
    carta->pib_per_capita = carta->pib/carta->populacao;
    printf("NOME : %s,\n ESTADO: %s,\n CODIGO DA CARTA: %s,\n PIB: %f,\n AREA: %f,\n POPULAÇÃO: %d,\n PONTOS TURISTICOS: %d, DENSIDADE POPULACIONAL: %f,\n PIB per Capita: %f, \n   \n\n\n\n", carta->nome_cidade, carta->estado, carta->codigo_carta, carta->pib, carta->area, carta->populacao, carta->n_pontos_turisticos, carta->densidade_populacional,carta->pib_per_capita);
}
int main() {
    struct Carta carta1, carta2;
    int i=1;
    switch (i) {
        case 1:
        Cadastro(&carta1, i);
        i++;
        ;
        case 2:
        Cadastro(&carta2, i);
        i++;
        ;
        default: ExibirCarta(carta1, carta2);
    };
    return 0;
}
