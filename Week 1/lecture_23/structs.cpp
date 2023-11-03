#include<iostream>
#include<vector>

using namespace std;

// structures -- struct
// struct NameOfStruct { var };
// defining a struct named Product

struct Product
{
    string name;
    string category;
    double price;
}coffee, phone;
// coffee and phone have global scope

// name, price and category are the attributes/data members of the Product struct

// int, double, char, Product

// function to print the product stuff
// pass by value
void printProducts(Product p)
{
    cout << "==============PRODUCT==============" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: " << p.price << endl;
    cout << "Category: " << p.category << endl << endl;
    p.price = 10;

}

Product inflationUpdate(Product p)
{
    p.price*1.3;
    return p;
}


int main()
{
    struct Person
    {
        string name;
        int age;
    };

    Person p;

    // int arr[10] = {1, 2, 3, 40};

    // toothpaste, ramen, costume, ice cream -> products
    // price -> double, name -> string, category -> string, weight -> double
    // defining an int variable called x
    // int x;
    Product apple; // defining a product variable/object named apple

    // approach 1 -> initializing every attribute
    apple.price = 2.25;
    apple.name = "apple";
    apple.category = "fruit";

    // approach 2 -> {}
    Product toothpaste = {"toothpaste", "toiletries", 1.20};

    cout << apple.name << endl;
    cout << apple.price << endl;
    cout << apple.category << endl;

    cout << toothpaste.name << endl;
    cout << toothpaste.price << endl;
    cout << toothpaste.category << endl;

    printProducts(toothpaste);
    cout << toothpaste.price << endl;

    // int y = x;
    // Product apple1 = apple;

    apple = inflationUpdate(apple);

    Product fruits [3] = {apple};
    fruits[1] = {"pear", "fruit", 3.25};

    Product banana = {"banana", "fruit", 1};

    fruits[2] = banana;

    printProducts(fruits[1]);

    fruits[1].price = 2.85;

    vector<Product> veggies;
    veggies.pushback(banana);

    return 0;
}