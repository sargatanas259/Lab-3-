#include <iostream>
using namespace std ;
int main() {
    int ContractOption ;
    cout << "What contract option would you like to explore ?";
    cin >> ContractOption;
    float PercentOption2 = .125, PercentOption3 = .1, PercentOption3_2nd = .14;
    int Option1 = 5000 + 20000;
    switch (ContractOption  ) {

        case 1:

            cout << "Here is the first contract option. $" << Option1;
            break;
        case 2:
            float PriceOfNovel, NumberOfNovels, TotalProfit;
            cout << "Enter The Price per Novel." << endl;
            cin >> PriceOfNovel;
            cout << "Enter the number of novels you think will sell." << endl;
            cin >> NumberOfNovels;
            TotalProfit = (PriceOfNovel * PercentOption2) * NumberOfNovels;

            cout << "Here is the profit from option 2. $" << TotalProfit << endl;
            break;
        case 3:
            cout << "Enter the amount the Novel will cost" << endl;
            float NumberNovels, PriceNovels;
            cin >> PriceNovels;
            cout << "What is amount of Novels you think will sell?" << endl;
            cin >> NumberNovels;
            float TotalMade1, TotalMade2, TotalMade;
            TotalMade1 = (PriceNovels * PercentOption3) * NumberNovels;
            TotalMade = TotalMade1 + TotalMade2;
            TotalMade2 = (PriceNovels * PercentOption3_2nd) * (NumberNovels - 4000);
            cout << "Total profit is. $" << TotalMade;
            break;

            default:
            cout<<"Is not an option ";

    }

    return 0;
}


