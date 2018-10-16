#include<iostream>
using namespace std;
// declaration section
class Carpet
{
private:
int length;
int width;
double price;
void setPrice();
public:
int getLength();
int getWidth();
double getPrice();
void setLength(int);
void setWidth(int);
};

	// implementation section
int Carpet::getLength()
{
return length;
}
int Carpet::getWidth()
{
return width;
}
double Carpet::getPrice()
{
return price;
}
void Carpet::setLength(int len)
{
length = len;
setPrice();
}
void Carpet::setWidth(int wid)
{
width = wid;
setPrice();
}
void Carpet::setPrice()
{
const int SMALL = 12;
const int MED = 24;
const double PRICE1 = 29.99;
const double PRICE2 = 59.99;
const double PRICE3 = 89.99;
int area = length * width;
if(area <= SMALL)
price = PRICE1;
else
if(area <= MED)
price = PRICE2;
else
price = PRICE3;
}


	int main()
{
Carpet aRug;
const char QUIT = 'Q';
char dim;
int length;
int width;
aRug.setLength(1);
aRug.setWidth(1);
cout << "Enter L to enter length or " << "W to enter width or " << QUIT << " to quit > ";
cin >> dim;
while(dim != QUIT)
{
if(dim == 'L')
{
cout << "Enter a length > ";
cin >> length;
aRug.setLength(length);
cout << "Length is " << aRug.getLength() << " Width is " << aRug.getWidth() << endl <<"Price is " << aRug.getPrice() << endl;
}
else
{
cout << "Enter a width > ";
cin >> width;
aRug.setWidth(width);
cout << "Length is " << aRug.getLength() <<" Width is " << aRug.getWidth() << endl <<"Price is " << aRug.getPrice() << endl;
}
cout << "Enter L to enter length or W " <<"to enter width or " <<QUIT << " to quit > ";
cin >> dim;
}
return 0;
}