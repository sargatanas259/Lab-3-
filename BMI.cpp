#include <iostream>
#include <string>
using namespace std;

int main() {
    float bodyWeight_F , Wrist , Waist, Hip , Forearm,bodyWeight_M ;
    float W_Number1= .732 , W_Number2 = 8.987 , W_Number3 =3.14 , W_Number4 = .157 , W_Number5 =.249 , W_Number6 = .434; // numbers for calculating female BMI
    float A1= (bodyWeight_F * W_Number1)+ W_Number2 , A2= Wrist/W_Number3 , A3 = Waist * W_Number4, A4 =Hip* W_Number5 ,A5 = Forearm * W_Number6 ;
    float Female_B =A1+A2 -A3-A4+A5 ,  BodyFat_female =bodyWeight_F - Female_B ;
    float BodyFatPercentage = (BodyFat_female *100) / bodyWeight_F;
    float M_Number1 = 1.082 , M_Number2 = 94.42 , M_Number3 = 4.15 ;
    int Percentage= 100;
    int Identity ;
    cout<< "Is the person male or female (1 for male, 2 for female) ?";
    cin>> Identity ;

    switch ( Identity ) {
        case 1:
            cout<<"What is the body weight? \n";
            cin>>bodyWeight_M;
            cout<<"What is the wrist measurement? \n";
            cin>>Wrist;
           float Mens_A1,Mens_B ,Mens_A2, Mens_BodyFat, BodyFatPercentage_Men;
           Mens_A2= Wrist * M_Number3,
           Mens_A1 = (bodyWeight_M * M_Number1)+M_Number2,
           Mens_B=Mens_A1-Mens_A2;
           Mens_BodyFat = bodyWeight_M-Mens_B;
           BodyFatPercentage_Men= (Mens_BodyFat * Percentage) / bodyWeight_M;
           cout<<"The persons body fat is"<< Mens_BodyFat <<endl
               <<"The persons body fat percentage is"<< BodyFatPercentage_Men<<"%";
           break;
        case 2:
                cout<< "What is the body weight? \n";
                cin>>bodyWeight_F;
                cout<< "What is the wrist measurement? \n";
                cin>> Wrist;
                cout<<"What is the waist measurement ? \n";
                cin>> Waist;
                cout<<"What is the hip measurement? \n";
                cin>>Hip;
                cout<<"What is the forearm measurement? \n";
                cin>> Forearm;
                Female_B =A1+A2 -A3-A4+A5,BodyFat_female =bodyWeight_F - Female_B;
                BodyFatPercentage = (BodyFat_female *Percentage) / bodyWeight_F;
                cout<<"The persons body fat is " <<BodyFat_female<<endl
                    <<"The persons body fat percentage is "<< BodyFatPercentage<<"%";
                break;
        default:
            cout<< " You didn't pick a valid option!!!";


    }



    return 0;
}
