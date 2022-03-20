
#include "Notebook.hpp"
#include<iostream>
#include<string>
#include<stdexcept>
#include "doctest.h"
#include <algorithm>


using namespace ariel;
using namespace std;

Notebook note;

TEST_CASE("Good input") 
{
    int i = 0;

    for(i=0;i<30;i++)
        {
        try
        {
            note.setLine(i);
        }

        catch (std::invalid_argument& e)
        {
            CHECK_THROWS(note.setLine(i));
        }
    }

    for(i=0;i<30;i++)
    {
        try
        {
            note.setpage_number(i);
        }

        catch (std::invalid_argument& e)
        {
            CHECK_THROWS(note.setpage_number(i));
        }

    }

    for(i=0;i<100;i+=10)
    {
        try
        {
            note.setColumn(i);
        }

        catch (std::invalid_argument& e)
        {
            CHECK_THROWS(note.setColumn(i));
        }

    }
}

TEST_CASE("Bad input") {
    int i = 0;

    for(i=-30;i<0;i++)
    {
        CHECK_THROWS(note.setpage_number(i));
    }
    
    for(i=-30;i<0;i++)
    {
        CHECK_THROWS(note.setLine(i));
    }
    
    for(i=-10;i<0;i++)
    {
        CHECK_THROWS(note.setColumn(i));
    }

    for(i=101;i<110;i++)
    {
        CHECK_THROWS(note.setColumn(i));
    }
    
}