#include <bits/stdc++.h>

using namespace std;

class Product
{
protected:
    string name;
    int price;
    int id;
public:
    Product(const string name, double price, int id) : name(name), price(price), id(id){}
    const string getName() const
	{
        return name;
    }
    int getPrice() const
	{
        return price;
    }
    int getId() const
	{
        return id;
    }
};

class Customer
{
protected:
    string name;
    string email;
    int id;

public:
    Customer(const string name, const string email, int id) : name(name), email(email), id(id) {}
    const string getName() const
	{
        return name;
    }
    const string getEmail() const
	{
        return email;
    }
    int getId() const
	{
        return id;
    }
};

class Order
{
private:
    int id;
    Customer customer;
    vector<Product> products;

public:
    Order(int id, const Customer& customer) : id(id), customer(customer) {}

    int getId() const
	{
        return id;
    }
    
    void addProduct(const Product& product)
	{
        products.push_back(product);
    }
    
    double getTotalCost() const
	{
        double totalCost = 0;
        for (const auto& product : products)
		{
            totalCost += product.getPrice();
        }
        return totalCost;
    }
};

int main()
{
    Product prod1("Product_a", 37, 1);
    Product prod2("Product_b", 8, 2);
    Product prod3("Product_c", 54, 3);
    Product prod4("Product_d", 74, 4);
    Customer cust1("Marcin Pleskacz", "mple@gmail.com", 1);
    Order ord1(1, cust1);
    ord1.addProduct(prod1);
    ord1.addProduct(prod2);
    ord1.addProduct(prod3);
    double total = ord1.getTotalCost();
    cout << "Order #" << ord1.getId() << endl;
    cout << "Total cost: " << total << endl;
    Customer cust2("Dariusz Nowak", "darn@gmail.com", 2);
    Order ord2(2, cust2);
    ord2.addProduct(prod1);
    ord2.addProduct(prod4);
    double total2 = ord2.getTotalCost();
    cout << "Order #" << ord2.getId() << endl;
    cout << "Total cost: " << total2 << endl;
}
