#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

#include "List.cpp"
template <class T>
class List{
public:

   /* class Front_iterator{         //итераторы
    public:
        T& operator*();
        Front_iterator operator++(int);
        bool operator==(Front_iterator&);
        bool operator!=(Front_iterator&);
    private:
        List* list;
        int cur;
    };

    class Back_iterator{
    public:
        T& operator*();
        Back_iterator operator++();
        bool operator==(Back_iterator&);
        bool operator!=(Back_iterator&);
    private:
        List* list;
        int cur;
    };*/

    List(int n0)                           //Пустой конструктор с вводом коэффициента n0
/*
    List(List<T> &list)                  //Конструктор копирования

    int getCount()                        //Опрос размера спискf

    void clear()                           //Очистка

    bool isEmpty()                         //Проверка списка на пустоту

    bool isHere(T obj)                     //Опрос наличия заданного значения

    T& getObj(int num)                    //Чтение значения по номеру

    bool changeByNum(T obj, int num)       //Изменеине по номеру

    int getNumByValue(T obj)             //Получение номера по значению

    void push_front(T obj)                  //Включение нового значения          ????????????

    bool push(T obj, int num)              //Включение нового значения в выбранную позицию          ????????????

    bool pop_value(T obj)                   //Удаление по значению          ????????????

    bool pop_pos(int num)                  //Удаление по позиции          ????????????

    Front_iterator begin()

    Back_iterator rbegin()

    Front_iterator end()                     //Итератор с индексом size+1

    Back_iterator rend()                     //Итератор с индексом size-1
*/
    ~List()                                 //Деконструктор

private:
    int size;
    int capacity;
    int n0;
    T* array;
};

#endif //ALGORITHM_LIST_H
