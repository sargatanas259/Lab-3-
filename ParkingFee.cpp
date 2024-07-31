#include <iostream>
using namespace std ;
int main() {
    int ParkingTime,ParkingTime1=5 , ParkingTime2=6 , ParkingTime4=60, HoursParked;
   cout<< " How long have you been Parked in hours? \n";
   cin>> HoursParked;
    //int Fee = ParkingTime * (HoursParked +1);
    if (0<=HoursParked && HoursParked <= 3 ){
        int Fee = ParkingTime1 * (HoursParked +1);
        cout<< " Your fee is $"<< Fee;
    }
    else if (3< HoursParked && HoursParked <=9) {
        int Fee = ParkingTime2 * (HoursParked +1);
        cout<< " Your fee is $"<< Fee;
    }
    else if (9< HoursParked&& HoursParked <=24) {
        int Fee = ParkingTime4 * (HoursParked +1);
        cout<< " Your fee is $"<< Fee;
    }
    /*else if (24<HoursParked && HoursParked <24 );
    cout<< " you put in a wrong amount of time";*/
    return 0;
}
