#include <iostream>
using namespace std;

enum class BillKind {
    ONE, FIVE, TEN, TWENTY

};

struct CashInOneBillKind {
    BillKind bill;
    int count;
};

struct Cash {
    CashInOneBillKind one;
    CashInOneBillKind five;
    CashInOneBillKind ten;
    CashInOneBillKind twenty;
};

int totalcash (Cash& c) {
    return (c.one.count * 1 +
         c.five.count * 5 +
        c.ten.count * 10 + 
        c.twenty.count * 20);
}   
int main() {

Cash inWallet {
    {BillKind::ONE, 2},
    {BillKind::FIVE, 3},
    {BillKind::TEN, 1},
    {BillKind::TWENTY, 3}
};

cout << "Total cash in wallet: " << totalcash(inWallet) << endl;

return 0;

}