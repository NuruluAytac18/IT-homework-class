#include <iostream>
#include <vector>
using namespace std;

/* 
    Solution
*/

class Product{
    private:
        int productId;
        string productName;
        float productPrice;
    public:
    //constructors
    Product()=default;
    // Initialization List
    Product(int id ,const string& name, float price):productId(id),productName(name),productPrice(price){}

    // functions(metods)

    // setters and getters
     string getProductName()    const{
        return productName;
     };
     float getPrice()    const{
        return productPrice;
     }

};

class Order {
    private:
        int orderId;
        string customerName;
        vector<Product>orderedProducts;
    public:
        //constructors
        Order()=default;
        Order(int id,const string& name ):orderId(id),customerName(name){}

        // functions(metods)
        void addProduct(const Product& product){
            orderedProducts.push_back(product);
        }
        float calculateOrderTotal(){
            float total=0;
            for(Product &product : orderedProducts) {
                total+=product.getPrice();
            } 
            return total;         
        }

        // setters and getters
        int getOrderID()    const{
            return orderId;
        }
        string getCustomerName()     const{
            return customerName;
        }
        vector<Product> getOrderedProducts()     const{

            return orderedProducts;
        }

        
};


int main() {

    system("clear");

    // Create products
    Product p1(1, "Product 1", 10.0);
    Product p2(2, "Product 2", 20.0);
    Product p3(3, "Product 3", 30.0);

    // Create an order
    Order order(1, "John Doe");

    // Add products to the order
    order.addProduct(p1);
    order.addProduct(p2);
    order.addProduct(p3);

    // Calculate the order total
    double total = order.calculateOrderTotal();

    // Display the order details
    cout << "Order ID: " << order.getOrderID() << endl;
    cout << "Customer Name: " << order.getCustomerName() << endl;
    cout << "Ordered Products:" << endl;

    for (const Product& product : order.getOrderedProducts()) {
        cout << " - " << product.getProductName() << endl;
    }
    

    cout << "Total: $" << total << endl;


    return 0;
}
