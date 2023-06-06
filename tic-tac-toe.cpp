#include <iostream>
using namespace std;

char plansza[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int aktualnyGracz = 1;
int wygrany = 0;

void rysujPlansze() {
    cout << "   |   |   " << endl;
    cout << " " << plansza[0][0] << " | " << plansza[0][1] << " | " << plansza[0][2] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << plansza[1][0] << " | " << plansza[1][1] << " | " << plansza[1][2] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << plansza[2][0] << " | " << plansza[2][1] << " | " << plansza[2][2] << " " << endl;
    cout << "   |   |   " << endl;
}

void zmienGracza() {
    if (aktualnyGracz == 1) {
        aktualnyGracz = 2;
    } else {
        aktualnyGracz = 1;
    }
}

void wprowadzZnak(char znak, int pole) {
    if (pole == 1) {
        plansza[0][0] = znak;
    } else if (pole == 2) {
        plansza[0][1] = znak;
    } else if (pole == 3) {
        plansza[0][2] = znak;
    } else if (pole == 4) {
        plansza[1][0] = znak;
    } else if (pole == 5) {
        plansza[1][1] = znak;
    } else if (pole == 6) {
        plansza[1][2] = znak;
    } else if (pole == 7) {
        plansza[2][0] = znak;
    } else if (pole == 8) {
        plansza[2][1] = znak;
    } else if (pole == 9) {
        plansza[2][2] = znak;
    }
}

bool sprawdzWygrana() {
    // Sprawdzenie wygranej w wierszach
    for (int i = 0; i < 3; i++) {
        if (plansza[i][0] == plansza[i][1] && plansza[i][1] == plansza[i][2]) {
            return true;
        }
    }
    
    // Sprawdzenie wygranej w kolumnach
    for (int i = 0; i < 3; i++) {
        if (plansza[0][i] == plansza[1][i] && plansza[1][i] == plansza[2][i]) {
            return true;
        }
    }
    
    // Sprawdzenie wygranej na przekątnych
    if (plansza[0][0] == plansza[1][1] && plansza[1][1] == plansza[2][2]) {
    return true;
}

if (plansza[0][2] == plansza[1][1] && plansza[1][1] == plansza[2][0]) {
    return true;
}

return false;
}
int main() {
int pole;
char znak;
bool ruchPoprawny;

do {
    rysujPlansze();
    
    if (aktualnyGracz == 1) {
        znak = 'X';
    } else {
        znak = 'O';
    }
    
    cout << "Gracz " << aktualnyGracz << ", podaj numer pola: ";
    cin >> pole;
    
    if (pole < 1 || pole > 9) {
        cout << "Niepoprawny numer pola!" << endl;
        continue;
    }
    
    ruchPoprawny = true;
    switch (pole) {
        case 1:
            if (plansza[0][0] == 'X' || plansza[0][0] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 2:
            if (plansza[0][1] == 'X' || plansza[0][1] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 3:
            if (plansza[0][2] == 'X' || plansza[0][2] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 4:
            if (plansza[1][0] == 'X' || plansza[1][0] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 5:
            if (plansza[1][1] == 'X' || plansza[1][1] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 6:
            if (plansza[1][2] == 'X' || plansza[1][2] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 7:
            if (plansza[2][0] == 'X' || plansza[2][0] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 8:
            if (plansza[2][1] == 'X' || plansza[2][1] == 'O') {
                ruchPoprawny = false;
            }
            break;
        case 9:
            if (plansza[2][2] == 'X' || plansza[2][2] == 'O') {
                ruchPoprawny = false;
            }
            break;
    }
    
    if (!ruchPoprawny) {
        cout << "To pole jest już zajęte!" << endl;
        continue;
    }
    
    wprowadzZnak(znak, pole);
    
    if (sprawdzWygrana()) {
        wygrany = aktualnyGracz;
        break;
    }
    
    zmienGracza();
    
} while (true);

rysujPlansze();

cout << "Gracz " << wygrany << " wygrywa!" << endl;

return 0;
}
