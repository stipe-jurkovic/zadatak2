// zadatak2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PROGRAM_SUCCESS 0
#define MAX_NAME 50
#define MAX_LASTNAME 50

typedef struct _Osoba{

    char name[MAX_NAME];
    char lastname[MAX_LASTNAME];
    int yearOfBirth;

} Osoba;

typedef struct Cvor* Position;

struct Cvor {

    Osoba Osoba;
    Position Next;

};

int NewElBeg(Position P, Osoba O) {

    Position Q = malloc(sizeof(struct Cvor));
    strcpy(Q->Osoba. name, O.name);
    Q->Next = P->Next;
    P->Next = Q;
    return PROGRAM_SUCCESS;
}
int NewElEnd(Position P, Osoba O) {

    
    Position Q = malloc(sizeof(struct Cvor));
    while (P->Next != NULL) {
        P = P->Next;
    }
    Q->Next = P;
    Q->Osoba = O;
    P->Next = &Q;
    return PROGRAM_SUCCESS;
}
int PrintList(Position P) {
    while (P->Next != NULL) {
        printf("%s", P->Osoba.name);
        printf("%s", P->Osoba.lastname);
        printf("%i", P->Osoba.yearOfBirth);
        P = P->Next;
    }
    return PROGRAM_SUCCESS;
}


int main()
{
    Osoba Osoba;
    Position headPoz = NULL;
    strcpy(Osoba.name, "petar");
    strcpy(Osoba.lastname, "petric");
    Osoba.yearOfBirth = 1999;

    NewElBeg(headPoz, Osoba);
    PrintList(headPoz);





    return PROGRAM_SUCCESS;
}

