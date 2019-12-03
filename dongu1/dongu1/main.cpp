//
//  main.cpp
//  dongu1
//
//  Created by Onur Pisirir on 3.12.2019.
//  Copyright © 2019 Onur Pisirir. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    
    int i;
    double ciftsay=0,cifttoplam=0,tektoplam=0,teksay=0;
    int baslangic,limit;
    cout<<"baslangıç sayısı girin:";cin>>baslangic;
    cout<<"son sayıyı girin:";cin>>limit;
    
    
   /* for  (i = baslangic; i < limit; i++)
    {
        if (i%2==0)
        {
            cifttoplam=cifttoplam+i;
            ciftsay++;
        }
        else
        {
            tektoplam=tektoplam + i;
            teksay++;
        }
        
        
        
    }
    */
    
    while (baslangic<limit) {
        baslangic++;
        if (baslangic%2==0)
        {
            cifttoplam=cifttoplam+baslangic;
            ciftsay++;
        }
        else
        {
            tektoplam=tektoplam + baslangic;
            teksay++;
        }
        
        
    }
    
    cout<<"tek sayıların toplamı:"<<tektoplam<<endl;
    cout<<"cift sayilarin toplamı:"<<cifttoplam<<endl;
    cout<<"tek sayıların sayısı:"<<teksay<<endl;
    cout<<"çift sayıların sayısı:"<<ciftsay<<endl;

    
    return 0;
}
