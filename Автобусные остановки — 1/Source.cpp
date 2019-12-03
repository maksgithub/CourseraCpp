#include <iostream>
#include <map>
#include <vector>

using namespace std;
std::string GetVectorStr(vector<string> vector)
{
    string res;
    for (auto value : vector)
    {
        res += value + " ";
    }
    return res;
}

void main()
{
    int q;
    cin >> q;
    map<string, vector<string>> buses;

    for (int i = 0; i < q; ++i)
    {
        string command;
        cin >> command;
        if (command == "NEW_BUS")
        {
            string busName, stopName;
            int stopsCount = 0;
            cin >> busName >> stopsCount;
            for (int j = 0; j < stopsCount; ++j)
            {
                cin >> stopName;
                buses[busName].push_back(stopName);
            }
        }
        else if (command == "ALL_BUSES")
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
        else if (command == "BUSES_FOR_STOP")
        {
            string stopName;
            cin >> stopName;
            string res;
            for (auto bus : buses)
            {
                if (find(bus.second.begin(), bus.second.end(), stopName)
                    != bus.second.end()) {
                    res += bus.first + " ";
                }
            }
            if (!res.empty())
            {
                cout << res << endl;
            }
        }
        else if (command == "STOPS_FOR_BUS")
        {
            string busName;
            cin >> busName;
            if (buses[busName].empty())
            {
                std::cout << "No bus" << endl;;
            }
            else
            {
                for (auto stop : buses[busName])
                {
                    std::cout << "Stop " << stop << " ";
                    string res;
                    for (auto bus : buses)
                    {
                        if (std::find(bus.second.begin(), bus.second.end(), stop)
                            != bus.second.end()) {
                            res += bus.first + " ";
                        }
                    }
                    if (res.empty())
                    {
                        std::cout << "!!!!" << endl;;
                    }
                    else
                    {
                        std::cout << res << endl;
                    }
                }
                /*std::cout << "Bus " << busName << ":"
                    << GetVectorStr(buses[busName]) << endl;;*/
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