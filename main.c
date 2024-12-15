/*
#include <stdio.h> // Biblioteca usada para gerenciamento de arquivos,entrada e saída de dados. (Printf, scanf,fopen,fclose,etc...)
#include <string.h> // Biblioteca usada para manipulação de strings. strcpy,strcat,strlen,etc...
#include <math.h>  Biblioteca usada para operações matemáticas como:

sin - Para seno
cos - para cosseno
tan - tangente
exp - Retorna a base de Euler elevada à potência
log - Retorna o logaritmo natural
log10 - Retorna o logaritmo de x
sqrt - Retorna a raiz quadrada de x
pow - Retorna o valor de base elevado à potência exp.

#include <stdlib.h> // Biblioteca usado para Alocação de memória (malloc,calloc,free)
#include <stdlib.h> // Biblioteca usada para Conversão de tipos (atoi,atof).
#include <stdlib.h> // Biblioteca usada também para Controle de processos (exit,system).
#include <time.h> // Biblioteca usada para manipulação de tempo (time,localtime,difftime)
*/
/* Entrada e saída de dados

Entrada de dados - Scanf(formato,lista de endereços)
Saída de dados - Printf(formato,argumentos)
   
        Formatos
    %d - Usado para Inteiro decimal
    %f - Usado para Ponto Flutuante
    %c - Usado para Caractere
    %s - Usado para String
    %x - Usado para Inteiro Hexadecimal

        Formatos
    \n -  Nova linha
    \t - Tabulação
    \\ - Barra invertida
    \" - Aspas
*/

/*
    Operadores Aritméticos

     Operador       Explicação      Exemplo
        +              Adição        valor = 3 + 5; // 8
        -              Subtração     valor = 5 - 5; // 0
        *              Multiplicação valor = 3 * 5; // 15
        /              Divisão       valor = 30 / 5; // 6
        %              Módulo        valor = 30 % 5; // 0

    Operador de Atribuição

     Operador       Explicação      Exemplo
        =              Atribuição       valor = 30;

    Operador de Incremento e Decremento

     Operador               Explicação              Exemplo
        ++             incremento do valor em +1      valor ++
        --             decremento do valor em -1      valor --

    Operadores Lógicos e Relacionais

        Operador       Explicação           Exemplo
            &&           And             Valor > 18 && valor < 23
            ||           or              Valor > 18 || valor < 23
            !           negação          Valor != 15
    
    Operadores Relacionais

        Operador        Explicação              Exemplo
            ==          Igual relacional       valor == 15
            !=          Diferente              valor != 15
            <           Menor que              valor < 15
            >           Maior que              valor > 15
            >=          Maior ou igual a       valor >= 15
            <=          Menor ou igual a       valor <= 15
*/

/*
    Tipos primitivos:

        int - Utilizado para armazenar números inteiros
    
        float - Utilizado para numeros de ponto flutuante(números com casas decimais)
    
        double - Utilizado para armazenar números de ponto flutuante com maior precisão que o float.

        char - Utilizado para armazenar um único caractere.

    Modificados de Tipos de dados:

        short: Utilziado para reduzir o tamanho de armazenamento de um dado inteiro.
            Exemplo: short int ano  = 2023;
        
        long: Utilizado para aumentar o tamanho de armazenamento de um tipo de dado inteiro.
            Exemplo: long int população = 78000000L;
        
        unsigned: Utilizado para armazenar apenas valore positivos.
            Exemplo: unsigned int idade = 25;
        
    Tipos de dados Compostos:

        array - Usado para uma coleção de elementos do mesmo tipo.
            exemplo: int numeros[5] = {1 , 2, 3 , 4 , 5};
        
        struct - Usado para Agrupamento de diferentes tipos de dados em uma única entidade.
            exemplo:    struct Pessoa{
                        char nome[50];
                        int idade;
                        float altura;
            };

            struct Pessoa pessoa1 <<chamando uma struct(Repare que primeiro você coloca o nome da struct criada e depois passa um apelido para a struct).

        unions - Semelhantes às structs,mas armazenam diferentes tipos de dados em um único local de memória,economizando espaço.
            Exemplo: union Valor {
                        int inteiro;
                        float decimal;    
            };
            union Valor valor;

        enums - Conjunto de constantes inteiras nomeadas,que podem tornar o código mais legível.

        enum dias_da_semana {DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA,SABADO};
        enum dias_da_semana_hoje = SEGUNDA;

        Tipos de dados Derivados
        
        Pointers - Utilizado apra armazenar endereços de memória.
        int *ptr;
        int numero = 10;
        ptr = &numero;


*/ 
/* Bloco simples de execução de programa
#include <stdio.h>
int main(){
    int num1;
    int num2;
    int valor_total;
    printf("Informe o primeiro numero:\n");
    scanf("%d", &num1);
    
    printf("Informe o segundo numero:\n");
    scanf("%d", &num2);

    valor_total = num1 + num2;

    printf("O valor total e de: %d", valor_total);
}
*/
/*
    Estruturas de Controle e repetição

    Operadores Condicionais

    if - Condicional usado para verificar se uma condição é verdadeira ou falsa

    if(condição){
        // condição a ser executado se caso a condição for verdadeira
    }else{
        // condição a ser executada se caso a condição for falsa.
    }

    switch(expressão){
        case 1:
        //Código para o caso valor1
        break;

        case 2:
        //Código para o caso valor2
        break;
        default:
            //Código para os demais casos
    }

    Estruturas de repetição:
        While, do while,for

        while(condição){
            //Código a ser repetido enquanto a condição for verdadeira
        }
            Exemplo:
        int i = 1;
        while(i <= 10){
            printf("%d", i++);
        }

        do{
            //Código a ser executado pelo menos uma vez
        }while(condição);

        Exemplo:

        int i = 1;
        do{
            // Código a ser executado pelo menos uma vez
        }while(i < = 10 )

        for(int i = 1; i <= 10 ; i++){
            printf("\n",i);
        }
*/

/*
    Sub - rotinas(Funções)

    tipo_de_retorno nome_da_função(lista_de_parâmetros){
        //corpo da função
    }
        Exemplo:
            float area(float altura, float base){
                return altura * base;
            }
        procedimentos:
            void area(float altura,float base){
                printf("A area é: %f,altura * base");
            }

    Vetores:
        Variáveis unidimensionais
            Exemplo:
                tipo_de_dado nome_do_vetor[tamanho];
                    int numeros[5];
    
    Matrizes:
        Variáveis multidimensionais
            Exemplo:
                tipo_de_dado nome_da_matriz[linhas][colunas];
                    float matriz[3][3];
    
    Tipos de dados Compostos:
        Struct:
            struct nome_da_estrutura{
                tipo_de_dado membro1;
                tipo_de_dado membro2;
                //..
            }
                Exemplo:
                    sruct Pessoa{
                        char nome[50];
                        int idade;
                    };
*/