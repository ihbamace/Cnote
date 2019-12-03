//
//  main.cpp
//  Ornek
//
//  Created by Onur Pisirir on 23.10.2019.
//  Copyright © 2019 Onur Pisirir. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    
  
        int a, b, c; a = 30; b = 40; if (a % b == 0)
            c = 1; else if (b % a == 0)
                c = 2; else if (a % b != 0 || b % a != 0) c=3; else c=4;
    cout<<”c:"<<c;
    

    
    
    double dikdortgenAlan,kareAlan,daireAlan,yaricap,a,b;
    double dikdortgenCevre,kareCevre,cemberCevre;
    char secim;
    
    cout<< "(a) Kare Hesaplaması   (b) Dikdortgen Hesaplaması (c) Cember Hesaplaması  Secim?";
    cin>>secim;
    
    if(secim=='a')
    {
        cout<<"kenar uzunluğu giriniz:";
        cin>>a;
        kareAlan=a*a;
        kareCevre=4*a;
        cout<<"Karenin alanı:"<<kareAlan<<endl;
        cout<<"Karenin çevresi:"<<kareCevre<<endl;
        
    }
   else if(secim=='b')
    {
        cout<<"uzun kenar giriniz:";
        cin>>a;
         cout<<"kısa kenar giriniz:";
        cin>>b;
        dikdortgenAlan=a*b;
        dikdortgenCevre=(a+b)*2;
        cout<<"Dikdortgenin alani:"<<dikdortgenAlan<<endl;
        cout<<"Dikdortgenin çevresi:"<<dikdortgenCevre<<endl;
        
    }
   else if(secim=='c')
   {
       cout<<"yaricap giriniz:";
       cin>>yaricap;
       daireAlan=3.14*yaricap*yaricap;
       cemberCevre=2*3.14*yaricap;
       cout<<"Dairenin alani:"<<daireAlan<<endl;
       cout<<"Çember çevre:"<<cemberCevre<<endl;
       
   }
    
    
    
    
    return 0;
}
