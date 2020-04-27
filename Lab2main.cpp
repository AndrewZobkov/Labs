// работу выполнил Зобков Андрей Евгеньевич вареант 0.
#include "Window.h"
using namespace std;
int main()
{
    Window w ("owner1", "title1", "color1");
    Window w1("owner2", "title2", "color2");

   /*if ((w1 == w)== true)
   {
       cout << "w1 = w";

   }
   else
   {
       cout << "w1 != w";
   }*/
    w.print();
    w1.print();
    w = w1;
    w.print();
    w1.print();
    w >> ;
    cout << "\n";
    w.print();
    w1.print();



    return 0;
}
