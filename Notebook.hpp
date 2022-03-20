#include<iostream>
#include<string>
#include"Direction.hpp"
#include<stdexcept>

using namespace std;
namespace ariel
{
    class Notebook
    {
        int page_number;
        int line;
        int column;
        ariel::Direction way;

        bool posLineNumber(int Line); //check that there is no requirement to meet a negative line

        bool posPageNumber(int page_number); //check that there is no requirement to meet a negative number

        bool legalColumnNumber(int column); /** It is not possible to require a column visit in a negative place 
        or in a place larger than 100 because the line is limited to 100 letters */
        
        public:

        void setpage_number(int page_number);

        int getpage_number();

        void setLine(int line);

        int getLine();

        void setColumn(int column);

        int getColumn();

        void setPoint(int page,int line,int column);

        void write(int page_number,int line,int column,ariel::Direction way2Read,string w);

        string read(int page_number,int line,int column,ariel::Direction way2Read,int length);

        void erase(int page_number,int line,int column, ariel::Direction way2Read, int length);

        void show(int page_number = 0);

    };

}


































