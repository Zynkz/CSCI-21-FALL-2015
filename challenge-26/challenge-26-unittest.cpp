/*
 * Programming Challenge 26
 */
#include "bstree.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <sstream>
using std::ostringstream;

TEST_CASE ("binary search tree remove functionality") {
	BSTree tree;
	ostringstream ss;

	SECTION ("insert/one remove one node") {
		tree.insert(10);
		REQUIRE(tree.getSize() == 1);
		tree.inOrder(ss);
		REQUIRE(ss.str() == "10 ");
		tree.remove(10);
		REQUIRE(tree.getSize() == 0);
		ss.str("");
		tree.inOrder(ss);
		REQUIRE(ss.str() == "");
	}		

	SECTION ("remove one node at different locations in the tree") {
		tree.insert(10);
		tree.insert(5);
		tree.insert(15);

		SECTION ("remove non-existent target") {
			REQUIRE(tree.remove(1) == false);
			tree.inOrder(ss);
			REQUIRE(ss.str() == "5 10 15 ");
		}

		SECTION ("remove left child") {
			REQUIRE(tree.remove(5) == true);
			REQUIRE(tree.getSize() == 2);
			tree.inOrder(ss);
			REQUIRE(ss.str() == "10 15 ");
		}

		SECTION ("remove right child") {
			REQUIRE(tree.remove(15) == true);
			REQUIRE(tree.getSize() == 2);
			tree.inOrder(ss);
			REQUIRE(ss.str() == "5 10 ");
		}

		SECTION ("remove root (has left child)") {
			REQUIRE(tree.remove(10) == true);
			REQUIRE(tree.getSize() == 2);
			tree.inOrder(ss);
			REQUIRE(ss.str() == "5 15 ");
		}

		SECTION ("remove root (no left child)") {
			REQUIRE(tree.remove(5) == true);
			REQUIRE(tree.remove(10) == true);
			REQUIRE(tree.getSize() == 1);
			tree.inOrder(ss);
			REQUIRE(ss.str() == "15 ");
		}
	}
}
