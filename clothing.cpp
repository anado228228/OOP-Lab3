#include "clothing.h"

Clothing::Clothing() : name(L""), brand(L""), material(L""), price(0.0f), sizeValue(0) {}

Clothing::Clothing(std::wstring n, std::wstring b, std::wstring m, float p, int s)
    : name(n), brand(b), material(m), price(p), sizeValue(s) {
}

float Clothing::getPrice() const { return price; }
int Clothing::getSizeValue() const { return sizeValue; }

bool Clothing::operator==(const Clothing& other) const {
    return (name == other.name && brand == other.brand &&
        material == other.material && price == other.price &&
        sizeValue == other.sizeValue);
}

std::wostream& operator<<(std::wostream& out, const Clothing& c) {
    out << L"Одяг: " << c.name << L" | Бренд: " << c.brand
        << L" | Ціна: " << c.price << L" | Розмір: " << c.sizeValue;
    return out;
}