#include <iostream>
using namespace std;
int main() {
    int HotelRoom, NightsStaying,TaxSale,RoomCost ;
    double Discount10Room = .10 , Discount20Room = .20 ;
    double Discount3Room = .30 ;
    double Discount3Days = .05,SubTotal,GrandTotal ,DiscountAmount,Taxes ;
    cout<< "How much does it cost per room? \n";
    cin>> RoomCost;
    cout<<"How many rooms are you booking?\n";
    cin>>HotelRoom;
    cout<< "How many night are you staying ?\n";
    cin>>NightsStaying;
    cout<<"How much is the sales tax? \n";
    cin>>TaxSale;
    double salesTax= TaxSale /100;
    if (10<=HotelRoom && HotelRoom < 20 ){
        DiscountAmount = (HotelRoom*RoomCost)*Discount10Room ;
        Taxes= DiscountAmount * salesTax;
        SubTotal=Taxes+DiscountAmount;
        cout<< SubTotal <<endl
            <<Taxes;
    }
    else if(20 <= HotelRoom && HotelRoom <30){
        DiscountAmount = (HotelRoom*RoomCost)*Discount20Room ;
        Taxes= DiscountAmount*salesTax;
        SubTotal=Taxes+DiscountAmount;
        cout<< SubTotal <<endl
            <<Taxes;
    }
    else if (30 <= HotelRoom && HotelRoom <20) {
        DiscountAmount = (HotelRoom*RoomCost)*Discount3Room ;
        Taxes= DiscountAmount*salesTax;
        SubTotal=Taxes+DiscountAmount;
        cout<< SubTotal <<endl
            <<Taxes;
    }



    return 0;
}
