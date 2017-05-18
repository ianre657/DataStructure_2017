#ifndef _MAX_PQ_H__
#define _MAX_PQ_H__

#include<cstddef>
#include <stdexcept>

template< typename T>
class MaxPriorityQueue{
    public:
    virtual ~MaxPriorityQueue();
    virtual bool IsEmpty() const =0;
    virtual const T& Top() const=0;
    virtual void Push( const T&)=0;
    virtual void Pop()=0;
};

template<typename T>
class MaxHeap: public MaxPriorityQueue<T>{
public:
    MaxHeap( int _capacity =10 );

    bool IsEmpty() const override { return heapSize==0; };

    const T& Top() const override { return heap[1]; }; 

    void Push( const T&) override ;

    void Pop( void ) override ;

protected:
    T * heap;
    size_t heapSize;
    size_t capacity;
};

template<typename T>
MaxHeap<T>::MaxHeap( int _capacity ){
    if( _capacity <1 ) throw std::runtime_error("Capacity must be >=1.");
    capacity = _capacity;
    heapSize = 0;
    heap = new T[capacity+1];// heap[0] is not used.
}

template<typename T>
void MaxHeap<T>::Push( const T&){
    
}

template<typename T>
void MaxHeap<T>::Pop( void ){
    
}

#endif