#include <iostream>
#include <cstring>
#define A 26

using namespace std;

int main()
{
    char a[100];
    cin >> a;
    int arr[26]; 
    int i; 

    for (i = 0; i < A; i++)
        arr[i] = -1;  

    for (i = 0; i < strlen(a); i++) {
        if (arr[a[i] - 97] == -1) 
            arr[a[i] - 97] = i;
    }

    for (i = 0; i < A; i++)
        cout << arr[i] << " ";

    return 0;
}
