#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;

// E-Commerce backend
class ECommerce {
private:
    vector<Product> products; // Stores product catalog

public:
    // Add product
    void addProduct(string name, double price){
        products.push_back({name, price});
        cout << "Product added successfully.\n";
    }

    // View all products
    void viewProducts(){
        if(products.empty()){ cout << "No products available.\n"; return; }
        cout << "\n--- Products ---\n";
        for(auto &p:products)
            cout << "Name: " << p.name << ", Price: $" << p.price << "\n";
    }
};
