#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
    char nome[30], cpf[10],nome_med[30],cpf_med[10],cpf_func[10],nome_func[30],expc[1],func[20];
    float nota;
    int codigo,dia[2],mes[2],unidade[3],funcuni1,funcuni2,funcuni3,UniPac[2];
}paciente;

void exibeMenu(){
    printf("*** Menu ***\n");
		printf("[1] Cadastrar paciente \n");
		printf("[2] Cadastrar agendamento do paciente \n");
		printf("[3] Cadastrar m�dicos \n");
		printf("[4] Cadastrar funcion�rios \n");
		printf("[5] Feedback dos pacientes \n");
		printf("[6] Relat�rio das Unidades \n");
		printf("[0] Sair \n");
}

void exibeRelatorio(){
printf("Relatorios\n");
		printf("[1] Pacientes por unidade \n");
		printf("[2] M�dicos por unidade \n");
		printf("[3] Funcion�rios por unidade\n");
		printf("[4] Unidade da rede que mais atende\n");
		printf("[5] Valor total adquirido diariamente\n");
		printf("[0] Voltar ao menu\n");
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, opcao, opcao2,codigo, tam=0,achou=0,cadastro_feito=0,unidade[3],pos,neg,tama,unidademed1=0,unidademed2=0,unidademed3=0,medUni,funcuni1=0,funcuni2=0,funcuni3=0,UniFunc,UniPac,achou2=0,unipac1=0,unipac2=0,unipac3=0,total,total2,total3,maiorPac,maiorFunc,maiorMed,valor1=0,valor2=0,valor3=0;
    paciente cadastro[tam];
    char nome[30], cpf[10], nome_med[30],cpf_med[10],cpf_func[10],nome_func[30],expc[1],func[20];

    do{
        exibeMenu();
        printf("Escolha a op��o: ");
		scanf("%d", &opcao);

		switch (opcao){

            case 1:
                fflush(stdin);
                printf("20 reais o cadastro!\n");
                printf("Quantos pacientes ser�o cadastrados?: \n");
                        scanf("%d",&tama);
                fflush(stdin);
                    printf("Cadastro de pacientes: \n");
                        for (i = 0; i<tama; i++){
                    printf("\nInforme o CPF do paciente: ");
                        gets(cadastro[i].cpf);
                        setbuf(stdin,NULL);
                    printf("\nInforme o nome do paciente: ");
                        gets(cadastro[i].nome);
                        fflush(stdin);
                    printf("Informe a unidade do paciente 1,2 ou 3: \n");
                        scanf("%d",&UniPac);

                        switch (UniPac){
                        case 1: unipac1=unipac1 + 1;
                                valor1=valor1+1;
                                system("pause");
                                    system("cls");
                                break;
                        case 2: unipac2=unipac2 +1;
                                valor2=valor2+1;
                                    system("pause");
                                system("cls");
                                break;
                        case 3: unipac3=unipac3 +1;
                                valor3=valor3+1;
                                    system("pause");
                                system("cls");
                                break;
                        default: printf("\nEssa op��o n�o existe. Escolha uma op��o v�lida! \n");
                    }
                }
            printf("\nCadastro realizado com sucesso! \n");
            cadastro_feito=1;
                system("pause");
                    system("cls");
                break;


            case 2: fflush(stdin);
                if (cadastro_feito==0){
                printf("Os pacientes n�o foram cadastrados!\n");
            }else{
                fflush(stdin);
                    printf("\nInforme seu CPF: ");
                    gets(cpf);
                    achou = 0;

                    for (i = 0; i < tama; i++){
                        if (strcmp(cpf, cadastro[i].cpf) == 0){
                            achou = 1;
                            printf("Digite o dia do agendamento: \n");
                                gets(cadastro[i].dia);
                                fflush(stdin);
                            printf("Digite o mes do agendamento: \n");
                                gets(cadastro[i].mes);
                                fflush(stdin);
                        }
                    }
                        fflush(stdin);
                    if (achou == 0)
                        printf("O CPF digitado n�o foi encontrado! Digite um CPF v�lido! \n");
            }
                    system("pause");
                    system("cls");
                        break;

            case 3: printf("Quantos m�dicos ser�o cadastrados?: \n");
                        scanf("%d",&tama);
                fflush(stdin);
                    printf("Cadastro de m�dicos: \n");
                        for (i = 0; i < tama; i++){
                    printf("\nInforme o CPF do m�dico: ");
                        gets(cadastro[i].cpf_med);
                    printf("Informe o nome do m�dico: ");
                        gets(cadastro[i].nome_med);
                    printf("\nInforme a especialidade do m�dico: ");
                        gets(cadastro[i].func);
                    printf("\nInforme a unidade do m�dico 1,2 ou 3: ");
                        scanf("%d",&medUni);
                    switch (medUni){
                        case 1: unidademed1=unidademed1 + 1;
                                break;
                        case 2: unidademed2=unidademed2 +1;
                                break;
                        case 3: unidademed3=unidademed3 +1;
                                break;
                        default: printf("\nEssa op��o n�o existe. Escolha uma op��o v�lida! \n");
                    }
                        }
                    printf("Cadastro realizado com sucesso!\n");
                    system("pause");
                        system("cls");
                            break;

            case 4: printf("Quantos funcion�rios ser�o cadastrados?: \n");
                        scanf("%d",&tama);
                    fflush(stdin);
                    printf("Cadastro de funcion�rios: \n");
                        for (i = 0; i < tama; i++){
                    printf("\nInforme o CPF do funcion�rio: ");
                        gets(cadastro[i].cpf_func);
                    printf("Informe o nome do funcion�rio: ");
                        gets(cadastro[i].nome_func);
                    printf("Informe a unidade do funcion�rio 1,2 ou 3: ");
                        scanf("%d",&UniFunc);
                    switch (UniFunc){
                        case 1: funcuni1=funcuni1 + 1;
                                system("pause");
                                    system("cls");
                                break;
                        case 2: funcuni2=funcuni2 +1;
                                system("pause");
                                system("cls");
                                break;
                        case 3: funcuni3=funcuni3 +1;
                                system("pause");
                                    system("cls");
                                break;
                        default: printf("\nEssa op��o n�o existe. Escolha uma op��o v�lida! \n");
                    }
                }
            printf("Cadastro realizado com sucesso! \n");
            system("pause");
            system("cls");
            break;

            case 5: printf("***Feedback dos clientes*** \n");
                    fflush(stdin);

                    printf("\nInforme o seu nome: ");
                        gets(nome);
                    printf("Informe a unidade que o atendeu: ");
                        gets(unidade);

                    printf("Voc� teve uma boa experi�ncia com a unidade?: \n");
                    printf("s ou n: ");
                        scanf("%c",&expc);
                        strlwr(expc);
                    if (expc == 's' || expc== 'n'){

                        if (expc == 's'){
                            pos=pos+1;
                            strcpy (unidade, pos);
                        }
                        if (expc == 'n'){
                            neg=neg+1;
                            strcpy (unidade, neg);
                        }
                    }
                    if (expc !='n' && expc !='s'){
                        printf("Por favor entre somente com s para sim ou n para n�o");

                    }

            printf("\nFeedback realizado com sucesso! \n");
            system("pause");
            system("cls");
            break;

            case 6:
                do{
                    exibeRelatorio();
                    printf("Escolha a op��o: ");
                        scanf("%d",&opcao2);
                    switch(opcao2){
                            case 1:fflush(stdin);
                                printf("Pacientes registrados na unidade 1:%d\n",unipac1);
                                fflush(stdin);
                                printf("Pacientes registrados na unidade 2:%d\n",unipac2);
                                fflush(stdin);
                                printf("Pacientes registrados na unidade 3:%d\n",unipac3);
                                fflush(stdin);
                                printf("Pacientes em total das unidades:%d\n",unipac1+unipac2+unipac3);
                                system("pause");
                                system("cls");
                                break;

                            case 2:
                                    printf("M�dicos registrados na unidade 1:%d\n",unidademed1);
                                    printf("M�dicos registrados na unidade 2:%d\n",unidademed2);
                                    printf("M�dicos registrados na unidade 3:%d\n",unidademed3);
                                    printf("Total de m�dicos registrados nas unidades: %d",unidademed1+unidademed2+unidademed3);
                                system("pause");
                                system("cls");
                                break;

                            case 3:
                                    printf("Funcion�rios registrados na unidade 1:%d\n",funcuni1);
                                    printf("Funcion�rios registrados na unidade 2:%d\n",funcuni2);
                                    printf("Funcion�rios registrados na unidade 3:%d\n",funcuni3);
                                    printf("Total de funcion�rios registrados:%d\n",funcuni1+funcuni2+funcuni3);
                                system("pause");
                                system("cls");
                                break;

                            case 4:
                                        maiorPac=unipac1;
                                        if  (unipac2>maiorPac)
                                            maiorPac=unipac2;

                                        if (unipac3>maiorPac)
                                            maiorPac=unipac3;

                                    if (maiorPac=unipac1){
                                    printf("\nUnidade que mais atende pacientes � a unidade 1\n");
                                    }
                                    if (maiorPac=unipac2){
                                    printf("\nUnidade que mais atende pacientes � a unidade 2\n");
                                    }
                                    if (maiorPac=unipac3){
                                    printf("\nUnidade que mais atende pacientes � a unidade 3\n");
                                    }
                                        maiorFunc=funcuni1;
                                        if  (funcuni2>maiorFunc)
                                            maiorFunc=funcuni2;
                                        if (funcuni3>maiorFunc)
                                            maiorFunc=funcuni3;
                                    if (maiorFunc=funcuni1){
                                    printf("\nUnidade com o maior n�mero de funcion�rios � a unidade 1\n");
                                    }
                                    if (maiorFunc=funcuni2){
                                    printf("\nUnidade com o maior n�mero de funcion�rios � a unidade 2\n");
                                    }
                                    if (maiorFunc=funcuni3){
                                    printf("\nUnidade com o maior n�mero de funcion�rios � a unidade 3\n");
                                    }
                                    maiorMed=unidademed1;
                                    if (unidademed2>maiorMed)
                                        maiorMed=unidademed2;

                                    if (unidademed3>maiorMed)
                                    maiorMed=unidademed3;

                                if (maiorMed=unidademed1){
                                printf("\nA unidade com o maior n�mero de m�dicos � a unidade 1\n");
                                }
                                if (maiorMed=unidademed2){
                                printf("\nA unidade com o maior n�mero de m�dicos � a unidade 2\n");
                                }
                                if (maiorMed=unidademed3){
                                printf("\nA unidade com o maior n�mero de m�dicos � a unidade 3\n");
                                }

                                system("pause");
                                system("cls");
                                break;

                        case 5: printf("Valor faturado pela unidade 1: %d\n",valor1*20);
                                printf("Valor faturado pela unidade 2: %d\n",valor2*20);
                                printf("Valor faturado pela unidade 3: %d\n",valor3*20);
                                printf("Valor total de todas unidades: %d\n",valor1*20,valor2*20,valor3*20);
                    case 0:
                                system("pause");
                                system("cls");
                                break;
                }
            }while (opcao2 !=0);
            case 0: printf("\nPrograma finalizado! \n");
                    break;

            default: printf("\nEssa op��o n�o existe. Escolha uma op��o v�lida! \n");
        }
    }while (opcao != 0);
}

