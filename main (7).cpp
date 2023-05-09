#include <iostream>
#include <vector>
using namespace std;

int countFrequency(int arr[],int n,int f){
    int frequency = 0;
    for(int i=0; i<n;i++)
    {
        if(arr[i]==f){
            frequency++;
        }
    }
return frequency;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int f;
    std::cout << "masukkan angka: ";
    std::cin >> f;
    int frequency = countFrequency(arr,n,f);
    if(frequency > 0) {
        std::cout << "frequency dari angka" << f << " didalam array adalah : " << frequency << std::endl;
    } else {
        std::cout << f << " is not found in the array." << std::endl;
    }
    return 0;
}
