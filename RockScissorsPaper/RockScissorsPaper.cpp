#include <iostream>
using namespace std;

string rock = "Камень";
string scissors = "Ножницы";
string paper = "Бумага";
string choice;
int win = 0;

void request() {

    cout << "\nВведите 'Камень' ИЛИ 'Ножницы' ИЛИ 'Бумага'\n";
    
}

int main()
{
    setlocale(LC_ALL, "Russian");

    system("chcp 1251");
 
    string choice2[3] = { "камень", "ножницы", "бумага" };  

    srand(time(0));

    int a = rand() % 3;
    
   
    while (win!=1) {

        request();
        cin >> choice;

        if (choice == "бумага" && choice2[a] == "камень" || choice == "камень" && choice2[a] == "ножницы" || choice == "ножницы" && choice2[a] == "бумага") {
            cout << "Победа";
            win = 1;
        }
        else if (choice == choice2[a]) {
            cout << "Ничья";
        }
        else  {
            cout << "Поражение"; 
        }
   } 
}


  
