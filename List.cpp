//#include "List.h"

template<class T>
class List {
public:

    /*class Front_iterator{         //итераторы
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

    // Конструктор
    List(int n0) {
        this->n0 = n0;
        size = 0;
        capacity = n0;
        array = new T(capacity);
    }

    // Конструктор копирования
    List(List<T> &list) {
        int i = 0;
        this->array = new T(list.capacity);
        for (int i = 0; i < list.size; i++) array[i] = list.array;
        capacity = list.capacity;
        n0 = list.n0;
        size = list.size;
    }

    // Опрос размера списка
    int getCount() { return size; }

    // Очистка
    void clear() {
        delete[] array;
        size = 0;
        capacity = n0;
        array = new T(capacity);
    }

    // Проверка списка на пустоту
    bool isEmpty() { return (size == 0); }

    // Опрос наличия заданного значения
    bool isHere(T obj) {
        int i = 0;
        while (i != size) {
            if (array[i] == obj) return true;
            i++;
        }
        return false;
    }

    // Чтение значения по номеру
    T &getObj(int num) { return array[num]; }

    // Изменение по номеру
    bool changeByNum(T obj, int num) {
        if (num < size && num > -1) {
            array[num] = obj;
            return true;
        } else return false;
    }

    // Получение номера по значению
    int getNumByValue(T obj) {
        int i = 0;
        while (i <= size) {
            if (array[i] == obj) return i;
            i++;
        }
        return -1;
    }

    // Включение нового значения
    void push_front(T obj) {
        capacity = (size + 1) * n0;
        T *tmp = new T(capacity);
        tmp[0] = obj;
        for (int i = 0; i < size; i++) tmp[i + 1] = array[i];
        array = new T(capacity);
        size++;
        for (int i = 0; i < size; ++i) array[i] = tmp[i];
    }

    // Включение нового значения в выбранную позицию
    bool push(T obj, int num) {
        if (num > (size + 1) || num <= -1) return false;
        size++;
        capacity = (size + 1) * n0;
        T *tmp = new T(capacity);
        tmp[num] = obj;
        for (int i = 0, a = 0; i < size + 1; i++, a++)
            if (i != num) tmp[a] = array[i];
            else {
                a++;
                tmp[num] = obj;
            }
        delete[] array;
        array = new T(capacity);
        for (int i = 0; i < size; i++) array[i] = tmp[i];
        delete[] tmp;
        return true;
    }

    // Удаление по значению
    bool pop_value(T obj) {
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
    bool pop_pos(int num) {
        if (num > size || num <= -1)
            return false;
        size = size - 1;
        capacity = size - 1 + n0;
        T *tmp = new T(capacity);
        for (int i = 0, j = 0; i < size - 1; i++, j++)
            if (i != num) {
                tmp[j] = array[i];
            } else {
                j--;
                tmp[j] = array[i];
            }
        delete[] array;
        array = new T(capacity);
        for (int i = 0; i < size; i++)
            array[i] = tmp[i];
        delete[] tmp;
        return true;
    }

    /*Front_iterator begin(){

    }
    Back_iterator rbegin(){

    }

    Front_iterator end(){                     //Итератор с индексом size+1

    }
    Back_iterator rend(){                     //Итератор с индексом size-1

    }*/

    // Деконструктор
    ~List() {
        delete[] array;
    }

private:
    int size;
    int capacity;
    int n0;
    T *array;
};