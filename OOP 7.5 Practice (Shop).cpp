#include<bits/stdc++.h>
using namespace std;

class Shop
{
public:
    string productName[10];
    int productPrice[10];
    int productQuantity[10];
protected:
    int totalIncome;
public:
    void setTotalIncome(int income)
    {
        this->totalIncome += income;
    }

    int getTotalIncome()
    {
        return totalIncome;
    }
};

int main()
{
    Shop *myShop= new Shop;

    cout<<"Number of Products : ";
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<"Product "<<i<<" Name: ";
        cin>>myShop->productName[i];
        cout<<"Product "<<i<<" Price: ";
        cin>>myShop->productPrice[i];
        cout<<"Product "<<i<<" Quantity: ";
        cin>>myShop->productQuantity[i];
    }

    while(1)
    {
        cout<<endl<<"\t\t BUY PRODUCT"<<endl<<"\t\t-------------"<<endl;
        cout<<endl<<"Product Index\t\t";
        for(int i=1; i<=n; i++)
        {
            cout<<i<<"\t";
        }

        cout<<endl<<"Product Name\t\t";
        for(int i=1; i<=n; i++)
        {
            cout<<myShop->productName[i]<<"\t";
        }

        cout<<endl<<"Product Price\t\t";
        for(int i=1; i<=n; i++)
        {
            cout<<myShop->productPrice[i]<<"\t";
        }

        cout<<endl<<"Product Quantity\t";
        for(int i=1; i<=n; i++)
        {
            cout<<myShop->productQuantity[i]<<"\t";
        }

        int indx, qty;
        cout<<endl<<"\nEnter Product Index to buy (from 1 to "<<n<<") : ";
        cin>>indx;
        cout<<"Enter Quantity of "<<myShop->productName[indx]<<" : ";
        cin>>qty;

        if(qty > myShop->productQuantity[indx])
        {
            cout<<"\nThis quantity is not available"<<endl;
        }
        else
        {
            myShop->setTotalIncome(qty * myShop->productPrice[indx]);
            myShop->productQuantity[indx] -= qty;
            cout<<endl<<myShop->productName[indx]<<" sold "<<qty<<" pc successfully"<<endl;
            cout<<"Your total income : "<<myShop->getTotalIncome()<<endl;
        }
    }
    return 0;
}
