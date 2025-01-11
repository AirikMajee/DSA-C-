#include <iostream>
using namespace std;

int main() {
    int n, oddsum = 0;
    
    for(int i = 1; i <=n ; i++) {
        if (i%2!=0) {
            oddsum += i;
        }
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << oddsum << endl;
    
    return 0;
}

/* using while loop*/

/*
int main () {
int n,sum,i=0;

cout <<"Enter the range:";
cin >> n;
     while ( i <= n) {
         if (i % 2!==0) {
         sum += i;
      }
        i++;
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}*/