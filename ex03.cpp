#include <iostream>
using namespace std;

void min_max(int* arr, int size, int* max, int* min ){
    *min = *max = *arr;
    for(int* p = arr; p < arr + size; p++){
        if(*p > *max){
            *max = *p;
        }
        if(*p < *min){
            *min = *p;
        }
    }
}
int main() {
    int tab[5] = {1, 2, 3, 4, 5};
     int tab2[] = {7, 0, 42, 1};
     int tab3[] = {5,7,6,9,1,3,5};
        int max = 0;
        int min = 0;
        min_max(tab, 5, &max, &min);
        cout << "Tab1 - Max: " << max << " Min: " << min << endl;
        min_max(tab2, 4, &max, &min);
        cout << "Tab2 - Max: " << max << " Min: " << min << endl;
        min_max(tab3, 7, &max, &min);
        cout << "Tab3 - Max: " << max << " Min: " << min << endl;
    return 0;   

}