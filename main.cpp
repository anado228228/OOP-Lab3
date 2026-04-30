#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include "clothing.h"

using namespace std;

void runAllTests();

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Ukrainian");

    runAllTests();

    vector<Clothing> clothes = {
        Clothing(L"Футболка", L"Nike", L"Бавовна", 500.0, 42),
        Clothing(L"Джинси", L"Levi's", L"Денім", 1200.0, 34),
        Clothing(L"Худі", L"Adidas", L"Фліс", 800.0, 40),
        Clothing(L"Футболка", L"Puma", L"Поліестер", 500.0, 46),
        Clothing(L"Куртка", L"Zara", L"Шкіра", 2500.0, 48)
    };

    wcout << L"=== Початковий список ===" << endl;
    for (const auto& item : clothes) wcout << item << endl;

    sort(clothes.begin(), clothes.end(), [](const Clothing& a, const Clothing& b) {
        if (a.getPrice() != b.getPrice()) return a.getPrice() < b.getPrice();
        return a.getSizeValue() > b.getSizeValue();
        });

    wcout << L"\n=== Відсортований список ===" << endl;
    for (const auto& item : clothes) wcout << item << endl;

    Clothing target(L"Джинси", L"Levi's", L"Денім", 1200.0, 34);
    auto it = find(clothes.begin(), clothes.end(), target);

    if (it != clothes.end()) wcout << L"\nЗнайдено: " << *it << endl;
    else wcout << L"\nНе знайдено." << endl;

    system("pause");
    return 0;
}