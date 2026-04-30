#include <cassert>
#include <iostream>
#include "clothing.h"

void runAllTests() {
    std::wcout << L"--- Запуск юніт-тестів ---" << std::endl;

    Clothing c1(L"Тест", L"Бренд", L"Тканина", 100.0, 10);
    Clothing c2(L"Тест", L"Бренд", L"Тканина", 100.0, 10);

    assert(c1.getPrice() == 100.0);
    assert(c1 == c2);

    std::wcout << L"Усі тести пройдено успішно!\n" << std::endl;
}