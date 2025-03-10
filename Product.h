#ifndef PRODUCT_H
#define PRODUCT_H
class Product{
    private:
        int productId;
        string productName;
        float productPrice;
    public:
    //constructors
    Product(){}
    Product(int ,const string&, float);

    // functions(metods)

    // setters and getters
     string getProductName() const{};

};


#endif