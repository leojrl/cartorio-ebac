#include <stdio.h>// bliblioteca de comunica��o com usu�rio
#include<stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biblioteca de aloca��o de texto por regi�o
#include <string.h>//biblioteca respons�vel por cuidar das string     

 int registro() //fun�ao reponsavel por cadastrar usuario no sistema
 {
     //inicio cria��o de variavel/string
	 char arquivo[40];
	 char cpf[40];
	 char nome[40];
	 char sobrenome[40];
	 char cargo[40];
	 //final da cria��o de vari�veis /string
	 
	 printf("digite ocpf a ser cadastrado:"); //coletando informa��o do usu�rio
	 scanf("%s", cpf);	//% refere-se a string
	 
	 strcpy(arquivo, cpf); // respons�vel por copiar valores da string

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
		printf("n�o foi possivel abrir o arquivo n�o foi localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
   }	
    fclose(file);
   system("pause");
 }
  
  int deletar()
  {
  	 char cpf[40];
  	 
	  printf("Digite o cpf do usu�rio a ser deletado: ");
      scanf("%s",cpf);
      
      remove(cpf);
      
	  FILE *file;
      file = fopen(cpf,"r"); 
      
      if(file == NULL)
      {
      	 printf("o usu�rio n�o se encontra no sistema!.\n");
      	 system("pause");
      }
      
      fclose(file);
      
	  
  } 
   
   int main ()	
   {
   int opcao=0; // definindo vari�veis
   int laco=1;
   
   for(laco=1;laco=1;)	
   {
     
   
     setlocale(LC_ALL, "Portuguese");  //definindo liguaguem
 
    printf("### cart�rio da EBAC ###\n\n"); // inic�o do menu 
	  printf("escolha a op��o desejada do menu:\n\n");    
	  printf("\t1 - registrar nomes \n"); 
	  printf("\t2 - consultar nomes \n");
	  printf("\t3 - deletar nomes \n\n");
	  printf("\t4 - sair do sistema\n\n");
	  printf("op��o");// fim do menu
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
       printf("essa opcao n�o esta disponivel!\n");
       system("pause");
	   break;
		}
    
	 }
  
  }
  
