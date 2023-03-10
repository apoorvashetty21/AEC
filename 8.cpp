#include<iostream>
#include<stdio.h>
#include<stdlib.h>

usingnamespacestd;
intmain()
{

    intx, y, s, t;

    cout<<"Enter the values of X, Y, s, and T ";
    cin>>x>>y>>s>>t;
    intp, d;

    p = t - (y - 1);

    if (s + 1<p)
    {
d = s + 1;
    }
    else
    {
        d = p;
    }
    intcount = 0;

    for (inti = y; i<= y + d - 1; i++)
    {

        if ((t + 1 - x - i) < (s + 1) && (t + 1 - x - i) >0)
        {

            count += t + 1 - x - i;
        }
        elseif (t + 1 - x - i>= s + 1)
        {

            count += s + 1;
        }
        else
        {
            count += 0;
        }
    }
    cout<<"Posistions: "<<count<<endl;

    return0;
}
