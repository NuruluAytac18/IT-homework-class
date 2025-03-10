#ifndef ORDER_H
#define ORDER_H
#include<Product.h>

class Order {
    private:
        int orderId;
        string customerName;
        vector<Product>orderedProducts;
    public:
        //constructors
        Order(){}
        Order(int,const string&);

        // functions(metods)
        void addProduct(const Product&)
        float calculateOrderTotal();

        // setters and getters
        int getOrderId() const;
        string getCustomerName() const;
        Product getOrderedProducts() const;

        
};

#endif