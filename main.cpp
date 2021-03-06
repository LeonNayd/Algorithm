#include "iostream"
#include <windows.h>
#include "List.cpp"

using namespace std;


void iter_menu(){
    try{
        int choice = 0;
        int n0, n1, n2, cur_f, cur_b;
        cout << "Введите значение n0: ";
        cin >> n1;
        cout << endl;
        List<int> lst(n0);
        lst.push_front(11);
        lst.push_front(14);
        lst.push_front(15);
        lst.push_front(13);
        lst.push_front(10);
        cout << "Размер текущего массива: " << lst.getCount() << endl;
        List<int>::Front_iterator f_it(&lst, 0);
        List<int>::Back_iterator b_it(&lst, 4);
        do{
            cout << " 0 - Оператор ++ прямого итератора" << endl;
            cout << " 1 - Оператор == прямого итератора" << endl;
            cout << " 2 - Оператор != прямого итератора" << endl;
            cout << " 3 - Оператор * прямого итератора" << endl;
            cout << " 4 - Оператор -- обратного итератора" << endl;
            cout << " 5 - Оператор == обратного итератора" << endl;
            cout << " 6 - Оператор != обратного итератора" << endl;
            cout << " 7 - Оператор * обратного итератора" << endl;
            cout << "-1 - Выход" << endl;
            cin >> choice;
            switch (choice) {
                case 0:
                {
                    try{
                        ++f_it;
                    }catch(exception ex){
                        cout << ex.what()<<endl;
                    }
                    break;
                }
                case 1:
                {
                    try{
                        int tmp_f = 0;
                        cout << "Введите значение позиции: ";
                        cin >> tmp_f;
                        cout << endl;
                        List<int>::Front_iterator tmp(&lst, tmp_f);
                        cout << (f_it == tmp) << endl;
                    }
                    catch(exception ex){
                        cout << ex.what() << endl;
                    }
                    break;
                }
                case 2:
                {
                    try{
                        int tmp_f = 0;
                        cout << "Введите значение позиции: ";
                        cin >> tmp_f;
                        cout << endl;
                        List<int>::Front_iterator tmp(&lst, tmp_f);
                        cout << (f_it != tmp) << endl;
                    }
                    catch(exception ex){
                        cout << ex.what() << endl;
                    }
                    break;
                }
                case 3:
                {
                    try{
                        cout << *f_it << endl;
                    }
                    catch(exception ex){
                        cout << ex.what() << endl;
                    }
                    break;
                }
                case 4:
                {
                    try{
                        --b_it;
                    }catch(exception ex){
                        cout << ex.what()<<endl;
                    }
                    break;
                }
                case 5:
                {
                    try{
                        int tmp_f = 0;
                        cout << "Введите значение позиции: ";
                        cin >> tmp_f;
                        cout << endl;
                        List<int>::Back_iterator tmp(&lst, tmp_f);
                        cout << (b_it == tmp) << endl;
                    }
                    catch(exception ex){
                        cout << ex.what() << endl;
                    }
                    break;
                }
                case 6:
                {
                    try{
                        int tmp_f = 0;
                        cout << "Введите значение позиции: ";
                        cin >> tmp_f;
                        cout << endl;
                        List<int>::Back_iterator tmp(&lst, tmp_f);
                        cout << (b_it != tmp) << endl;
                    }
                    catch(exception ex){
                        cout << ex.what() << endl;
                    }
                    break;
                }
                case 7:
                {
                    try{
                        cout << *b_it << endl;
                    }
                    catch(exception ex){
                        cout << ex.what() << endl;
                    }
                    break;
                }
                case -1:{
                    choice=-1;
                    break;
                }
            }
        }
        while(choice != -1);

    }
    catch (exception ex) {
        cout << ex.what() << endl;
    }
}

// Меню по заданию
void menu() {
    try {
        int choice = 0;
        int n0, n1, n2;
        cout << "Введите значение n0: ";
        cin >> n1;
        cout << endl;
        List<int> lst(n0);
        lst.push_front(1);
        lst.push_front(4);
        lst.push_front(5);
        do {
            cout << "Размер массива: " << lst.getCount() << endl;
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
            cout << "11 - Меню итераторов" << endl;
            cout << "-1 - Выход" << endl;
            cout << "Ввод >> ";
            cin >> choice;
            switch (choice) {
                case 0: {
                    cout << endl;
                    cout << "Размер массива: " << lst.getCount() << endl;
                    break;
                }
                case 1: {
                    lst.clear();
                    cout << endl;
                    cout << "Массив очищен" << endl;
                    break;
                }
                case 2: {
                    cout << endl;
                    if (lst.isEmpty()) cout << "Массив пустой" << endl;
                    else cout << "Массив не пустой" << endl;
                    break;
                }
                case 3: {
                    cout << endl;
                    cout << "Введите элемент: ";
                    cin >> n1;
                    if (lst.isHere(n1)) cout << "Элемент присутствует в массиве" << endl;
                    else cout << "Элемент не присутствует в массиве" << endl;
                    break;
                }
                case 4: {
                    cout << endl;
                    cout << "Размер массива: " << lst.getCount() << endl;
                    cout << "Введите номер элемента: ";
                    cin >> n1;
                    while (n1 >= lst.getCount()) {
                        cout << "Введите номер элемента заново: ";
                        cin >> n1;
                    }
                    cout << "Значение элемента: " << lst.getObj(n1) << endl;
                    break;
                }
                case 5: {
                    cout << endl;
                    cout << "Размер массива: " << lst.getCount() << endl;
                    cout << "Введите номер элемента: ";
                    cin >> n1;
                    while (n1 >= lst.getCount()) {
                        cout << "Введите номер элемента заново: ";
                        cin >> n1;
                    }
                    cout << "Введите новое значение элемента: ";
                    cin >> n2;
                    if (lst.changeByNum(n2,n1)) cout << "Элемент изменён" << endl;
                    else cout << "Элемент не изменён" << endl;
                    break;
                }
                case 6: {
                    cout << endl;
                    cout << "Введите значение элемента: ";
                    cin >> n1;
                    if (lst.getNumByValue(n1) != -1) cout << "Значение элемента: " << lst.getNumByValue(n1) << endl;
                    else cout << "Такого значения нет в массиве" << endl;
                    break;
                }
                case 7: {
                    cout << endl;
                    cout << "Введите элемент: ";
                    cin >> n1;
                    lst.push_front(n1);
                    cout << "Элемент добавлен в массив" << endl;
                    break;
                }
                case 8: {
                    cout << endl;
                    cout << "Размер массива: " << lst.getCount() << endl;
                    cout << "Введите номер для элемента: ";
                    cin >> n1;
                    while (n1 > lst.getCount()) {
                        cout << "Введите номер заново: ";
                        cin >> n1;
                    }
                    cout << "Введите элемент: ";
                    cin >> n2;
                    if (lst.push(n2, n1)) cout << "Элемент добавлен" << endl;
                    else cout << "Элемент не добавлен" << endl;
                    break;
                }
                case 9: {
                    cout << endl;
                    cout << "Введите значение: ";
                    cin >> n1;
                    if (lst.pop_value(n1)) cout << "Элемент удалён" << endl;
                    else cout << "Элемент не найден";
                    break;
                }
                case 10: {
                    cout << endl;
                    cout << "Размер массива: " << lst.getCount() << endl;
                    cout << "Введите номер элемента: ";
                    cin >> n1;
                    while (n1 >= lst.getCount()) {
                        cout << "Введите номер заново: ";
                        cin >> n1;
                    }
                    if (lst.pop_pos(n1)) cout << "Элемент удалён" << endl;
                    else cout << "Элемент не найден" << endl;
                    break;
                }
                case 11:
                {
                    iter_menu();
                    break;
                }
                case -1: {
                    choice = -1;
                }
            }
            cout << endl;
        } while (choice != -1);
    }
    catch (exception ex) {
        cout << ex.what() << endl;
    }
}

//основная функция
int main() {
    SetConsoleOutputCP(CP_UTF8);

    menu();

    return 0;
}