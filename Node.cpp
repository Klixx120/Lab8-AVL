

#include "Node.h"

Node::Node() {
  data = 0;
  left = NULL;
  right = NULL;
  height = 0;

}

Node::Node(int userdata) {
  data = userdata;
  left = NULL;
  right = NULL;
  height = 0;

}

Node::~Node(){
  delete left;
  delete right;
  left = NULL;
  right = NULL;

}

	/*
	* Returns the data stored in this node
	*
	* @return the data stored in this node.
	*/
int Node::getData() const{
  return data;
}

	/*
	* Returns the left child of this node or null if empty left child.
	*
	* @return the left child of this node or null if empty left child.
	*/
Node* Node:: getLeftChild() const{
 return left;
}

	/*
	* Returns the right child of this node or null if empty right child.
	*
	* @return the right child of this node or null if empty right child.
	*/
Node* Node::getRightChild() const{
  return right;
}

	/*
	* Returns the height of this node. The height is the number of nodes
	* along the longest path from this node to a leaf.  While a conventional
	* interface only gives information on the functionality of a class and does
	* not comment on how a class should be implemented, this function has been
	* provided to point you in the right direction for your solution.  For an
	* example on height, see page 448 of the text book.
	*
	* @return the height of this tree with this node as the local root.
	*/
int Node::getHeight(){
  return height;
}

void Node::setHeight(int newHeight){
  height = newHeight;
}
