/*
    COPYRIGHT (C) 2018 Zach Burkhardt (zmb14) All rights reserved.
    CSI Project - Part 2
    Author. Zach Burkhardt
            zmb14@zips.uakron.edu
    Version. 2.00 11.04.2018
    Purpose: This program will tell a user the time to travel based on selected location and transportation method.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::showpoint;
using std::string;

// Setting constants for transportation methods and distances
const int HELICOPTER = 130,
          TURBO_PROP = 250,
          MIDSIZE_JET = 400,
          HEAVY_JET = 550;

const float CLE_ORD = 273.00f,
            ORD_JFK = 641.00f,
            DEN_JFK = 1409.00f,
            JFK_SFO = 2242.00f,
            JFK_MIA = 949.00f,
            DFW_CYYZ = 1041.00f;

void transMenu(int &selection);
void transConfirm(int &selection);
void routeMenu(float &selection);
void routeConfirm(float &selection, string &route);
void getWind(signed short int &wind);
void calculateTime(int &transSpeed, float &routeDistance, string &route, signed short int &wind);

int main()
{
    // Set formatting
    cout << setprecision(1) << showpoint << fixed;

    do
    {

        // Get transportation method
        int transSel = 0;
        transMenu(transSel);

        if(transSel == 5) // Ends program if quit is chosen
        {
            return 0;
        }

        transConfirm(transSel);

        // Get route
        float routeSel = 0;
        routeMenu(routeSel);
        string routeName;
        routeConfirm(routeSel, routeName);

        // Get wind speed
        signed short int windSpeed = 0;
        getWind(windSpeed);

        calculateTime(transSel, routeSel, routeName, windSpeed);

    } while(true);
}


void transMenu(int &selection)
{
    cout << "Welcome to Zach Burkhardt Airlines" << endl;

    bool invalidInput = true;
    do // Main Menu, choose transportation method
    {

        cout << endl;
        cout << "  --------------------------------------------" << endl;
        cout << " |               1) Helicopter                |" << endl;
        cout << " |               2) Turbo Prop                |" << endl;
        cout << " |               3) Midsize Jet               |" << endl;
        cout << " |               4) Heavy Jet                 |" << endl;
        cout << " |               5) QUIT                      |" << endl;
        cout << "  --------------------------------------------" << endl;
        cout << endl;

        cout << "Enter the number of your transportation method and press Enter: ";
        cin >> selection;

        if((cin.fail()) || (selection < 1) || (selection > 5)) // Verifies good input
        {
            cout << "*** SELECTION IS INVALID ***";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            invalidInput = true;
        }
        else
        {
            invalidInput = false;
        }

    } while(invalidInput);

    return;
}


void transConfirm(int &selection)
{
    // Helicopter Branch
    if(selection == 1)
    {
        cout << "*** HELICOPTER SELECTED ***" << endl;

        selection = HELICOPTER;
    }

    // Turbo Prop Branch
    else if(selection == 2)
    {
        cout << "*** TURBO PROP SELECTED ***" << endl;

        selection = TURBO_PROP;
    }

    // Midsize Jet Branch
    else if(selection == 3)
    {
        cout << "*** MIDSIZE JET SELECTED ***" << endl;

        selection = MIDSIZE_JET;
    }

    // Heavy Jet Branch
    else if(selection == 4)
    {
        cout << "*** HEAVY JET SELECTED ***" << endl;

        selection = HEAVY_JET;
    }

    return;
}


void routeMenu(float &selection)
{
    bool invalidInput = true;
    do
    {

        cout << endl;
        cout << "  --------------------------------------------" << endl;
        cout << " |                 1) CLE-ORD                 |" << endl;
        cout << " |                 2) ORD-JFK                 |" << endl;
        cout << " |                 3) DEN-JFK                 |" << endl;
        cout << " |                 4) JFK-SFO                 |" << endl;
        cout << " |                 5) JFK-MIA                 |" << endl;
        cout << " |                 6) DFW-CYYZ                |" << endl;
        cout << "  --------------------------------------------" << endl;
        cout << endl;

        cout << endl;
        cout << "Enter the number of your route and press Enter: ";
        cin >> selection;

        if((cin.fail()) || (selection < 1) || (selection > 6))
        {
            cout << "*** SELECTION IS INVALID ***" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            invalidInput = true;
        }
        else
        {
            invalidInput = false;
        }

    } while(invalidInput);

    return;
}


void routeConfirm(float &selection, string &route)
{
    if(selection == 1) // Branch for route
    {
        cout << "*** CLE-ORD ROUTE SELECTED ***" << endl;
        cout << endl;

        selection = CLE_ORD;
        route = "CLE to ORD";
    }

	else if(selection == 2) // Branch for route
	{
		cout << "*** ORD-JFK ROUTE SELECTED ***" << endl;
		cout << endl;

		selection = ORD_JFK;
		route = "ORD to JFK";
	}

	else if(selection == 3) // Branch for route
	{
		cout << "*** DEN-JFK ROUTE SELECTED ***" << endl;
		cout << endl;

		selection = DEN_JFK;
		route = "DEN to JFK";
	}

	else if(selection == 4) // Branch for route
	{
		cout << "*** JFK-SFO ROUTE SELECTED ***" << endl;
		cout << endl;

		selection = JFK_SFO;
		route = "JFK to SFO";
	}

	else if(selection == 5) // Branch for route
	{
		cout << "*** JFK-MIA ROUTE SELECTED ***" << endl;
		cout << endl;

		selection = JFK_MIA;
		route = "JFK to MIA";
	}

	else if(selection == 6) // Branch for route
	{
		cout << "*** DFW-CYYZ ROUTE SELECTED ***" << endl;
		cout << endl;

		selection = DFW_CYYZ;
		route = "DFW to CYYZ";
	}

	return;
}


void getWind(signed short int &wind)
{
    bool invalidInput = true;
    do
    {

        cout << "Enter the wind speed in MPH (negative for tail wind) and press Enter: ";
        cin >> wind;

        if((cin.fail()) || (wind > 100) || (wind < -100))
        {
            cout << "*** SELECTION IS INVALID. MUST BE BETWEEN -100 AND 100 ***" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            invalidInput = true;
        }
        else
        {
            invalidInput = false;
        }

    } while(invalidInput);

    return;
}


void calculateTime(int &transSpeed, float &routeDistance, string &route, signed short int &wind)
{
    cout << "Your total flight time from " << route << " is " << (routeDistance / (transSpeed + wind)) << " Hours." << endl;

    // Wait for user input to continue
    // Gives user time to read
    cout << endl;
    cout << "Press any key, then hit Enter, to continue ";
    char wait;
    cin >> wait;

    return;
}
