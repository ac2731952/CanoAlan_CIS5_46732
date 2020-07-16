/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mango Party
 *
 * Created on July 7, 2020, 10:38 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char grade;
    unsigned char score;
    score = rand()%51+50;
    if(score<60){
        grade = 'f';
    }
    
    return 0;
}

