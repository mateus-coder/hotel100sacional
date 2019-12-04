#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

int funcaoCadastrarCliente();
void imprimiArquivoClientes();
void imprimiArquivoEstadias();
void imprimiArquivoQuartos();
void imprimiArquivoFuncionarios();
int funcaoCadastrarFuncionarios();
int funcaoCadastrarQuarto();
int funcaoCadastrarEstadia(char*,int, char*, char*);
int funcaoValidarData(char*);
int funcaoVerificaExistenciaDoCliente(char*);
int funcaoVerificaExistenciaDeQuarto(int);
int gerarCodigoEstadia();
void funcaoMostrarTodasEstadiasDeUmCliente(char*);
int funcaoBaixaEmUmaEstadia(int);

#endif // FUNCOES_H_INCLUDED
