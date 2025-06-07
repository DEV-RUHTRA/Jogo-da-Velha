#include <bits/stdc++.h>
using namespace std;

// Variaveis globais:
char n1 = '-', n2 = '-', n3 = '-', n4 = '-', n5 = '-', n6 = '-', n7 = '-', n8 = '-', n9 = '-'; // Inicialização do tabuleiro
char p1, p2;// Simbolo do jogador 1 e jogador 2.

void tabuleiro(int coluna, int linha, char simbolo){
    if (coluna == 0 && linha == 0){
        n1 = simbolo;
    }else if (coluna == 0 && linha == 1){
        n2 = simbolo;
    }else if (coluna == 0 && linha == 2){
        n3 = simbolo;
    }else if (coluna == 1 && linha == 0){
        n4 = simbolo;
    }else if (coluna == 1 && linha == 1){
        n5 = simbolo;
    }else if (coluna == 1 && linha == 2){
        n6 = simbolo;
    }else if (coluna == 2 && linha == 0){
        n7 = simbolo;
    }else if (coluna == 2 && linha == 1){
        n8 = simbolo;
    }else if (coluna == 2 && linha == 2){
        n9 = simbolo;
    }

    cout << " " << n1 << " | " << n2 << "  | " << n3 << endl;
    cout << "---+----+---" << endl;
    cout << " " << n4 << " | " << n5 << "  | " << n6 << endl;
    cout << "---+----+---" << endl;
    cout << " " << n7 << " | " << n8 << "  | " << n9 << endl;
}

int main(){

    int n = 9;         // Quantidade maxima de jogadas
    int linha, coluna; // Linha e Coluna

    cout << "====================================================" << endl;
    cout << "========= SEJA BEM VINDO AO JOGO DA VELHA! =========" << endl;
    cout << "====================================================" << endl << endl;
    cout << "Projeto desenvolvido por: Diego Gilberto Marques e Arthur Nascimento Rodrigues" << endl << endl;
    cout << "Player 1 - Digite o simbolo que deseja utilizar: ";
    cin >> p1;
    cout << "Player 2 - Digite o simbolo que deseja utilizar: ";
    cin >> p2;
    cout << endl;

    while (p1 == p2){ // Verificação para simbolos iguais.
        cout << "Simbolo ja escolhido! Player 2 digite novamente seu simbolo: ";
        cin >> p2;
    }

    while (p1 == '-' || p2 == '-'){ //Verificação para não pode escolher '-'.
        if (p1 == '-'){
            cout << "Player 1 simbolo invalido! Digite outro simbolo: ";
            cin >> p1;
        }
        if (p2 == '-'){
            cout << "Player 2 simbolo invalido! Digite outro simbolo: ";
            cin >> p2;
        }
    }

    cout << "  " << "  | " << "   | " << endl;
    cout << " ---+----+---" << endl;
    cout << "  " << "  | " << "   | " << endl;
    cout << " ---+----+---" << endl;
    cout << "  " << "  | " << "   | " << endl;

    for (int i = 1; i <= n; i++){

        if (i % 2 != 0){ // Numero impar, player 1 joga.
        cout << endl; // Espaço
        cout << "Player 1!" << endl;
        cout << "Digite a coluna(0-2): ";
        cin >> coluna;
        
            if (coluna > 2 || coluna < 0){
                cout << "Valor de coluna invalido! Digite novamente a coluna: ";
                cin >> coluna;
            }
            cout << "Digite a linha(0-2): ";
            cin >> linha;
            if (linha > 2 || linha < 0){
                cout << "Valor de linha invalido! Digite novamente a linha: ";
                cin >> linha;
            }
            tabuleiro(coluna, linha, p1);

            if ((n1 == p1 && n2 == p1 && n3 == p1) || // Verifica se o player 1 vençeu
                (n4 == p1 && n5 == p1 && n6 == p1) ||
                (n7 == p1 && n8 == p1 && n9 == p1) ||
                (n1 == p1 && n5 == p1 && n9 == p1) ||
                (n7 == p1 && n5 == p1 && n3 == p1) ||
                (n1 == p1 && n4 == p1 && n7 == p1) ||
                (n2 == p1 && n5 == p1 && n8 == p1) ||
                (n3 == p1 && n6 == p1 && n9 == p1)){
                cout << "Player 1 venceu. Parabens!" << endl;
                return 0;
            }
        }else{ //Numero par, Player 2 joga.
        cout << endl; // Espaço
        cout << "Player 2!" << endl;
        cout << "Digite a coluna(0-2): ";
        cin >> coluna;
            if (coluna > 2 || coluna < 0){
                cout << "Valor de coluna invalido!" << endl
                     << "Digite a coluna: ";
                cin >> coluna;
            }
            cout << "Digite a linha(0-2): ";
            cin >> linha;
            if (linha > 2 || linha < 0){
                cout << "Valor invalido" << endl
                     << "Digite a linha: ";
                cin >> linha;
            }
            tabuleiro(coluna, linha, p2);

            if ((n1 == p2 && n2 == p2 && n3 == p2) || // Verifica se o player 2 vençeu
                (n4 == p2 && n5 == p2 && n6 == p2) ||
                (n7 == p2 && n8 == p2 && n9 == p2) ||
                (n1 == p2 && n5 == p2 && n9 == p2) ||
                (n7 == p2 && n5 == p2 && n3 == p2) ||
                (n1 == p2 && n4 == p2 && n7 == p2) ||
                (n2 == p2 && n5 == p2 && n8 == p2) ||
                (n3 == p2 && n6 == p2 && n9 == p2)){
                cout << "Player 2 venceu. Parabens!" << endl;
                return 0;
            }
        }
    }

cout << "Empate!" << endl;

    return 0;
}