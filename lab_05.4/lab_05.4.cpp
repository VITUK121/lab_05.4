#include <iostream>
#include <cmath>
using namespace std;

double S_0(int k, int N, int limit) {
    double sum = 0;
    for (; k != limit+1; k++) {
        sum += sqrt(pow(sin(k), 2) + pow(cos(static_cast<double>(N) / k), 2));
    }
    return sum;
}
////////////////////////////////////////////////////////
double S_1(int k, int N, int limit) {
    if (k > limit) {
        return 0;
    }
    else {
        return sqrt(pow(sin(k), 2) + pow(cos(static_cast<double>(N) / k), 2)) + S_1(k+1, N, limit);
    }
}
////////////////////////////////////////////////////////
double S_2(int k, int N, int limit) {
    if (k > limit) {
        return 0;
    }
    else {
        return sqrt(pow(sin(limit), 2) + pow(cos(static_cast<double>(N) / limit), 2)) + S_2(k, N, limit-1);
    }
}
////////////////////////////////////////////////////////
double S_3(int k, int N, int limit) {
    if (limit < k) {
        return 0;
    }
    else {
        return static_cast<double> (sqrt(pow(sin(k), 2) + pow(cos(static_cast<double>(N) / k), 2)) + S_3(k+1, N, limit));
    }
}
////////////////////////////////////////////////////////
double S_4(int k, int N, int limit) {
    if (limit < k) {
        return 0;
    }
    else {
        return sqrt(pow(sin(limit), 2) + pow(cos(static_cast<double>(N) / limit), 2)) + S_4(k, N, limit-1);
    }
}
////////////////////////////////////////////////////////
int main()
{
    int limit = 19, N, k;
    cout << "N = ";
    cin >> N;
    k = N;
    
    cout << "S_0 = " << S_0(k, N, limit) << endl;
    cout << "S_1 = " << S_1(k, N, limit) << endl;
    cout << "S_2 = " << S_2(k, N, limit) << endl;
    cout << "S_3 = " << S_3(k, N, limit) << endl;
    cout << "S_4 = " << S_4(k, N, limit) << endl;
}