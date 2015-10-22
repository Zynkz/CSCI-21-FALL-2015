/*
 * Programming Challenge 24
 */

#include "BSTNode.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

void updateContents (int& contents, int newContents)
{
	contents = newContents;
}

void updateLink (BSTNode*& link, BSTNode* newLink)
{
	link = newLink;
}

TEST_CASE ("BSTNode basic functionality") {
	BSTNode node1;
	BSTNode node2(99);
	BSTNode node3(-1);

	REQUIRE(node1.getContents() == 0);
	REQUIRE(node1.getLeftChild() == NULL);
	REQUIRE(node1.getRightChild() == NULL);

	REQUIRE(node2.getContents() == 99);
	REQUIRE(node2.getLeftChild() == NULL);
	REQUIRE(node2.getRightChild() == NULL);

	node1.setLeftChild(&node2);
	REQUIRE(node1.getLeftChild() == &node2);

	node1.setRightChild(&node3);
	REQUIRE(node1.getRightChild() == &node3);

	updateLink(node1.getLeftChild(), &node3);
	updateLink(node1.getRightChild(), &node2);
	REQUIRE(node1.getLeftChild() == &node3);
	REQUIRE(node1.getRightChild() == &node2);

	node1.setContents(42);
	REQUIRE(node1.getContents() == 42);

	updateContents(node1.getContents(), 24);
	REQUIRE(node1.getContents() == 24);	
}
