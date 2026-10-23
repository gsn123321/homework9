#include <iostream>

int main()
{
    //int A[5] = { 1, 2, 3, 4, 5 };
    //int B[5];

    //int* pA = A;
    //int* pB = B;

    //for (int i = 0; i < 5; ++i) {
    //    *(pB + i) = *(pA + i);
    //}

    //for (int i = 0; i < 5; ++i) {
    //    std::cout << *(pB + i) << " ";
    //}

    //2

    int arr[5] = { 1, 2, 3, 4, 5 };

    int* p = arr;

    for (int i = 0; i < 5 / 2; ++i) {
        int temp = *(p + i);
        *(p + i) = *(p + 4 - i);
        *(p + 4 - i) = temp;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << *(p + i) << " ";
    }



}

