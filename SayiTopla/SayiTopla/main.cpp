//
//  main.cpp
//  SayiTopla
//
//  Created by Onur Pisirir on 9.10.2019.
//  Copyright © 2019 Onur Pisirir. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
   //burası açıklama satırıdır, burada kod çalışmaz.
    
    cout<<"Bu program iki sayi toplar";
    
    int sayi1;
    int sayi2;
    int toplam;
    
    
    cout<<"birinci sayıyı giriniz:";cin>>sayi1;
    cout<<"ikinci sayıyı giriniz:";cin>>sayi2;
    
    
    toplam=sayi1+sayi2;
    
    cout<<"iki sayının toplamı:"<<toplam;
    
    return 0;
}
