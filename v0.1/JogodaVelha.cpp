#include <bits/stdc++.h>
using namespace std;

// Variaveis globais:
char n1 = '-', n2 = '-', n3 = '-', n4 = '-', n5 = '-', n6 = '-', n7 = '-', n8 = '-', n9 = '-'; // Inicialização do tabuleiro
char p1, p2;// Simbolo do jogador 1 e jogador 2, respectivamente.

void tabuleiro(int linha, int coluna, char simbolo);// Declaração antecipada.

void verificadortabuleiro(int l, int c, int n1, int n2, char s){ //Verifica se uma posicao do tabuleiro está preenchida e chama novamente a função tabuleiro.
    cout << "Local do tabuleiro invalido!" << endl;
    cout << "Digite novamente uma linha: ";
    cin >> l;
    cout << "Digite novamente uma coluna: ";
    cin >> c;
    while(l == n1 && c == n2){
       cout << "Local do tabuleiro invalido!" << endl;
        cout << "Digite novamente uma linha: ";
        cin >> l;
        cout << "Digite novamente uma coluna: ";
        cin >> c; 
    }
    tabuleiro(l,c,s);
}

void tabuleiro(int linha, int coluna, char simbolo){ // Imprime o tabuleiro com o simbolo do jogador.
    if(linha == 0 && coluna == 0){
        if(n1 == p1 || n1 == p2){
            verificadortabuleiro(linha,coluna,0,0,simbolo);
            return;
        } else n1 = simbolo;
    } else if(linha == 0 && coluna == 1){
        if(n2 == p1 || n2 == p2){
            verificadortabuleiro(linha,coluna,0,1,simbolo);
            return;
        } else n2 = simbolo;
    } else if(linha == 0 && coluna == 2){
        if(n3 == p1 || n3 == p2){
            verificadortabuleiro(linha,coluna,0,2,simbolo);
            return;
        } else n3 = simbolo;
    } else if(linha == 1 && coluna == 0){
        if(n4 == p1 || n4 == p2){
            verificadortabuleiro(linha,coluna,1,0,simbolo);
            return;
        } else n4 = simbolo;
    } else if(linha == 1 && coluna == 1){
        if(n5 == p1 || n5 == p2){
            verificadortabuleiro(linha,coluna,1,1,simbolo);
            return;
        } else n5 = simbolo;
    } else if(linha == 1 && coluna == 2){
        if(n6 == p1 || n6 == p2){
            verificadortabuleiro(linha,coluna,1,2,simbolo);
            return;
        } else n6 = simbolo;
    } else if(linha == 2 && coluna == 0){
        if(n7 == p1 || n7 == p2){
            verificadortabuleiro(linha,coluna,2,0,simbolo);
            return;
        } else n7 = simbolo;
    } else if(linha == 2 && coluna == 1){
        if(n8 == p1 || n8 == p2){
            verificadortabuleiro(linha,coluna,2,1,simbolo);
            return;
        } else n8 = simbolo;
    } else if(linha == 2 && coluna == 2){
        if(n9 == p1 || n9 == p2){
            verificadortabuleiro(linha,coluna,2,2,simbolo);
            return;
        } else n9 = simbolo;
    }

    cout << " " << n1 << " | " << n2 << "  | " << n3 << endl;
    cout << "---+----+---" << endl;
    cout << " " << n4 << " | " << n5 << "  | " << n6 << endl;
    cout << "---+----+---" << endl;
    cout << " " << n7 << " | " << n8 << "  | " << n9 << endl;
}

int main(){
    int opc;

    do{
        
      
        
      // Título com barras em amarelo e texto em azul
        cout << "\033[38;2;255;255;0m===================================\033[0m" << endl;
        cout << "\033[38;2;0;120;255m         JOGO DA VELHA             \033[0m" << endl;
        cout << "\033[38;2;255;255;0m===================================\033[0m" << endl;

        // Opções do menu
        cout << "\033[38;2;0;120;255m1 - Iniciar jogo\033[0m" << endl;
        cout << "\033[38;2;0;120;255m2 - Tutorial\033[0m" << endl;
        cout << "\033[38;2;0;120;255m3 - Creditos\033[0m" << endl;
        cout << "\033[38;2;0;120;255m4 - Sair\033[0m" << endl;

        cout << "Escolha uma opcao: "; cin >> opc;
        cout << "                      V0.1" << endl;


        while(opc != 1 && opc != 2 && opc != 3 && opc != 4){
            cout << "Opcao invalida! Digite novamente uma opcao: ";
            cin >> opc;
        }

        switch (opc){
            case 1:{
                int n = 9; // Quantidade maxima de jogadas no jogo da velha.
                int linha, coluna; // Linha e Coluna

                    cout << endl;
    cout << "\033[38;2;255;255;0m====================================================\033[0m" << endl;
    cout << "\033[38;2;0;120;255m          SEJA BEM VINDO AO JOGO DA VELHA!          \033[0m" << endl;
    cout << "\033[38;2;255;255;0m====================================================\033[0m" << endl << endl;

                cout << "                      COLUNAS" << endl;
                cout << "                     0   1   2" << endl;
                cout << "                   -------------" << endl;
                cout << "               L 0    |   |   |" << endl;
                cout << "               I   -------------" << endl;
                cout << "               N 1    |   |   |" << endl;
                cout << "               H   -------------" << endl;
                cout << "               A 2    |   |   |" << endl;
                cout << "                   -------------" << endl << endl;

                cout << "Player 1 - Digite o simbolo que deseja utilizar: ";
                cin >> p1;
                cout << "Player 2 - Digite o simbolo que deseja utilizar: ";
                cin >> p2;
                cout << endl;
                
                while (p1 == p2){ // Verificação para simbolos iguais.
                    cout << "Simbolo ja escolhido! Player 2 digite novamente seu simbolo: ";
                    cin >> p2;
                }
                while ((p1 == '-' || p2 == '-') || (p1 == p2)){ //Verificação para não pode escolher '-' e p1 = p2.
                    if (p1 == '-' || p1 == p2){
                        cout << "Player 1 simbolo invalido! Digite outro simbolo: ";
                    cin >> p1;
                    }
                    if (p2 == '-' || p2 == p1){
                        cout << "Player 2 simbolo invalido! Digite outro simbolo: ";
                        cin >> p2;
                    }
                }
                cout << "Player 1 escolheu '" << p1 << "'." << endl;
                cout << "Player 2 escolheu '" << p2 << "'." << endl;


                for (int i = 1; i <= n; i++){

                    if (i % 2 != 0){ // Numero impar, player 1 joga.
                    cout << endl; // Espaço
                    cout << "Player 1!" << endl;
                    cout << "Digite a linha(0-2): ";
                    cin >> linha;
        
                        while(linha > 2 || linha < 0){
                            cout << "Valor de linha invalido! Digite novamente a linha: ";
                            cin >> linha;
                        }
                    cout << "Digite a coluna(0-2): ";
                    cin >> coluna;
                        while(coluna > 2 || coluna < 0){
                            cout << "Valor de coluna invalido! Digite novamente a coluna: ";
                            cin >> coluna;
                        }
                        tabuleiro(linha, coluna, p1);

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
                    cout << "Digite a linha(0-2): ";
                    cin >> linha;
                        while(linha > 2 || linha < 0){
                            cout << "Valor de linha invalido! Digite novamente a linha: ";
                            cin >> linha;
                        }
                    cout << "Digite a coluna(0-2): ";
                    cin >> coluna;
                        while(coluna > 2 || coluna < 0){
                            cout << "Valor de coluna invalido! Digite novamente a coluna: ";
                            cin >> coluna;
                        }
                        tabuleiro(linha, coluna, p2);

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
                break;
            }
            case 2:{
                cout << endl;
                cout << "====================================================" << endl;
                cout << "==========     BEM-VINDO AO TUTORIAL!     ==========" << endl;
                cout << "====================================================" << endl << endl;

                cout << "OBJETIVO DO JOGO:" << endl;
                cout << "Cada jogador deve tentar completar uma linha, coluna ou diagonal" << endl;
                cout << "com o seu proprio simbolo antes do adversario." << endl << endl;

                cout << "ESCOLHA DO SIMBOLO:" << endl;  
                cout << "Voce podera escolher qualquer caractere como simbolo," << endl;
                cout << "exceto o '-' (hifen), que e reservado para o jogo." << endl << endl;

                cout << "COMO JOGAR:" << endl;
                cout << "Durante sua vez, sera solicitado que informe a LINHA e a COLUNA" << endl;
                cout << "onde deseja jogar. Os valores vao de 0 a 2, conforme o tabuleiro abaixo:" << endl << endl;

                cout << "        COLUNAS" << endl;
                cout << "       0   1   2" << endl;
                cout << "     -------------" << endl;
                cout << " L 0    |   |   |" << endl;
                cout << " I   -------------" << endl;
                cout << " N 1    |   |   |" << endl;
                cout << " H   -------------" << endl;
                cout << " A 2    |   |   |" << endl;
                cout << "     -------------" << endl << endl;

                cout << "Exemplo: se voce quiser marcar a casa do meio," << endl;
                cout << "digite linha: 1 e coluna: 1" << endl << endl;

                cout << "Para voltar ao menu inicial, digite 9: ";
                cin >> opc;
                while(opc != 9){
                    cout << "Opcao invalida! Pressione 9 para voltar ao menu inicial: ";
                    cin >> opc;
                }
                break;
            }
            case 3: {
  

    cout << "Projeto desenvolvido por \033[38;2;255;0;0mDiego Gilberto Marques\033[0m e \033[38;2;255;0;0mArthur do Nascimento Rodrigues\033[0m." << endl;

    cout << "Para voltar ao menu inicial, digite 9: ";
    cin >> opc;
    while (opc != 9) {
        cout << "Opcao invalida! Pressione 9 para voltar ao menu inicial: ";
        cin >> opc;
    }
    break;
}

            case 4:{
                cout << "Saindo do jogo... Ate logo!" << endl;
                break;
            }
            default:
                cout << "Opção invalida!" << endl;
        }

    }while(opc != 4);

    return 0;
}
