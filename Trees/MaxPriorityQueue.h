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

    bool IsEmpty() const override { return _heapSize==0; };

    size_t size() const{ return _heapSize;};
    size_t capacity() const{ return capacity;};
    
    void clear();
    
    bool reserve( size_t ); 

    bool existElement( const T & )const{};

    MaxHeap<T>& operator=( const MaxHeap<T> &); 

    const T& top() const override { return _heap[1]; }; 

    void push( const T&) override ;

    void pop( void ) override ;

 
protected:
    T * _heap;
    size_t _heapSize;
    size_t _capacity;
};

template<typename T>
MaxHeap<T>::MaxHeap( int _capacity ){
    if( _capacity <1 ) throw std::runtime_error("Capacity must be >=1.");
    _capacity = _capacity;
    _heapSize = 0;
    _heap = new T[_capacity+1];// heap[0] is not used.
}

template<typename T>
void MaxHeap<T>::push( const T&){
    
}

template<typename T>
void MaxHeap<T>::pop( void ){
    
}

#endif