#include <iostream>

using namespace std;
template <class T>
class Node // узел списка
{
public:
    T data;
    Node *ptr_next; // указател на след элемент
    // T data = T() - избежание мусора запуском конструктора по умолчанию
    Node(T data = T(), Node *ptr_next = nullptr) : data(data) // по умолчанию передаем nullptr для случая добавления посл элемента
    {
        this->ptr_next = ptr_next;
    }
};
template <class T>
class List
{

    Node<int> *node; // узел данных int (жесткая привязка к данным) Решение: шаблонный класс
    Node<T> *head;   // указатель на головной эл-т (тк дин память)
    int size;

public:
    List()
    {
        size = 0; // при создании обнуляем кол-во
        head = nullptr;
    }
    ~List()
    {
        clear();
    }

    void push_front(T value)
    {
        head = new Node<T>(value, heads);
        size++;
    }

    void pop_front()
    {
        if (head == nullptr)
        {
            cout << "Контейнер пуст" << endl;
        }
        else
        {
            Node<T> *temp = this->head;
            head = temp->ptr_next;
            delete temp;
            size--;
        }
    }
    void pop_back()
    {
        if (head == nullptr)
        {
            cout << "Контейнер пуст" << endl;
        }
        else
        {
            Node<T> *temp = this->head;
            int cnt = size;
            while (temp->ptr_next != nullptr)
            {
                temp = temp->ptr_next;
            }
            delete temp;
            size--;
        }
    }

    void push_back(T information)
    {
        if (head == nullptr)
        {
            head = new Node<T>(information);
        }
        else
        {
            Node<T> *temp = this->head;
            while (temp->ptr_next != nullptr)
            {
                temp = temp->ptr_next; // перезод на след элемент по его указателю
            }
            temp->ptr_next = new Node<T>(information);
        }
        size++;
    }

    int getS()
    {
        return size;
    }

    T &operator[](const int index)
    {
        Node<T> *current = this->head;
        int cnt = 0;
        while (current != nullptr)
        {
            if (cnt == index)
            {
                return current->data;
            }
            current = current->ptr_next;
            cnt++;
        }
    }

    void clear()
    {
        while (size)
        {
            pop_front();
        }
    }
};

int main()
{
    List<int> spis;
    spis.push_back(15);
    spis.push_back(10);
    spis.push_back(5);
    // cout << spis.getS() << endl;

    // cout << spis[0] << endl;

    for (int i = 0; i < spis.getS(); i++)
    {
        cout << spis[i] << endl;
    }

    cout << "Всего элементов: " << spis.getS() << endl;

    spis.pop_front();
    for (int i = 0; i < spis.getS(); i++)
    {
        cout << spis[i] << endl;
    }

    cout << "Всего элементов: " << spis.getS() << endl;

    spis.pop_back();
    for (int i = 0; i < spis.getS(); i++)
    {
        cout << spis[i] << endl;
    }

    cout << "Всего элементов: " << spis.getS() << endl;
}