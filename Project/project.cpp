#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int inlock, curval, sh;
string xnam, ypas, uunam;

// registration and profile management //
void intro();
void profile(int clct);
void profilereg(int curval);
void regsystem();
void editprofile(int curval);
void loginsystem();
bool check(string username, string userpass, int *clct);
void dltacnt(int curval);


// search functionality //
void search();
void result(string place);


// payment processing and multiple payment option //
void payment(string save_hotels, string save_veh, int sh);
void paymentchoice(int curval);

// data storage //
void showdata(int clct);
void append(string person_name, string password, int inlock, string first_name, string last_name, string username, string phone, string address);


// option menu and setting management //
void introchoice(int curval);
void loginchoice(int clct);
void resultchoice(string shh, string save_veh, int curval);
void resetarrays(vector<string> &save_hotels, string &shh, string &save_veh)
{
    save_hotels.clear();
    shh.clear();
    save_veh.clear();
}


struct np
{
    string name;
    string password;
    string fname;
    string lname;
    string uname;
    string phn;
    string add;
    int lock;
    np *next;
};
np *root;
struct savedata
{
    string hotel_name;
    string transportation_name;
    string dd;
    int pep;
    int cost_paid;
    int pass;
    savedata *nxt;
};
savedata *rot;

int main()
{
    printf("\n\n\n\t\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t\t\t\t        ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==");
    printf("\n\t\t\t\t\t        ==                                           ==");
    printf("\n\t\t\t\t\t        ==                WELCOME                    ==");
    printf("\n\t\t\t\t\t        ==                   TO                      ==");
    printf("\n\t\t\t\t\t        ==               TRAVELWIZ                   ==");
    printf("\n\t\t\t\t\t        ==                                           ==");
    printf("\n\t\t\t\t\t        ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==");
    printf("\n\t\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t\t\t\t\tDO YOU ALREADY HAVE AN ACCOUNT???\n\n\t\t\t\t YES OR NO???\n\n\t\t\t\t=> ");

    // reg and login
    string log;
    cin >> log;
    if (log == "no" or log == "No" or log == "NO")
    {
        regsystem();
    }
    else
    {
        loginsystem();
    }

    system("cls");
    intro();
}

void regsystem()
{
    string firstname;
    string lastname;
    string username;
    string phone;
    string address;
    string user_name;
    string user_pass;
    system("cls");
    printf("\n\n\n\n\n\n\t\t\t\t\t#############################################################");
    printf("\n\t\t\t\t\t##########                 Sign Up                 ##########");
    printf("\n\t\t\t\t\t#############################################################\n");

    printf("\n\n\t\t\t\t\tEnter First Name: ");
    cin >> firstname;
    printf("\n\t\t\t\t\tEnter Last Name: ");
    cin >> lastname;
    printf("\n\t\t\t\t\tEnter Phone Number: ");
    cin >> phone;
    printf("\n\t\t\t\t\tEnter Address: ");
    cin >> address;
    printf("\n\t\t\t\t\tEnter E-Mail: ");
    cin >> user_name;
    xnam = user_name;
    printf("\n\t\t\t\t\tEnter Password: ");
    cin >> user_pass;
    ypas = user_pass;

    inlock++;
    curval = inlock; // without login value to insert the save data
    append(user_name, user_pass, inlock, firstname, lastname, username, phone, address);
}
void append(string person_name, string password, int inlock, string first_name, string last_name, string username, string phone, string address)
{
    np *tmp = new np();
    tmp->name = person_name;
    tmp->password = password;
    tmp->fname = first_name;
    tmp->lname = last_name;
    tmp->uname = username;
    tmp->phn = phone;
    tmp->add = address;
    tmp->lock = inlock;
    tmp->next = root;
    root = tmp;
}

void loginsystem()
{
    string username;
    string userpass;
    int val, checked, clct;
    while (true)
    {
        system("cls");

        printf("\n\n\t\t\t\t\t#############################################################");
        printf("\n\t\t\t\t\t##########                 Sign In                 ##########");
        printf("\n\t\t\t\t\t#############################################################\n");

        printf("\n\n\t\t\t\t\tE-MAIL: ");
        cin >> username;
        printf("\n\t\t\t\t\tPassword: ");
        cin >> userpass;
        val = check(username, userpass, &clct);
        if (val)
        {
            checked = true;
            break;
        }
        else
        {
            printf("\n\n\t\t\t\t\t   WRONG E-MAIL OR PASSWORD, WOULD YOU LIKE TO TRY AGAIN???\n\n\t\t\t\t\tYES OR NO???\n\n\t\t\t\t\t=> ");
            string t;
            cin >> t;
            if (t == "No" or t == "no" or t == "NO")
            {
                main();
            }
            else
            {
                continue;
            }
        }
    }
    curval = clct;
    if (checked)
    {
        intro();
    }
    else
    {
        printf("\n\n\t\t\t\t\tNull");
    }
}

bool check(string username, string userpass, int *clct)
{
    np *chc = root;
    while (chc != NULL)
    {
        if (chc->name == username and chc->password == userpass)
        {
            *clct = chc->lock;
            chc->uname = uunam;
            return true;
        }
        else
        {
            chc = chc->next;
        }
    }
    return false;
}

void showdata(int clct)
{
    savedata *chc = rot;
    while (chc != NULL)
    {
        if (chc->pass = clct)
        {
            cout << "\n\n\t\t\t\t\tYour Date: " << chc->dd;
            cout << "\n\n\t\t\t\t\tYour Travel Companion: " << chc->pep;
            cout << "\n\n\t\t\t\t\tYour Travel Place: " << chc->hotel_name;
            cout << "\n\n\t\t\t\t\tYour Transportation: " << chc->transportation_name;
            cout << "\n\n\t\t\t\t\tTotal Cost For Tour: " << chc->cost_paid << " Tk." << endl;
            break;
        }
        else
        {
            chc = chc->nxt;
        }
    }
    paymentchoice(curval);
}

void intro()
{
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\t\t WELCOME " << uunam << endl;
    printf("\n\n\t\t\t\t\t\t\t\t Enjoy Your Tour With Travelwiz");
    printf("\n\n\t\t\t\t\t\t\t\t     Some Popular Places..."); /// lot's of places to write....

    printf("\n\n\n\t\t\t\t\t       |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf(" |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf("\n\t\t\t\t\t       |||=                       =|||");
    printf(" |||=                       =|||");
    printf("\n\t\t\t\t\t       |||=      Sajek Valley     =|||");
    printf(" |||=       Cox's Bazar     =|||");
    printf("\n\t\t\t\t\t       |||=                       =|||");
    printf(" |||=                       =|||");
    printf("\n\t\t\t\t\t       |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf(" |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");

    printf("\n\n\t\t\t\t\t       |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf(" |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf("\n\t\t\t\t\t       |||=                       =|||");
    printf(" |||=                       =|||");
    printf("\n\t\t\t\t\t       |||=        Jaflong        =|||");
    printf(" |||=        Sundarban      =|||");
    printf("\n\t\t\t\t\t       |||=                       =|||");
    printf(" |||=                       =|||");
    printf("\n\t\t\t\t\t       |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf(" |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");

    printf("\n\n\t\t\t\t\t       |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf(" |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf("\n\t\t\t\t\t      |||=                       =|||");
    printf(" |||=                       =|||");
    printf("\n\t\t\t\t\t       |||=      Kaptai Lake      =|||");
    printf(" |||=         Nilgiri       =|||");
    printf("\n\t\t\t\t\t       |||=                       =|||");
    printf(" |||=                       =|||");
    printf("\n\t\t\t\t\t       |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");
    printf(" |||=-=-=-=-=-=-=-=-=-=-=-=-=|||");

    introchoice(curval);
}

void search()
{
    system("cls");
    string place;
    printf("\n\n\n\t\t\t\t\t        =======================");
    printf("\n\t\t\t\t\t            ||      PLACE        ||");
    printf("\n\t\t\t\t\t            =======================");

    printf("\n\n\n\t\t\t\t\tWhere Would You Like To Go?\n\n\t\t\t\t\t=> ");
    cin >> place;
    result(place);
}

void result(string place)
{
    vector<string> save_hotels(100);
    string shh;
    int aaaa;
    system("cls");
    printf("\n\n\n\t\t\t\t\t        =======================");
    printf("\n\t\t\t\t\t            ||      HOTEL        ||");
    printf("\n\t\t\t\t\t            =======================");

    for (int i = 1; i < place.length(); i++)
    {
        cout << "\n\n\t\t\t\t\t     " << i << ". " << place << " Hotel\n";
        save_hotels[i - 1] = place;
        char temp = place[i - 1];
        place[i - 1] = place[i];
        place[i] = temp;
    }
    aaaa = place.length();
    printf("\n\n\t\t\t\t\t     %d. NONE Hotel\n", aaaa);
    printf("\n\n\t\t\t\t\t    Which Hotel Would You Like To Choose?\n\n\t\t\t\t\t=> ");
    int sh;
    cin >> sh;
    if (sh == aaaa)
    {
        save_hotels[sh - 1] = "NONE";
        shh = "NONE";
        cout << "\n\n\t\t\t\t\t   You Choose " << save_hotels[sh - 1] << " Hotel.";
    }
    else
    {
        shh = save_hotels[sh - 1];
        cout << "\n\n\t\t\t\t\t   " << save_hotels[sh - 1] << " Hotel, Is An Excellent Choice ^-^.";
    }
    ///*******************************************************************

    /// save the hotel to a structure with a specific key for the account***
    /// end of hotel section

    ///***vehicles***
    system("cls");
    int veh;
    string save_veh;
    cout << "\n\n\n\t\t\t\t\t      ==============================";
    cout << "\n\t\t\t\t\t          ||     TRANSPORTATION       ||";
    cout << "\n\t\t\t\t\t          ==============================";

    cout << "\n\n\t\t\t\t\t    What Type Of Transportation Would You Like To Choose??";
    cout << "\n\n\t\t\t\t\t1. Bus\n\n\t\t\t\t\t2. Private Car\n\n\t\t\t\t\t3. Bike\n\n\t\t\t\t\t4. Plane\n\n\t\t\t\t\t5. Boat Or Launch\n\n\t\t\t\t\t6. None\n\n\t\t\t\t\tChoose = ";
    cin >> veh;

    if (veh == 1)
    {
        save_veh = "Bus";
        cout << "\n\n\t\t\t\t\t  You Want To Go Via Bus";
    }
    else if (veh == 2)
    {
        save_veh = "Private Car";
        cout << "\n\n\t\t\t\t\t  You Want To Go Via Private Car";
    }
    else if (veh == 3)
    {
        save_veh = "Bike";
        cout << "\n\n\t\t\t\t\t  You Want To Go Via Bike";
    }
    else if (veh == 4)
    {
        save_veh = "Plane";
        cout << "\n\n\t\t\t\t\t  You Want To Go Via Plane";
    }
    else if (veh == 5)
    {
        save_veh = "Boat Or Launch";
        cout << "\n\n\t\t\t\t\t  You Want To Go Via Boat Or Launch";
    }
    else
    {
        save_veh = "NONE";
        cout << "\n\n\t\t\t\t\t   You Choose NONE Of The Transportation ";
    }
    if (save_hotels[sh] == "NONE" && save_veh == "NONE")
    {
        system("cls");
        introchoice(curval);
    }

    else
    {
        system("cls");
        string deci;
        cout << "\n\n\n\t\t\t\t\t     Are You Sure You Would Like To Book " << shh << " Hotel & Transport Via " << save_veh << "?\n\n\t\t\t\t\t       => YES OR NO\n\n\t\t\t\t\t       => ";
        cin >> deci;
        transform(deci.begin(), deci.end(), deci.begin(), ::tolower);
        if (deci == "yes")
        {
            cout << "\n\n\t\t\t\t\tWould You Like To Pay Now?\n\n\t\t\t\t\t      => YES OR NO\n\n\t\t\t\t\t      => ";
            string p;
            cin >> p;
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            if (p == "no")
            {
                system("cls");
                resultchoice(shh, save_veh, curval);
            }
            else
            {
                payment(shh, save_veh, sh);
            }
        }
        else
        {
            resetarrays(save_hotels, shh, save_veh);
            introchoice(curval);
        }
    }
}

void payment(string shh, string save_veh, int sh)
{
    system("cls");
    printf("\n\n\t\t\t\t\t#############################################################");
    printf("\n\t\t\t\t\t##########                Date & Person            ##########");
    printf("\n\t\t\t\t\t#############################################################\n");
    int pay, de, h;
    string date;
    if (shh == "NONE" and save_veh == "NONE")
    {
        pay = 0;
        system("cls");
        paymentchoice(curval);
    }
    else if (shh == "NONE" && save_veh != "NONE")
    {
        cout << "\n\n\t\t\t\t\t  Going Date : ";
        getline(cin >> ws, date);

        cout << "\n\n\t\t\t\t\t  Members : \n\n\t\t\t\t\t     => ";
        cin >> h;

        pay = save_veh.length() * 500 * h;
    }
    else if (shh != "NONE" && save_veh == "NONE")
    {
        cout << "\n\n\t\t\t\t\t  Going Date : ";
        getline(cin >> ws, date);

        cout << "\n\n\t\t\t\t\t  Members : \n\n\t\t\t\t\t     =>";
        cin >> h;

        pay = shh.length() * 500 * h;
    }
    else
    {
        cout << "\n\n\t\t\t\t\t  Going Date : ";
        getline(cin >> ws, date);

        cout << "\n\n\t\t\t\t\t  Members: \n\n\t\t\t\t\t     =>";
        cin >> h;

        pay = shh.length() * 500 + save_veh.length() * 500 * h;
    }

    cout << "\n\n\t\t\t\t\t     Your Total Cost For Trip: " << pay << " Tk.";
    // system("cls");

    printf("\n\n\n\t\t\t\t\t       ==========================");
    printf("\n\t\t\t\t\t           ||      PAYMENT         ||");
    printf("\n\t\t\t\t\t           ==========================");

    printf("\n\n\t\t\t\t\t    How Would You Like To Pay The Bill?\n");
    printf("\n\t\t\t\t\t\tChoose Your Method To Pay:\n");
    printf("\n\t\t\t\t\t\t    1. Mobile Banking\n");
    printf("\n\t\t\t\t\t\t    2. Card\n");
    printf("\n\t\t\t\t\t\t    3. Bank");
    printf("\n\n\n\t\t\t\t\tWhich Would You Like To Choose, 1 2 or 3?\n\n\t\t\t\t\t     => ");

    cin >> de;
    if (de == 1)
    {
        // system("cls");
        int pref;
        printf("\n\t\t\t\t\t Thank You For Choosing Mobile Bank");

        printf("\n\n\n\n\t\t\t\t\t     ======================");
        printf("\n\t\t\t\t\t           ||    Mobile Bank   ||");
        printf("\n\t\t\t\t\t           ======================");

        printf("\n\n\t\t\t\t\t        1. Bkash\n");
        printf("\n\t\t\t\t\t        2. Rocket\n");
        printf("\n\t\t\t\t\t        3. Nagad\n");
        printf("\n\t\t\t\t\tWhich One Would You Prefer?\n");
        printf("\n\t\t\t\t\t    => ");
        cin >> pref;
        if (pref == 1)
        {
            int mon, pao;
            // system("cls");

            printf("\n\n\n\t\t\t\t\t       ======================");
            printf("\n\t\t\t\t\t           ||       BKash      ||");
            printf("\n\t\t\t\t\t           ======================");

            printf("\n\n\t\t\t\t\tPlease Enter Your Number & PIN-");
            printf("\n\n\t\t\t\t\t    Mobile Number: ");
            cin >> mon;
            printf("\n\t\t\t\t\t    PIN: ");
            cin >> pao;
            printf("\n\n\t\t\t\t\t  THANK YOU, PAYMENT DONE!!!");
        }
        if (pref == 2)
        {
            int mon, pao;
            // system("cls");

            printf("\n\n\n\t\t\t\t\t       ======================");
            printf("\n\t\t\t\t\t           ||      Rocket      ||");
            printf("\n\t\t\t\t\t           ======================");

            printf("\n\n\t\t\t\t\tPlease Enter Your Number & PIN- ");
            printf("\n\n\t\t\t\t\t    Mobile Number: ");
            cin >> mon;
            printf("\n\t\t\t\t\t    PIN: ");
            cin >> pao;
            printf("\n\n\t\t\t\t\t  THANK YOU, PAYMENT DONE!!!");
        }
        if (pref == 3)
        {
            int mon, pao;
            // system("cls");

            printf("\n\n\n\n\n\n\t\t\t\t\t ======================");
            printf("\n\t\t\t\t\t           ||       Nagad      ||");
            printf("\n\t\t\t\t\t           ======================");

            printf("\n\n\t\t\t\t\tPlease Enter Your Number & PIN-");
            printf("\n\n\t\t\t\t\t    Mobile Number: ");
            cin >> mon;
            printf("\n\t\t\t\t\t    PIN: ");
            cin >> pao;
            printf("\n\n\t\t\t\t\t  THANK YOU, PAYMENT DONE!!!");
        }
    }
    if (de == 2)
    {
        int pref;
        // system("cls");

        printf("\n\n\n\n\t\t\t\t\tThank You For Choosing Card");

        printf("\n\n\n\t\t\t\t\t       ======================");
        printf("\n\t\t\t\t\t           ||       Card       ||");
        printf("\n\t\t\t\t\t           ======================");

        printf("\n\n\t\t\t\t\t        1.VISA\n");
        printf("\n\t\t\t\t\t        2.Master Card\n");
        printf("\n\t\t\t\t\t        3.ATM Card\n");
        printf("\n\t\t\t\t\tWhich One Would You Prefer?\n");
        printf("\n\t\t\t\t\t=> ");

        cin >> pref;
        if (pref == 1)
        {
            int card, cv;
            string nm, exp, add, con;
            // system("cls");

            printf("\n\n\n\n\n\n\t\t\t\t\t ======================");
            printf("\n\t\t\t\t\t           ||     VISA Card    ||");
            printf("\n\t\t\t\t\t           ======================");

            printf("\n\n\t\t\t\t\t    Card number: ");
            cin >> card;
            printf("\n\n\t\t\t\t\t    Name: ");
            cin >> nm;
            printf("\n\n\t\t\t\t\t    Address: ");
            cin >> add;
            printf("\n\n\t\t\t\t\t    Country: ");
            cin >> con;
            printf("\n\n\t\t\t\t\t    CVV: ");
            cin >> cv;
            printf("\n\n\t\t\t\t\t    Exp: ");
            cin >> exp;
            printf("\n\n\t\t\t\t\t    THANK YOU, PAYMENT DONE!!!");
        }

        if (pref == 2)
        {
            int card, cv;
            string nm, exp, add, con;
            // system("cls");

            printf("\n\n\n\n\n\n\t\t\t\t\t ======================");
            printf("\n\t\t\t\t\t           ||    Master Card   ||");
            printf("\n\t\t\t\t\t           ======================");

            printf("\n\n\t\t\t\t\t    Card number: ");
            cin >> card;
            printf("\n\n\t\t\t\t\t    Name: ");
            cin >> nm;
            printf("\n\n\t\t\t\t\t    Address: ");
            cin >> add;
            printf("\n\n\t\t\t\t\t    Country: ");
            cin >> con;
            printf("\n\n\t\t\t\t\t    CVV: ");
            cin >> cv;
            printf("\n\n\t\t\t\t\t    Exp: ");
            cin >> exp;
            printf("\n\n\t\t\t\t\t    THANK YOU, PAYMENT DONE!!!");
        }

        if (pref == 3)
        {
            int card, cv;
            string nm, exp, add, con;
            // system("cls");

            printf("\n\n\n\n\n\n\t\t\t\t\t ======================");
            printf("\n\t\t\t\t\t           ||     ATM Card     ||");
            printf("\n\t\t\t\t\t           ======================");

            printf("\n\n\t\t\t\t\t    Card number: ");
            cin >> card;
            printf("\n\n\t\t\t\t\t    Name: ");
            cin >> nm;
            printf("\n\n\t\t\t\t\t    Address: ");
            cin >> add;
            printf("\n\n\t\t\t\t\t    Country: ");
            cin >> con;
            printf("\n\n\t\t\t\t\t    CVV: ");
            cin >> cv;
            printf("\n\n\t\t\t\t\t    Exp: ");
            cin >> exp;
            printf("\n\n\t\t\t\t\t    THANK YOU, PAYMENT DONE!!!");
        }
    }
    if (de == 3)
    {
        // system("cls");
        
        printf("\n\n\n\n\t\t\t\t\tThank you for choosing Bank");

        printf("\n\n\n\t\t\t\t\t       ======================");
        printf("\n\t\t\t\t\t           ||       Bank       ||");
        printf("\n\t\t\t\t\t           ======================");

        printf("\n\n\t\t\t\t\t       This Is Our Merchant Number: 01XXXXXXXXXX\n\n\t\t\t\t\t      THANK YOU!!!\n");
    }
    savedata *tempo = new savedata();
    tempo->hotel_name = shh;
    tempo->transportation_name = save_veh;
    tempo->dd = date;
    tempo->pep = h;
    tempo->cost_paid = pay;
    tempo->pass = curval;
    tempo->nxt = rot;
    rot = tempo;
    system("cls");
    paymentchoice(curval);
}

void profilereg(int curval)
{
    system("cls");
    np *chc = root;

    printf("\n\n\n\n\n\t\t\t\t\t  *****************************\n");
    printf("\t\t\t\t\t  ********             ********\n");
    printf("\t\t\t\t\t  *******    PROFILE    *******\n");
    printf("\t\t\t\t\t  ********             ********\n");
    printf("\t\t\t\t\t  *****************************\n");

    while (chc != NULL)
    {
        if (chc->lock == curval)
        {
            cout << "\n\n\t\t\t\t\t    Name: " << chc->fname << " " << chc->lname;
            cout << "\n\n\t\t\t\t\t    E-Mail: " << chc->name;
            cout << "\n\n\t\t\t\t\t    Phone: " << chc->phn;
            cout << "\n\n\t\t\t\t\t    Address: " << chc->add << endl;
            break;
        }
        else
        {
            chc = chc->next;
        }
    }
    introchoice(curval);
}

// for login
void profile(int clct)
{
    system("cls");
    np *chc = root;
    printf("\n\n\n\n\n\t\t\t\t\t  *****************************\n");
    printf("\t\t\t\t\t  ********             ********\n");
    printf("\t\t\t\t\t  *******    PROFILE    *******\n");
    printf("\t\t\t\t\t  ********             ********\n");
    printf("\t\t\t\t\t  *****************************\n");

    while (chc != NULL)
    {
        if (chc->lock == clct)
        {
            cout << "\n\n\t\t\t\t\t    Name: " << chc->fname << " " << chc->lname << endl;
            cout << "\n\n\t\t\t\t\t    E-Mail: " << chc->name << endl;
            cout << "\n\n\t\t\t\t\t    Phone: " << chc->phn << endl;
            cout << "\n\n\t\t\t\t\t    Address: " << chc->add << endl;
            break;
        }
        else
        {
            chc = chc->next;
        }
    }
    introchoice(clct);
}

void settings(int curval)
{
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t        **                                     **");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t          ****             SETTING             ****");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t        **                                     **");

    printf("\n\n\t\t\t\t\t       1. Edit Profile\n");
    printf("\n\t\t\t\t\t      2. Support and FAQ\n");
    printf("\n\t\t\t\t\t       3. Log Out\n");
    printf("\n\t\t\t\t\t       4. Delete Account\n");
    printf("\n\t\t\t\t\t       5. Back Home\n");
    printf("\n\t\t\t\t\t      => ");
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
    {
        system("cls");
        editprofile(curval);
        break;
    }
    case 2:
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\t\t\t\t\t     *******************************\n");
        printf("\t\t\t\t\t     *********** Support ***********\n");
        printf("\t\t\t\t\t     ***********    &    ***********\n");
        printf("\t\t\t\t\t     ***********   FAQ   ***********\n");
        printf("\t\t\t\t\t     *******************************\n");

        printf("\n\n\t\t\t\t\t              Team Travelwiz");
        printf("\n\n\t\t\t\t\t   Any Problem Feel Free To Contact US");
        printf("\n\n\t\t\t\t\t        Email: travelwiz@gmail.com");
        settings(curval);
        break;
    }
    case 3:
    {
        system("cls");
        main();
        break;
    }
    case 4:
    {
        system("cls");
        dltacnt(curval);
        break;
    }
    case 5:
    {
        system("cls");
        intro();
        break;
    }
    }
}

void editprofile(int curval)
{
    system("cls");
    int x;
    np *a = root;
    string name;
    string password;
    string fname;
    string lname;
    string uname;
    string phn;
    string add;
    printf("\n\n\n\n\n\n\n\t\t\t\t\t     *****************************\n");
    printf("\t\t\t\t\t     ********             ********\n");
    printf("\t\t\t\t\t     ******* EDIT PROFILE  *******\n");
    printf("\t\t\t\t\t     ********             ********\n");
    printf("\t\t\t\t\t     *****************************\n");

    while (a != NULL)
    {
        if (a->lock == curval)
        {
            while (x != 8)
            {
                printf("\n\n\t\t\t\t\t       What Do You Want To Change?");
                printf("\n\n\t\t\t\t\t            1. First Name  ");
                printf("\n\n\t\t\t\t\t            2. Last Name   ");
                printf("\n\n\t\t\t\t\t            3. User Name   ");
                printf("\n\n\t\t\t\t\t            4. Phone Number   ");
                printf("\n\n\t\t\t\t\t            5. ADDRESS  ");
                printf("\n\n\t\t\t\t\t            6. E-Mail      ");
                printf("\n\n\t\t\t\t\t            7. Password    ");
                printf("\n\n\t\t\t\t\t            8. None        \n\n\t\t\t\t\t            => ");
                cin >> x;
                switch (x)
                {
                case 1:
                {
                    printf("\n\n\n\t\t\t\t\t          1. First Name: ");
                    cin >> fname;
                    a->fname = fname;
                    break;
                }
                case 2:
                {
                    printf("\n\n\n\t\t\t\t\t          2. Last Name: ");
                    cin >> lname;
                    a->lname = lname;
                    break;
                }
                case 3:
                {
                    printf("\n\n\n\t\t\t\t\t          3. User Name: ");
                    cin >> uname;
                    a->uname = uname;
                    break;
                }
                case 4:
                {
                    printf("\n\n\n\t\t\t\t\t          4. Phone Number: ");
                    cin >> phn;
                    a->phn = phn;
                    break;
                }
                case 5:
                {
                    printf("\n\n\n\t\t\t\t\t          5. Address: ");
                    cin >> add;
                    a->add = add;
                    break;
                }
                case 6:
                {
                    printf("\n\n\t\t\t\t\t          6. E-Mail: ");
                    cin >> name;
                    a->name = name;
                    break;
                }
                case 7:
                {
                    printf("\n\n\t\t\t\t\t          7. Password: ");
                    cin >> password;
                    a->password = password;
                    break;
                }
                case 8:
                {
                    system("cls");
                    break;
                }noboolalpha;
                }
            }

            system("cls");
            introchoice(curval);
        }
        else
        {
            a = a->next;
        }
    }
}

void dltacnt(int curval)
{
    system("cls");
    np *del = root;
    int h = 0;
    while (del != NULL)
    {
        if (del->lock == curval)
        {
            free(del);
            if (h == 0)
            {
                root = NULL;
            }
            else
            {
                root = root->next;
            }

            system("cls");
            printf("\n\n\n\n\n\n\n\t\t\t\t\t      *****************************\n");
            printf("\t\t\t\t\t      ********             ********\n");
            printf("\t\t\t\t\t      ****** ACCOUNT DELETED ******\n");
            printf("\t\t\t\t\t      ********             ********\n");
            printf("\t\t\t\t\t      *****************************\n");

            printf("\n\n\t\t\t\t\t      Your Account Has Been Deleted -_-");
            main();
            break;
        }
        else
        {
            h++;
            del = del->next;
        }
    }
}

// options

void introchoice(int curval)
{
    printf("\n\n\n\n\n\n\n\t\t\t\t\t        **                                     **");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t         ****             OPTIONS             ****");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t        **                                     **");

    printf("\n\n\t\t\t\t\t         1. Search\n");
    printf("\n\t\t\t\t\t         2. Profile\n");
    printf("\n\t\t\t\t\t         3. Payment\n");
    printf("\n\t\t\t\t\t         4. Setting\n");
    printf("\n\t\t\t\t\t         5. Logout\n");
    printf("\n\t\t\t\t\t         6. Quit\n");
    printf("\n\t\t\t\t\t         => ");
    int c;
    cin >> c;
    switch (c)
    {
    case 1:
    {
        system("cls");
        search();
        break;
    }
    case 2:
    {
        system("cls");
        profilereg(curval);
        break;
    }
    case 3:
    {
        system("cls");
        showdata(curval);
        break;
    }
    case 4:
    {
        system("cls");
        settings(curval);
        break;
    }

    case 5:
    {
        system("cls");
        main();
        break;
    }
    case 6:
    {
        return;
    }
    default:
    {
        break;
    }
    }
}

void loginchoice(int clct)
{
    printf("\n\n\n\n\n\n\n\t\t\t\t\t        **                                     **");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t          ****             OPTIONS             ****");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t        **                                     **");

    printf("\n\n\t\t\t\t\t         1. Home\n");
    printf("\n\t\t\t\t\t         2. Search\n");
    printf("\n\t\t\t\t\t         3. Profile\n");
    printf("\n\t\t\t\t\t         4. Payment\n");
    printf("\n\t\t\t\t\t         5. Setting\n");
    printf("\n\t\t\t\t\t         6. Logout\n");
    printf("\n\t\t\t\t\t         7. Quit\n");
    printf("\n\t\t\t\t\t         => ");
    int c;
    cin >> c;
    switch (c)
    {
    case 1:
    {
        intro();
        break;
    }
    case 2:
    {
        search();
        break;
    }
    case 3:
    {
        profile(clct);
        break;
    }
    case 4:
    {
        showdata(clct);
        break;
    }
    case 5:
    {
        settings(clct);
        break;
    }

    case 6:
    {
        main();
        break;
    }
    case 7:
    {
        return;
    }
    default:
    {
        break;
    }
    }
}

void resultchoice(string save_hotel, string save_veh, int curval)
{
    printf("\n\n\n\n\n\n\n\t\t\t\t\t        **                                     **");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t          ****             OPTIONS             ****");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t        **                                     **");

    printf("\n\n\t\t\t\t\t         1. Home\n");
    printf("\n\t\t\t\t\t         2. Search\n");
    printf("\n\t\t\t\t\t         3. Payment\n");
    printf("\n\t\t\t\t\t         4. Profile\n");
    printf("\n\t\t\t\t\t         5. Payment\n");
    printf("\n\t\t\t\t\t         6. Setting\n");
    printf("\n\t\t\t\t\t         7. Logout\n");
    printf("\n\t\t\t\t\t         8. Quit\n");
    printf("\n\t\t\t\t\t         => ");

    int c;
    cin >> c;
    switch (c)
    {
    case 1:
    {
        intro();
        break;
    }
    case 2:
    {
        search();
        break;
    }

    case 3:
    {
        payment(save_hotel, save_veh, sh);
        break;
    }
    case 4:
    {
        profile(curval);
        break;
    }
    case 5:
    {
        showdata(curval);
        break;
    }
    case 6:
    {
        settings(curval);
        break;
    }
    case 7:
    {
        main();
        break;
    }
    case 8:
    {
        return;
    }
    default:
    {

        break;
    }
    }
}

void paymentchoice(int curval)
{
    printf("\n\n\n\n\n\n\n\t\t\t\t\t        **                                     **");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t          ****             OPTIONS             ****");
    printf("\n\t\t\t\t\t         ***-----------------------------------***");
    printf("\n\t\t\t\t\t        **                                     **");

    printf("\n\n\t\t\t\t\t         1. Home\n");
    printf("\n\t\t\t\t\t         2. Profile\n");
    printf("\n\t\t\t\t\t         3. Search\n");
    printf("\n\t\t\t\t\t         4. Payment\n");
    printf("\n\t\t\t\t\t         5. Setting\n");
    printf("\n\t\t\t\t\t         6. Logout\n");
    printf("\n\t\t\t\t\t         7. Quit\n");
    printf("\n\t\t\t\t\t         => ");

    int c;
    cin >> c;
    switch (c)
    {
    case 1:
    {
        intro();
        break;
    }

    case 2:
    {
        profile(curval);
        break;
    }

    case 3:
    {
        search();
        break;
    }
    case 4:
    {
        showdata(curval);
        break;
    }
    case 5:
    {
        settings(curval);
        break;
    }
    case 6:
    {
        main();
        break;
    }
    case 7:
    {
        return;
    }
    default:
    {
        break;
    }
    }
}
