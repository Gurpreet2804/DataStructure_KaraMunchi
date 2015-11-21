#include <iostream>
#include "LinkListExamples.h"

using namespace std;

int main()
{
    LinkListExamples<int> intObj;
    //LinkListExamples<char> objChar;
    intObj.AddElementAtEnd(2);
    intObj.AddElementAtEnd(6);
    intObj.AddElementAtEnd(4);
    intObj.AddElementAtEnd(3);
    intObj.AddElementAtEnd(1);
    intObj.AddElementAtEnd(9);
    intObj.AddElementAtEnd(12);
    intObj.AddElementAtBeg(16);
    intObj.AddElementAtBeg(70);
    intObj.ParseList();
    cout<<" One Parsing Ends here !"<<endl;
    intObj.delElementAtBeg();
    intObj.ParseList();


    return 0;
}

