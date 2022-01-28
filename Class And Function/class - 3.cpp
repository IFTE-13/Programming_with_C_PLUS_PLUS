#include<iostream>
#include<string.h>

using namespace std;

class product
{
        int productno;
        string name;
        float price;
        int qty;
        float tax,discount;

   public:
        product(int product_no, string na_me, float pri_ce, int qty1, float t_ax, float dis_count)
        {
                productno = product_no;
                name = na_me;
                price = pri_ce;
                qty1 = qty;
                tax = t_ax;
                discount = dis_count;
        }

        void price();
        void discount();
        void tax();
        void total();

};
void product::price()
{
    int qty2;
    cout<<"Enter Total Quantity :"<<endl;
    cin>>qty2;
    price = price*qty2;
}
void product::discount()
{
        int dis;
        cout<<"Enter Discount Percent = "<<endl;
        cin>>dis;
        price -= (price*dis)/100;
}
void product::tax()
{
        int tx;
        cout<<"Enter Tax Percent = "<<endl;
        cin>>tx;
        price+= (price*tx)/100;
}
void product::total()
{
        cout<<"----------------------"<<endl;
        cout<<"Product No. : "<<productno<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Total Price : "<<price<<endl;

}
int main()
{
        int product_no;
        string name;
        float price;
        float tax;
        float discount;
        int qty;


        cout<<"Bill"<<endl;
        cout<<"---------------"<<endl;
        cout<<"Name :"<<endl;
        cin>>name;
        cout<<"Enter Quantity :"<<endl;
        cin>>qty;
        cout<<"Price :"<<endl;
        cin>>price;



        product c1(product_no, name, price ,qty ,tax, discount);
        c1.tax();
        c1.discount();
        c1.total();
        return 0;
}
