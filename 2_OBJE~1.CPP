#include <iostream.h>
#include<conio.h>
class object
{
public:
    int x;

public:
    void setvalue(int i)
    {
	x = i;
    }
    int sum(object obj, object obj2)
    {
	x=obj.x+obj2.x;
	return x;
    }
    void display()
    {
	cout<<"Your Output" << x;
    }
};

int main()
{
    object obj;
    object obj2;
    object obj3;
    obj.setvalue(60);
    obj2.setvalue(70);
    obj3.sum(obj,obj2);
    obj3.display();
    getch();
    return 0;
}