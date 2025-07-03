#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};
    
    // Accessing element at index 2
    std::cout << "Accessing element at index 2" << std::endl;
    std::cout << "Element at index 2: " << vec.at(2) << std::endl; // Output: 30

    // Accessing out-of-bounds index
    std::cout << std::endl << "Accessing out-of-bounds index" << std::endl;
    try {
        std::cout << "Element at index 5: " << vec.at(5) << std::endl; // Throws exception
    } catch (const std::out_of_range& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}
