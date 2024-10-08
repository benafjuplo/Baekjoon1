/*
- Title : 19599 - Binary and Ternary Search Play 1
- Start Time : 24-10-06, 16:35
- End Time : 24-10-06, 16:57
- Try : 1
- Category : binary search, ternary search
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
서로 다른 정수가 오름차순으로 정렬된 크기가 N인 배열 A가 있다.
이진 탐색, 삼진 탐색으로 배열 A의 i번째 원소 Ai를 찾을 때, Ai를 찾기 전에 참조해야 하는 배열 A의 원소 개수를 각각 Bi, Ti 라고 하자.
Bi값이 Ti값보다 작은 배열 A의 원소의 개수, Bi값과 Ti값이 같은 배열 A의 원소의 개수, Bi값이 Ti값보다 큰 배열 A의 원소의 개수를 순서대로 각각 한줄씩 출력하라.

크기가 N인 배열에서 이진 탐색 알고리즘 의사 코드는 다음과 같다.
binary_search(A[0..N-1], value, left, right) {
    mid = floor((left + right) / 2)
    if (A[mid] == value)
        return mid
    else if (value < A[mid])
        return binary_search(A, value, left, mid - 1)
    else
        return binary_search(A, value, mid + 1, right)
}

크기가 N인 배열에서 삼진 탐색 알고리즘 의사 코드는 다음과 같다.
ternary_search(A[0..N-1], value, left, right) {
    left_third = left + floor((right - left) / 3)
    right_third = right - floor((right - left) / 3)
    if (A[left_third] == value)
        return left_third
    else if (A[right_third] == value)
        return right_third
    else if (value < A[left_third])
        return ternary_search(A, value, left, left_third - 1)
    else if (value < A[right_third])
        return ternary_search(A, value, left_third + 1, right_third - 1)
    else
        return ternary_search(A, value, right_third + 1, right)
}

- 입력
첫째 줄에 배열 A의 크기 N(1 ≤ N ≤ 500,000)이 주어진다. 배열 A의 index는 [0, N-1]이다.

- 출력
첫째 줄에 Bi값이 Ti값보다 작은 배열 A의 원소의 개수를 출력한다.

둘째 줄에 Bi값과 Ti값이 같은 배열 A의 원소의 개수를 출력한다.

셋째 줄에 Bi값이 Ti값보다 큰 배열 A의 원소의 개수를 출력한다.

- 예제
입력 :
5
출력 :
2
2
1

- 힌트
A는 서로 다른 정수가 오름차순으로 정렬된 크기가 5인 배열이다.
배열 B는 1 2 0 1 2가 된다.
배열 T는 2 0 2 1 2가 된다.
*/

/* 한국어 주석
이 문제는 이진 탐색과 삼진 탐색의 참조 횟수를 비교하는 문제이다.

해결 방법은 크게 두 가지로 나눌 수 있다

첫 번째 방법은 문제에서 주어진 의사코드대로 이진 탐색과 삼진 탐색을 구현하고, 각 탐색 과정에서 참조 횟수를 세는 방식이다.
이 때, 이진 탐색과 삼진 탐색을 반복문 또는 재귀함수로 구현할 수 있다.
재귀함수는 문제의 의사코드를 거의 그대로 사용하기 때문에 간단하게 구현할 수 있다.
반복문을 사용할 경우, 성능 측면에서 약간의 이득을 볼 수 있다.
크기가 N이고 0부터 N-1까지 초기화된 벡터의 각각의 원소에 대하여 이진, 삼진 탐색을 수행하여 횟수를 비교한다.
이 방법은 실제 코드 뒤에 주석으로 구현해두었다.

두 번째 방법은 이진 탐색과 삼진 탐색에 대하여 직접 각각의 값을 탐색하지 않고 전체 범위에 대하여 left>right일 때까지 계속 탐색하는 것이다.
이 때 mid(이진 탐색) 또는 left_third 및 right_third(삼진 탐색)에 대하여 각각의 참조 횟수를 counts[]에 저장한다.
구현 방법은 첫 번째 방법보다 구현이 복잡하고, 실수할 여지가 많지만 성능이 크게 개선된다.
*/

/* English Problem Summary
- Question
There is an array A of size N that contains distinct integers sorted in ascending order.
When searching for the i-th element Ai in the array A using binary search and ternary search,
let Bi and Ti represent the number of elements in array A that must be referenced before finding Ai in each respective search algorithm.

Print three lines, where each line contains:
The number of elements in array A where Bi is smaller than Ti.
The number of elements in array A where Bi is equal to Ti.
The number of elements in array A where Bi is greater than Ti.

The pseudocode for binary search in an array of size N is as follows:
binary_search(A[0..N-1], value, left, right) {
    mid = floor((left + right) / 2)
    if (A[mid] == value)
        return mid
    else if (value < A[mid])
        return binary_search(A, value, left, mid - 1)
    else
        return binary_search(A, value, mid + 1, right)
}

The pseudocode for ternary search in an array of size N is as follows:
ternary_search(A[0..N-1], value, left, right) {
    left_third = left + floor((right - left) / 3)
    right_third = right - floor((right - left) / 3)
    if (A[left_third] == value)
        return left_third
    else if (A[right_third] == value)
        return right_third
    else if (value < A[left_third])
        return ternary_search(A, value, left, left_third - 1)
    else if (value < A[right_third])
        return ternary_search(A, value, left_third + 1, right_third - 1)
    else
        return ternary_search(A, value, right_third + 1, right)
}

- Input
The first line contains the size of the array A, N (1 ≤ N ≤ 500,000). The index of array A ranges from [0, N-1].

- Output
Print three lines:
1. The number of elements in array A where Bi is smaller than Ti.
2. The number of elements in array A where Bi is equal to Ti.
3. The number of elements in array A where Bi is greater than Ti.

- Example
Input :
5
Output :
2
2
1

- Hint
A is an array of size 5 with distinct integers sorted in ascending order.
Array B becomes 1 2 0 1 2.
Array T becomes 2 0 2 1 2.
*/

/* English Comment
This problem involves comparing the reference counts between binary search and ternary search.

The solution can be divided into two main approaches:

The first approach is to implement both binary search and ternary search using the pseudocode provided in the problem, and count the number of references during each search.
Binary search and ternary search can be implemented using either loops or recursive functions.
Using recursion simplifies the implementation since it closely follows the pseudocode provided.
Using loops may provide slight performance advantages.
For each element of a vector of size N, initialized with values from 0 to N-1, perform binary and ternary searches, and compare the reference counts.
This method is straightforward, and an implementation is provided as a comment after the code.

The second approach does not search for specific values using binary or ternary search but continues to explore the entire range until left > right.
At each step, the mid-point (for binary search) or the left and right thirds (for ternary search) are used, and the reference counts are stored in the counts[] array.
Although this method is more complex and prone to errors, it offers significant performance improvements compared to the first approach.
*/

#include<iostream>
#include<vector>

using namespace std;

void binarySearch(vector<int> &counts, int left, int right, int cnt) {
    if (left > right)
        return;

    int mid = (left + right) / 2;
    counts[mid] += cnt++;

    binarySearch(counts, left, mid - 1, cnt);
    binarySearch(counts, mid + 1, right, cnt);
}

void ternarySearch(vector<int>& counts, int left, int right, int cnt) {
    if (left > right)
        return;

    if (left == right) {
        counts[left] -= cnt;
        return;
    }

    int left_third = left + (right - left) / 3;
    int right_third = right - (right - left) / 3;

    counts[left_third] -= cnt++;
    counts[right_third] -= cnt++;
    
    ternarySearch(counts, left, left_third - 1, cnt);
    ternarySearch(counts, left_third + 1, right_third - 1, cnt);
    ternarySearch(counts, right_third + 1, right, cnt);
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> counts(N, 0);   // vector : Bi - Ti
    
    int bSmall = 0; // Case : Bi is small than Ti
    int same = 0;   // Case : Bi is same with Ti
    int bBig = 0;   // Case : Bi is bigger than Ti

    binarySearch(counts, 0, N - 1, 0);
    ternarySearch(counts, 0, N - 1, 0);
   
    for (int i = 0; i < N; i++) {
        // Bi < Ti
        if (counts[i] < 0)
            bSmall++;
        // Bi == Ti
        else if (counts[i] == 0)
            same++;
        // Bi > Ti
        else
            bBig++;
    }

    cout << bSmall << "\n" << same << "\n" << bBig;
}

//Finish

/* Slow solution */
//int binarySearch(vector<int> &A, int value, int left, int right, int& cnt) {
//    int mid = (left + right) / 2;
//    if (A[mid] == value)
//        return mid;
//    cnt++;
//    
//    if (value < A[mid]) {
//        return binarySearch(A, value, left, mid - 1, cnt);
//    }
//    else
//        return binarySearch(A, value, mid + 1, right, cnt);
//}
//
//int ternarySearch(vector<int>& A, int value, int left, int right, int& cnt) {
//    int left_third = left + (right - left) / 3;
//    int right_third = right - (right - left) / 3;
//    if (A[left_third] == value) 
//        return left_third;
//    cnt++;
//    if (A[right_third] == value) {
//        return right_third;
//    }
//    cnt++;
//    if (value < A[left_third])
//        return ternarySearch(A, value, left, left_third - 1, cnt);
//    else if (value < A[right_third])
//        return ternarySearch(A, value, left_third + 1, right_third - 1, cnt);
//    else
//        return ternarySearch(A, value, right_third + 1, right, cnt);
//}
//
//int main() {
//	cin.tie(0);
//	cout.tie(0);
//	ios_base::sync_with_stdio(false);
//
//    int N;
//    cin >> N;
//
//    vector<int> A(N);
//
//    // make ascending order array
//    for (int i = 0; i < N; i++)
//        A[i] = i;
//    
//    int bSmall = 0; // Case : Bi is small than Ti
//    int same = 0;   // Case : Bi is same with Ti
//    int bBig = 0;   // Case : Bi is bigger than Ti
//
//    for (int i = 0; i < N; i++) {
//        int cntBinary = 0;  // Count for Binary
//        binarySearch(A, i, 0, N - 1, cntBinary);
//        
//        int cntTernary = 0; // Count for Ternary
//        ternarySearch(A, i, 0, N - 1, cntTernary);
//
//        // Debug Display
//        //cout << "Binary : " << i << ", " << cntBinary << "\n";
//        //cout << "Ternary : " << i << ", " << cntTernary << "\n";
//
//        if (cntBinary < cntTernary)
//            bSmall++;
//        else if (cntBinary == cntTernary)
//            same++;
//        else
//            bBig++;
//    }
//
//    cout << bSmall << "\n" << same << "\n" << bBig;
//}