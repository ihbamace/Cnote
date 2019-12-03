//
//  main.cpp
//  SayiDemo
//
//  Created by Onur Pisirir on 3.12.2019.
//  Copyright © 2019 Onur Pisirir. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int sayi,toplam=0;
    
    do {
        
        cout<<"Bir sayı giriniz:";cin>>sayi;
        
        toplam=toplam+sayi;
        
        
    } while (sayi !=-2);
    
    cout<<"Girilen sayıların toplamı:"<<toplam<<endl;
    
    
    
    return 0;
}
