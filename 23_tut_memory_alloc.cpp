#include <iostream>

using namespace std;

class Shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "\n";
    cout << "Enter ID of item no. " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter the item Price"
         << " : ";
    cin >> itemPrice[counter];
    cout << "\n";
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemId[i] << " is Rs. " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}