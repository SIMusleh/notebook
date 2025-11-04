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
        double width; // width of the notebook
        double height; // height of the notebook
        int numPages; // number of pages in the notebook
        std::string paperType; // type of paper used
        std::string format; // format of the notebook pages
        std::string paperColor; // color of the paper
        std::string coverType;  // type of notebook cover
        std::string coverDesign; // design of the cover

    public:
        notebook(double w, double h, int p, std::string pt, std::string f, std::string pc, std::string ct, std::string cd);
        
        //setters
        void setWidth(double w);
        void setHeight(double h);
        void setPages(int n);
        void setPaperType(std::string pt);
        void setFormat(std::string f);
        void setPaperColor(std::string pc);
        void setCoverType(std::string ct);
        void setCoverDesign(std::string cd);

            //getters
            double getWidth() const;
            double getHeight() const;
            int getPages() const;
            std::string getPaperType() const;
            std::string getFormat() const;
            std::string getPaperColor() const;
            std::string getCoverType() const;
            std::string getCoverDesign() const;

            std::string toString() const; // returns notebook details as a string


};

#endif
