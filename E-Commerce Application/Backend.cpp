#include <iostream>
#include "Product.h"
extern class ECommerce;

int main(){
    ECommerce store;
    int choice;
    string name;
    double price;

    do{
        cout << "\n--- E-Commerce App ---\n";
        cout << "1. Add Product\n2. View Products\n3. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Product Name: "; cin >> name;
            cout << "Enter Price: "; cin >> price;
            store.addProduct(name, price);
        }
        else if(choice==2){
            store.viewProducts();
        }
    } while(choice!=3);

    return 0;
}
