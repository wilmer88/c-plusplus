#pragma once

#include <iostream>
using namespace std;
class Book
{
public:
   int Id;
   std::string Title;
    std::string Author;
    bool CheckedOut;
    Book(int id, std::string title, std::string author);
};

