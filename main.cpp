//
//  main.cpp
//  homework 1
//
//  Created by Mert on 16.10.2024.
//






#include <iostream>
using namespace std;

int main(){
    string yes, doner, fries, ayran, baklava;
    double indirimli = 0, hesapla = 0, indirimsiz = 0, donern = 0, friesn = 0, ayrann = 0, baklavan = 0, indirimsizsizayran = 0;
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
    }
    
    //cout << indirimsiz-indirimli << endl;
    //cout << indirimli << endl;
    cout << "Do you want French Fries? ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many French Fries do you want? ";
        cin >> friesn;
        fries = friesn;   
    }
    //cout << indirimsiz-indirimli << endl;
    //cout << indirimli << endl;
    cout << "Do you want Ayran? ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many Ayrans do you want? ";
        cin >> indirimsizsizayran;
        ayrann = indirimsizsizayran; 
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

    double uclu = donern*200 + friesn*72 + indirimsizsizayran*30;
    indirimsiz += baklavan*219;
    indirimsiz += uclu;
    
    //cout << indirimli << endl;
    if (donern > 0 && friesn > 0 && indirimsizsizayran > 0 ){
        sonunda = true;
        //cout << indirimli << endl;
        indirimli = uclu*0.20;
        
        //cout << indirimli << endl;
        
    }
    
    else if (donern >= 5){
        ayrann+=2;
        indirimsiz+= 60;
        indirimli += 60;
        if (friesn > 0){
            indirimli+= friesn*72*0.15;
        }


    }
    
    else if (baklavan >= 4){

        indirimli = indirimli + ((baklavan*219)*0.1);
        
            
    }
    
    
    
    else if (indirimsiz >= 1500){
        indirimli= indirimli + indirimsiz*0.05;
        //cout << "Cha12312nge: " << indirimsiz << " TL" << endl;
        
    }
    
    cout << "Enter the amount of money the customer has: ";
    cin >> hesapla;
    double idal = 0;
    idal = indirimsiz-indirimli;
    if (hesapla >= (idal)){
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
        
       
        
        cout << "Total Discount: " << indirimli << " TL" << endl;
        cout << "Total Cost: " << indirimsiz-indirimli << " TL" << endl;
        cout << "Amount Paid: " << hesapla << " TL" << endl;
        
        
        cout << "Change: " << hesapla-idal << " TL" << endl;
        

    }

    else{
        
        cout << "Unfortunately, you do not have enough money to complete this order.";
        cout << " You are missing: " << idal-hesapla << " TL";
    }
    //cout << "Thank you for using the Restaurant Order Program!" << endl;
    return 0;
    
    
    
    
}



    

    

