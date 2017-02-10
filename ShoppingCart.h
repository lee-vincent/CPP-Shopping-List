//
//  ShoppingCart.h
//  week8
//
//  Created by Vincent Lee on 5/25/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#ifndef __week8__ShoppingCart__
#define __week8__ShoppingCart__

#include "item.h"


class ShoppingCart {


private:
    Item *array[100];
    int arrayEnd;
    
    
public:
    ShoppingCart();

    void addItem(Item *item);
    
    double totalPrice();
    
    





};

















#endif /* defined(__week8__ShoppingCart__) */
