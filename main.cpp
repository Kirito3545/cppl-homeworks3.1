#include <iostream>

#include "SmartArray.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    try {

        SmartArray sArr(5);
        sArr.smartArrayPushBack(1);
        sArr.smartArrayPushBack(4);
        sArr.smartArrayPushBack(155);
        sArr.smartArrayPushBack(14);
        sArr.smartArrayPushBack(15);

        sArr.smartArrayPrint();

        std::cout << "***********************************" << std::endl;

        std::cout << sArr.smartArrayGetElement(2) << std::endl;

    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
}