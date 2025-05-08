#include <iostream>
#include <string.h>
using namespace std;

class node
{
    public:
        int
         noMhs;
         node *next;
};

class singlelinkedlist
{
    node *START;

public:
singlelinkedlist()
{
    START = NULL;

}

void addnode()
{
    int nim;
    cout << "\nMasukkan Nomor Mahasiswa: ";
    cin >> nim;

}