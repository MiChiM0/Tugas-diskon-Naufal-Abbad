#include <iostream>

int main(){
    int realPrice = 150000;
    double discount = 12.5;
    int discountValue = realPrice * (discount/100);
    int finalPrice = realPrice - discountValue;

    std::cout << "Harga : " << realPrice << "ribu" << '\n';
    std::cout << "Diskon : " << discount << '\n';
    std::cout << "Besarnya diskon dari harga : " << realPrice * (discount/100) << '\n';
    std::cout << "Harga setelah diskon " << finalPrice << "ribu";
    return 0;     

}
