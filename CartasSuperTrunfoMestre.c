#include <stdio.h>
struct Carta{
    char nome_cidade[50], estado[4], codigo_carta[4];
    float pib, area, densidade_populacional, pib_per_capita, super_poder;
    unsigned long int populacao;
    int n_pontos_turisticos;
};
void calcular_super_poder(struct Carta *carta) {
    carta->super_poder = (float)carta->populacao + carta->area + carta->pib + (float)carta->n_pontos_turisticos + carta->pib_per_capita + (1.0 / carta->densidade_populacional);
}
void ExibirCarta(struct Carta carta) {
    printf("Nome: %s\n", carta.nome_cidade);
    printf("Estado: %s\n", carta.estado);
    printf("Codigo da Carta: %s\n", carta.codigo_carta);
    printf("PIB: %.2f\n", carta.pib);
    printf("Area: %.2f\n", carta.area);
    printf("Populacao: %lu\n", carta.populacao);
    printf("Pontos Turisticos: %d\n", carta.n_pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta.pib_per_capita);
    printf("Super Poder: %.2f\n", carta.super_poder);
}
void Cadastro(struct Carta *carta, int i) {
    printf("CADASTRO DE CARTA NUMERO %d\n", i);
    printf("Insira as informacoes da Carta:\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->nome_cidade);
    printf("Digite o estado: ");
    scanf("%s", carta->estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", carta->codigo_carta);
    printf("Digite o PIB : ");
    scanf("%f", &carta->pib);
    printf("Digite a Area : ");
    scanf("%f", &carta->area);
    printf("Digite a Populacao: ");
    scanf("%lu", &carta->populacao);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta->n_pontos_turisticos);
    carta->densidade_populacional = (float)carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / (float)carta->populacao;
    calcular_super_poder(carta);
}
void CompararCartas(struct Carta carta1, struct Carta carta2) {
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: %s venceu (%d)\n", (carta1.populacao > carta2.populacao) ? "Carta 1" : "Carta 2", carta1.populacao > carta2.populacao);
    printf("Area: %s venceu (%d)\n", (carta1.area > carta2.area) ? "Carta 1" : "Carta 2", carta1.area > carta2.area);
    printf("PIB: %s venceu (%d)\n", (carta1.pib > carta2.pib) ? "Carta 1" : "Carta 2", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: %s venceu (%d)\n", (carta1.n_pontos_turisticos > carta2.n_pontos_turisticos) ? "Carta 1" : "Carta 2", carta1.n_pontos_turisticos > carta2.n_pontos_turisticos);
    printf("Densidade Populacional: %s venceu (%d)\n", (carta1.densidade_populacional < carta2.densidade_populacional) ? "Carta 1" : "Carta 2", carta1.densidade_populacional < carta2.densidade_populacional);
    printf("PIB per Capita: %s venceu (%d)\n", (carta1.pib_per_capita > carta2.pib_per_capita) ? "Carta 1" : "Carta 2", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: %s venceu (%d)\n", (carta1.super_poder > carta2.super_poder) ? "Carta 1" : "Carta 2", carta1.super_poder > carta2.super_poder);
}

int main() {
    struct Carta carta1, carta2;
    int i=1;
    //aqui pode switch
    switch (i) {
        case 1:
        Cadastro(&carta1, i);
        i++;
        ;
        case 2:
        Cadastro(&carta2, i);
        i++;
        ;
        default: CompararCartas(carta1, carta2);
    };
    return 0;
}
