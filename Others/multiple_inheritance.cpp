#include<iostream>

using namespace std;

class Apple {

public:
    Apple ()

{
apple_quantity = 0;
apple_price = 0;
}

Apple (int q, float p)
{
apple_quantity = q;
apple_price = p;
}
int setAppleQuantity(int aq)
{
    apple_quantity = aq;
}
int getAppleQuantity()
{
    return apple_quantity;
}

void showAppleInfo()
{
cout<<"Apple Qqantity: "<< apple_quantity <<endl;
cout<<"Apple price: "<< apple_price <<endl;
}

private:
    int apple_quantity;
protected:
    float apple_price;

};

class Orange{

public:
    Orange ()
{
orange_quantity = 0;
orange_price = 0;
}

Orange (int q, float p)
{
orange_quantity = q;
orange_price = p;
}
int setOrangeQuantity(int oq)
{
    orange_quantity = oq;
}
int getOrangeQuantity()
{
    return orange_quantity;
}

void showOrangeInfo()
{
cout<<"Orange Qantity: "<< orange_quantity <<endl;
cout<<"Orange price: "<< orange_price <<endl;
}

private:
    int orange_quantity;

protected:
    float orange_price;

};
class Banana{

public:

Banana()
{
banana_quantity = 0;
banana_price = 0;
}

Banana (int q, float p)
{
banana_quantity = q;
banana_price = p;
}
int setBananaQuantity(int bq)
{
    banana_quantity = bq;
}
int getBananaQuantity()
{
    return banana_quantity;
}

void showBananaInfo()
{
cout<<"Banana Quantity: "<<banana_quantity<<endl;
cout<<"Banana price: "<<banana_price<<endl;
}

private:
    int banana_quantity;

protected:
    float banana_price;

};


class Myfruit: public Orange, public Apple, public Banana
{
public:
    Myfruit(): Orange(), Apple(), Banana()
{
}
Myfruit(int aq, float ap, int oq, float op, int bq, float bp): Orange(oq,op), Apple(aq, ap), Banana(bq, bp)
{
}

void ShowMyFruit()
{
cout<<"Apple Quantity :"<<getAppleQuantity()<<endl;
cout<<"Orange Price: "<<apple_price<<endl;
cout<<"Apple Quantity :"<<getOrangeQuantity()<<endl;
cout<<"Apple  Price: "<<orange_price<<endl;
cout<<"Apple Quantity :"<<getBananaQuantity()<<endl;
cout<<"Orange Price: "<<banana_price<<endl;

}
};

int main()
{

Myfruit fruit(5, 100, 10, 200, 15, 300);
fruit.ShowMyFruit();

}
