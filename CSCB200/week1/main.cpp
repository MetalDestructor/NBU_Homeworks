#include "property.h"
#include <iostream>
using namespace std;

Property mostExpencive(Property *, int);
double sumOfAll(Property *, int);

int main(){
    int n = 5;
    Property * properties = new Property[n];
    for (int i = 0; i < n; ++i) {
        properties[i].read();
    }
    cout << "The most expencive property is in " << mostExpencive(properties, n).getOwner() << endl;
    cout << "The sum of all property prices: " << sumOfAll(properties, n) << endl;

}

Property mostExpencive(Property * properties, int count){
    Property property;
    double max = 0.;
    for (int i = 0; i < count; ++i) {
        if(properties[i].propertyPrice() > max) {
            max = properties[i].propertyPrice();
            property = properties[i];
        }
    }
    return property;
}

double sumOfAll(Property * properties, int count){
    double sum = 0.;
    for (int i = 0; i < count; ++i) {
        sum+=properties[i].propertyPrice();
    }
    return sum;
}
