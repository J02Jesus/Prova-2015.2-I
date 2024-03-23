
int main() {
    int dia, mes, ano;

    // Recebendo a data como entrada
    printf("Digite o dia, mes e ano (separados por espacos): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Verificando se o ano é bissexto
    int bissexto = ((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0);

    // Verificando o último dia do mês
    int ultimo_dia_mes;
    if (mes == 2) {
        if (bissexto)
            ultimo_dia_mes = 29;
        else
            ultimo_dia_mes = 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        ultimo_dia_mes = 30;
    } else {
        ultimo_dia_mes = 31;
    }

    // Verificando se é o último dia do ano
    if (dia == ultimo_dia_mes && mes == 12) {
        dia = 1;
        mes = 1;
        ano++;
    } else if (dia == ultimo_dia_mes) {
        dia = 1;
        mes++;
    } else {
        dia++;
    }

    // Imprimindo a data seguinte
    printf("O dia seguinte e: %d/%d/%d\n", dia, mes, ano);

    return 0;
}

