#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << " Product Price List \n\n";

    cout << left;
    cout << setw(14) << "Product Code" << setw(14) << "Product Name" << setw(30) << "Description"  << endl;
    cout << setw(14) << "B001" << setw(14) << "Leather Watch" << setw(30) << "Black leather, with diamond frame" << endl;
    
    cout << setw(14) << "B002" << setw(14) << "Jordan 12s" << setw(14) << "Black and Red stlye shoes" << endl;
    cout << setw(14) << "B003" << setw(14) << "Arizona Green Tea" << setw(14) << "Beverage with ginseng & honey" << endl;

}