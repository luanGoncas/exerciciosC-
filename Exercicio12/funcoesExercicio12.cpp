/* Funções para o que foi pedido no exercício 12 */
#include <iostream>
#include <cstring>
using namespace std;

int mediaIdades(int n[]) {
    int soma = 0;
    for (int i = 0; i < 10; i++){
        soma += n[i];
    }
    return soma / 10;
}

int quantM(char n[]) {
    int quant = 0;
    for (int i = 0; i < 10; i++){
        if (n[i] == 'M')
            quant++;
    }
    return quant;
}

int quantF(char n[]) {
    int quant = 0;
    for (int i = 0; i < 10; i++){
        if (n[i] == 'F')
            quant++;
    }
    return quant;
}

void informarDados(string n, int idades[], string nomes[], char sexo[]) {
    for (int i = 0; i < 10; i++) {
        if (n == nomes[i]) {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Nome:  " << nomes[i] << endl;
            cout << "Idade: " << idades[i] << endl;
            cout << "Sexo:  " << sexo[i] << endl;
            break;
        }
    }
}

void pessoasM(int idades[], string nomes[], char sexo[]) {
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Pessoas do sexo masculino:" << endl << endl;
    for (int i = 0; i < 10; i++) {
        if (sexo[i] == 'M') {
            cout << nomes[i] << endl;
        }
        
    }
    
}

void pessoaMaisIdosa(int idades[], string nomes[], char sexo[]) {
    int posMaisVelha = 0, idadeMaisVelha = idades[0];
    for (int i = 0; i < 10; i++) {
        if (idades[i] >= idadeMaisVelha) {
            idadeMaisVelha = idades[i];
            posMaisVelha = i;
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Dados da pessoa mais idosa:" << endl << endl;
    cout << "Nome:  " << nomes[posMaisVelha] << endl;
    cout << "Idade:  " << idades[posMaisVelha] << endl;
    cout << "Sexo:  " << sexo[posMaisVelha] << endl;
    cout << endl;
}

void pessoaMaisNova(int idades[], string nomes[], char sexo[]) {
    int posMaisNova = 0, idadeMaisNova = idades[0];
    for (int i = 0; i < 10; i++) {
        if (idades[i] <= idadeMaisNova) {
            idadeMaisNova = idades[i];
            posMaisNova = i;
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Dados da pessoa mais nova:" << endl << endl;
    cout << "Nome:  " << nomes[posMaisNova] << endl;
    cout << "Idade:  " << idades[posMaisNova] << endl;
    cout << "Sexo:  " << sexo[posMaisNova] << endl;
    cout << endl;
}

void menuPrincipal(int idades[], string nomes[], char sexo[], char resposta) {
    string pessoa;
    
    for (int i = 0; i < 10; i++) {
        cout << endl;
        cout << endl;
        cout << "Informe os dados da " << i + 1 << "ª pessoa:" << endl << endl;
        cout << "Nome:  ";
        cin >> nomes[i];
        cout << "Sexo:  ";
        cin >> sexo[i];
        cout << "Idade: ";
        cin >> idades[i];
    }

    do {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Qual operação deseja realizar???" << endl << endl;
        cout << "a) Retornar a média das idades" << endl;
        cout << "b) Retornar a quantidade de pessoas de cada sexo" << endl;
        cout << "c) Informar os dados de uma pessoa" << endl;
        cout << "d) Mostrar pessoas do sexo masculino" << endl;
        cout << "e) Mostrar os dados da pessoa mais idosa" << endl;
        cout << "f) Mostrar os dados da pessoa mais nova" << endl;
        cout << "g) SAIR" << endl;
        cout << endl;
        cout << "OPÇÃO: ";
        cin >> resposta;
        switch (resposta) {
            case 'a':
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "A média de todas as idades é:  " << mediaIdades(idades) << endl;
                break;
            case 'b':
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "Estão cadastradas um total de " << quantM(sexo) << " pessoas do sexo masculino e " << quantF(sexo) << " pessoas do sexo feminino" << endl;
                break;
            case 'c':
                cout << "Informe o nome da pessoa desejada: ";
                cin >> pessoa;
                informarDados(pessoa, idades, nomes, sexo);
                break;
            case 'd':
                pessoasM(idades, nomes, sexo);
                break;
            case 'e':
                pessoaMaisIdosa(idades, nomes, sexo);
                break;
            case 'f':
                pessoaMaisNova(idades, nomes, sexo);
                break;
            default:
                break;
        }
    } while (resposta != 'g');
}