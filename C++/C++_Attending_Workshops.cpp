#include<bits/stdc++.h>

using namespace std;

//Implement the functions initialize and CalculateMaxWorkshops

struct Workshops
{
    double startTime, endTime, duration;
};

struct Available_Workshops
{
    int nWorkshops;
    vector <Workshops> WorkShop;
};

Available_Workshops* initialize(int pStartTime[], int pDuration[], int n)
{
    Available_Workshops* AW = new Available_Workshops;
    AW -> nWorkshops = n;

    for(int i=0;i<n;i++)
    {
        Workshops tempWorkshop;
        tempWorkshop.startTime = pStartTime[i];
        tempWorkshop.duration = pDuration[i];
        tempWorkshop.endTime = pStartTime[i] + pDuration[i];

        AW -> WorkShop.push_back(tempWorkshop);
    }

    return AW;
}

int CalculateMaxWorkshops(Available_Workshops* pAW)
{
    std::sort(pAW -> WorkShop.begin(), pAW -> WorkShop.end(), [](Workshops A, Workshops B){
        return A.endTime < B.endTime;
    });

    int Ret = 0, CurrEndTime = 0;
    for(int i=0; i<pAW -> nWorkshops;i++)
    {
        if(pAW -> WorkShop[i].startTime >= CurrEndTime)
        {
            Ret++;
            CurrEndTime = pAW -> WorkShop[i].endTime;
        }
    }
    return Ret;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

