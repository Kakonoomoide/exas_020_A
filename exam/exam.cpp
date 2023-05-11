#include <iostream>
using namespace std;

int kii[16], n;

void  input() {
    while (true) {                                              //looping
        cout << "masukan elemen/jumlah data array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))                                            // n <= 20
            break;                                              // keluar looping
        else {                                                  // n > 20
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "     masukan elemen array        " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {                                // looping memasukan data ke array
        cout << "masukan data ke-" << (i + 1) << ": ";
        cin >> kii[i];
    }
}

void BinariSearch() {

    int item;
    cout << "\n masukan data yang ingin di cari: ";
    cin >> item;
    int lowerbound = 0, upperbound = n - 1, mid = (lowerbound + upperbound) / 2;


    while (lowerbound <= upperbound) {
        for (int i = 0; i < n; i++) {
            if (kii[mid] == item) {
                cout << "item di temukan" << endl;
                break;
            }
            else {
                cout << "item tidak di temukan" << endl;
            }
            if (item < kii[mid]) {
                upperbound = mid - 1;
            }
            if (item > kii[mid]) {
                lowerbound = mid + 1;
            }
            break;
        }
        if (lowerbound <= upperbound)
            int mid = (lowerbound + upperbound) / 2;
        break;
    }
}

int main(){
    input();
    BinariSearch();

    return 0;

}