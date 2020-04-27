#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include <iostream>
#define Window_H_INCLUDED
#include<cstring>

using namespace std;
class Window
{
    char* owner;
    char* title;
    char* color;

public:
    Window();
    Window(const char* owner, const  char* title, const  char* color);
    Window(Window& w);
    ~Window();


    void print() const;

    void setOwner(const char* owner);
    void setTitle(const char* title);
    void setColor(const char* color);

    char* getOwner(char* owner) const;
    char* getTitle(char* title) const;
    char* getColor(char* color) const;
    bool operator == (const Window & w);
    bool operator>(const Window & w);
    bool operator<(const Window & w);
    bool operator>=(const Window & w);
    bool operator<=(const Window & w);
    bool operator!=(const Window & w);
    Window operator= (const Window & w);
    friend ostream&operator<< (ostream&out, const Window &w);
    friend istream&operator>> (istream&in, Window &w);
};


#endif // WINDOW_H_INCLUDED
