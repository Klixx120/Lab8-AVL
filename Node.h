#pragma once
#include "NodeInterface.h"
#include <cstddef>
using namespace std;

class  Node : public NodeInterface {
private:
  int data;
  Node* left;
  Node* right;
  int height;

public:
	Node();
  Node(int userdata);
	~ Node();

	/*
	* Returns the data stored in this node
	*
	* @return the data stored in this node.
	*/
	  int getData() const;

	/*
	* Returns the left child of this node or null if empty left child.
	*
	* @return the left child of this node or null if empty left child.
	*/
	   Node * getLeftChild() const;

	/*
	* Returns the right child of this node or null if empty right child.
	*
	* @return the right child of this node or null if empty right child.
	*/
	   Node * getRightChild() const;

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
	  int getHeight();
};
