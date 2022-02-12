#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // argc gives you the NUMBER of command line parameters
    cout << "There were " << argc << " parameters\n";
    // argv is an array containing same;
    for (int i=0; i<argc; i++)
        cout << "Parameter " << i << " was " << argv[i] << "\n";

    // convert argv[1] to integer
    int cl_param;
    cl_param = atoi(argv[1]);

    // check argv[1] against a number;
    int my_var;

    cout << "\n\nEnter an integer between 1 and 9999: ";
    cin >> my_var;
    if (cl_param>my_var)
        cout << "\n\nThe command line parameter of " << cl_param
             << " is > " << my_var;
    if (cl_param<my_var)
        cout << "\n\nThe command line parameter of " << cl_param
             << " is < " << my_var;
    if (cl_param==my_var)
        cout << "\n\nThe command line parameter of " << cl_param
             << " = " << my_var;
    if (cl_param==0)
        cout << "\n\nDid you enter 0?";

    cout << "\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
