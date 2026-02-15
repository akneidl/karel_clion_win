/*
 * File: HelloKarel.c
 * --------------------------------
 * The HelloKarel program is a simple
 * program to demonstrate a minimal working
 * Karel example.
 * 
 */

#include "karel.h"

void setup (void) {
    loadWorld("LivingRoom");
}

void run (void) {
    move();
    move();
    move();
    move();
    move();
    turnLeft();
    move();
    move();
    move();
    turnLeft();
    turnLeft();
    turnLeft();
    move();
    move();
    pickBeeper();
    move();
    move();
    putBeeper();
}
