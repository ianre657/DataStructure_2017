#ifndef _GRAPH_HPP_
#define  _GRAPH_HPP_

class Graph{

    public:
        //virtual destructor 
    virtual ~Graph(){};

    bool isEmpty() const{ return n==0;};

    int numOfVertices() const{ return n;} ;

    int numOfEdges() const{ return e;};

    virtual int degree(int u) const =0;
    
    virtual bool existEdge(int u, int v)const =0;

    virtual void insertVertex( int u, int v )const =0; 
    
    virtual void deleteVertex( int v )const =0; 
    
    virtual void deleteEdge( int u, int v) const =0; 
    

    protected:
        int n;
        int e;

};

#endif

