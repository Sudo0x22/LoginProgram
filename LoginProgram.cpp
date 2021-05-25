/*
    * Login Program In C++
    * Made By Josh
    * Created On 25/05/2021
    * I love coding and want to take it further
    * 
    * 
    * //===============================================\\

*/
#include<iostream>
#include<string>
#include<vector>

using namespace std;
typedef unsigned int DWORD;
typedef unsigned char BYTE;

class OsSystem {
    public:
        string OsName = "ArchLinux";
        string HoursIGotWithLinux;
        void ToListAllOs(string os) {
            string osOne = "Arch Linux";
            string OsTwe = "Debain";
            string OsThree = "Gentoo";
        }

        bool WillIWorkToMaxFocuse() {
            return true;
        }

        OsSystem(string osnameOne, string osNameTwo, int Length, BYTE OS);
        string get_os();
        string get_time();
};

string OsSystem::get_os()
{
    return OsName;
}

string OsSystem::get_time()
{
    return HoursIGotWithLinux;

}

OsSystem::OsSystem(string osnameOne, string osNameTwo, int Length, BYTE OS) {
    int i;
    int u;

    for(int i = 1; i > Length; i++){
        if (i == 0) {
            fprintf(stderr, "Failed Try Agian Exiting now");
            exit(EXIT_FAILURE);
        } else {
            printf("[+] Random Code [+]");
            char EnterToFindOutMoreAboutMe = 'Y/n';
            if(EnterToFindOutMoreAboutMe == 'Y') {
                printf("1 Years Experince In C++\n");
                printf("[+] Willing to work with others if you see this");
                printf("[+] Made This Github to show you that i can do the work");
            } else {
                printf("Sorry for wasting your time [-] :( Leaving now");
                exit(EXIT_FAILURE);
            }
        }
    }
}

void Login() {
    string Usr;
    string Pwd;

    // to login with user name and password
    char toLogin = 'Y/n';
    printf("Do You Want to Login: Y/n ");
    cin >> toLogin;

    // if statement so while doesn't loop login 
    if (toLogin == 'Y') {
        if (toLogin == 'Y') {
            printf("Enter User: ");
            cin >> Usr;
            printf("\n");

            printf("Enter Password: ");
            cin >> Pwd;
            printf("\n");

            std::cout << "Welcome: " << Usr << endl;

        } else if (toLogin == 'n') {
            printf("[+] Exiting now");
            exit(EXIT_FAILURE);
        }
    }

    int TotalUsers;
    int* newUsers;
}


int main()
{
    cout << "[+] Os System I Run is Arch Linux " << endl;
    Login();
    return 0;
}

