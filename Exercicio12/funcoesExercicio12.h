#include <string>
using namespace std;
#ifndef _FUNCOES_EXERCICIO12_H_
#define _FUNCOES_EXERCICIO12_H_

int mediaIdades(int n[]);
int quantM(char n[]);
int quantF(char n[]);
void informarDados(string n, int idades[], string nomes[], char sexo[]);
void pessoasM(int idades[], string nomes[], char sexo[]);
void pessoaMaisIdosa(int idades[], string nomes[], char sexo[]);
void pessoaMaisNova(int idades[], string nomes[], char sexo[]);
void menuPrincipal(int idades[], string nomes[], char sexo[], char resposta);

#endif