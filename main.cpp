//
//  main.cpp
//  homework 1
//
//  Created by Mert Güngör on 16.10.2024.
//





// hiddenlar failliyor sanırım aynı indirim falan filan muhabbetleri var

#include <iostream>
using namespace std;

int main(){
    string yes, doner, fries, ayran, baklava;
    float indirimli = 0, hesapla = 0, indirimsiz = 0, donern = 0, friesn = 0, ayrann = 0, baklavan = 0, indirimsizsizayran = 0;
    bool combo = false;
    bool discount = false;
    
    cout<< "Welcome to the Restaurant Order Program!" << endl;
    
    
    cout << "We offer Doner Kebab, French Fries, Ayran, and Baklava.";
    cout << " Special meal deals and discounts await you!" << endl;
    hesapla = 0;
    indirimsiz = 0;
    cout << "Do you want Doner Kebab? ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many Doner Kebabs do you want? ";
        cin >> donern;
        doner = donern;
        if (donern >= 5)          
        {
            
            combo = true;
          
        }
        indirimli = indirimli + donern*200;
        indirimsiz += (donern*200);

        
    }
    
    //cout << indirimsiz-indirimli << endl;
    //cout << indirimli << endl;
    cout << "Do you want French Fries? ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many French Fries do you want? ";
        cin >> friesn;
        fries = friesn;
        
        
        //indirimsiz += (hesapla*72);
        
    }
    //cout << indirimsiz-indirimli << endl;
    //cout << indirimli << endl;
    cout << "Do you want Ayran? ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many Ayrans do you want? ";
        cin >> indirimsizsizayran;
        ayrann = indirimsizsizayran;
        indirimli = indirimli + ayrann*30;
        
        if (combo == true)
        {   
            
            if (!(donern > 0) || !(friesn > 0) || !(indirimsizsizayran > 0)){
                //cout << ayrann << endl;
                ayrann = ayrann + 2;
                //cout << ayrann << endl;
                discount = true;
                

                discount = true;
                if (friesn > 0){
                    indirimli = indirimli + ((friesn*72)*0.75);
                    indirimsiz += (friesn*72);

                }
                
                
                 
                ////cout << indirimli << endl;
            }
            else
            {   
                if (friesn > 0){
                    indirimli = indirimli + (friesn*72);
                    indirimsiz += (friesn*72);

                }
                
                
                
            
            }
        }
        else
        {   
            if (friesn > 0){
                indirimli = indirimli + (friesn*72);
                indirimsiz += (friesn*72);
            }
            
            
            
        
        }    
        
    
        
        
        
        indirimsiz = indirimsiz + (ayrann*30);
        
      
    }
    //cout << indirimsiz-indirimli << endl;
    //cout << indirimli << endl;
    cout << "Do you want Baklava? ";
    cin >> yes;
    
    if (yes == "yes"){
        cout << "How many Baklavas do you want? ";
        cin >> baklavan;
        //baklava = baklavan;
        

    }
    bool sonunda = false;
    //cout << indirimli << endl;
    if (donern > 0 && friesn > 0 && indirimsizsizayran > 0 ){
        sonunda = true;
        //cout << indirimli << endl;
        indirimli = indirimli*0.80;
        //cout << indirimli << endl;
    }
    
    if (baklavan < 4 && (baklavan > 0)) {
        indirimli = indirimli + (baklavan*219);
        indirimsiz = indirimsiz + (baklavan*219);
    }
    if (sonunda) {
        hesapla = 0;
    }

    else if (baklavan >= 4){

        indirimli = indirimli + ((baklavan*219)*0.9);
        indirimsiz = indirimsiz + (baklavan*219);
        discount = true;
            
    }
    
    
    
    else if (indirimsiz >= 1500){
        indirimli= indirimli- (indirimli*0.05);
        //cout << "Cha12312nge: " << indirimsiz << " TL" << endl;
        
    }
    
    cout << "Enter the amount of money the customer has: ";
    cin >> hesapla;
    
    
    if (hesapla >= indirimli){
        cout << endl;
        cout << "--- Invoice Summary ---" << endl;
        if (donern > 0){
            cout << "Doner Kebab: " << donern << " x 200 TL" << endl;
            
            
        }
        if (friesn > 0){
            cout << "French Fries: " << friesn << " x 72 TL" << endl;
            
            
        }
        if (ayrann > 0){
            cout << "Ayran: " << ayrann << " x 30 TL" << endl;
            
            
        }
        if (baklavan > 0){
            cout << "Baklava: " << baklavan << " x 219 TL" << endl;
            
            
        }
        float idal = 0;
       
        idal = hesapla-indirimli;
        cout << "Total Discount: " << indirimsiz-indirimli << " TL" << endl;
        cout << "Total Cost: " << hesapla-idal << " TL" << endl;
        cout << "Amount Paid: " << hesapla << " TL" << endl;
        
        
        cout << "Change: " << idal << " TL" << endl;
        
        
        
       
    
    }
    
    
    else{
        
        cout << "Unfortunately, you do not have enough money to complete this order.";
        cout << " You are missing: " << indirimli-hesapla << " TL";
    }
    //cout << "Thank you for using the Restaurant Order Program!" << endl;
    return 0;
    
    
    
    
}



    

    

