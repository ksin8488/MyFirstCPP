//
//  Runner.cpp
//  MyFirstCPP
//
//  Created by Singh, Kashish on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

//#include <iostream> if you want printing

#include "Controller.hpp"
int main()
{
    Controller app; //declares an object and instantiates it at once
    app.start();
    
    Controller * appPointer = new Controller();
    appPointer->start();  //(*appPoinr).start(); is exactly the same but the longer way
    return 0;
}
