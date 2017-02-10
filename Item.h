//
//  Item.h
//  week8
//
//  Created by Vincent Lee on 5/24/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#ifndef __week8__Item__
#define __week8__Item__

#include <stdio.h>
#include <string>

class Item {

private:
    std::string name;
    double price;
    int quantity;
    


public:
    
    Item();
    Item(std::string n, double p, int q);
    
    
    double getPrice();
    void setPrice(double thePrice);

    std::string getName();
    void setName(std::string str);

    int getQuantity();
    void setQuantity(int qty);

};






#endif /* defined(__week8__Item__) */
