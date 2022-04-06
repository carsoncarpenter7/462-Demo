#include "UserInterfaceHandler.hpp"
#include <iostream>
#include <string>
#include <vector>

void ApplyForPosition()
{
    // These Functions Need to be implemented in the Application Manager
    // getJobListings();
    // getApplications();
    // removeApplications();
    std::cout << "Test \n";
    std::cout << "Session ID: 6Y234T42\n";
}

void MakePayment()
{
    // These Functions Need to be implemented in the Application Manager
    // payFee();
    // pickCardType();
    // preparePayment();
    std::cout << "Test \n";
    std::cout << "Session ID: 6Y234T42\n";
}

void MaintainProfile()
{
    // This Functions Need to be moved to Profile Manager
    // getCompanyProfile();
    // editJobDetail();
    // SaveJobListing();
    std::cout << "Test \n";
    std::cout << "Session ID: 6Y234T42\n";
}

int main()
{
    // step 1 authenticate user or Create Account
    std::string username, email;
    std::string password;
    int usecase;
    int logInCreate = 0;

    std::cout << "Welcome to the Employment Matching System! Please Enter a Number to Continue \n";
    std::cout << "[1] - Log In\n";
    std::cout << "[2] - Create An Account \n";
    std::cin >> logInCreate;
    std::cout << std::endl;

    // Authenticate User
    if (logInCreate == 1)
    {
        std::cout << "Please Enter your Username: \n";
        std::cin >> username;
        std::cout << "Please Enter your Password: \n";
        std::cin >> password;
        std::cout << std::endl;
        std::cout << "Session ID: 6Y234T42\n";
        std::cout << username << " Menu: \n";
        std::cout << "[1] - Find Job\n";
        std::cout << "[2] - Apply for Position\n";
        std::cout << "[3] - Make Payment\n";
        std::cout << "[4] - Cancel Monthly Subscription\n";
        std::cout << "[5] - Maintain Profile Information\n";
        std::cout << "[6] - Update Employment Status\n";
        std::cout << "[7] - End Session\n";
        std::cin >> usecase;
        switch (usecase)
        {
        case 1:
            break;
        case 2:
            ApplyForPosition();
            break;
        case 3:
            MaintainProfile();
            break;
        case 4:
            break;
        case 5:
            MakePayment();
            break;
        case 6:
            break;
        case 7:
            break;
        }
    }
    // Create Account
    if (logInCreate == 2)
    {
        std::cout << "Please Enter your Email: \n";
        std::cin >> email;
        std::cout << "Please Enter your Username: \n";
        std::cin >> username;
        std::cout << "Please Enter your Password: \n";
        std::cin >> password;
        std::cout << std::endl;
        std::cout << "Session ID: 6Y234T42";
    }
}