/* Program name: notebook.h
* Author: Sahar Musleh
* Date last updated: 11/02/25
* Purpose: defines the notebook class and the methods it uses to store notebook information.
*/

#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <string>

class notebook {
    private:
        double width;
        double height;
        int numPages;
        std::string paperType;
        std::string format;
        std::string paperColor;
        std::string coverType;
        std::string coverDesign;

    public:
        void setWidth(double w);
        void setHeight(double h);
        void setNumPages(int n);
        void setPaperType(std::string pt);
        void setFormat(std::string f);
        void setPaperColor(std::string pc);
        void setCoverType(std::string ct);
        void setCoverDesign(std::string cd);

            double getWidth() const;
            double getHeight() const;
            int getNumPages() const;
            std::string getPaperType() const;
            std::string getFormat() const;
            std::string getPaperColor() const;
            std::string getCoverDesign() const;

            std::string toString() const;


};

#endif
