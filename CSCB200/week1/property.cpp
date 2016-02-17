#include "property.h"
#include <cstring>
#include <iostream>

Property::Property(){
    this->owner = new char[2];
    this->owner = "";
    this->address = new char[2];
    this->address = "";
    this->quadrature = 0;
    this->pricePerMeter = 0.;
}

Property::Property(char * owner, char * address, int quadrature, double pricePerMeter){
    this->owner = new char[strlen(owner) + 1];
    this->owner = owner;
    this->address = new char[strlen(address)+ 1];
    this->address = address;
    this->quadrature = quadrature;
    this->pricePerMeter = pricePerMeter;
}

Property::Property(const Property &property) {
    owner = new char[strlen(property.owner) + 1];
    *owner = *property.owner;
    address = new char[strlen(property.address)+ 1];
    *address = *property.address;
    quadrature = property.quadrature;
    pricePerMeter = property.pricePerMeter;
}

Property::~Property(){
    delete [] owner;
    delete [] address;
}

char * Property::getOwner(){
    return this->owner;
}

char * Property::getAddress(){
    return this->address;
}

int Property::getQuadrature(){
    return this->quadrature;
}

double Property::getPricePerMeter(){
    return this->pricePerMeter;
}

int Property::setOwner(char * owner){
    this->owner = new char[strlen(owner) + 1];
    this->owner = owner;
    return 0;
}

int Property::setAddress(char *){
    this->address = new char[strlen(address) + 1];
    this->address = address;
    return 0;
}

int Property::setQuadrature(int quadrature){
    this->quadrature = quadrature;
    return 0;
}

int Property::setPricePerMeter(double pricePerMeter){
    this->pricePerMeter = pricePerMeter;
    return 0;
}

double Property::propertyPrice(){
    return getQuadrature()*getPricePerMeter();
}

int Property::read(){
    std::cout << "-------------------------------------"<< std::endl;
    this->owner = new char[100];
    std::cout << "Enter the name of the owner: ";
    std::cin.getline(this->owner, 99);
    std::cout << "Enter the quadrature: ";
    std::cin >> this->quadrature;
    std::cout << "Enter the price per meter: ";
    std::cin >> this->pricePerMeter;
    std::cin.ignore();
    this->address = new char[100];
    std::cout << "Enter the address: ";
    std::cin.getline(this->address, 99);
    std::cout << "-------------------------------------"<< std::endl;
    return 0;
}
