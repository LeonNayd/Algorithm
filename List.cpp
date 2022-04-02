#include "List.h"

template<typename T>
List<T>::Front_iterator::Front_iterator(List *lst, int num) : list(lst), cur(num) {}

template<typename T>
List<T>::Front_iterator::Front_iterator(const Front_iterator &it) {
    this->list = it.list;
    this->cur = it.cur;
}

template<typename T>
T& List<T>::Front_iterator::operator*() {
    if(cur > this->list.size){
        throw 1;
    }
    return *this->list->array[cur];
}

template<typename T>
void List<T>::Front_iterator::operator++() {
    if(cur >= this->list.size)  throw 1;
    cur++;
}

template<typename T>
bool List<T>::Front_iterator::operator==(const Front_iterator &it) {
    return this->cur == it.cur;
}

template<typename T>
bool List<T>::Front_iterator::operator!=(const Front_iterator &it) {
    return this->cur != it.cur;
}

template<typename T>
List<T>::Back_iterator::Back_iterator(List *lst, int num) : list (lst), cur(num) {}

template<typename T>
List<T>::Back_iterator::Back_iterator(const Back_iterator &it) {
    this->list = it.list;
    this->cur = it.cur;
}

template<typename T>
T& List<T>::Back_iterator::operator*() {
    if(cur >= this->list.size)
        throw 1;
        return list->array[cur];
}

template<typename T>
void List<T>::Back_iterator::operator++() {
    if(cur >= this->list.size)  throw 1;
    cur++;
}

template<typename T>
bool List<T>::Back_iterator::operator==(const Back_iterator &it) {
    return cur == it.cur;
}

template<typename T>
bool List<T>::Back_iterator::operator!=(const Back_iterator &it) {
    return cur != it.cur;
}


// Конструктор
template<typename T>
List<T>::List(int n0) {
    this->n0 = n0;
    size = 0;
    capacity = n0;
    array = new T(capacity);
}

// Конструктор копирования
template<typename T>
List<T>::List(List<T> &list) {
    int i = 0;
    this->array = new T(list.capacity);
    for (int i = 0; i < list.size; i++) array[i] = list.array;
    capacity = list.capacity;
    n0 = list.n0;
    size = list.size;
}

// Опрос размера списка
template<typename T>
int List<T>::getCount() { return size; }

// Очистка
template<typename T>
void List<T>::clear() {
    delete[] array;
    size = 0;
    capacity = n0;
    array = new T(capacity);
}

// Проверка списка на пустоту
template<typename T>
bool List<T>::isEmpty() { return (size == 0); }

// Опрос наличия заданного значения
template<typename T>
bool List<T>::isHere(T obj) {
    int i = 0;
    while (i != size) {
        if (array[i] == obj) return true;
        i++;
    }
    return false;
}

// Чтение значения по номеру
template<typename T>
T &List<T>::getObj(int num) {
    return array[num];
}

// Изменение по номеру
template<typename T>
bool List<T>::changeByNum(T obj, int num) {
    if (num < size && num > -1) {
        array[num] = obj;
        return true;
    } else return false;
}

// Получение номера по значению
template<typename T>
int List<T>::getNumByValue(T obj) {
    int i = 0;
    while (i <= size) {
        if (array[i] == obj) return i;
        i++;
    }
    return -1;
}

// Включение нового значения
template<typename T>
void List<T>::push_front(T obj) {
    capacity = (size + 1) * n0;
    T *tmp = new T(capacity);
    tmp[0] = obj;
    for (int i = 0; i < size; i++) tmp[i + 1] = array[i];
    delete[] array;
    array = new T(capacity);
    size++;
    for (int i = 0; i < size; i++) array[i] = tmp[i];
    delete[] tmp;
}

// Включение нового значения в выбранную позицию
template<typename T>
bool List<T>::push(T obj, int num) {
    if (num > size || num < 0) return false;
    capacity = (size + 1) * n0;
    T *tmp = new T(capacity);
    for (int i = 0; i != num; i++) tmp[i] = array[i];
    tmp[num] = obj;
    size++;
    for (int i = num; i < size; i++) tmp[i + 1] = array[i];
    delete[] array;
    array = new T(capacity);
    for (int i = 0; i < size; i++) array[i] = tmp[i];
    delete[] tmp;
    return true;
}

// Удаление по значению
template<typename T>
bool List<T>::pop_value(T obj) {
    if (size <= 0) return false;
    size--;
    capacity = size + n0;
    T *tmp = new T(capacity);
    int i = 0;
    for (int j = 0; i < size; i++)
        if (array[i] != obj) {
            tmp[j] = array[i];
            j++;
        } else break;
    for (; i < size; i++) tmp[i] = array[i + 1];
    delete[] array;
    array = new T(capacity);
    for (int i = 0; i < size; i++) array[i] = tmp[i];
    delete[] tmp;
    return true;
}

// Удаление по позиции
template<typename T>
bool List<T>::pop_pos(int num) {
    if (num > size || num < 0) return false;
    size--;
    capacity = size + n0;
    T *tmp = new T(capacity);
    for (int i = 0, j = 0; i < size; i++)
        if (array[i] != array[num]) {
            tmp[j] = array[i];
            j++;
        }
    delete[] array;
    array = new T(capacity);
    for (int i = 0; i < size; i++) array[i] = tmp[i];
    delete[] tmp;
    return true;
}

template<typename T>
typename List<T>::Front_iterator List<T>::begin(){
    Front_iterator it(this, 0);
    return it;
}

template<typename T>
typename List<T>::Back_iterator List<T>::rbegin(){
    Back_iterator it(this, size);
    return it;
}

// Итератор с индексом size+1
template<typename T>
typename List<T>::Front_iterator List<T>::end(){
    Front_iterator it(this, size);
    return it;
}

// Итератор с индексом size-1
template<typename T>
typename List<T>::Back_iterator List<T>::rend(){
    Back_iterator it(this, -1);
    return it;
}


// Деконструктор
template<typename T>
List<T>::~List() {
    delete[] array;
}
