//
//  main.cpp
//  DikdortgenAlan
//
//  Created by Onur Pisirir on 9.10.2019.
//  Copyright © 2019 Onur Pisirir. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
  //bu program dikdörtgen alanı hesaplar.
    
    int kisaKenar;
    int uzunKenar;
    int alan;
    
    cout<<"Kısa kenarı giriniz:";
    cin>>kisaKenar;
    
    cout<<"Uzun kenarı giriniz:";
    cin>>uzunKenar;
    
    alan=uzunKenar*kisaKenar;
    
    cout<<"Dikdörtgenin alanı:";
    cout<<alan;
    
    
    
    
    
    return 0;
}
