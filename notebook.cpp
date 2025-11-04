/* Program name: notebook.cpp
* Author: Sahar Musleh
* Date last updated: 11/02/25
* Purpose: builds the notebook and defines what each function does.
*/

#include "notebook.h"

//constructor definition
notebook::notebook(double w, double h, int p, std::string pt, std::string f, std::string pc, std::string ct, std::string cd) {
    width = w;
    height = h;
    numPages = p; 
    paperType = pt;
    format = f;
    paperColor = pc;
    coverType = ct;
    coverDesign = cd;
}


void notebook::setWidth(double w) { width = w; }
void notebook::setHeight(double h) { height = h; }
void notebook::setPages(int n) { numPages = n; }
void notebook::setPaperType(std::string pt) { paperType = pt; }
void notebook::setFormat(std::string f) { format = f; }
void notebook::setPaperColor(std::string pc) { paperColor = pc; }
void notebook::setCoverType(std::string ct) { coverType = ct; }
void notebook::setCoverDesign(std::string cd) { coverDesign = cd; }


double notebook::getWidth() const { return width; }
double notebook::getHeight() const { return height; }
int notebook::getPages() const { return numPages; }
std::string notebook::getFormat() const { return format; }
std::string notebook::getPaperColor() const { return paperColor; }
std::string notebook::getCoverType() const { return coverType; }
std::string notebook::getCoverDesign() const { return coverDesign; }


std::string notebook::toString() const {
    std::string result = "dimensions: " + std::to_string(width) + "x" + std::to_string(height) + "\n";
    result += "Number of Pages: " + std::to_string(numPages) + "\n";
    result += "Paper Type: " + paperType + "\n";
    result += "Paper Color: " + paperColor + "\n";
    result += "Page Format: " + format + "\n";
    result += "Cover Type: " + coverType + "\n";
    result += "Cover Design: " + coverDesign + "\n";
    return result; 
}
