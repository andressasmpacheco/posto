#include <stdio.h>
int main()
{
    int escolha;
    float preco, litro;

    printf("Este e o app do posto de gasolina\n\n");
    printf("Para etanol Digite 1\n\nPara gasolina Digite 2\n\n");
    scanf("%d", &escolha);


   if (escolha==1)
    {
    printf("Digite quantos litros de etanol voce quer:\n\n");
    scanf("%f", &litro);
    if (litro<=25)
    {
        preco = litro * 0.02;
        printf("Seu desconto no app e de %.2f ", preco);

    }
    else
    {
        preco = litro * 0.04;
        printf("Seu desconto no app e de %.2f ", preco);
    }
    
    }
    else if (escolha==2)
    {
      printf("Digite quantos litros de gasolina voce quer:\n\n");
      scanf("%f", &litro);
    if (litro<=25)
    {
        preco = litro * 0.03;
        printf("Seu desconto no app e de R$ %.2f", preco);

    }
    else
    {
        preco = litro * 0.05;
        printf("Seu desconto no app e de %.2f",preco);
    }  
    }
    else
    {
        printf("opcao invalida");
    }
    
}
