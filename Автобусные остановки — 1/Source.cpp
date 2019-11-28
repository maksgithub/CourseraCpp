#include <iostream>
#include <map>
#include <vector>
#include "VectorsHelper.h"

using namespace std;
void main()
{
    int q;
    std::cin >> q;
    map<string, vector<string>> buses;

    for (int i = 0; i < q; ++i)
    {
        string command;
        std::cin >> command;
        if(command=="NEW_BUS")
        {
            string busName, stopName;
            int stopsCount =0;
            std::cin >> busName, stopsCount;
            for (int j = 0; j < stopsCount; ++j)
            {
                cin >> stopName;
                buses[busName].push_back(stopName);
            }
        }
        else if(command=="ALL_BUSES")
        {
            if(buses.size() > 0)
            {
                for (auto bus : buses)
                {
                    cout << "Bus " << bus.first << ": "
                    << GetVectorStr(bus.second) << endl;
                }
            }
            else
            {
                cout << "No buses" << endl;
            }
        }
        else if (command == "STOPS_FOR_BUS")
        {
            if (buses.size() > 0)
            {
                for (auto bus : buses)
                {
                    cout << "Bus " << bus.first << ": "
                        << GetVectorStr(bus.second) << endl;
                }
            }
            else
            {
                cout << "No buses" << endl;
            }
        }
    }
}

//10
//ALL_BUSES
//BUSES_FOR_STOP Marushkino
//STOPS_FOR_BUS 32K
//NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
//NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
//BUSES_FOR_STOP Vnukovo
//NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
//NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
//STOPS_FOR_BUS 272
//ALL_BUSES