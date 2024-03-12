//Lesson #31 - Strings


#include <iostream>
#include <string>

using namespace std;
int main()
{
   /* MY ANSWER
   string St1;

    cout << "Please enter String1?: \n";
    getline(cin, St1);
    cout << St1 << endl;

    string St2="5", St3="10";

    int sum = stoi(St2);
    cout << "Please enter String2?: \n";
    cin >> sum;
    cout << sum << endl;

    int sum2 = stoi(St3);
    cout << "Please enter String3?: \n";

    cin >> sum2;
    cout << sum2<<endl;
    
    cout << "************************\n";

    cout << "the length of the String1 is: " <<St1.length() << endl;
    cout << "Characters at 0,2,4,7 are: " << St1[0] << St1[2] << St1[4] << St1[7] << endl;
    cout << "concatenating string2 and string3 = " << St2 + St3<<endl;
    cout << "5 * 10 = "<< sum * sum2;*/


    //HIS ANSWER 

    string String1, String2, String3;

    cout << "Please enter String1 ?" << endl;
    getline(cin, String1);

    cout << "Please enter String2 ?" << endl;
    cin >> String2;

    cout << "Please enter String3 ?" << endl;
    cin >> String3;

    cout << "\n*****************************************\n";
    cout << "The length of string1 is " << String1.length() << endl;
    cout << "Concatenating String2 and String3 = " << String2 + String3 << endl;

    int Result = stoi(String2) * stoi(String3);
    cout << String2 << " * " << String3 << " = " << Result << endl;
    return 0;

}
