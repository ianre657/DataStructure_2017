#ifndef _MAX_PQ_H__
#define _MAX_PQ_H__
#include<cstddef>

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
    bool IsEmpty() override;
    const T& Top() override;
    void Push( const T&) override ;
    void Pop() override ;
protected:
    T * heap;
    size_t heapSize;
    size_t capacity;
};


#endif