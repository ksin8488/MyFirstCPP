//
//  main.cpp
//  MyFirstCPP
//
//  Created by Singh, Kashish on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include <iostream>

using namespace std;    //standard library that removes the need for std::

int main() {
    // insert code here...
    cout << "Hello, World!" << endl;
    string input;
    getline(cin, input);
    cout << "You said: " << input << endl;
    return 99;
}
