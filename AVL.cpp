


#include "AVL.h"


AVL::AVL(){
  root = NULL;
}
AVL::~AVL(){
  delete root;
  root = NULL;
}

int AVL::balance(){
  int balanceNum = 0;

  return balanceNum;
}
//Please note that the class that implements this interface must be made
//of objects which implement the Node

/*
* Returns the root node for this tree
*
* @return the root node for this tree.
*/
Node * AVL::getRootNode() const{
  return root;
}

/*
* Attempts to add the given int to the AVL tree
* Rebalances the tree if data is successfully added
*
* @return true if added
* @return false if unsuccessful (i.e. the int is already in tree)
*/
bool AVL::add(int data){

  // If root does not exist, create new root node
  //with the data
  if (root == NULL){
    root = new Node(data);
    return true;
  }

  // If the root data is equal to given data, return False
  if (root->getData() == data){
    return false;
  }

  // If data is less than the root's data,
  // move to the left child
  if (data < root->getData()){

    // create new node called left and set to roots left
    Node* left = root->getLeftChild();

    // if there is a left child,
    //root beocomes left and add runs again
    if (left != NULL){
      root = left;
      return add(data);
    }

    // if there is no more left children
    // the data becomes the left child of the last node
    else if (left == NULL){
      left = new Node(data);
      return true;
    }
  }

  // repeat for the right side
  if (data > root->getData()){

    // create new node called right and set to roots right
    Node* right = root->getRightChild();

    // if there is a right child,
    //root beocomes right and add runs again
    if (right != NULL){
      root = right;
      return add(data);
    }

    // if there is no more right children
    // the data becomes the right child of the last node
    else if (right == NULL){
      right = new Node(data);
      return true;
    }
  }
}

/*
* Attempts to remove the given int from the AVL tree
* Rebalances the tree if data is successfully removed
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool AVL::remove(int data){

}

/*
* Removes all nodes from the tree, resulting in an empty tree.
*/
void AVL::clear(){

}
