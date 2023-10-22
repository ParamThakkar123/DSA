#include "bits/stdc++.h"
#define MOD (1e9 + 7);
using ll = int64_t;
using ull = uint64_t;
#define ll long long
using namespace std;
   
string inteTerm(string pTerm)
{
    string coeffStr = "", S = "";
    int i;

    for (i = 0; pTerm[i] != 'x'; i++)
        coeffStr.push_back(pTerm[i]);
    long long coeff
        = atol(coeffStr.c_str());
   
    string powStr = "";
   
    for (i = i + 2; i != pTerm.size(); i++)
        powStr.push_back(pTerm[i]);
   
    long long power
        = atol(powStr.c_str());
    string a, b;
    ostringstream str1, str2;
   
    str1 << coeff;
    a = str1.str();
    power++;
    str2 << power;
    b = str2.str();
    S += "(" + a + "/" + b + ")X^" + b;
   
    return S;
}
   
string integrationVal(string& poly)
{
   

    istringstream is(poly);
   
    string pTerm, S = "";

    while (is >> pTerm) {
   
        if (pTerm == "+") {
            S += " + ";
            continue;
        }
   
        if (pTerm == "-") {
            S += " - ";
            continue;
        }

        else
            S += inteTerm(pTerm);
    }
    return S;
}
   
int main()
{
    string str
        = "5x^3 + 7x^1 + 2x^2 + 1x^0";
    cout << integrationVal(str)
         << " + C ";
    return 0;
}
