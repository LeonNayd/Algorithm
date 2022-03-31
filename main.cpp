#include "iostream"
#include <windows.h>
#include "List.cpp"
#include <conio.h>

const int ESC = 27;

using namespace std;

// Меню по заданию
void menu() {
    try {
        int choice = 0;
        //List<int> lst(5);
        do {
            //cout << "Текущий размер массива = " << lst.getCount() << endl;
            cout << "0 - Опрос размера массива" << endl;
            cout << "1 - Очистка массива" << endl;
            cout << "2 - Проверка массива на пустоту" << endl;
            cout << "3 - Опрос наличия заданного значения" << endl;
            cout << "4 - Чтение значения с заданным номером в массиве" << endl;
            cout << "5 - Изменение значения с заданным номеров в массиве" << endl;
            cout << "6 - Получение позиции в массиве для заданного значения" << endl;
            cout << "7 - Включение нового значения" << endl;
            cout << "8 - Включение нового значения в позицию с заданным номером" << endl;
            cout << "9 - Удаление заданного значения в массиве" << endl;
            cout << "10 - Удаление значения из позиции с заданным номером" << endl;
            cout << "ESC - Выход" << endl;
            cout << "Ввод >> ";
            cin >> choice;
            switch (choice) {
                case 0: {
                    cout << "Размер массива:" << endl;
                    break;
                }
                case 1: {
                    cout << "Массив очищен" << endl;
                    break;
                }
                case 2: {
                    cout << "Массив пустой или не пустой" << endl;
                    break;
                }
                case 3: {
                    cout << "Значение есть или нет я хз" << endl;
                    break;
                }
                case 4: {
                    cout << "Значение элемента: ";
                    break;
                }
                case 5: {
                    cout << "Измененный элемент: ";
                    break;
                }
                case 6: {
                    cout << "Позиция элемента:" << endl;
                    break;
                }
                case 7: {
                    cout << "Элемент добавлен" << endl;
                    break;
                }
                case 8: {
                    cout << "Элемент добавлен" << endl;
                    break;
                }
                case 9: {
                    cout << "Элемент удален" << endl;
                    break;
                }
                case 10: {
                    cout << "Элемент удален" << endl;
                    break;
                }
            }
            while (_getch() != ESC);
            
        } while (choice != 0);
    }
    catch (exception ex) {
        cout << ex.what() << endl;
    }
}

//основная функция
int main() {
    SetConsoleOutputCP(CP_UTF8);

    menu();

    system("pause");
    return 0;
}