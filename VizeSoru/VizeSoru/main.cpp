//
//  main.cpp
//  VizeSoru
//
//  Created by Onur Pisirir on 28.11.2019.
//  Copyright © 2019 Onur Pisirir. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, c;
    a = 30; b = 40;
    if (a % b == 0)
    c = 1;
    else if (b % a == 0)
    c = 2;
    else if (a % b != 0 || b % a != 0)
    c=3;
    else
    {
    c=4;
          }
    cout<<c;
        
  
    
}
