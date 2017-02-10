//
//  Item.cpp
//  week8
//
//  Created by Vincent Lee on 5/24/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include "Item.h"




Item::Item() {
    name = "";
    price = 0.0;
    quantity = 0;
}

Item::Item(std::string n, double p, int q) {
    name = n;
    price = p;;
    quantity = q;
}



double Item::getPrice() {
    return price;
}

void Item::setPrice(double thePrice) {
    price = thePrice;
}

std::string Item::getName() {
    return name;
}

int Item::getQuantity() {
    return quantity;
}
