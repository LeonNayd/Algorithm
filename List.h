template <class T>
class List{
public:

    class Front_iterator{         //итераторы
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
    };

    List(int n0){                           //Пустой конструктор с вводом коэффициента n0
        this->n0 = n0;
        capacity = capacity + n0;
        array = new T(capacity * 2);
    }
    List(List<T> &list){                    //Конструктор копирования
        int i = 0;
        this->array = new T(list.capacity);
        for(int i = 0; i<list.size; i++){
            array[i] = list.array;
        }
        capacity = list.capacity;
        n0 = list.n0;
        size = list.size;
    }
    int getCount(){                         //Опрос размера списка
        return size;
    }
    void clear(){                           //Очистка
        delete[] array;
        size = 0;
        capacity = n0;
    }
    bool isEmpty(){                         //Проверка списка на пустоту
        return (size == 0);
    }
    bool isHere(T obj){                     //Опрос наличия заданного значения
        int i = 0;
        while(i!=size){
            if(array[i] == obj){
                return true;
            }
            i++;
        }
        return false;
    }
    T& getObj(int num){                     //Чтение значения по номеру
        return array[num];
    }
    bool changeByNum(T obj, int num){       //Изменеине по номеру
        if(num < size && num > -1){
            array[num] = obj;
            return true;
        }else return false;
    }

    int getNumByValue(T obj){               //Получение номера по значению
        int i = 0;
        while(i!=size){
            if(array[i] == obj){
                return i;
            }
            i++;
        }
    }
    void push_front(T obj){                  //Включение нового значения          ????????????
        size = size+1;
        capacity = (size + 1) * n0;
        T* tmp = new T(capacity);
        tmp[0] = obj;
        for(int i = 0; i < size-1; i++)
            tmp[i+1] = array[i];
        delete[] array;
        array = new T(capacity);
        for(int i = 0; i < size; i++)
            array[i] = tmp[i];
    }
    bool push(T obj, int num){               //Включение нового значения в выбранную позицию          ????????????
        if(num > (size+1) || num <= -1)
            return false;
        size = size+1;
        capacity = (size + 1) * n0;
        T* tmp = new T(capacity);
        tmp[num] = obj;
        for(int i = 0, a = 0; i<size+1; i++, a++)
            if(i != num){
                tmp[a] = array[i];
            }else
            {
                a++;
                tmp[num] = obj;
            }
        delete[] array;
        array = new T(capacity);
        for(int i = 0; i < size; i++)
            array[i] = tmp[i];
        delete[] tmp;
        return true;
    }
    bool pop_value(T obj){                   //Удаление по значению          ????????????
        if(size < 0) return false;
        size = size-1;
        capacity = size - 1 + n0;
        T* tmp = new T(capacity);
        for(int i = 0; i < size-1; i++)
            tmp[i] = array[i+1];
        delete[] array;
        array = new T(capacity);
        for(int i = 0; i < size; i++)
            array[i] = tmp[i];
        delete[] tmp;
        return true;
    }
    bool pop_pos(int num){                   //Удаление по позиции          ????????????
        if(num > size || num <= -1)
            return false;
        size = size-1;
        capacity = size -1 + n0;
        T* tmp = new T(capacity);
        for(int i = 0, a = 0; i<size-1; i++, a++)
            if(i != num){
                tmp[a] = array[i];
            }else
            {
                a--;
                tmp[a] = array[i];
            }
        delete[] array;
        array = new T(capacity);
        for(int i = 0; i < size; i++)
            array[i] = tmp[i];
        delete[] tmp;
        return true;
    }


    Front_iterator begin(){

    }
    Back_iterator rbegin(){

    }

    Front_iterator end(){                     //Итератор с индексом size+1

    }
    Back_iterator rend(){                     //Итератор с индексом size-1

    }



    ~List(){                                   //Деконструктор
        delete[] array;
    }
private:
    int size;
    int capacity;
    int n0;
    T* array;
};