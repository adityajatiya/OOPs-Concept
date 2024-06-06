// #include <iostream>
// #include <algorithm>
// #include <string>

// int main() {
//     const int numStrings = 10;
//     std::string strings[numStrings];

//     // Input: Get 10 strings from the user
//     std::cout << "Enter 10 strings:" << std::endl;
//     for (int i = 0; i < numStrings; ++i) {
//         std::cout << "String " << i + 1 << ": ";
//         std::getline(std::cin, strings[i]);
//     }

//     // Sorting the strings
//     std::sort(strings, strings + numStrings);

//     // Output: Display the sorted strings
//     std::cout << "\nSorted strings in alphabetical order:" << std::endl;
//     for (int i = 0; i < numStrings; ++i) {
//         std::cout << strings[i] << std::endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// #include <string>

// int main() {
//     const int numStrings = 10;
//     std::string strings[numStrings];

//     // Input: Get 10 strings from the user
//     std::cout << "Enter 10 strings:" << std::endl;
//     for (int i = 0; i < numStrings; ++i) {
//         std::cout << "String " << i + 1 << ": ";
//         std::getline(std::cin, strings[i]);
//     }

//     // Sorting the strings
//     std::sort(strings, strings + numStrings);

//     // Output: Display the sorted strings
//     std::cout << "\nSorted strings in alphabetical order:" << std::endl;
//     for (int i = 0; i < numStrings; ++i) {
//         std::cout << strings[i] << std::endl;
//     }

//     return 0;
// }


#include <iostream>
#include <algorithm>
#include <string>

int main() {
    const int numStrings = 10;
    std::string strings[numStrings];

    // Input: Get 10 strings from the user
    std::cout << "Enter 10 strings:" << std::endl;
    for (int i = 0; i < numStrings; ++i) {
        std::cout << "String " << i + 1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    // Sorting the strings
    std::sort(strings, strings + numStrings);

    // Output: Display the sorted strings
    std::cout << "\nSorted strings in alphabetical order:" << std::endl;
    for (int i = 0; i < numStrings; ++i) {
        std::cout << strings[i] << std::endl;
    }

    return 0;
}
