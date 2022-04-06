#ifndef APPLICATIONMANAGER _H
#define APPLICATIONMANAGER _H
#include <vector>
#include <iostream>

namespace Logical_View
{
    namespace Domain
    {
        namespace ApplicationManager
        {

            class listings
            {
            public:
                std::string listName;
                std::string listLocation;
                std::string listEmployer;
            };

            class ApplicationManager_
            {
            private:

            public:
                // These Functions Need to be implemented in the Application Manager
                getJobListings();
                getApplications();
                removeApplications();

                payFee();
                pickCardType();
                preparePayment();
            };
        }
    }
}

#endif