/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tongd
 *
 * Created on November 24, 2017, 2:46 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

/*
 * 
 */
int main() {
    int num;
    cin >> num;
    int count = 0;
    int factor = 2;
    while (factor * factor <= num) {
        if(num % factor == 0) {
            num /= factor;
            count++;
        }
        else factor++;
    }
    cout << ++count;
    return 0;
}

