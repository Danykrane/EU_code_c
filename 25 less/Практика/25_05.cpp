#include <iostream>
#include <string>
#include <random>
using namespace std;
class Node
{
public:
    string val;
    Node *Left;
    Node *Right;

    Node()
    {

        Left = nullptr;
        Right = nullptr;
    }
};
class BinTree
{
    Node *Top;
    void SortOutUp(Node *tmp)
    {
        if (tmp->Left != nullptr)
        {

            SortOutUp(tmp->Left);
        }
        cout << tmp->val << endl;
        if (tmp->Right != nullptr)
        {

            SortOutUp(tmp->Right);
        }
    }
    void SortOutDown(Node *tmp)
    {
        if (tmp->Right != nullptr)
        {

            SortOutDown(tmp->Right);
        }
        cout << tmp->val << endl;

        if (tmp->Left != nullptr)
        {

            SortOutDown(tmp->Left);
        }
    }

    void Recshow(Node *tmp, string str = "")
    {

        cout << str << " " << tmp->val << endl;
        if (tmp->Left != nullptr)
        {
            //
            str += "L";
            Recshow(tmp->Left, str);
        }
        if (tmp->Right != nullptr)
        {
            str += "R";
            Recshow(tmp->Right, str);
        }
    }
    void RecDel(Node *&tmp)
    {
        if (tmp->Left != nullptr)
        {

            RecDel(tmp->Left);
        }
        if (tmp->Right != nullptr)
        {

            RecDel(tmp->Right);
        }
        delete tmp;
        tmp = nullptr;
    }

public:
    BinTree()
    {
        Top = nullptr;
    }
    void Add(string s)
    {
        Node *cur = nullptr;
        Node *tmp = new Node();
        tmp->val = s;
        cur = Top;
        if (Top == nullptr)
        {
            Top = tmp;
            return;
        }
        Node *prev = cur;
        while (cur != nullptr)
        {
            prev = cur;
            // Если элемент оказался больше корня, то иду направо
            if (s > cur->val)
            {
                // prev->Right = cur;
                cur = cur->Right; // �дем направо
            }
            else
            {
                // prev->Left = cur;
                cur = cur->Left;
            }
        }

        cur = tmp;
        if (s > prev->val)
        {
            prev->Right = cur;
        }
        else
        {
            prev->Left = cur;
        }
    }

    void Show()
    {
        Recshow(Top);
    }
    void ShowUp()
    {
        SortOutUp(Top);
    }
    void ShowDown()
    {
        SortOutDown(Top);
    }
    void Free()
    {
        RecDel(Top);
    }
};

int main()
{
    BinTree b;
    for (int i = 0; i < 10; i++)
    {
        b.Add(to_string(rand() % 10));
    }
    b.Show();
    b.Free();

    system("pause");

    return 0;
}