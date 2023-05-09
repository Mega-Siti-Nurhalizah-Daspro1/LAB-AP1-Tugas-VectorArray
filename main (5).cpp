#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void removeDuplicates(vector<int>& vec) 
{
    // Mengurutkan elemen vector
    sort(vec.begin(), vec.end());

    // Menghapus elemen duplikat
    auto newEnd = unique(vec.begin(), vec.end());
    vec.erase(newEnd, vec.end());
}

int main()
{
    // Buat vector dengan nilai duplikat
    vector<int> vec {1, 2, 2, 3, 4, 5, 5};

    // Cetak vector sebelum penghapusan nilai duplikat
    cout << "before: ";
    for (auto elem : vec) {
        cout << elem << ",";
    }
    cout << endl;

    // Hapus nilai duplikat pada vector
    removeDuplicates(vec);

    // Cetak vector setelah penghapusan nilai duplikat
    cout << "after: ";
    for (auto elem : vec) {
        cout << elem << ",";
    }
    cout << endl;

    return 0;
}
