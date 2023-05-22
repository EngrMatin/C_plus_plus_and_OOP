#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[20];
    string food_item_names[20];
    int food_item_prices[20];
protected:
    double total_tax;

public:
    Restaurant()
    {
        this->total_tax=0;
    }

    void setTotalTax(double tax)
    {
        this->total_tax += tax;
    }

    double getTotalTax()
    {
        return total_tax;
    }
};

int main()
{
    Restaurant *cafe= new Restaurant;

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>cafe->food_item_codes[i];
        cin.ignore();
        getline(cin, cafe->food_item_names[i]);
        cin>>cafe->food_item_prices[i];
    }

    cout<<endl<<"\t\t\t MAKE BILL"<<endl<<"\t\t\t-----------"<<endl;
    cout<<endl<<"Item Code\t\tItem Name\t\t\tItem Price"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<cafe->food_item_codes[i]<<"\t\t\t";
        cout<<cafe->food_item_names[i]<<"\t\t";
        cout<<cafe->food_item_prices[i]<<endl;
    }

    flag:
    int table_no, items;
    cout<<"\n\nEnter Table No : ";
    cin>>table_no;
    cout<<"Enter Number of Items : ";
    cin>>items;

    int code[items], quantity[items];
    for(int i=1; i<=items; i++)
    {
        int found= -1;
        flag2:
        cout<<"Enter Item "<<i<<" Code : ";
        cin>>code[i];
        for(int j=1; j<=n; j++)
        {
            if(code[i] == cafe->food_item_codes[j])
            {
                found= 1;
                cout<<"Enter Item "<<i<<" Quantity : ";
                cin>>quantity[i];
                break;
            }
        }

        if(found == -1)
        {
            cout<<"\nInvalid Item Code!\nPlease choose a valid Item Code from the list. ";
            goto flag2;
        }
    }

    cout<<endl<<"\n\t\t\t\t BILL SUMMARY"<<endl<<"\t\t\t\t--------------"<<endl;
    cout<<"Table No. : "<<table_no<<endl;
    cout<<endl<<"Item Code\tItem Name\t\t\tItem Price\tItem Quantity\tTotal Price"<<endl;

    double price, totalPrice=0;
    for(int i=1; i<=items; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(code[i] == cafe->food_item_codes[j])
            {
                cout<<code[i]<<"\t\t";
                cout<<cafe->food_item_names[j]<<"\t\t";
                cout<<cafe->food_item_prices[j]<<"\t\t";
                cout<<quantity[i]<<"\t\t";
                price= cafe->food_item_prices[j] * quantity[i];
                cout<<price<<endl;
                totalPrice += price;
                break;
            }
        }
    }

    double tax= totalPrice*5/100;
    cout<<"TAX\t\t\t\t\t\t\t\t\t\t"<<tax<<endl;
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    totalPrice += tax;
    cout<<"GRAND TOTAL\t\t\t\t\t\t\t\t\t"<<totalPrice<<" Taka"<<endl;

    cafe->setTotalTax(tax);
    cout<<"\nTotal Tax: "<<cafe->getTotalTax()<<" Taka"<<endl;

    char loop;
    cout<<"\n\n Press Y to continue \n or \n Press N to exit. ";
    cin>>loop;

    if(loop=='Y' || loop=='y')
    {
        goto flag;
    }

    return 0;
}
