//
//  main.cpp
//  homework 1
//
//  Created by Mert Güngör on 16.10.2024.
//




// sample 5 e kadar sorunsuz çalışıyor ayran sayı olarak da ayarlanacak yeni variablelar eklenip outputlar ona gör eayarlancak yarra yedik kısacası

#include <iostream>
using namespace std;

int main(){
    string yes, doner, fries, ayran, baklava;
    float no, hesapla, indirim;
    bool combo = false;
    bool discount = false;

    no = 0;
    cout<< "Welcome to the Restaurant Order Program!" << endl;
    
    
    cout << "We offer Doner Kebab, French Fries, Ayran, and Baklava." << endl;
    cout << "Special meal deals and discounts await you!" << endl;
    hesapla = 0;
    indirim = 0;
    cout << "Do you want Doner Kebab?: ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many Doner Kebabs do you want? ";
        cin >> hesapla;
        doner = hesapla;
        if (hesapla >= 5)
            
        {
            discount = true;
            combo = true;
            
            
        }
        
        no = no + hesapla*200;
        indirim += (hesapla*200);
        if(hesapla == 1){
            doner = "1";
        }
        if(hesapla == 2){
            doner = "2";
        }
        if(hesapla == 3){
            doner = "3";
        }
        if(hesapla == 5){
            doner = "4";
        }
        if(hesapla == 5){
            doner = "5";
        }
        if(hesapla == 6){
            doner = "6";
        }
        if(hesapla == 7){
            doner = "7";
        }
        if(hesapla == 8){
            doner = "8";
        }
        if(hesapla == 9){
            doner = "9";
        }
        
        doner = "Doner Kebab: "+ doner + " x 200 TL";
    }
    cout << "Do you want French Fries?: ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many French Fries do you want? ";
        cin >> hesapla;
        fries = hesapla;
        if(hesapla == 1){
            fries = "1";
        }
        if(hesapla == 2){
            fries = "2";
        }
        if(hesapla == 3){
            fries = "3";
        }
        if(hesapla == 5){
            fries = "4";
        }
        if(hesapla == 5){
            fries = "5";
        }
        if(hesapla == 6){
            fries = "6";
        }
        if(hesapla == 7){
            fries = "7";
        }
        if(hesapla == 8){
            fries = "8";
        }
        if(hesapla == 9){
            fries = "9";
        }
        if (combo){
            discount = true;
            
            no = no + ((hesapla*72)*0.75);
            indirim += (hesapla*72);
        }
        else
        {
            
            no = no + (hesapla*72);
            indirim += (hesapla*72);
            
        }
        //indirim += (hesapla*72);
        fries = "French Fries: " + fries + " x 72 TL";
    }
    cout << "Do you want Ayran?: ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many Ayrans do you want? ";
        cin >> hesapla;
        ayran = hesapla;
        if(hesapla+2 == 1){
            ayran = "1";
        }
        if(hesapla+2 == 2){
            ayran = "2";
        }
        if(hesapla+2 == 3){
            ayran = "3";
        }
        if(hesapla+2 == 5){
            ayran = "4";
        }
        if(hesapla+2 == 5){
            ayran = "5";
        }
        if(hesapla+2 == 6){
            ayran = "6";
        }
        if(hesapla+2 == 7){
            ayran = "7";
        }
        if(hesapla+2 == 8){
            ayran = "8";
        }
        if(hesapla+2 == 9){
            ayran = "9";
        }
        if (combo == true)
        {
            ayran = hesapla + 2;
            discount = true;
            
            if(hesapla+2 == 1){
                ayran = "1";
            }
            if(hesapla+2 == 2){
                ayran = "2";
            }
            if(hesapla+2 == 3){
                ayran = "3";
            }
            if(hesapla+2 == 5){
                ayran = "4";
            }
            if(hesapla+2 == 5){
                ayran = "5";
            }
            if(hesapla+2 == 6){
                ayran = "6";
            }
            if(hesapla+2 == 7){
                ayran = "7";
            }
            if(hesapla+2 == 8){
                ayran = "8";
            }
            if(hesapla+2 == 9){
                ayran = "9";
            }
                
                
        
        }
        no = no + hesapla*30;
        indirim = indirim + hesapla*30;
        
        ayran = "Ayran: " + ayran + " x 30 TL";
        
    }
    if (doner != "" || fries != "" || ayran != "" ){
        no = no - no*0.20;
        
        
    }
    cout << "Do you want Baklava?: ";
    cin >> yes;
    if (yes == "yes"){
        cout << "How many Baklavas do you want? ";
        cin >> hesapla;
        baklava = hesapla;
        if (hesapla >= 4){
            no = no + ((hesapla*219)*0.9);
            indirim = indirim + hesapla*219;
            discount = true;
            
        }
        else{
            no = no + hesapla*219;
            indirim = indirim + hesapla*219;
        }
        if(hesapla == 1){
            baklava = "1";
        }
        if(hesapla == 2){
            baklava = "2";
        }
        if(hesapla == 3){
            baklava = "3";
        }
        if(hesapla == 5){
            baklava = "4";
        }
        if(hesapla == 5){
            baklava = "5";
        }
        if(hesapla == 6){
            baklava = "6";
        }
        if(hesapla == 7){
            baklava = "7";
        }
        if(hesapla == 8){
            baklava = "8";
        }
        if(hesapla == 9){
            baklava = "9";
        }
        baklava = "Baklava: "+ baklava + " x 219 TL";
        
    }
    if (not discount){
        if (no >= 1500){
            no= no- (no*0.5);
            
        }
        else if (indirim >= 1500){
            no= no- (no*0.05);
            
        }
    }
    cout << "Enter the amount of money the customer has: " << endl;
    cin >> hesapla;
    
    
    if (hesapla >= no){
        
        cout << "-- --- Invoice Summary ---" << endl;
        if (doner != ""){
            cout << doner << endl;
            
            
        }
        if (fries != ""){
            cout << fries << endl;
            
            
        }
        if (ayran != ""){
            cout << ayran << endl;
            
            
        }
        if (baklava != ""){
            cout << baklava << endl;
            
            
        }
        float idal = 0;
       
        idal = hesapla-no;
        cout << "Total Discount: " << indirim-no << " TL";
        cout << "Total Cost: " << hesapla-idal << " TL";
        cout << "Amount Paid: " << hesapla << " TL";
        
        
        cout << "Change: " << idal << " TL" << endl;
        
        
        
       
    
    }
    
    
    else{
        
        cout << "Unfortunately, you do not have enough money to complete this order.";
        cout << "You are missing: " << no-hesapla << " TL";
    }
    cout << "Thank you for using the Restaurant Order Program!" << endl;
    return 0;
    
    
    
    
}



    

    

