#include <bits/stdc++.h>
using namespace std;
#define MAX 100 //Define o tamanho maximo do nome da cada jogador

void bemVindo(){
                cout << endl;
            cout << "\033[38;2;255;255;0m====================================================\033[0m" << endl;
            cout << "\033[38;2;0;120;255m          SEJA BEM VINDO AO JOGO DA VELHA!          \033[0m" << endl;
            cout << "\033[38;2;255;255;0m====================================================\033[0m" << endl
                 << endl;
                                 cout << "                      COLUNA" << endl;
            cout << "                     0   1   2" << endl;
            cout << "                   -------------" << endl;
            cout << "               L 0    |   |   |" << endl;
            cout << "               I   -------------" << endl;
            cout << "               N 1    |   |   |" << endl;
            cout << "               H   -------------" << endl;
            cout << "               A 2    |   |   |" << endl;
            cout << "                   -------------" << endl
                 << endl;
}
void tabuleiro(){
                cout << "                      COLUNA" << endl;
            cout << "                     0   1   2" << endl;
            cout << "                   -------------" << endl;
            cout << "               L 0    |   |   |" << endl;
            cout << "               I   -------------" << endl;
            cout << "               N 1    |   |   |" << endl;
            cout << "               H   -------------" << endl;
            cout << "               A 2    |   |   |" << endl;
            cout << "                   -------------" << endl
                 << endl;
}
void escolhaSimbolo(char &s1, char &s2){

    cout << "Jogador escolha seu simbolo ('X' ou 'O'): ";
    cin >> s1;
    while (s1 != 'X' && s1 != 'O'){
        cout << "Simbolo invalido." << endl;
        cout << "Jogador escolha seu simbolo novamente('X' ou 'O'): ";
        cin >> s1;
    }
    cout << endl;
    cout << "Simbolo '" << s1 << "' escolhido pelo jogador!" << endl;
    if (s1 == 'X'){
        s2 = 'O';
    }
    else{
        s2 = 'X';
    }
    cout << "Simbolo '" << s2 << "' escolhido automaticamente para o oponente!" << endl;

}
void escolhaNome(char nome1[MAX], char nome2[MAX]){
    cout << endl;
    cout << "Jogador digite seu nickname: ";
    cin.ignore();
    cin.getline(nome1,MAX);
    cout << "Oponente digite seu nickname: ";
    cin.getline(nome2,MAX);
    
}
void escolhePosicao(int &linha,int &coluna, char nome[]){
    char posicao[6]; //Uma posicao a mais por conta do '\0'
    cout << nome << ", selecione sua posicao (linha,coluna): ";

    while (true) {
        cin.getline(posicao, 6);
       
        if (posicao[0] == '(' &&  // Verifica o formato correto (por exemplo: (1,2))
            posicao[2] == ',' &&
            posicao[4] == ')' &&
            posicao[1] >= '0' && posicao[1] <= '2' &&
            posicao[3] >= '0' && posicao[3] <= '2') {

            linha = posicao[1] - '0';// converte char para int
            coluna = posicao[3] - '0';// converte char para int
            break;
        }else{
            cout << "Posicao invalida! Digite novamente (linha,coluna): ";
        }
    }
}
void imprimeTabuleiro(char tabuleiro[3][3],int linha, int coluna, char simb, char nome[]){
    while(tabuleiro[linha][coluna] != '-'){ 
        cout << "Posicao invalida!" << endl;
        escolhePosicao(linha,coluna,nome);
    }
    tabuleiro[linha][coluna] = simb; //while que verifica.
    
    cout << "  " <<tabuleiro[0][0]<< " | " <<tabuleiro[0][1]<< "  | " <<tabuleiro[0][2]<< endl;
    cout << " ---+----+---" << endl;
    cout << "  " <<tabuleiro[1][0]<< " | " <<tabuleiro[1][1]<< "  | " <<tabuleiro[1][2]<< endl;
    cout << " ---+----+---" << endl;
    cout << "  " <<tabuleiro[2][0]<< " | " <<tabuleiro[2][1]<< "  | " <<tabuleiro[2][2] << endl;
}
bool verificaGanhador(char tabuleiro[3][3], char simb){
    if ((tabuleiro[0][0] == simb && tabuleiro[0][1] == simb && tabuleiro[0][2] == simb) || 
    (tabuleiro[1][0] == simb && tabuleiro[1][1] == simb && tabuleiro[1][2] == simb)  ||
    (tabuleiro[2][0] == simb && tabuleiro[2][1] == simb && tabuleiro[2][2] == simb) ||
    (tabuleiro[0][0] == simb && tabuleiro[1][0] == simb && tabuleiro[2][0] == simb) ||
    (tabuleiro[0][1] == simb && tabuleiro[1][1] == simb && tabuleiro[2][1] == simb) ||
    (tabuleiro[0][2] == simb && tabuleiro[1][2] == simb && tabuleiro[2][2] == simb) ||
    (tabuleiro[0][0] == simb && tabuleiro[1][1] == simb && tabuleiro[2][2] == simb) ||
    (tabuleiro[0][2] == simb && tabuleiro[1][1] == simb && tabuleiro[2][0] == simb)){
        return true;
    }else{
        return false;
    }
}
void escolhaNome_bot(char jogador[MAX]){
    cout << endl;
    cout << "Jogador digite seu nickname: ";
    cin.ignore();
    cin.getline(jogador,MAX);
}
void escolhaSimbolo_bot(char &s1, char &sBOT){
    cout << "Jogador escolha seu simbolo ('X' ou 'O'): ";
    cin >> s1;
    while (s1 != 'X' && s1 != 'O'){
        cout << "Simbolo invalido." << endl;
        cout << "Jogador escolha seu simbolo novamente('X' ou 'O'): ";
        cin >> s1;
    }
    cout << endl;
    cout << "Simbolo '" << s1 << "' escolhido pelo jogador!" << endl;
    if (s1 == 'X'){
        sBOT = 'O';
    }
    else{
        sBOT = 'X';
    }
    cout << "Simbolo '" << sBOT << "' escolhido automaticamente para o BOT!" << endl;      
}
void jogada_bot(char tabuleiro[3][3],int &linha, int &coluna, char sBOT, char sOponente, char bot[]){
    
}


int main(){
    int opc;

    do{
        // Título com barras em amarelo e texto em azul
        cout << "\033[38;2;255;255;0m===================================\033[0m" << endl;
        cout << "\033[38;2;0;120;255m         JOGO DA VELHA             \033[0m" << endl;
        cout << "\033[38;2;255;255;0m===================================\033[0m" << endl;

        // Opções do menu
        cout << "\033[38;2;0;120;255m1 - Jogador vs Oponente\033[0m" << endl;
        cout << "\033[38;2;0;120;255m2 - Jogador vs Bot\033[0m" << endl;
        cout << "\033[38;2;0;120;255m3 - Creditos\033[0m" << endl;
        cout << "\033[38;2;0;120;255m4 - Sair\033[0m" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opc;
        cout << "                      V0.2" << endl;

        while (opc < 1 || opc > 4){
            cout << "Opcao invalida! Digite novamente uma opcao: ";
            cin >> opc;
        }

        switch (opc){
        
        case 1:{// Jogador vs Oponente
            
            char s1, s2; // s1 = simbolo 1, s2 = simbolo2
            char nome1[MAX], nome2[MAX]; //Nome do jogador e oponente respectivamente

            bemVindo();
            escolhaSimbolo(s1, s2);
            escolhaNome(nome1, nome2);
            tabuleiro();
            int linha,coluna; //Declaração das variaveis que serão usadas como posição.
            char tabuleiro[3][3] = {'-','-','-','-','-','-','-','-','-'}; //Inicilização do tabuleiro em uma matriz[3][3] com o char "-" em todos as posições.

            for(int i=1;i<=9;i++){ //For que define a quantidade de jogadas e os turnos.

                if(i%2 != 0){ //Define a vez do jogador.
                    cout << "Rodada do(a) " << nome1 << "!" << endl;
                    escolhePosicao(linha,coluna,nome1);
                    imprimeTabuleiro(tabuleiro,linha,coluna,s1,nome1);
                    
                    if(verificaGanhador(tabuleiro,s1) == 1){
                        cout << "Parabens " << nome1 << ",voce venceu!" << endl;
                        return 0;
                    }
                }else{ //Define a vez do oponente
                    cout << "Rodada do(a) " << nome2 << "!" << endl;
                    escolhePosicao(linha,coluna,nome2);
                    imprimeTabuleiro(tabuleiro,linha,coluna,s2,nome2);
                    
                      if(verificaGanhador(tabuleiro,s2) == 1){
                        cout << "Parabens " << nome2 << ",voce venceu!" << endl;
                        return 0;
                    }
                }     
            }
            cout << "Empate!" << endl;
            return 0;
        break;
        }

        case 2:{// Jogador vs bot.

            char s1,sBOT; //s1: simbolo do jogador, sBOT: simbolo do bot.
            char jogador[MAX], bot[4] = "BOT"; //Nome do jogador e nome do bot.

            bemVindo();
            escolhaSimbolo_bot(s1,sBOT);
            escolhaNome_bot(jogador);
            tabuleiro();
            int linha,coluna; //Declaração das variaveis que serão usadas como posição.
            char tabuleiro[3][3] = {'-','-','-','-','-','-','-','-','-'}; //Inicilização do tabuleiro em uma matriz[3][3] com o char "-" em todos as posições.

            for(int i=1;i<=9;i++){

                if(i%2 != 0){//Define a vez do jogador.
                    cout << "Rodada do(a) " << jogador << "!" << endl;
                    escolhePosicao(linha,coluna,jogador);
                    imprimeTabuleiro(tabuleiro,linha,coluna,s1,jogador);
                }else{//Define a vez do BOT
                    cout << "Rodada do " << bot << "!" << endl;
                    jogada_bot(tabuleiro,linha,coluna,sBOT,s1,bot);
                    cout << "O " << bot << " fez a jogada na posicao (" << linha << "," << coluna << ")." << endl;
                    imprimeTabuleiro(tabuleiro,linha,coluna,sBOT,bot);
                    if(verificaGanhador(tabuleiro,sBOT) == 1){
                        cout << "Parabens " << bot << ",voce venceu!" << endl;
                        return 0;
                    }
                }
            }
            cout << "Empate!" << endl;
            return 0;
        break;
        }

        case 3:{
            cout << "Projeto desenvolvido por \033[38;2;255;0;0mDiego Gilberto Marques\033[0m e \033[38;2;255;0;0mArthur do Nascimento Rodrigues\033[0m." << endl;

            cout << "Para voltar ao menu inicial, digite 9: ";
            cin >> opc;
            while (opc != 9){
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
            cout << "Opcao invalida!" << endl;
        }

    } while (opc != 4);

    return 0;
}
