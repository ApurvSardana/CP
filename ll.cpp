#include <bits/stdc++.h>
using namespace std;
int main()
{


    struct node 
    {
        int data;
        struct node* next;
    };
    struct node a, b, c, d, e;
    a = {10, &b};
    b = {20, &c};
    c = {30, &d};
    d = {40, &e};
    e = {50, NULL};
    struct node* head = &a;
    struct node* p = head;
    
    while(p -> next != NULL)
    {
        p = p -> next;
    } 
    struct node f = {60, NULL};
    p -> next = &f;
    while(head != NULL)
    {
        cout << head -> data << endl;
        head = head -> next;
    }
return 0;
}