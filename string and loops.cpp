#include <iostream>
#include <string>
//Tony Dias
//Aug 21, 2023

using namespace std;

int main()
{
cout << "\n lets do strings and loops work!\n";

string myTestStr = "The quick brown fox jumped over the lazy dog";

cout << "\n\n" << endl << endl << myTestStr << endl << endl;

// this is a comment
// comments should come before the line of code they 'talk' about

// use find() function to find the substring fox in myTestStr
int myIndex = myTestStr.find("fox");
cout << "the index of fox is " << myIndex << endl << endl;

int atIndexFour = myTestStr.at(4);
//should see the asking code for  'q'
cout << "\n this is at index four: " << atIndexFour << endl << endl;
//append()
cout << "\n size() is " << myTestStr.append("xyz") << endl;
//length()
cout << "\n length() is " << myTestStr.length() << endl;
//clear()
//cout << "\n clear() is " << myTestStr.clear() << endl;
//empty()
if (myTestStr.empty()) {
    cout << " \n the string is empty";
}
else {
    cout << "The string is not empty";
}
//substr()
//find the five characters starting at 8
string mySubStr = myTestStr.substr(7,5);
cout << "\n\n mySubStr (7, 5) = " << mySubStr << endl;

//The factorial of a number
//6!=1*2*3*4*5*6=720

//int number;
//cout << "Number: ";
//cin >> number;//3

//int factorial = 1;//1

//for(int i = 1; i <= number;i++){//i=1
   // factorial = factorial * i;
//}
//6!= 6*5*4*3*2*1=720
//for (int i=number;i>=1;i-- ) {
  //      factorial = factorial * i;
//}

//cout << number<< "!=" << factorial;
for (int i =0; i < 10; i++){
    cout << "\n hello, i is " << i;
}

    return 0;
}
