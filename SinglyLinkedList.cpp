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

    node *nodebaru = new node;
    nodebaru->noMhs = nim;


    if (START == NULL || nim <= START ->noMhs)
    
    {
        if ((START != NULL) && (nim == START ->noMhs))
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }
        nodebaru->next=START;
        START = nodebaru;
        return;
    }
