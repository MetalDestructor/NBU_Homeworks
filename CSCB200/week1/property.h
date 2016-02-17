#ifndef PROPERTY_H
#define PROPERTY_H

class Property{
public:
    Property();
    Property(char *, char *, int , double);
    Property(const Property &property);
    ~Property();

    char * getOwner();
    char * getAddress();
    int getQuadrature();
    double getPricePerMeter();

    int setOwner(char *);
    int setAddress(char *);
    int setQuadrature(int);
    int setPricePerMeter(double);

    double propertyPrice();

    int read();

private:
    char * owner;
    char * address;
    int quadrature;
    double pricePerMeter;
};

#endif // PROPERTY_H
