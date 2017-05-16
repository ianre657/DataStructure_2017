#ifndef _BINARY_TREE_
#define _BINARY_TREE_

/** Base type of the Binary tree (Pure virtual) 
*/
template<typename T>
class BinaryTree{
public:

  //Creates an empty Binary tree 
  BinaryTree();
   
  //Creates a binaryTree with left SubTree named leftT, 
  //right SubTree named rightT  
  BinaryTree( BinaryTree<T>& leftT, T&item, BinaryTree<T>& rightT );

   //Return "true" 
  virtual bool IsEmpty();

  //Return the left subtree of *this
  virtual BinaryTree<T> LeftSubtree()=0;

  //Return the right subtree of *this
  virtual BinaryTree<T> RightSubtree()=0;

  //Return the data in the root node of *this
  virtual T RootData()=0; 
};    

template<typename T>
class BinaryTree_Linked: public BinaryTree<T>{
    public:
    BinaryTree_Linked();
    ~BinaryTree_Linked();
    bool IsEmpty() override;
    BinaryTree_Linked<T> LeftSubTree() override ;
    BinaryTree_Linked<T> RightSubTree() override;
    T RootData() override;
};
template<typename T>
class BinaryTree_Array: public BinaryTree<T>{
    public:
    BinaryTree_Array();
    ~BinaryTree_Array();
    bool IsEmpty() override;
    BinaryTree_Array<T> LeftSubTree() override ;
    BinaryTree_Array<T> RightSubTree() override;
    T RootData() override;
};


#endif 
