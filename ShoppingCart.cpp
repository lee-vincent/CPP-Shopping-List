//
//  ShoppingCart.cpp
//  week8
//
//  Created by Vincent Lee on 5/25/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include "ShoppingCart.h"


ShoppingCart::ShoppingCart() {
    
    for(int i = 0; i < 100; i++) {
        array[i] = NULL;
    }
    
    arrayEnd = 0;

}

    
void ShoppingCart::addItem(Item *item) {
    array[arrayEnd] = item;
    arrayEnd++;
}
    
double ShoppingCart::totalPrice() {
    double total = 0;
    for(int i = 0; i < arrayEnd; i++) {
        total += array[i]->getPrice() * array[i]->getQuantity();
    }
    
    return total;


}
    
    