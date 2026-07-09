#include <iostream>
#include <typeinfo>

int main (){
    auto v1 {12};
    auto v2 {12.06};
    auto v3 {15.0f};
    auto v4 {1223.00l};
    auto v5 {'e'};
    auto v6 {123u};
    auto v7 {123ul};
    auto v8 {123ll};
    auto v9 {true};

    std::cout << "v1 : " << typeid(v1).name() << " | " << sizeof(v1) << std::endl;
    std::cout << "v2 : " << typeid(v2).name() << " | " << sizeof(v2) << std::endl;
    std::cout << "v3 : " << typeid(v3).name() << " | " << sizeof(v3) << std::endl;
    std::cout << "v4 : " << typeid(v4).name() << " | " << sizeof(v4) << std::endl;
    std::cout << "v5 : " << typeid(v5).name() << " | " << sizeof(v5) << std::endl;
    std::cout << "v6 : " << typeid(v6).name() << " | " << sizeof(v6) << std::endl;
    std::cout << "v7 : " << typeid(v7).name() << " | " << sizeof(v7) << std::endl;
    std::cout << "v8 : " << typeid(v8).name() << " | " << sizeof(v8) << std::endl;
    std::cout << "v9 : " << typeid(v9).name() << " | " << sizeof(v9) << std::endl;

    return 0;
}