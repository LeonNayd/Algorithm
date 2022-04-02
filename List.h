#pragma once
#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

template<typename T>
class List {
public:

    // Фронт итератор
    class Front_iterator {
    public:
        Front_iterator(List *lst, int num);

        Front_iterator(const Front_iterator &it);

        T &operator*();

        void operator++();

        bool operator==(const Front_iterator &it);

        bool operator!=(const Front_iterator &it);

    private:
        List *list;
        int cur;
    };

    // Бэк итератор
    class Back_iterator {
    public:
        Back_iterator(List *lst, int num);

        Back_iterator(const Back_iterator &it);

        T &operator*();

        void operator++();

        bool operator==(const Back_iterator &it);

        bool operator!=(const Back_iterator &it);

    private:
        List *list;
        int cur;
    };

    // Конструктор
    List(int n0);

    // Конструктор копирования
    List(List<T> &list);

    // Опрос размера списка
    int getCount();

    // Очистка
    void clear();

    // Проверка списка на пустоту
    bool isEmpty();

    // Опрос наличия заданного значения
    bool isHere(T obj);

    // Чтение значения по номеру
    T &getObj(int num);

    // Изменение по номеру
    bool changeByNum(T obj, int num);

    // Получение номера по значению
    int getNumByValue(T obj);

    // Включение нового значения
    void push_front(T obj);

    // Включение нового значения в выбранную позицию
    bool push(T obj, int num);

    // Удаление по значению
    bool pop_value(T obj);

    // Удаление по позиции
    bool pop_pos(int num);

    Front_iterator begin();

    Back_iterator rbegin();

    // Итератор с индексом size+1
    Front_iterator end();

    // Итератор с индексом size-1
    Back_iterator rend();

    // Деконструктор
    ~List();

private:
    int size;
    int capacity;
    int n0;
    T *array;
};

#endif //ALGORITHM_LIST_H
