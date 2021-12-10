// Copyright (c) 2021 Zack Isingoma
//
// Created by: Zack Isingoma
// Created on: Dec, 10 2021.
// This program makes users guess numbers.

#include<iostream>

int main() {
    int num;
    cout << "Enter the number to be checked : ";
    cin >> num;
    if (num >= 0)
        cout << num << " is a positive number.";
    else
        cout << num << " is a negative number.";
    return 0;
}
