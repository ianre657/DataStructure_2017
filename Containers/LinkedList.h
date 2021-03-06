#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
using namespace std;

template<typename T>
class Node{
public: 
    T element;
    Node<T>* next;
//Default constructor 
    Node()
    {
        next = nullptr;
    }
    Node(const T & element, Node<T>*n=NULL)
    {
        this->element = element ;
        this->next = n ; 
    }
};

template<typename T>
class LinkedList
{
public:
    LinkedList();
    LinkedList(LinkedList<T>& list);
    virtual ~LinkedList();
    void addFirst(T element);
    void addLast(T element);
    T getFirst() const;
    T getLast() const;
    T removeFirst() throw (runtime_error);
    T removeLast();
    void add(T element);
    void add(int index, T element);
    void clear();
    bool contains(T element) const;
    T get(int index) const;
    int indexOf(T element) const;
    bool isEmpty() const;
    int lastIndexOf(T element) const;
    void remove(T element);
    int getSize() const;
    T removeAt(int index);
    T set(int index, T element);
private:
    Node<T> *head;
    Node<T> *tail;
    int size ;
};

template<typename T>
LinkedList<T>::LinkedList(){
    head = tail = nullptr;
    size = 0;
}

template<typename T>
LinkedList<T>::LinkedList(LinkedList<T>& list)
{
    head = tail = nullptr;
    LinkedList<T>current;
    for( current = list.head ; current  != NULL ; current =current->next){
        this->addLast( current->element ); 
    }
    size = list.size ; 
}
template<typename T>
LinkedList<T>::~LinkedList(){
     clear();
 }

template<typename T>
void LinkedList<T>::addLast( T element ){
    


}
/*
LinkedList(LinkedList<T>& list);
    virtual ~LinkedList();
    void addFirst(T element);
    void addLast(T element);
    T getFirst() const;
    T getLast() const;
    T removeFirst() throw (runtime_error);
    T removeLast();
    void add(T element);
    void add(int index, T element);
    void clear();
    bool contains(T element) const;
    T get(int index) const;
    int indexOf(T element) const;
    bool isEmpty() const;
    int lastIndexOf(T element) const;
    void remove(T element);
    int getSize() const;
    T removeAt(int index);
    T set(int index, T element);
*/

#endif

