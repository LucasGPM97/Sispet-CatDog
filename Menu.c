#include <stdio.h>
#include <string.h>


void cadastroCliente();		// Prototipo da funcao para cadastrar Clientes.
void cadastroFuncionario();	// Prototipo da funcao para cadastrar Funcionarios.
void cadastroProduto();		// Prototipo da funcao para cadastrar Produtos.
void agendamento();		// Prototipo da funcao para Agendamentos.
void sistemaVendas();		// Prototipo da funcao para o Sistema de Vendas.


int main(void) {

	int decisao;
	//Estrutura do menu principal do programa.
menu: // Marcacao do menu
	fflush(stdin);
	system("cls");
	printf("\t\t\t\tMenu Inicial\n\n");
	printf("[1] Cadastro de cliente!\n[2] Cadastro de funcionario!\n[3] Cadastro de Produto!\n[4] Agendamento!\n[5] Sistema de Vendas!\n[6] Fechar o Programa!\n");
	scanf("%d", &decisao);



	switch (decisao) {

	case 1:
		cadastroCliente();	// Chamada da funcao para a area de cadastro de clientes.
		goto menu; // Ao sair da funcao volta a marcacao do menu na linha 16.
		break;

	case 2:
		cadastroFuncionario();	// Chamada da funcao para a area de Cadastro de Funcionario.
		goto menu;	// Ao sair da funcao volta a marcacao do menu na linha 16.
		break;

	case 3:
		cadastroProduto();	// Chamada da funcao para a area de Cadastro de Produtos.
		goto menu;	// Ao sair da funcao volta a marcacao do menu na linha 16.
		break;

	case 4:
		agendamento();	// Chamada da funcao para a area de Agendamento de Servicos.
		goto menu;	// Ao sair da funcao volta a marcacao do menu na linha 16.
		break;

	case 5:
		sistemaVendas();	// Chamada da funcao para a area de Vendas.
		goto menu;	// Ao sair da funcao volta a marcacao do menu na linha 16.
		break;

	case 6:		// Opcao para fechar o programa, ao selecionar essa opcao o mesmo e encerrado.
		break;

	default:	// qualquer outra opcao nao disponivel volta para a marcacao do menu na linha 16.
		goto menu;
		break;

	}



	system("cls");
	printf("\n\nPrograma Finalizado!\nVolte Sempre!\n\n");	// Fim da Execucao.
	system("PAUSE");

	return 0;

}


void cadastroCliente() {		// Definicao da funcao para cadastrar clientes.


	//Variavel Generica
	int decisao;

	//Variaveis do Cliente
	char nome[50], email[50], cpf[15], cep[10], uf[10], cidade[50], bairro[50], complemento[20], senha1[50], senha2[50], endereco[50], numero[10];
	

	//variaveis Cartao
	char nomecart[50], cartao, dtexp[15], numcart[50], telefone[20], cvv[10];
	

	//Variaveis Pet
	char pet, petN[30], petE[30], petR[30], petDTN[15], petCV, petP[10];
	


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
			gets(telefone);
			fflush(stdin);
			printf("CPF: ");
			gets(cpf);
			printf("\n\t\t\tInformacoes sobre endereco:\n\n");
			printf("CEP: ");
			gets(cep);
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
			} while (strcmp(senha1, senha2) != 0); // volta a linha 131 enquanto as senhas sao diferente


			system("cls");
			printf("\n\t\t\tInformacoes do cadastro:\n\n");	// Impressao para verificar se os dados estao corretos.
			printf("Email: %s\nNome: %s\nTelefone: %s\nCPF: %s\nEndereco: %s, %s %s, %s, %s, %s/%s\nSenha: %s\n", email, nome, telefone, cpf, cep, endereco, numero, complemento, bairro, cidade, uf, senha1);

			printf("Os dados estao corretos?\n[1]Sim [2]Nao\n");
			scanf("%d", &decisao);
			system("cls");

		} while (decisao != 1); // se a opcao for diferente de 1 volta para a linha 93


		printf("Deseja cadastrar um cartao?\n[1]Sim [2]Nao\n");		// Opcao de adicionar cartao, se escolher sim entra na proxima estrutura, se nao pula essa etapa.
		scanf("%d", &decisao);
		system("cls");
		cartao = ' '; // Variavel para verificar se vai imprimir o cartao na linha 231.

		if (decisao == 1) {		// Cadastro do cartao, se os dados estiverem corretos passa para a proxima etapa, caso contrario retorna a essa etapa.


			do { // Estrutura para cadastrar o cartao

				fflush(stdin);
				printf("\nNumero do cartao:  ");
				gets(numcart);
				fflush(stdin);
				printf("Nome no cartao: ");
				gets(nomecart);
				printf("Data de expiracao: ");
				gets(dtexp);
				printf("Codigo de seguranca(CVV): ");
				gets(cvv);
				system("cls");
				cartao = 'P'; // Se o cartao for cadastrado ele sera impresso na linha 231.
				printf("\n\t\t\ttInformacoes do cartao:\n\n");	// Impressao para verificar se os dados estao corretos.
				printf("Nome no cartao: %s\nNumero do cartao: %s\nData de expiracao: %s\nCVV: %s", nomecart, numcart, dtexp, cvv);
				printf("\nOs dados estao corretos?\n[1]Sim [2]Nao\n");
				scanf("%d", &decisao);
				system("cls");

			} while (decisao != 1); // Se a decisao for diferente de 1 volta a linha 161

		}


		printf("Deseja cadastrar um PET?\n[1]Sim [2]Nao\n");	// Opcao de adicionar PET, se escolher sim entra na proxima estrutura, se nao pula essa etapa.
		scanf("%d", &decisao);
		system("cls");
		pet = ' ';	// Variavel para verificar se vai imprimir os dados do pet na linha 236

		if (decisao == 1) {		// Cadastro do PET, se os dados estiverem corretos passa para a proxima etapa, caso contrario retorna a essa etapa.


			do {	// Estrutura para Cadastrar o PET
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
				gets(petP);
				fflush(stdin);
				printf("Possui cartao de Vacina em dia? [s] ou [n]: ");
				scanf("%c", &petCV);
				system("cls");
				pet = 'P';	// Se o Pet for cadastrado ele e impresso na linha 236.
				printf("\n\t\t\tInformacoes do PET:\n\n");	// Impressao para verificar se os dados estao corretos.
				printf("Nome do pet: %s\nEspecie do PET: %s\nRaca do PET: %s\nData de nascimento do PET: %s\nPeso do PET: %s kg\nO PET possui cartao de vacina em dia? [%c]", petN, petE, petR, petDTN, petP, petCV);
				printf("\nOs dados estao corretos?\n[1]Sim [2]Nao\n");
				scanf("%d", &decisao);
				system("cls");

			} while (decisao != 1);	// Se a decisao for diferente de 1 volta a linha 194.

		}


		printf("\nDeseja salvar o cadastro?\n[1]Sim, [2]Nao\n");	// Etapa para confirmar o cadastro, se escolher sim o cadastro e efetuado e informa os dados do cadastro, se nao o mesmo e cancelado.
		scanf("%d", &decisao);
		system("cls");

		if (decisao == 1) {
			printf("\t\t\tCadastro efetuado com sucesso!\n\n");	//Dados do cliente
			printf("\n\t\t\tInformacoes do cadastro:\n\n");
			printf("Email: %s\nNome: %s\nTelefone: %s\nCPF: %s\nEndereco: %s, %s %s, %s, %s, %s/%s\nSenha: %s\n", email, nome, telefone, cpf, cep, endereco, numero, complemento, bairro, cidade, uf, senha1);

			if (cartao == 'P') {		//Dados do Cartao, so mostra na tela se o cartao foi cadastrado
				printf("\n\t\t\tInformacoes do cartao:\n\n");
				printf("Nome no cartao: %s\nNumero do cartao: %s\nData de expiracao: %s\nCVV: %s", nomecart, numcart, dtexp, cvv);
			}

			if (pet == 'P') {		//Dados do PET, so mostra na tela se o PET foi cadastrado
				printf("\n\t\t\tInformacoes do PET:\n\n");
				printf("Nome do pet: %s\nEspecie do PET: %s\nRaca do PET: %s\nData de nascimento do PET: %s\nPeso do PET: %s kg\nO PET possui cartao de vacina em dia? [%c]", petN, petE, petR, petDTN, petP, petCV);
			}

		}
		else {
			printf("Cadastro cancelado!");	// Cadastro foi cancelado!.
		}

		printf("\n\nDeseja realizar outro cadastro?\n[1] Sim, [2] Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1); // Se a decisao for igual a 1 volta para a linha 90.

	return;
} // Fim da funcao cadastroCliente();.


void cadastroFuncionario() {		// Definicao da Funcao para Cadastrar Funcionarios.
	//Variaveis do funcionario.
	char nome[50], cpf[15], cep[10], telefone[15], uf[10], cidade[50], bairro[50], complemento[20], cargo[50], endereco[50], numero[10];
	int decisao;
	float salario;

	do {	// Estrutura para cadastrar o Funcionario.
		system("cls");
		fflush(stdin);
		printf("\t\t\tCadastro Funcionario\n\n");

		printf("Nome: ");
		gets(nome);
		printf("Telefone: ");
		gets(telefone);
		printf("CPF: ");
		gets(cpf);
		fflush(stdin);
		printf("Cargo: ");
		gets(cargo);
		printf("Salario: R$");
		scanf("%f", &salario);
		printf("\n\t\t\tInformacoes sobre endereco:\n\n");
		fflush(stdin);
		printf("CEP: ");
		gets(cep);
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

		printf("\n\t\t\tInformacoes do cadastro:\n\n");	// Imprime os dados do Funcionario para Verificar se estao corretos.
		printf("Nome: %s\nTelefone: %s\nCPF: %s\nCargo: %s\nSalario: R$%.2f\nEndereco: %s, %s %s, %s, %s, %s/%s\n", nome, telefone, cpf, cargo, salario, cep, endereco, numero, complemento, bairro, cidade, uf);
		printf("\nDeseja salvar o cadastro?\n[1]Sim, [2]Nao\n");
		scanf("%d", &decisao);
		system("cls");

		if (decisao == 1) { // se a decisao for igual(==) a 1 o cadastro e salvo e as informacoes sao mostradas na tela.
			printf("\t\t\tCadastro efetuado com sucesso!\n\n");
			printf("\n\t\t\tInformacoes do cadastro:\n\n");
			printf("Nome: %s\nTelefone: %d\nCPF: %d\nCargo: %s\nSalario: R$%.2f\nEndereco: %d, %s %s, %s, %s, %s/%s\n", nome, telefone, cpf, cargo, salario, cep, endereco, numero, complemento, bairro, cidade, uf);
		}
		else { // Se a decisao for diferente(!=) de 1 o cadastro e cancelado.
			printf("Cadastro cancelado!");
		}
		printf("\n\nDeseja realizar outro cadastro:\n[1] Sim, [2] Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1); // Se a decisao for igual (==) a 1 retorna a linha 261

	return;
} // Fim da funcao de cadastroFuncionario();


void cadastroProduto() {		// Definicao da funcao para Cadastrar Produtos.
	// Variaveis do produto
	char produtoN[30], produtoD[50], produtoM[30], produtoDTV[15], produtoL[20], produtoCB[50];
	int produtoQ, decisao;
	float produtoP;

	do {	// Estrutura para cadastrar o produto.

		do {	// Estrutura para verificar os dados do produto.

			system("cls");
			fflush(stdin);
			printf("\t\t\tCadastro Produto\n\n");

			printf("Nome do produto: ");
			gets(produtoN);
			printf("Marca do produto: ");
			gets(produtoM);
			printf("Descricao do produto: ");
			gets(produtoD);
			printf("Codigo de barras do produto: ");
			gets(produtoCB);
			printf("Lote do produto: ");
			gets(produtoL);
			printf("Data de validade do produto: ");
			gets(produtoDTV);
			printf("Quantidade: ");
			scanf("%d", &produtoQ);
			printf("Preco unitario: ");
			scanf("%f", &produtoP);

			system("cls");
			printf("\t\t\tInformacoes do cadastro:\n\n"); // Imprime os dados do produto para verificar se esta correto.
			printf("Nome: %s\nMarca: %s\nDescricao: %s\nCodigo de Barras: %s\nLote: %s\nData de Validade: %s\nQuantidade: %d\nValor: R$ %.2f", produtoN, produtoM, produtoD, produtoCB, produtoL, produtoDTV, produtoQ, produtoP);

			printf("\nOs dados estao corretos?\n[1]Sim [2]Nao\n");
			scanf("%d", &decisao);
			system("cls");
		} while (decisao != 1);	// Se a decisao for diferente de 1 volta a linha 328.

		printf("\nDeseja salvar o cadastro?\n[1]Sim, [2]Nao\n");
		scanf("%d", &decisao);
		system("cls");

		if (decisao == 1) {	// Se a decisao for 1 o cadastro e efetuado e os dados sao informados na tela.

			printf("\t\t\tCadastro efetuado com sucesso!\n\n");
			printf("\t\t\tInformacoes do cadastro:\n\n");
			printf("Nome: %s\nMarca: %s\nDescricao: %s\nCodigo de Barras: %s\nLote: %s\nData de Validade: %s\nQuantidade: %d\nValor: R$ %.2f", produtoN, produtoM, produtoD, produtoCB, produtoL, produtoDTV, produtoQ, produtoP);

		}
		else {	// Se a decisao for diferente de 1 o cadastro e cancelado.

			printf("Cadastro cancelado!");
		}

		printf("\n\nDeseja realizar outro cadastro?\n[1] Sim, [2] Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1);	// Se a decisao for igual a 1 volta para a linha 326.

	return;

}	// Fim da funcao cadastroProduto.


void agendamento() {		//Definicao da funcao para os Agendamentos
	//Variavei do agendamento.
	char npet[40], rpet[40], epet[40], servico[50], ppet[10],dia[10], horario[10];
	int tipo, decisaoA;
	float valor;


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
			gets(rpet);
			printf("Peso do PET:  ");
			gets(ppet);
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

			printf("Data do agendamento: ");
			gets(dia);
			printf("Horario: ");
			gets(horario);
			system("cls");

			printf("\t\t\tInformacoes do Agendamento!\n\n");
			printf("Nome do PET: %s\nEspecie do PET: %s\nRaca do PET: %s\nPeso do PET: %s kg\nTipo de Sevico: %s\nValor: R$ %.2f\nData: %s as %s Horas", npet, epet, rpet, ppet, servico, valor, dia, horario);

			printf("\nOs dados estao corretos?\n[1]Sim [2]Nao ");
			scanf("%d", &decisaoA);
			system("cls");

		} while (decisaoA != 1);

		printf("\nDeseja salvar o Agendamento?\n[1]Sim, [2]Nao: ");
		scanf("%d", &decisaoA);
		system("cls");

		if (decisaoA == 1) {

			printf("\t\t\tAgendamento Realizado com sucesso!\n\n");
			printf("\t\t\tRecibo do Agendamento!\n\n");
			printf("Nome do PET: %s\nEspecie do PET: %s\nRaca do PET: %s\nPeso do PET: %s kg\nTipo de Sevico: %s\nValor: R$ %.2f\nData: %s as %s Horas", npet, epet, rpet, ppet, servico, valor, dia, horario);
		}
		else {

			printf("Agendamento cancelado!");
		}

		printf("\n\nDeseja realizar outro agendamento?\n[1] Sim, [2] Nao ");
		scanf("%d", &decisaoA);

	} while (decisaoA == 1);

	return;

}


void sistemaVendas() {		// Definicao da funcao para o Sistema de Vendas.

	char nome[50], nomeC[20][50];
	int  decisaoC, decisao, i = 0, j;
	float valor, valorC[20], total;
inicio:
	do {

		i = 0;
	venda:
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

		printf("\n\n[1] Efetuar venda!\n[2] Cancelar venda!\n[3] Voltar ao menu de vendas!\n[4] Limpar o carrinho!\n");
		scanf("%d", &decisao);

		switch (decisao) {

		case 1:

			total = 0;
			system("cls");
			printf("\t\t\tRecibo!\n\n");

			for (j = 0; j < i; j++) {
				printf("\n%s  %.2f", nomeC[j], valorC[j]);
				total += valorC[j];
			}

			printf("\nTotal: R$%.2f", total);
			break;

		case 2:
			system("cls");
			printf("Compra Cancelada!");
			break;

		case 3:

			goto venda;
			break;

		case 4:

			goto inicio;
			break;
		}

		printf("\n\nDeseja realizar outra venda?\n[1]Sim [2]Nao\n");
		scanf("%d", &decisao);

	} while (decisao == 1);

	return;

}


