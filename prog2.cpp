#include <iostream>
using namespace std;

void Date(string& date)
{
	
    while ( date.length() != 12 ){
        cout << "Chaine invalide.\n" << endl;
        cout<<"entrer une chaine : \n";
        cin>>date;
    }
    
    {
        cout << "La date : " << date.substr(0,2) << "/" << date.substr(2,2) << "/" << date.substr(4,4) << endl;
        cout << "L'heure : " << date.substr(8,2) << "h" << date.substr(10,2) << "min" << endl;
    }
    
}

int main()
{
	string date;
    cout<<"entrer une chaine : ";
    cin>>date;
    Date(date);
}
