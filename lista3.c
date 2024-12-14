
/*
EXERCÍCIOS DO CAPÍTULO 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exemploPara() {
	for (int cont = 1; cont <= 10; cont++) {
		printf("Olá pela %d vez\n", cont);
	}
}
void exemploEnquanto() {
	int opcao = -1;
	while (opcao != 0) {
		printf("Digite uma Opcao (0 para sair): ");
		scanf("%d", &opcao);
		printf("Você escolheu a opção %d\n", opcao);
	}
}
void exemploRetornoInvestimento() {
	float investimento = 1000;
	float rentabilidade = 0.011; // 1,1%
	int prazo = 12; //meses
	for (int mes = 1; mes <= prazo; mes++) {
		investimento = investimento + investimento*rentabilidade; 
	}
	printf("Saldo final após %d meses: %.2f", prazo, investimento);
}
void exemploPrimeiroMilhao() {
	float aporte = 1000;
	float saldo = 0;
	float rentabilidade = 0.01; // 1%
	int prazo = 0; //meses
	while (saldo < 1000000) {
		saldo = aporte + saldo + saldo*rentabilidade;
		prazo++;
	}
	printf("Saldo: %.2f em %d meses",saldo,prazo);
}
//1.Faça um programa que imprima todos os números de 1 até 100.

void exemplo1ate100() {
	for (int cont = 1; cont <= 100; cont++) {
		printf("Escreva o numero: %d\n", cont);
	}
}

//2. Faça um programa que imprima todos os números pares de 100 até 1.

void contadorpar100a1() {
	for (int cont = 99; cont >= 0; cont-= 2) {
		printf("Escreva o numero par: %d\n", cont);
	}
}

//3. Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

void multiplode5() {
	for (int cont = 1; cont <= 500; cont++) {
        if (cont%5 == 0)
		printf("Escreva os multipols de 5 no intervalo de 1 ate 500:  %d\n", cont);
	}

}

//4. Faça umprograma que permita entrar com o nome, a idade e o sexo de 20
//4. Faça um programa que permita entrar com o nome, a idade e o sexo de 20
//pessoas.O programa deve imprimir o nome da pessoa se ela for do sexo masculino
//e tiver mais de 21 anos.


//nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
//imprimir a média geral da turma.

//8. Faça umprograma que permita entrar com o nome e o salário bruto de 10 pessoas.
//8. Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
//Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
//calculado conforme a tabela a seguir:
//Salário IRRF
//Salário menor que R$1300,00 Isento
//Salário maior ou igual a R$1300,00 e menor que R$2300,00 10% do salário bruto
//Salário maior ou igual a R$2300,00 15% do salário bruto

//9. No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou
//9. No dia da estreia do filme "Procurando Dory", uma grande emissora de TV realizou
//uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
//a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
//excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a

//(zero). O programa deve calcular e imprimir:
//• O custo total para cada consumidor
//• O total de consumo para os três tipos de consumidor
//• Amédia de consumo dos tipos 1 e 2
//• A média de consumo dos tipos 1 e 2

//14. Faça umprograma que leia vários números inteiros e apresente o fatorial de cada
//14. Faça um programa que leia vários números inteiros e apresente o fatorial de cada
//número. O algoritmo encerra quando se digita um número menor do que 1.

//15. Faça um programa que permita entrar com a idade de várias pessoas e

//serviços diários de:
//• R$15,00, se o número de dias for menor que 10;
//• R$8,00, se o número de dias for maior ou igual a 10;
//Faça umprograma que imprima o nome, a conta e o número da conta de cada
//Faça um programa que imprima o nome, a conta e o número da conta de cada
//cliente e ao final o total faturado pela pousada.
//O programa deverá ler novos clientes até que o usuário digite 0 (zero) como
//número da conta.

//19. Emuma Universidade, os alunos das turmas de informática fizeram uma prova
//19. Em uma Universidade, os alunos das turmas de informática fizeram uma prova
//de algoritmos. Cada turma possui um número de alunos. Criar um programa que
//imprima:
//• quantidade de alunos aprovados;
//• média de cada turma;
//• percentual de reprovados.
//Obs.: Considere aprovado comnota >= 7.0
//Obs.: Considere aprovado com nota >= 7.0

//20. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
//• Qual o seu time de coração?

//3.12. Exercícios da Aula 73
//Obs.: O programa encerra quando se digita 0 para o time.

//21. Emuma universidade cada aluno possui os seguintes dados:
//21. Em uma universidade cada aluno possui os seguintes dados:
//• Renda pessoal;
//• Renda familiar;
//• Total gasto com alimentação;

//arrecadados com a aplicação de multas de trânsito.
//O algoritmo deve ler as seguintes informações para cada motorista:
//• número da carteira de motorista (de 1 a 4327);
//• número demultas;
//• número de multas;
//• valor de cada uma das multas.
//Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o
//total de recursos arrecadados (somatório de todas as multas). O programa deverá
//imprimir tambémo número da carteira domotorista que obteve o maior número
//imprimir também o número da carteira do motorista que obteve o maior número
//de multas.
//Obs.: O programa encerra ao ler a carteira de motorista de valor 0.

//23. Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso
//e altura) dos atletas que participaram de uma olimpíada, e informar:
//• a atleta do sexo feminino mais alta;
//• o atleta do sexomasculinomais pesado;
//• amédia de idade dos atletas.
//• o atleta do sexo masculino mais pesado;
//• a média de idade dos atletas.
//Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um
//atleta.
//Para resolver este exercício, consulte a aula 7 que aborda o tratamento de strings,

//viagem, sabendo que um carro faz 10 km/litro. O usuário fornecerá a velocidade
//do carro e o período de tempo que viaja nesta velocidade para cada trecho do
//percurso. Então, usando as fórmulas distância = tempo x velocidade e litros
//consumidos = distância / 10, o programa computará, para todos os valores nãonegativos
//consumidos = distância / 10, o programa computará, para todos os valores não negativos
//de velocidade, os litros de combustível consumidos. O programa deverá
//imprimir a distância e o número de litros de combustível gastos naquele trecho.
//Deverá imprimir também o total de litros gastos na viagem. O programa encerra
//quando o usuário informar umvalor negativo de velocidade.
//quando o usuário informar um valor negativo de velocidade.
//74 Aula 3. Estruturas de Iteração

//25. Faça umprograma que calcule o imposto de renda de umgrupo de contribuintes,
//25. Faça um programa que calcule o imposto de renda de um grupo de contribuintes,
//considerando que:
//a) os dados de cada contribuinte (CIC, número de dependentes e renda bruta
//anual) serão fornecidos pelo usuário via teclado;
//b) para cada contribuinte será feito umabatimento de R$600 por dependente;
//b) para cada contribuinte será feito um abatimento de R$600 por dependente;
//c) a renda líquida é obtida diminuindo-se o abatimento com os dependentes
//da renda bruta anual;
//d) para saber quanto o contribuinte deve pagar de imposto, utiliza-se a tabela

//h) leve em consideração o fato de o primeiro CIC informado poder ser zero.

//26. Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma
//certa cidade, em umdeterminado dia. Para cada casa visitada foram fornecidos o
//certa cidade, em um determinado dia. Para cada casa visitada foram fornecidos o
//número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo a ele
//naquela casa. Se a televisão estivesse desligada, nada seria anotado, ou seja, esta
//casa não entraria na pesquisa. Criar um programa que:

//válidas de 1 a 5000);
//• CR do aluno é igual à média aritmética de suas notas.

//28. Construa umprograma que receba a idade, a altura e o peso de várias pessoas,
//28. Construa um programa que receba a idade, a altura e o peso de várias pessoas,
//Calcule e imprima:
//3.12. Exercícios da Aula 75
//• a quantidade de pessoas com idade superior a 50 anos;
//• amédia das alturas das pessoas com idade entre 10 e 20 anos;
//• a média das alturas das pessoas com idade entre 10 e 20 anos;
//• a porcentagem de pessoas com peso inferior a 40 quilos entre todas as
//pessoas analisadas.

//29. Construa um programa que receba o valor e o código de várias mercadorias
//vendidas em umdeterminado dia. Os códigos obedecem a lista a seguir:
//vendidas em um determinado dia. Os códigos obedecem a lista a seguir:
//L-limpeza
//A-Alimentação
//H-Higiene

//e D-desquitado ou separado) de várias pessoas. Calcule e imprima:
//• a quantidade de pessoas casadas;
//• a quantidade de pessoas solteiras;
//• amédia das idades das pessoas viúvas;
//• a média das idades das pessoas viúvas;
//• a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas
//analisadas.
//Obs.: Para encerrar a entrada de dados, digite um número menor que zero para a
//idade.

int main() {
    
    multiplode5();
	return EXIT_SUCCESS;
}