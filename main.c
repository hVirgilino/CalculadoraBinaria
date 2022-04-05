#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conversor(){

}

void resultado(){

}

void soma(){

}

void subtracao(){
    
}

void multiplicacao(){
    
}

void divisao(){
    
}

void modulo(){
    
}


int main(){

    int u = 163; // código dec da tabela ascii para "ú"
    int c = 135; // código dec da tabela ascii para "ç"
    int a = 198; // código dec da tabela ascii para "ã"
    int A = 160; // código dec da tabela ascii para "á"
    int o = 162; // código dec da tabela ascii para "ó"
    int mod = 37; // código dec da tabela ascii para "%"

    printf("Selecione o operador de acordo com o n%cmero apresentado.\n1: + (Soma)\n2: - (Subtra%c%co)\n3: * (Multiplica%c%co)\n4: / (Divis%co)\n5: %c (M%cdulo)\n\nAp%cs isso, basta inserir os n%cmeros (em bin%crio) para receber o resultado.",u,c,a,c,a,a,mod,o,o,u,A);

    int escolha; // recebendo o número da operação
    scanf("%d", escolha);

    switch (escolha){
    case 1:
        soma();
        break;
    case 2:
        subtracao();
        break;
    case 3:
        multiplicacao();
        break;
    case 4:
        divisao();
        break;
    case 5:
        modulo();
        break;
    
    default:
        printf("Insira o n%cmero corresponde ao da opera%c%co que desejas trabalhar.",u,c,a);
        break;
    }

    return 0;
}