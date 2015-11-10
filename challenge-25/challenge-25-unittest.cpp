/*
 * Programming Challenge 25
 */
#include "bstree.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
 
#include <sstream>
using namespace std;

TEST_CASE ("binary search tree functionality including in -order traversal") {
	BSTree tree;

	SECTION("binary search tree in-order traversals") {
		ostringstream ss;

		REQUIRE(tree.getSize() == 0);

		tree.insert(50);
		REQUIRE(tree.getSize() == 1);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "50 ");

		ss.str("");
		tree.insert(20);
		REQUIRE(tree.getSize() == 2);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "20 50 ");

		ss.str("");
		tree.insert(80);
		REQUIRE(tree.getSize() == 3);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "20 50 80 ");

		ss.str("");
		tree.insert(30);
		REQUIRE(tree.getSize() == 4);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "20 30 50 80 ");

		ss.str("");
		tree.insert(70);
		REQUIRE(tree.getSize() == 5);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "20 30 50 70 80 ");

		ss.str("");
		tree.insert(0);
		REQUIRE(tree.getSize() == 6);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "0 20 30 50 70 80 ");

		ss.str("");
		tree.insert(100);
		REQUIRE(tree.getSize() == 7);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "0 20 30 50 70 80 100 ");

		REQUIRE(tree.insert(50) == false);

		tree.clear();
		REQUIRE(tree.getSize() == 0);
	}

	SECTION("binary search tree insert stress test") {
		int testValues[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
		for (unsigned int i=0; i<10; i++) {
			REQUIRE(tree.insert(testValues[i]) == true);
			REQUIRE(tree.insert(testValues[i]) == false);
		}
	}
}
