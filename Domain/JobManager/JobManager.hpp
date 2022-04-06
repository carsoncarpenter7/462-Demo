#ifndef JOBMANAGER _H
#define JOBMANAGER _H
#include <vector>
#include <iostream>

namespace Logical_View
{
    namespace Domain
    {
        namespace JobManager
        {

            class listings
            {
            public:
                std::string listName;
                std::string listLocation;
                std::string listEmployer;
            };

            class JobManager_
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