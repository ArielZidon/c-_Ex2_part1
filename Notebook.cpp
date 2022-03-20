#include "Notebook.hpp"


using namespace std;
namespace ariel
{

bool Notebook::posPageNumber(int page_number)
{
    if(page_number<0)
    {
        throw runtime_error("there is no page_number with negativ number");
        return false;
    }
    return true;
}

bool Notebook::posLineNumber(int line)
{
    if(line<0)
    {
        throw runtime_error("cant be negativ number of lines");
        return false;
    }
    return true;
}

bool Notebook::legalColumnNumber(int column)
{
    if(column<0)
    {
        throw runtime_error("column number cant be negativ");
        return false;
    }

    if(column>100)
    {
        throw runtime_error("cant be more then 100 words in a singel column, you need to open a new line");
        return false;
    }
    return true;
}

void Notebook::setpage_number(int page_number)
{
    if(posPageNumber(page_number))
    {
    this->page_number=page_number;
    // function that go to the page we want
    cout<<"page_number update to " <<this->page_number<<endl;
    return;
    }
}

int Notebook::getpage_number()
{
    return this->page_number;
}


void Notebook::setLine(int line)
{
    if(posLineNumber(line))
    {
        this->line=line;
        cout<<"line now is: "<<this->line<<endl;
        return;
    }
}

void Notebook::setColumn(int column)
{
    if(legalColumnNumber(column))
    {
        this->column=column;
        cout<<"column now is: "<<this->column<<endl;
        return;
    }
}

int Notebook::getLine()
{
    return this->line;
}

int Notebook::getColumn()
{
    return this->column;
}

void Notebook::setPoint(int page,int line,int column)
{
    setpage_number(page);
    setLine(line);
    setColumn(column);
}


void Notebook::write(int page,int line,int column,ariel::Direction way2Read,const string w)
{
    setPoint(page,line,column);
    int res = column+int(w.length());
    return;
}

string Notebook::read(int page,int line,int column,ariel::Direction way2Read,int length)
{
    string m;
    // setPoint(page,line,column);
    // for(int i=0;i<length;i++)
    // {
    //     m+=
    // }
    return m;
}

void Notebook::erase(int page,int line,int column, ariel::Direction way2Read, int length)
{
    setPoint(page,line,column);
    return;
}

void Notebook::show(int page)
{
    return;
}

}