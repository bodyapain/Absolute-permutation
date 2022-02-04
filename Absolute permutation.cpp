
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int flag = 0;
    size_t size;
    for (int b = 0; b < t; b++) {
        flag = 0;        
        cin >> size;
        int k, buf;
        cin >> k;
        int* array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = i + 1;
        }
        for (int i = 0; i < size; i++) {

            if (abs(array[i] - (i + 1)) != k) {
                flag = 0;
                for (int j = i; j < size; j++) {

                    if (abs(array[j] - (i + 1)) == k) {
                        flag = 1;
                        buf = array[j];
                        array[j] = array[i];
                        array[i] = buf;
                        break;
                    }
                }
                if (flag == 0) {
                    cout << "-1";                    
                    goto skip;
                }
            }
        }        
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
    skip:
        cout << endl;
    
    }

}


