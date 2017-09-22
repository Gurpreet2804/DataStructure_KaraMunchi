#ifndef LINKLISTEXAMPLES_H
#define LINKLISTEXAMPLES_H
#include "iostream"
using namespace std;
template <typename T>
struct SingleLink {
    T data;
    SingleLink<T> *next;
};

template <typename T>
class LinkListExamples
{
    SingleLink<T> * head;
public:
    LinkListExamples():head(NULL) {}
    void ParseList();

    SingleLink<T> *getNewNode(const T &data);
    void AddElementAtEnd(const T & data);
    void AddElementAtBeg(const T & data);
    void delElementAtEnd();
    void delElementAtBeg();
    void delFromMiddle(const T &data);
};

template<typename T>
SingleLink<T> *LinkListExamples<T>::getNewNode(const T &data) {
    SingleLink<T> * newNode = new SingleLink<T>;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

template<typename T>
void LinkListExamples<T>::AddElementAtEnd(const T &data)
{
    if (head == NULL){
        head = getNewNode(data);
    }
    else {
        SingleLink<T> * temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = getNewNode(data);
    }
}
template<typename T>
void LinkListExamples<T>::ParseList() {
    if (head == NULL){
        cout<<" List Empty "<<endl;
        return;
    }
    SingleLink<T> * temp = head;
    while(temp != NULL) {
        cout<<" element "<<temp->data<<endl;
        temp = temp->next;
    }
}
template<typename T>
void LinkListExamples<T>::AddElementAtBeg(const T &data)
{
    if (head == NULL){
        head = getNewNode(data);
    }
    else {
        SingleLink<T> * newHead = getNewNode(data);
        newHead->next = head;
        head = newHead;
    }
}
template<typename T>
void LinkListExamples<T>::delElementAtEnd()
{
    if (head == NULL){
        cout<<" List Empty";
        return;
    }
    else {
        SingleLink<T> * temp = head;
        SingleLink<T> * temp1 = head;
        while(temp->next != NULL) {
            temp1 = temp;
            temp = temp->next;

        }
        delete temp;
        temp1->next=NULL;

    }
}
template<typename T>
void LinkListExamples<T>::delElementAtBeg()
{
    if (head == NULL){
        cout<<" List Empty";
        return;
    }
    else {
        SingleLink<T> * temp = head;
        head = temp->next;
        delete temp;
    }
}
template<typename T>
void LinkListExamples<T>::delFromMiddle(const T &data)
{
    if (head == NULL){
        cout<<" List Empty";
        return;
    }
    else {
        SingleLink<T> * temp = head;
        SingleLink<T> * temp1 = head;
        while(temp->next != NULL) {
            if (temp->data == data) {
                break;
            }
            temp1 = temp;
            temp = temp->next;
        }
        if (head == temp) {
            delElementAtBeg();
        }
        else if (temp->next == NULL) {
            delElementAtEnd();
        }
        else {
            temp1->next = temp->next;
            delete temp;
        }
    }
}

#endif // LINKLISTEXAMPLES_H
