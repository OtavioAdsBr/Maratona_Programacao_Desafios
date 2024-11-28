#include <iostream>
#include <string>

int main() {
    std::string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int month_number;
    std::cin >> month_number;

    if (month_number >= 1 && month_number <= 12) {
        std::cout << months[month_number - 1] << std::endl;
    } else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}
