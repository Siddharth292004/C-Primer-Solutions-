// Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int start, end, is_prime, count = 0;

    cout << "Enter number for starting range: ";
    cin >> start;
    cout << "Enter number for ending range: ";
    cin >> end;

    cout << "The prime numbers between " << start << " and " << end << " are:\n";

    for(int i = start; i <= end; i++){
        if(i < 2){
            continue;
        }

        is_prime = 1;

        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                is_prime = 0;
                break;
            }
        }

        if(is_prime){
            cout << i << " ";
            count++;
        }
    }

    cout << "\nThe total number of prime numbers between " << start << " to " << end << " is: " << count << endl;

    return 0;
}
