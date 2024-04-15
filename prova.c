#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
    int portaEscolhida;

    char opcao;

    srand(time(NULL));


    int portaVazia = rand() % 3 + 1;
    int portaPremiada = rand() % 3 + 1;


  portaVazia != portaPremiada;
  portaEscolhida != portaVazia;
 
 
    


    

    printf("Bem vindo ao jogo Monty Hall!");

    printf("\nEscolha uma porta (1,2,3) : ");
    scanf("%d", &portaEscolhida);

    
      printf("A porta %d esta vazia", portaVazia);
  
  
    printf("\nDeseja trocar de porta (s = sim e não = nao) : ");
    scanf(" %c", &opcao);

     
  
    
    if(opcao == 's' && portaEscolhida == portaPremiada){
      printf("Você trocou de porta e perdeu, a porta premiada era %d  ", portaPremiada);
    } else if(opcao == 's' && portaEscolhida != portaPremiada){
      printf("Você ganhou a porta %d era premiada! ", portaPremiada);
    }
  if(opcao == 'n' && portaEscolhida == portaPremiada){
    printf("Voce ganhou a porta %d era premiada! ", portaPremiada);
  } else if(opcao == 'n' && portaEscolhida != portaPremiada){
    printf("Voce perdeu a porta %d era premiada! ", portaPremiada);
  }




}
