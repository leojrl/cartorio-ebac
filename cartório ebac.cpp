#include <stdio.h>// bliblioteca de comunicação com usuário
#include<stdlib.h>//biblioteca de alocação de espaço em memória
#include <locale.h>//biblioteca de alocação de texto por região
#include <string.h>//biblioteca responsável por cuidar das string     

 int registro() //funçao reponsavel por cadastrar usuario no sistema
 {
     //inicio criação de variavel/string
	 char arquivo[40];
	 char cpf[40];
	 char nome[40];
	 char sobrenome[40];
	 char cargo[40];
	 //final da criação de variáveis /string
	 
	 printf("digite ocpf a ser cadastrado:"); //coletando informação do usuário
	 scanf("%s", cpf);	//% refere-se a string
	 
	 strcpy(arquivo, cpf); // responsável por copiar valores da string

    FILE*file; // criar o arquivo 
    file = fopen(arquivo,"w");// criar arquivo
    fprintf(file,cpf);//salvo o valor da  variavel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo,"a");
    fprintf(file,nome);
    fclose (file);
    
    file = fopen (arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o sobrenome a ser cadastrado:");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo,"a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o cargo a ser cadastrado");
    scanf("%s",cargo);
    
    file = fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
    
 }
 
 int consulta()
 {
    setlocale(LC_ALL, "Portuguese"); //definindo liguaguem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
    file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("não foi possivel abrir o arquivo não foi localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário:");
		printf("%s", conteudo);
		printf("\n\n");
   }	
    fclose(file);
   system("pause");
 }
  
  int deletar()
  {
  	 char cpf[40];
  	 
	  printf("Digite o cpf do usuário a ser deletado: ");
      scanf("%s",cpf);
      
      remove(cpf);
      
	  FILE *file;
      file = fopen(cpf,"r"); 
      
      if(file == NULL)
      {
      	 printf("o usuário não se encontra no sistema!.\n");
      	 system("pause");
      }
      
      fclose(file);
      
	  
  } 
   
   int main ()	
   {
   int opcao=0; // definindo variáveis
   int laco=1;
   
   for(laco=1;laco=1;)	
   {
     
   
     setlocale(LC_ALL, "Portuguese");  //definindo liguaguem
 
    printf("### cartório da EBAC ###\n\n"); // inicío do menu 
	  printf("escolha a opção desejada do menu:\n\n");    
	  printf("\t1 - registrar nomes \n"); 
	  printf("\t2 - consultar nomes \n");
	  printf("\t3 - deletar nomes \n\n");
	  printf("\t4 - sair do sistema\n\n");
	  printf("opção");// fim do menu
	  printf("\t esse softare foi criado por leonardo ribeiro");
    
    scanf("%d", &opcao);// armazenando escolha do usuario
    
    system("cls");
    
    switch(opcao)
    {
    
	   case 1:
       registro();    
       break;
    
       case 2:
       consulta();
       break;
    
       case 3:
 	   deletar();
       break;
       
       case 4: 
       printf("obrigado po utilizar o sistema!\n");
       return 0;
       break;
       
    
       default:
       printf("essa opcao não esta disponivel!\n");
       system("pause");
	   break;
		}
    
	 }
  
  }
  
