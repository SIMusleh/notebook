/* Program name: main.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/02/2025
 * Purpose: Gets notebook details from the user and displays the final notebook.
 */

 #include <iostream>
 #include "notebook.h"

int main() {
    notebook mynotebook;
    std::string inputstr;
    int inputInt;
    double inputDouble;

    std::cout << "Enter the name of the cover color or design: ";
    std::getline(std::cin,inputstr);
    mynotebook.setCoverDesign(inputstr);

    std::cout << "Enter the cover type: ";
    std::getline(std::cin,inputstr);
    mynotebook.setCoverType(inputstr);

    std::cout << "Enter the paper color: ";
    std::getline(std::cin,inputstr);
    mynotebook.setPaperColor(inputstr);

    std::cout << "Enter the notebook format: ";
    std::getline(std::cin,inputstr);
    mynotebook.setFormat(inputstr);

    std::cout << "Enter the type of paper: ";
    std::getline(std::cin,inputstr);
    mynotebook.setPaperType(inputstr);

    // validate number of pages
    std::cout << "Enter the number of pages: ";
    std::cin >> inputInt;
    while (std::cin.fail() || inputInt <= 0) {
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cout << "You entered something that is not a number!\n";
        std::cout << "Please enter a number greater than 0.\n";
        std::cout << "Enter the number of pages: ";
        std::cin >> inputInt;
    }

    mynotebook.setNumPages(inputInt);

    std::cout << "Enter the notebook height: ";
    std::cin >> inputDouble;
    mynotebook.setHeight(inputDouble);

    std::cout << "Enter the notebook width: ";
    std::cin >> inputDouble;
    mynotebook.setWidth(inputDouble);

    std::cout << "\nHere is your notebook: \n";
    std::cout << mynotebook.toString() << std::endl;

    return 0;
}