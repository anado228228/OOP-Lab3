#pragma once
#include <string>
#include <iostream>

class Clothing {
private:
    std::wstring name;      
    std::wstring brand;     
    std::wstring material;  
    float price;
    int sizeValue;

public:
    Clothing();
    Clothing(std::wstring name, std::wstring brand, std::wstring material, float price, int sizeValue);

    float getPrice() const;
    int getSizeValue() const;

    bool operator==(const Clothing& other) const;
    friend std::wostream& operator<<(std::wostream& out, const Clothing& c);
};