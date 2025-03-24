#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void appendLast(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void removeLast()
    {
        if (head == nullptr)
        {
            std::cout << "List is empty." << std::endl;
            return;
        }

   
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }


        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main()
{
    LinkedList list;
    list.appendLast(1);
    list.appendLast(2);
    list.appendLast(3);
    list.appendLast(4);
    list.appendLast(5);
    list.display();
    list.removeLast();
    list.display();
    return 0;
}