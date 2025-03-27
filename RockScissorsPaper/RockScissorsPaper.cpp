#include <iostream>
using namespace std;

string rock = "Камень";
string scissors = "Ножницы";
string paper = "Бумага";
string choice;
int choice2;

void request() {
    cout << "Введите 'Камень' ИЛИ 'Ножницы' ИЛИ 'Бумага'";
    cin >> choice;
}

void random_for_enemy() {
    int computer_choice = rand() % 3;

    if (computer_choice == 0) {
        choice2 = 0; // Камень
    }

    else if (computer_choice == 1) {
        choice2 = 1; // Ножницы
    }

    else {
        choice2 = 2; // Бумага
    }
}

void results() {

    int player_choice = 0;

    if (choice == rock) {
        player_choice = 1;
    }

    else if (choice == scissors) {
        player_choice = 2;
    }

    else if (choice == paper) {
        player_choice = 3;
    }
 
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));

    if (choice != rock && choice != scissors && choice != paper) {
        cout << "Ошибка";
    }


    
    if (player_choice == choice2) cout << "Ничья";

    if (player_choice == 1 && choice2 = 1 &&)
}

