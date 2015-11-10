/*
 * Programming Challenge 28
 */
#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

#include "item.h"
#include "fooditem.h"
#include "magicitem.h"

TEST_CASE ("Item/FoodItem/MagicItem class functionality") {
	SECTION("Item, default constructor") {
		Item item;
		REQUIRE(item.getName() == "item");
		REQUIRE(item.getValue() == 0);
		REQUIRE(item.toString() == "item, $0");

		item.setName("car");
		item.setValue(35000);
		REQUIRE(item.getName() == "car");
		REQUIRE(item.getValue() == 35000);
		REQUIRE(item.toString() == "car, $35000");		
	}

	SECTION("Item, overloaded constructor") {
		Item mItem("game", 25);
		REQUIRE(mItem.toString() == "game, $25");
	}

	SECTION("FoodItem, default constructor") {
		FoodItem foodItem;
		REQUIRE(foodItem.getName() == "fooditem");
		REQUIRE(foodItem.getValue() == 0);
		REQUIRE(foodItem.toString() == "fooditem, $0, 0.00 nounits, 0 calories");
		REQUIRE(foodItem.getUnitOfMeasure() == "nounits");
		REQUIRE(foodItem.getCalories() == 0);
		REQUIRE(foodItem.getUnits() == 0);

		foodItem.setName("cupcake");
		foodItem.setValue(5);
		foodItem.setUnitOfMeasure("cake(s)");
		foodItem.setUnits(1.5);
		foodItem.setCalories(200);
		REQUIRE(foodItem.getName() == "cupcake");
		REQUIRE(foodItem.getValue() == 5);
		REQUIRE(foodItem.toString() == "cupcake, $5, 1.50 cake(s), 200 calories");
		REQUIRE(foodItem.getUnitOfMeasure() == "cake(s)");
		REQUIRE(foodItem.getCalories() == 200);
		REQUIRE(foodItem.getUnits() == 1.5);
	}

	SECTION("FoodItem, overloaded constructor") {
		FoodItem mFoodItem("coffee", 1, 10, "ounces", 10.25);
		REQUIRE(mFoodItem.toString() == "coffee, $1, 10.25 ounces, 10 calories");
	}

	SECTION("MagicItem, default constructor") {
		MagicItem magicItem;
		REQUIRE(magicItem.getDescription() == "no description");
		REQUIRE(magicItem.getManaRequired() == 0);

		magicItem.setName("wand");
		magicItem.setValue(1000);
		magicItem.setDescription("jewel-encrusted");
		magicItem.setManaRequired(50);
		REQUIRE(magicItem.getName() == "wand");
		REQUIRE(magicItem.getValue());
		REQUIRE(magicItem.getDescription() == "jewel-encrusted");
		REQUIRE(magicItem.getManaRequired() == 50);
		REQUIRE(magicItem.toString() == "wand, $1000, jewel-encrusted, requires 50 mana");
	}

	SECTION("MagicItem, overloaded constructor") {
		MagicItem mMagicItem("staff", 999, "carved wood", 125);
		REQUIRE(mMagicItem.toString() == "staff, $999, carved wood, requires 125 mana");
	}
}
