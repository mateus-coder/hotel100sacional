#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

int funcaoCadastrarCliente();///retorna 1 se deu para cadastrar e zero se não
void imprimiArquivoClientes();
void imprimiArquivoEstadias();
void imprimiArquivoQuartos();
void imprimiArquivoFuncionarios();
int funcaoCadastrarFuncionarios();///retorna 1 se deu para cadastrar e zero se não
int funcaoCadastrarQuarto();///retorna 1 se deu para cadastrar e zero se não
int funcaoCadastrarEstadia(char*,int, char*, char*);///retorna 1 se deu para cadastrar e zero se não
int funcaoValidarData(char*);///retorna 1 se deu para cadastrar e zero se não
int funcaoVerificaExistenciaDoCliente(char*);///retorna 1 se deu para cadastrar e zero se não
int funcaoVerificaExistenciaDeQuarto(int);///retorna 1 se deu para cadastrar e zero se não
int gerarCodigoEstadia();///retorna 1 se deu para cadastrar e zero se não
void funcaoMostrarTodasEstadiasDeUmCliente(char*);
int funcaoBaixaEmUmaEstadia(int);///retorna 1 se deu para cadastrar e zero se não

#endif // FUNCOES_H_INCLUDED
