#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void resultado(int z){

    char resultado[8];
    itoa(z, resultado, 2); // converte de volta para binário

    int diff = 8 - strlen(resultado); // calcula diferença de caracteres para preenchimento de 0s

    int c;
    for(c = 0; c < diff; c++){
        printf("0");
    }

    printf("%s", resultado);

}

int conversor(){
    //converte para decimal para a realização das operações
    int x;
    scanf("%d", &x);
    int resto;
    int convertido = 0;
    int produto = 1;


    while(x>0){
        resto = x % 10;
        convertido += resto * produto;
        x /= 10;
        produto *= 2;
    }

    return convertido;

}

void soma(){
    int x;
    int y;
    int z;


    x = conversor();
    y = conversor();
    
    z = x + y;
    resultado(z);
    
}

void subtracao(){
    int x;
    int y;
    int z;


    x = conversor();
    y = conversor();
    
    z = x - y;
    resultado(z);
     
}

void multiplicacao(){
    int x;
    int y;
    int z;


    x = conversor();
    y = conversor();
    
    z = x * y;
    resultado(z);
    
}

void divisao(){
    int x;
    int y;
    int z;


    x = conversor();
    y = conversor();
    
    z = x / y;
    resultado(z);
    
}

void modulo(){
    int x;
    int y;
    int z;


    x = conversor();
    y = conversor();
    
    z = x % y;
    resultado(z);
    
}

int main(){

    int u = 163; // código dec da tabela ascii para "ú"
    int c = 135; // código dec da tabela ascii para "ç"
    int a = 198; // código dec da tabela ascii para "ã"
    int A = 160; // código dec da tabela ascii para "á"
    int o = 162; // código dec da tabela ascii para "ó"
    int mod = 37; // código dec da tabela ascii para "%"

    printf("Selecione o operador de acordo com o n%cmero apresentado.\n1: + (Soma)\n2: - (Subtra%c%co)\n3: * (Multiplica%c%co)\n4: / (Divis%co)\n5: %c (M%cdulo)\n\nAp%cs isso, basta inserir os n%cmeros (em bin%crio) para receber o resultado.\n",u,c,a,c,a,a,mod,o,o,u,A);

    int escolha; // recebendo o número da operação
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        printf("\nOpera%c%co selecionada: Soma\n",c,a);
        printf("Insira os n%cmeros para a opera%c%co, um ap%cs o outro.\n",u,c,a,o);
        soma();
        break;
    case 2:
        printf("\nOpera%c%co selecionada: Subtra%c%co\n",c,a,c,a);
        printf("Insira os n%cmeros para a opera%c%co, um ap%cs o outro.\n",u,c,a,o);
        subtracao();
        break;
    case 3:
        printf("\nOpera%c%co selecionada: Multiplica%c%co\n",c,a,c,a);
        printf("Insira os n%cmeros para a opera%c%co, um ap%cs o outro.\n",u,c,a,o);
        multiplicacao();
        break;
    case 4:
        printf("\nOpera%c%co selecionada: Divis%co\n",c,a,a);
        printf("Insira os n%cmeros para a opera%c%co, um ap%cs o outro.\n",u,c,a,o);
        divisao();
        break;
    case 5:
        printf("\nOpera%c%co selecionada: M%cdulo\n",c,a,o);
        printf("Insira os n%cmeros para a opera%c%co, um ap%cs o outro.\n",u,c,a,o);
        modulo();
        break;
    
    default:
        printf("Insira o n%cmero corresponde ao da opera%c%co que desejas trabalhar.",u,c,a);
        break;
    }

    return 0;
}