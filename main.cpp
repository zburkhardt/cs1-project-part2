/*
    COPYRIGHT (C) 2018 Zach Burkhardt (zmb14) All rights reserved.
    CSI Project - Part 1
    Author. Zach Burkhardt
            zmb14@zips.uakron.edu
    Version. 1.00 09.29.2018
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

int main()
{
    bool loopProgram = true; // loop program until quit from menu
    float time = 0; // Travel time

    // Set formatting
    cout << setprecision(1) << showpoint << fixed;

    do
    {

        cout << "Welcome to Zach Burkhardt Airlines" << endl;

        int transSel = 0;
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
            cin >> transSel;

            if((cin.fail()) || (transSel < 1) || (transSel > 5)) // Verifies good input
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





        // Helicopter Branch
        if(transSel == 1)
        {
            cout << "*** HELICOPTER SELECTED ***" << endl;

            int routeSel = 0;
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
                cin >> routeSel;

                if((cin.fail()) || (routeSel < 1) || (routeSel > 6))
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


            if(routeSel == 1) // Branch for route
            {
                cout << "*** CLE-ORD ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = CLE_ORD / (HELICOPTER + wind);
                cout << "Your total flight time from CLE-ORD is " << time << " Hours." << endl;

            }
            else if(routeSel == 2) // Branch for route
            {
                cout << "*** ORD-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = ORD_JFK / (HELICOPTER + wind);
                cout << "Your total flight time from ORD-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 3) // Branch for route
            {
                cout << "*** DEN-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DEN_JFK / (HELICOPTER + wind);
                cout << "Your total flight time from DEN-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 4) // Branch for route
            {
                cout << "*** JFK-SFO ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_SFO / (HELICOPTER + wind);
                cout << "Your total flight time from JFK-SFO is " << time << " Hours." << endl;

            }
            else if(routeSel == 5) // Branch for route
            {
                cout << "*** JFK-MIA ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_MIA / (HELICOPTER + wind);
                cout << "Your total flight time from JFK-MIA is " << time << " Hours." << endl;

            }
            else if(routeSel == 6) // Branch for route
            {
                cout << "*** DFW-CYYZ ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DFW_CYYZ / (HELICOPTER + wind);
                cout << "Your total flight time from DFW-CYYZ is " << time << " Hours." << endl;

            }

            // Categorizes flight based on length
            if (time < 3)
            {
                cout << "Short-haul flight" << endl;
            }
            else if (time < 6)
            {
                cout << "Medium-haul flight" << endl;
            }
            else if (time < 12)
            {
                cout << "Long-haul flight" << endl;
            }
            else
            {
                cout << "Ultra long-haul flight" << endl;
            }
        }




        // Turbo Prop Branch
        else if(transSel == 2)
        {
            cout << "*** TURBO PROP SELECTED ***" << endl;

            int routeSel = 0;
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
                cin >> routeSel;

                if((cin.fail()) || (routeSel < 1) || (routeSel > 6))
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


            if(routeSel == 1) // Branch for route
            {
                cout << "*** CLE-ORD ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = CLE_ORD / (TURBO_PROP + wind);
                cout << "Your total flight time from CLE-ORD is " << time << " Hours." << endl;

            }
            else if(routeSel == 2) // Branch for route
            {
                cout << "*** ORD-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = ORD_JFK / (TURBO_PROP + wind);
                cout << "Your total flight time from ORD-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 3) // Branch for route
            {
                cout << "*** DEN-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DEN_JFK / (TURBO_PROP + wind);
                cout << "Your total flight time from DEN-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 4) // Branch for route
            {
                cout << "*** JFK-SFO ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_SFO / (TURBO_PROP + wind);
                cout << "Your total flight time from JFK-SFO is " << time << " Hours." << endl;

            }
            else if(routeSel == 5) // Branch for route
            {
                cout << "*** JFK-MIA ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_MIA / (TURBO_PROP + wind);
                cout << "Your total flight time from JFK-MIA is " << time << " Hours." << endl;

            }
            else if(routeSel == 6) // Branch for route
            {
                cout << "*** DFW-CYYZ ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DFW_CYYZ / (TURBO_PROP + wind);
                cout << "Your total flight time from DFW-CYYZ is " << time << " Hours." << endl;

            }

            // Categorizes flight based on length
            if (time < 3)
            {
                cout << "Short-haul flight" << endl;
            }
            else if (time < 6)
            {
                cout << "Medium-haul flight" << endl;
            }
            else if (time < 12)
            {
                cout << "Long-haul flight" << endl;
            }
            else
            {
                cout << "Ultra long-haul flight" << endl;
            }
        }




        // Midsize Jet Branch
        else if(transSel == 3)
        {
            cout << "*** MIDSIZE JET SELECTED ***" << endl;

            int routeSel = 0;
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
                cin >> routeSel;

                if((cin.fail()) || (routeSel < 1) || (routeSel > 6))
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


            if(routeSel == 1) // Branch for route
            {
                cout << "*** CLE-ORD ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = CLE_ORD / (MIDSIZE_JET + wind);
                cout << "Your total flight time from CLE-ORD is " << time << " Hours." << endl;

            }
            else if(routeSel == 2) // Branch for route
            {
                cout << "*** ORD-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = ORD_JFK / (MIDSIZE_JET + wind);
                cout << "Your total flight time from ORD-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 3) // Branch for route
            {
                cout << "*** DEN-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DEN_JFK / (MIDSIZE_JET + wind);
                cout << "Your total flight time from DEN-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 4) // Branch for route
            {
                cout << "*** JFK-SFO ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_SFO / (MIDSIZE_JET + wind);
                cout << "Your total flight time from JFK-SFO is " << time << " Hours." << endl;

            }
            else if(routeSel == 5) // Branch for route
            {
                cout << "*** JFK-MIA ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_MIA / (MIDSIZE_JET + wind);
                cout << "Your total flight time from JFK-MIA is " << time << " Hours." << endl;

            }
            else if(routeSel == 6) // Branch for route
            {
                cout << "*** DFW-CYYZ ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DFW_CYYZ / (MIDSIZE_JET + wind);
                cout << "Your total flight time from DFW-CYYZ is " << time << " Hours." << endl;

            }

            // Categorizes flight based on length
            if (time < 3)
            {
                cout << "Short-haul flight" << endl;
            }
            else if (time < 6)
            {
                cout << "Medium-haul flight" << endl;
            }
            else if (time < 12)
            {
                cout << "Long-haul flight" << endl;
            }
            else
            {
                cout << "Ultra long-haul flight" << endl;
            }
        }




        // Heavy Jet Branch
        else if(transSel == 4)
        {
            cout << "*** HEAVY JET SELECTED ***" << endl;

            int routeSel = 0;
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
                cin >> routeSel;

                if((cin.fail()) || (routeSel < 1) || (routeSel > 6))
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


            if(routeSel == 1) // Branch for route
            {
                cout << "*** CLE-ORD ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = CLE_ORD / (HEAVY_JET + wind);
                cout << "Your total flight time from CLE-ORD is " << time << " Hours." << endl;

            }
            else if(routeSel == 2) // Branch for route
            {
                cout << "*** ORD-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = ORD_JFK / (HEAVY_JET + wind);
                cout << "Your total flight time from ORD-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 3) // Branch for route
            {
                cout << "*** DEN-JFK ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DEN_JFK / (HEAVY_JET + wind);
                cout << "Your total flight time from DEN-JFK is " << time << " Hours." << endl;

            }
            else if(routeSel == 4) // Branch for route
            {
                cout << "*** JFK-SFO ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_SFO / (HEAVY_JET + wind);
                cout << "Your total flight time from JFK-SFO is " << time << " Hours." << endl;

            }
            else if(routeSel == 5) // Branch for route
            {
                cout << "*** JFK-MIA ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = JFK_MIA / (HEAVY_JET + wind);
                cout << "Your total flight time from JFK-MIA is " << time << " Hours." << endl;

            }
            else if(routeSel == 6) // Branch for route
            {
                cout << "*** DFW-CYYZ ROUTE SELECTED ***" << endl;
                cout << endl;

                signed short int wind = 0;
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

                time = DFW_CYYZ / (HEAVY_JET + wind);
                cout << "Your total flight time from DFW-CYYZ is " << time << " Hours." << endl;


            }

            // Categorizes flight based on length
            if (time < 3)
            {
                cout << "Short-haul flight" << endl;
            }
            else if (time < 6)
            {
                cout << "Medium-haul flight" << endl;
            }
            else if (time < 12)
            {
                cout << "Long-haul flight" << endl;
            }
            else
            {
                cout << "Ultra long-haul flight" << endl;
            }
        }




        // Ends program if quit is chosen
        else
        {
            loopProgram = false;
        }


        // Wait for user input to continue
        // Gives user time to read
        cout << endl;
        cout << "Press any key, then hit Enter, to continue ";
        char wait;
        cin >> wait;


    } while(loopProgram);


return 0;

}
