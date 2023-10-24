#include <bits/stdc++.h> 
int calculateSquare(int num)
{
    if(num == 0){
        return 0;
    }

    if(num < 0){
        num = -num;
    }

    int x = num >> 1;
    if(num & 1){
        return ((calculateSquare(x) << 2) + (x << 2) + 1);
    }

    else{
        return (calculateSquare(x) << 2);
    }
}
