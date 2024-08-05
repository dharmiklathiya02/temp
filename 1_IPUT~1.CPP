#include<iostream.h>
#include<conio.h>
class item{
    private:
	int a,b;
    public:
	void getData(void);
	void display(void);
};
void item::getData(){
    cout<<"Enter Two Values";
    cin>>a>>b;
}
void item::display(){
    cout<<"You Enter a='"<<a<<"' and b='"<<b<<"'.";
}
int main(){
    clrscr();
    item i;
    i.getData();
    i.display();
    getch();
    return 0;
}