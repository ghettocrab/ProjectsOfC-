#include <iostream>
using namespace std;

int main()
{
    int c;

    cout << "Выберете оружие: 1 - Кавалерия, 2 - Дьявольский меч Данте, 3 - Цербер, 4 - Барлог";
    cin >> c;

    switch (c)
    {
        case 1:
        cout << "Вы выбрали Кавалерию" << endl;
        break;
        case 2:
        cout << "Вы выбрали Дьявольский меч Данте" << endl;
        break;
        case 3:
        cout  << "Вы выбрали Цербера" << endl;
        break;
        case 4:
        cout << "Вы выбрали Барлог" << endl;
        break;
        default:
        cout << "Вы не выбрали оружие ближнего боя" << endl;
        break;
    }
    return 0;
}
