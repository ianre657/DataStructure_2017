#ifndef _BINARY_TREE_
#define _BINARY_TREE_

template<typename T>
class BinaryTree{
public:
  BinaryTree();
  BinaryTree( BinaryTree<T>& bt1, T&item, BinaryTree<T>& bt2 );
  virtual bool IsEmpty();
  virtual BinaryTree<T> LeftSubtree()=0;
  virtual BinaryTree<T> RightSubtree()=0;
  virtual T RootData()=0; 
};    
#endif 
