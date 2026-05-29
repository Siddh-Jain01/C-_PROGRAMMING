// WAp to describe virat kholi perfomance by using function overloading four funcntional overloading must we    there he is a goat of criket.
#include <iostream>
using namespace std;

class virat
{
    int totalruns = 18000;

public:
    void format()
    {
        cout << "TOTAL RUNS = " << totalruns << endl;
    }

    void format(int odi_runs)
    {
        totalruns = totalruns - odi_runs;
        cout << "ONLY ODI RUNS = " << odi_runs << endl;
       
    }

    void format(int ipl, int x)
    {
         totalruns = totalruns - ipl;
        cout << "ONLY IPL RUNS = " << ipl << endl;
       
    }
};

int main()
{
    virat b;

    b.format();          
    b.format(8000);       
    b.format(10000,1);    

    return 0;
}