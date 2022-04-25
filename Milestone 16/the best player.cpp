#include<bits/stdc++.h>

#include<string.h>

using namespace std ;

int main() {

    int N , T ;

    cin >> N >> T ;

    // here we will be creating the name and the character array

    string A[N] ;

    int B[N] ;

    for(int i = 0 ; i < N ; i++) {

        cin >> A[i] >> B[i] ;

    }

    //Traverse(N , A , B) ;

    //now we had to sort the array based on the numbers and then based

    // the numbers and the on the basis of names

    int K = N-1 ;

    int temp ;

    string temp2 ;

    for(int i = 0 ; i < K ; i++) {

        for(int j = 0 ; j < K-i ; j++) {

            if(B[j] < B[j+1]) {

                temp = B[j] ;

                B[j] = B[j+1] ;

                B[j+1] = temp ;


 

                temp2 = A[j] ;

                A[j] = A[j+1] ;

                A[j+1] = temp2 ;

            }

            if(B[j] == B[j+1]) {

                // then we have to swap the elemnts in the stringarray

                if(A[j] > A[j+1]) {

                    string temp3 = A[j] ;

                    A[j] = A[j+1] ;

                    A[j+1] = temp3 ;

                }

            }

        }

    }

    //Traverse(N , A, B) ;

    for(int i = 0 ; i < T ; i++) {

        cout << A[i] << endl ;

    }

    return 0 ;

}