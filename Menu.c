#include <stdio.h>
#include <string.h>


void cadastroCliente();
void cadastroFuncionario();
void cadastroProduto();
void agendamento();
void sistemaVendas();


int main(void) {

	int decisao, sair = 0;

menu:
	fflush(stdin);
	system("cls");
	printf("\t\t\t\tMenu Inicial\n\n");
	printf("[1] Cadastro de cliente!\n[2] Cadastro de funcionario!\n[3] Cadastro de Produto!\n[4] Agendamento!\n[5] Sistema de Vendas!\n[6] Fechar o Programa!\n");
	scanf("%d", &decisao);

	

		switch (decisao) {

		case 1:
			cadastroCliente();
			goto menu;
			break;

		case 2:
			cadastroFuncionario();
			goto menu;
			break;

		case 3:
			cadastroProduto();
			goto menu;
			break;

		case 4:
			agendamento();
			goto menu;
			break;

		case 5:
			sistemaVendas();
			goto menu;
			break;

		case 6:
			sair = 1;
			break;



		default:
			goto menu;
			break;

		}

	
	
	system("cls");
	printf("\n\nPrograma Finalizado!\n\n");

	return 0;

}


void cadastroCliente() {


	//Variavel Generica
	int decisao;

	//Variaveis do Cliente
	char nome[50], email[50], cpf[15], uf[10], cidade[50], bairro[50], complemento[20], senha1[50], senha2[50], endereco[50], numero[10];
	int cep;

	//variaveis Cartao
	char nomecart[50], cartao, dtexp[15], numcart[50];
	int cvv, telefone;

	//Variaveis Pet
	char pet, petN[30], petE[30], petR[30], petDTN[15], petCV;
	float petP;


	do {		// Cadastro do cliente


		do {		//Estrutura para verificar se os dados estao corretos, se estiverem prossegue para a proxima etapa, se nao volta a essa parte.

			system("cls");
			fflush(stdin);
			printf("\t\t\tCadastro Cliente\n\n");

			printf("Email: ");
			gets(email);
			printf("Nome: ");
			gets(nome);
			printf("Telefone: ");
			scanf("%d", &telefone);
			fflush(stdin);
			printf("CPF: ");
			gets(cpf);
			printf("\n\t\t\tInformacoes sobre endereco:\n\n");
			printf("CEP: ");
			scanf("%d", &cep);
			fflush(stdin);
			printf("UF: ");
			gets(uf);
			printf("Cidade: ");
			gets(cidade);
			printf("Bairro: ");
			gets(bairro);
			printf("Endereco: ");
			gets(endereco);
			printf("Numero: ");
			gets(numero);
			printf("Complemento: ");
			gets(complemento);
			fflush(stdin);
			printf("\nSenha: ");
			gets(senha1);
			printf("Confirme a senha: ");
			gets(senha2);


			do {		// Estrutura para verificar se a senha sao compativeis, se nao forem repete ate elas serem iguais.
				if (strcmp(senha1, senha2) != 0) {
					printf("\nSenha incompativel!\n");
					printf("\nSenha: ");
					gets(senha1);
					printf("Confirme a senha: ");
					gets(senha2);
				}
			} while (strcmp(senha1, senha2) != 0);


			system("cls");
			printf("\n\t\t\tInformacoes do cadastro:\n\n");
			printf("Email: %s\nNome: %s\nTelefone: %d\nCPF: %s\nEndereco: %d, %s %s, %s, %s, %s/%s\nSenha: %s\n", email, nome, telefone, cpf, cep, endereco, numero, complemento, bairro, cidade, uf, senha1);

			printf("Os dados estao corretos?\n[1]Sim [2]Nao\n");
			scanf("%d", &decisao);
			system("cls");

		} while (decisao != 1);


		printf("Deseja cadastrar um cartao?\n[1]Sim [2]Nao\n");		// Op��o de adicionar cartao, se escolher sim entra na proxima estrutura, se nao pula essa etapa.
		scanf("%d", &decisao);
		system("cls");
		cartao = ' ';

		if (decisao == 1) {		// Cadastro do cartao, se os dados estiverem corretos passa para a proxima etapa, caso contrario retorna a essa etapa.


			do {

				fflush(stdin);
				printf("\nNumero do cartao:  ");
				gets(numcart);
				fflush(stdin);
				printf("Nome no cartao: ");
				gets(nomecart);
				printf("Data de expiracao: ");
				gets(dtexp);
				printf("Codigo de seguranca(CVV): ");
				scanf("%d", &cvv);
				system("cls");
				cartao = 'P';
				printf("\n\t\t\ttInformacoes do cartao:\n\n");
				printf("Nome no cartao: %s\nNumero do cartao: %s\nData de expiracao: %s\nCVV: %d", nomecart, numcart, dtexp, cvv);
				printf("\nOs dados estao corretos?\n[1]Sim [2]Nao\n");
				scanf("%d", &decisao);
				system("cls");

			} while (decisao != 1);

		}


		printf("Deseja cadastrar um PET?\n[1]Sim [2]Nao\n");		// Op��o de adicionar PET, se escolher sim entra na proxima estrutura, se nao pula essa etapa.
		scanf("%d", &decisao);
		system("cls");
		pet = ' ';

		if (decisao == 1) {		// Cadastro do PET, se os dados estiverem corretos passa para a proxima etapa, caso contrario retorna a essa etapa.


			do {
				fflush(stdin);
				printf("\nNome do PET:  ");
				gets(petN);
				printf("Especie do PET: ");
				gets(petE);
				printf("Raca do PET: ");
				gets(petR);
				printf("Data de Nascimento PET: ");
				gets(petDTN);
				printf("Peso do PET: ");
				scanf("%f", &petP);
				fflush(stdin);
				printf("Possui cartao de Vacina em dia? [s] ou [n]: ");
				scanf("%c", &petCV);
				system("cls");
				pet = 'P';
				printf("\n\t\t\tInformacoes do PET:\n\n");
				printf("Nome do pet: %s\nEspecie do PET: %s\nRaca do PET: %s\nData de nascimento do PET: %s\nPeso do PET: %.2f\nO PET possui cartao de vacina em dia? [%c]", petN, petE, petR, petDTN, petP, petCV);
				printf("\nOs dados estao corretos?\n[1]Sim [2]Nao\n");
				scanf("%d", &decisao);
				system("cls");

			} while (decisao != 1);

		}


		printf("\nDeseja salvar o cadastro?\n[1]Sim, [2]Nao\n");		// Etapa para confirmar o cadastro, se escolher sim o cadastro e efetuado e informa os dados do cadastro, se nao o mesmo e cancelado.
		scanf("%d", &decisao);
		system("cls");

		if (decisao == 1) {
			printf("\t\t\tCadastro efetuado com sucesso!\n\n");		//Dados do cliente
			printf("\n\t\t\tInformacoes do cadastro:\n\n");
			printf("Email: %s\nNome: %s\nTelefone: %d\nCPF: %s\nEndereco: %d, %s %s, %s, %s, %s/%s\nSenha: %s\n", email, nome, telefone, cpf, cep, endereco, numero, complemento, bairro, cidade, uf, senha1);

			if (cartao == 'P') {		//Dados do Cartao, so mostra na tela se o cartao foi cadastrado
				printf("\n\t\t\tInformacoes do cartao:\n\n");
				printf("Nome no cartao: %s\nNumero do cartao: %s\nData de expiracao: %s\nCVV: %d", nomecart, numcart, dtexp, cvv);
			}

			if (pet == 'P') {		//Dadps do PET, so mostra na tela se o PET foi cadastrado
				printf("\n\t\t\tInformacoes do PET:\n\n");
				printf("Nome do pet: %s\nEspecie do PET: %s\nRaca do PET: %s\nData de nascimento do PET: %s\nPeso do PET: %.2f\nO PET possui cartao de vacina em dia? [%c]", petN, petE, petR, petDTN, petP, petCV);
			}

		}
		else {
			printf("Cadastro cancelado!");	//
		}

		// Etapa para realizar um novo cadastro, se escolher sim volta ao inicio desse bloco, se nao esse bloco e finalizado
		printf("\n\nDeseja realizar outro cadastro?\n[1] Sim, [2] Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1);



	return;
}


void cadastroFuncionario() {

	char nome[50], uf[10], cidade[50], bairro[50], complemento[20], cargo[50], endereco[50], numero[10];
	int cpf, cep, telefone, decisao;
	float salario;
	do {
		system("cls");
		fflush(stdin);
		printf("\t\t\tCadastro Funcionario\n\n");

		printf("Nome: ");
		gets(nome);
		printf("Telefone: ");
		scanf("%d", &telefone);
		printf("CPF: ");
		scanf("%d", &cpf);
		fflush(stdin);
		printf("Cargo: ");
		gets(cargo);
		printf("Salario: R$");
		scanf("%f", &salario);
		printf("\n\t\t\tInformacoes sobre endereco:\n\n");
		printf("CEP: ");
		scanf("%d", &cep);
		fflush(stdin);
		printf("UF: ");
		gets(uf);
		printf("Cidade: ");
		gets(cidade);
		printf("Bairro: ");
		gets(bairro);
		printf("Endereco: ");
		gets(endereco);
		printf("Numero: ");
		gets(numero);
		fflush(stdin);
		printf("Complemento: ");
		gets(complemento);

		system("cls");

		printf("\n\t\t\tInformacoes do cadastro:\n\n");
		printf("Nome: %s\nTelefone: %d\nCPF: %d\nCargo: %s\nSalario: R$%.2f\nEndereco: %d, %s %s, %s, %s, %s/%s\n", nome, telefone, cpf, cargo, salario, cep, endereco, numero, complemento, bairro, cidade, uf);
		printf("\nDeseja salvar o cadastro?\n[1]Sim, [2]Nao\n");
		scanf("%d", &decisao);
		system("cls");

		if (decisao == 1) {
			printf("\t\t\tCadastro efetuado com sucesso!\n\n");
			printf("\n\t\t\tInformacoes do cadastro:\n\n");
			printf("Nome: %s\nTelefone: %d\nCPF: %d\nCargo: %s\nSalario: R$%.2f\nEndereco: %d, %s %s, %s, %s, %s/%s\n", nome, telefone, cpf, cargo, salario, cep, endereco, numero, complemento, bairro, cidade, uf);
		}
		else {
			printf("Cadastro cancelado!");
		}
		printf("\n\nDeseja realizar outro cadastro:\n[1] Sim, [2] Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1);

	return;
}


void cadastroProduto() {

	char produtoN[30], produtoD[50], produtoM[30];
	int produtoQ, produtoDTV, produtoL, produtoCB, decisao;
	float produtoP;


	do {

		do {

			system("cls");
			fflush(stdin);
			printf("\t\t\tCadastro Produto\n\n");

			printf("Nome do produto: ");
			gets(produtoN);
			printf("Marca do produto: ");
			gets(produtoM);
			printf("Descricao do produto: ");
			gets(produtoD);
			printf("Codigo de barras do produto(numero): ");
			scanf("%d", &produtoCB);
			printf("Lote do produto: ");
			scanf("%d", &produtoL);
			printf("Data de validade do produto: ");
			scanf("%d", &produtoDTV);
			printf("Quantidade: ");
			scanf("%d", &produtoQ);
			printf("Preco unitario: ");
			scanf("%f", &produtoP);

			system("cls");
			printf("\t\t\tInformacoes do cadastro:\n\n");
			printf("Nome: %s\nMarca: %s\nDescricao: %s\nCodigo de Barras: %d\nLote: %d\nData de Validade: %d\nQuantidade: %d\nValor: R$ %.2f", produtoN, produtoM, produtoD, produtoCB, produtoL, produtoDTV, produtoQ, produtoP);

			printf("\nOs dados estao corretos?\n[1]Sim [2]Nao\n");
			scanf("%d", &decisao);
			system("cls");
		} while (decisao != 1);

		printf("\nDeseja salvar o cadastro?\n[1]Sim, [2]Nao\n");
		scanf("%d", &decisao);
		system("cls");

		if (decisao == 1) {

			printf("\t\t\tCadastro efetuado com sucesso!\n\n");
			printf("\t\t\tInformacoes do cadastro:\n\n");
			printf("Nome: %s\nMarca: %s\nDescricao: %s\nCodigo de Barras: %d\nLote: %d\nData de Validade: %d\nQuantidade: %d\nValor: R$ %.2f", produtoN, produtoM, produtoD, produtoCB, produtoL, produtoDTV, produtoQ, produtoP);

		}
		else {

			printf("Cadastro cancelado!");
		}

		printf("\n\nDeseja realizar outro cadastro?\n[1] Sim, [2] Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1);

	return;

}


void agendamento() {

	char npet[40], rpet[40], epet[40], servico[50];
	int tipo, decisaoA;
	float valor, ppet, horario;


	do {

		do {
			system("cls");
			printf("\t\t\tArea de Agendamento!\n\n");
			fflush(stdin);
			printf("Nome do PET: ");
			gets(npet);
			printf("Especie do PET: ");
			gets(epet);
			printf("Raca do PET: ");
			gets(rpet);			printf("Peso do PET:  ");
			scanf("%f", &ppet);
			printf("Tipo de Servico!\n[1] Veterinario: R$100.00\n[2] Banho: RS40.00\n[3] Banho e Tosa: R$70.00\n");
			scanf("%d", &tipo);
			fflush(stdin);

			do {
				if (tipo == 1) {
					valor = 100.00;
					strcpy(servico, "Veterinario");
					decisaoA = 1;
				}
				else if (tipo == 2) {
					valor = 40.00;
					strcpy(servico, "Banho");
					decisaoA = 1;
				}
				else if (tipo == 3) {
					valor = 70.00;
					strcpy(servico, "Banho e Tosa");
					decisaoA = 1;
				}
				else {
					printf("\nServico invalido!\n");
					printf("Tipo de Servico!\n[1] Veterinario: R$100.00\n[2] Banho: RS40.00\n[3] Banho e Tosa: R$70.00\n");
					scanf("%d", &tipo);
					decisaoA = 0;
				}
			} while (decisaoA != 1);

			printf("Horario:[00.00] ");
			scanf("%f", &horario);
			system("cls");

			printf("\t\t\tInformacoes do Agendamento!\n\n");
			printf("Nome do PET: %s\nEspecie do PET: %s\nRaca do PET: %s\nPeso do PET: %.2f\nTipo de Sevico: %s\nValor: R$ %.2f\nHorario: %.2f Horas", npet, epet, rpet, ppet, servico, valor, horario);

			printf("\nOs dados estao corretos?\n[1]Sim [2]Nao ");
			scanf("%d", &decisaoA);
			system("cls");

		} while (decisaoA != 1);

		printf("\nDeseja salvar o cadastro?\n[1]Sim, [2]Nao: ");
		scanf("%d", &decisaoA);
		system("cls");

		if (decisaoA == 1) {

			printf("\t\t\tAgendamento Realizado com sucesso!\n\n");
			printf("\t\t\tRecibo do Agendamento!\n\n");
			printf("Nome do PET: %s\nEspecie do PET: %s\nRaca do PET: %s\nPeso do PET: %.2f\nTipo de Sevico: %s\nValor: R$ %.2f\nHorario: %.2f Horas", npet, epet, rpet, ppet, servico, valor, horario);
		}
		else {

			printf("Cadastro cancelado!");
		}

		printf("\n\nDeseja realizar outro cadastro?\n[1] Sim, [2] Nao ");
		scanf("%d", &decisaoA);

	} while (decisaoA == 1);

	return;

}


void sistemaVendas() {

	char nome[50], nomeC[20][50];
	int  decisaoC, decisao, i = 0, j;
	float valor, valorC[20], total;

	do {

		i = 0;

		do {

			system("cls");
			printf("\t\t\tMenu de vendas\n\n");
			printf("Selecione uma categoria!\n[1]Caes [2]Gatos\n");
			scanf("%d", &decisao);
			system("cls");

			if (decisao == 1) {

				printf("\t\t\tMenu de vendas\n\n");
				printf("[1]Racao Golden Special para Caes Adultos Sabor Frango e Carne, 15kg, R$150.00\n[2]Racao Golden Special para Caes Adultos Sabor Frango e Carne, 15kg, RS180.00\n[3]Guia Retratil para Caes, R$50.00\n[4]Casa Grande para Caes Preta, R$250.00\n[5]Comedouro Para Caes Duplo, R$45.00\n");
				scanf("%d", &decisaoC);



				switch (decisaoC) {

				case 1:
					strcpy(nome, "Racao Golden Caes Adultos");
					valor = 150;
					break;

				case 2:
					strcpy(nome, "Racao Golden Caes Filhotes");
					valor = 180;
					break;

				case 3:
					strcpy(nome, "Guia Retratil Caes");
					valor = 50;
					break;

				case 4:
					strcpy(nome, "Casa Grande Caes");
					valor = 250;
					break;

				case 5:
					strcpy(nome, "Comedouro Duplo Caes");
					valor = 45;
					break;

				default:
					printf("Produto invalido!");
					break;

				}
			}
			else if (decisao == 2) {

				printf("\t\t\tMenu de vendas\n\n");
				printf("[1]Racao Golden para Gatos Adultos, 10kg, R$175.00\n[2]Racao Golden para Gatos Filhotes, 1kg, R$30.00\n[3]Areia Higienica para Gatos com SIlica, 1,6kg, R$50.00\n[4]Caixa de Transporte para Gatos, R$100.00\n[5]Cama para Gatos, R$150.00\n[6]Arranhador para Gatos, R$100.00\n");
				scanf("%d", &decisaoC);

				switch (decisaoC) {

				case 1:
					strcpy(nome, "Racao Golden Gatos Adultos");
					valor = 175;
					break;

				case 2:
					strcpy(nome, "Racao Golden Gatos Filhotes");
					valor = 30;
					break;

				case 3:
					strcpy(nome, "Areia Higienica Gatos");
					valor = 50;
					break;

				case 4:
					strcpy(nome, "Caixa Transporte Gatos");
					valor = 100;
					break;

				case 5:
					strcpy(nome, "Cama Gatos");
					valor = 150;
					break;

				case 6:
					strcpy(nome, "Arranhador Gatos");
					valor = 100;
					break;

				default:
					printf("Produto invalido!");
					break;
				}
			}
			system("cls");
			printf("\t\t\tMenu de vendas\n\n");
			printf("%s  %.2f", nome, valor);
			printf("\n\nDeseja adicionar ao carrinho?\n[1]Sim [2]Nao\n");
			scanf("%d", &decisao);

			if (decisao == 1) {
				strcpy(nomeC[i], nome);
				valorC[i] = valor;
				i++;
			}
			else if (decisao != 1) {

			}

			system("cls");
			printf("\t\t\tMenu de vendas\n\n");
			printf("[1]Menu de vendas\n[2]Carrinho\n");
			scanf("%d", &decisao);

		} while (decisao == 1);

		total = 0;
		system("cls");
		printf("\t\t\tCarrinho\n");

		for (j = 0; j < i; j++) {
			printf("\n%s  %.2f", nomeC[j], valorC[j]);
			total += valorC[j];
		}

		printf("\nTotal: R$%.2f", total);

		printf("\n\nDeseja efetuar a venda?\n[1]Sim [2]Nao\n");
		scanf("%d", &decisao);

		if (decisao == 1) {
			total = 0;
			system("cls");
			printf("\t\t\tRecibo!\n\n");

			for (j = 0; j < i; j++) {
				printf("\n%s  %.2f", nomeC[j], valorC[j]);
				total += valorC[j];
			}

			printf("\nTotal: R$%.2f", total);
		}
		else if (decisao != 1) {
			printf("Compra Cancelada!");
		}

		printf("\n\nDeseja realizar outra venda?\n[1]Sim [2]Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1);

	return;

}

