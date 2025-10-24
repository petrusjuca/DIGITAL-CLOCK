#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {
    int hora, minuto, segundo;

    cout << "Digite a hora inicial: ";
    cin >> hora;
    cout << "Digite o minuto inicial: ";
    cin >> minuto;
    cout << "Digite o segundo inicial: ";
    cin >> segundo;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {0, 2}; // posição do relógio na tela

    cout << "\nControles:\n";
    cout << "[H] +1 hora\n";
    cout << "[M] +1 minuto\n";
    cout << "[ESC] sair\n\n";

    while (true) {
        // Atualiza a posição do cursor
        SetConsoleCursorPosition(hConsole, pos);

        // Exibe o relógio
        cout << "Relogio: "
             << setfill('0') << setw(2) << hora << "h : "
             << setfill('0') << setw(2) << minuto << "min : "
             << setfill('0') << setw(2) << segundo << "s" 
             << "          " << flush; // limpa sobra de caracteres

        Sleep(1000);

        // Incrementa o tempo
        ++segundo;
        if (segundo == 60) {
            segundo = 0;
            ++minuto;
        }
        if (minuto == 60) {
            minuto = 0;
            ++hora;
        }
        if (hora == 24) {
            hora = 0;
        }

        // Verifica teclas pressionadas
        if (GetAsyncKeyState('H') & 0x8000) {
            hora = (hora + 1) % 24;
        }
        if (GetAsyncKeyState('M') & 0x8000) {
            minuto = (minuto + 1) % 60;
        }
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
            break; // encerra o programa
        }
    }

    cout << "\nRelogio finalizado.\n";
    return 0;
}
