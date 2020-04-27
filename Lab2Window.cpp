#include "Window.h"

Window::Window():Window("owner", "title", "color"){}

Window::Window(const char* owner,const  char* title,const  char* color )
{

    this ->owner = NULL;
    setOwner(owner);
    this ->title = NULL;
    setTitle(title);
    this-> color = NULL;
    setColor(color);
};
//Window::Window(Window &w):Window(w.owner, w.title, w.color){}

    void Window :: print() const
{
    std::cout << "owner = " << owner <<  ",";
    std::cout << "title = " << title <<  ",";
    std::cout << "color = " << color <<  "\n";
}


Window::~Window()
{
    delete [] owner;
    delete [] title;
    delete [] color;
}


void Window::setOwner(const char* owner)
{
delete [] this ->owner;
int len = strlen(owner) + 1;
    this ->owner = new char[len];
    strcpy (this ->owner, owner);

}
void Window::setTitle(const char* title)
{
    delete [] this ->title;
    int len = strlen(title) + 1 ;
    this ->title = new char[len];
    strcpy (this ->title, title);

}
void Window::setColor(const char* color)
{
   delete [] this ->color;
    int len = strlen(color) + 1 ;
    this ->color = new char[len ];
    strcpy (this ->color, color);
}



    char* Window::getColor(char* color) const
    {
        strcpy(color, this->color);
        return color;


    }
char* Window::getOwner(char* owner) const
{
    strcpy(owner, this->owner);
    return owner;


}

char* Window::getTitle(char* title) const
{

    strcpy(title, this->title);
    return title;


}
bool Window::operator == (const Window & w)
{
    return (strlen(owner) == strlen(w.owner) && strlen(title)== strlen(w.title) && strlen(color) == strlen(w.color));
}
bool Window::operator> (const Window & w)
{
    return (strlen(owner) > strlen(w.owner) && strlen(title)> strlen(w.title) && strlen(color)>strlen(w.color));

}

bool Window::operator< (const Window & w)
{
    return (strlen(owner) < strlen(w.owner) && strlen(title)< strlen(w.title) && strlen(color)<strlen(w.color));

}

bool Window::operator>= (const Window & w)
{
    return (strlen(owner) >= strlen(w.owner) && strlen(title)>= strlen(w.title) && strlen(color)>=strlen(w.color));

}
bool Window::operator<= (const Window & w)
{
    return (strlen(owner) <= strlen(w.owner) && strlen(title)<= strlen(w.title) && strlen(color) <= strlen(w.color));

}
bool Window::operator != (const Window & w)
{
    return (strlen(owner) != strlen(w.owner) && strlen(title)!= strlen(w.title) && strlen(color) != strlen(w.color));
}

Window Window::operator= (const Window & w)
{
    this->owner = NULL;
    setOwner(w.owner);
    this->title = NULL;
    setTitle(w.title);
    this->color = NULL;
    setColor(w.color);
}


 /*ostream& operator<< (ostream &out, Window Car &w)
{
    out << " owner: " << w.owner << " title: " << w.title << " color: " << w.color;
    return out;
}*/
istream& operator>> (istream &in, Window &w)
{
    in >> w.owner;
    in >> w.title;
    in >> w.color;
    return  in;
}
