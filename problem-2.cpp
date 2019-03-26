#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
    double mass,density,volume;

    
    cout << "Enter mass: " ;
    cin >> mass;
    cout << "Enter density: ";
    cin >> density;

    volume = ((mass/4)/ density);
	cout << fixed << showpoint << setprecision(2);
    cout << "Volume is:" << volume <<endl;

}
