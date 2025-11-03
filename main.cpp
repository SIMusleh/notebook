/* Program name: main.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/02/2025
 * Purpose: Gets notebook details from the user and displays the final notebook.
 */

#include <iostream>
#include "notebook.h"

int main() {
    std::string coverDesign, coverType, paperColor, format, paperType;
    int numPages;
    double height, width;

    std::cout << "Enter the name of the cover color or design: ";
    std::getline(std::cin, inputstr);
    mynotebook.setCoverDesign(inputstr);

    std::cout << "Enter the cover type: ";
    std::getline(std::cin, inputstr);
    mynotebook.setCoverType(inputstr);

    std::cout << "Enter the paper color: ";
    std::getline(std::cin, inputstr);
    mynotebook.setPaperColor(inputstr);

    std::cout << "Enter the notebook format: ";
    std::getline(std::cin, inputstr);
    mynotebook.setFormat(inputstr);

    std::cout << "Enter the type of paper: ";
    std::getline(std::cin, inputstr);
    mynotebook.setPaperType(inputstr);

    // Validate number of pages
    std::cout << "Enter the number of pages: ";
    while (true) {
        std::cin >> inputInt;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "You entered something that is not a number!\n";
            std::cout << "Please enter a number greater than 0.\n";
        } else if (inputInt <= 0) {
            std::cout << "Please enter a number greater than 0.\n";
        } else {
            break;
        }
        std::cout << "Enter the number of pages: ";
    }

    // Validate height
    std::cout << "Enter the notebook height: ";
    while (true) {
        std::cin >> inputDouble;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "You entered something that is not a number!\n";
            std::cout << "Please enter a number greater than 0.\n";
        } else if (inputDouble <= 0) {
            std::cout << "Please enter a number greater than 0.\n";
        } else {
            break;
        }
        std::cout << "Enter the notebook height: ";
    }
    

    // Validate width
    std::cout << "Enter the notebook width: ";
    while (true) {
        std::cin >> inputDouble;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "You entered something that is not a number!\n";
            std::cout << "Please enter a number greater than 0.\n";
        } else if (inputDouble <= 0) {
            std::cout << "Please enter a number greater than 0.\n";
        } else {
            break;
        }
        std::cout << "Enter the notebook width: ";
    }  
    notebook mynotebook(width, height, numPages, paperType, format, paperColor, coverType, coverDesign);

    std::cout << "\nHere is your notebook: \n";
    std::cout << mynotebook.toString() << std::endl;

    return 0;
}
