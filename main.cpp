#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
   ifstream f("doc.txt");
   if(f)
    cout << "succcess" << endl;
   else
    cout << "error" << endl;

   if(f)
   {
       double x;
       double sko=0;
       double sred=0;
       vector <double> values;
       double summa=0;
       int kol=0;
       while (f >>x)
       {
        cout <<x<<endl;
        values.push_back(x);
        summa +=x;
        kol++;
       }
        cout <<"summa =" <<summa <<endl;
        cout <<summa/kol<<endl;

        for (double val:values)
        {
        sred=summa/kol;
            sko += pow(val-sred,2);
            sko=sqrt(sko/kol);
        }
        cout <<"sko="<<sko<<endl;

   }
    return 0;
}
