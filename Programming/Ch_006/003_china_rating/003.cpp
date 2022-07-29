#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// struct PersonRating{
//     string name;
//     double rating;
// };

void displaySum(map<string, double*> prcRating)
{
    cout << "-------------------------\nSum for each name:\n";
    for (map<string, double*>::iterator it = prcRating.begin(); it != prcRating.end(); ++it)
    {
        cout << "\t" << it->first << ": " << it->second[0] << endl;
    }
}

void displayMean(map<stridng, double*> prcRating)
{
    cout << "-------------------------\nMean for each name:\n";
    for (map<string, double*>::iterator it = prcRating.begin(); it != prcRating.end(); ++it)
    {
        cout << "\t" << it->first << ": " << it->second[0]/it->second[1] << endl;
    }
}

void displayAll(map<string, double*> prcRating)
{
    double sum = 0;
    double mean = 0;
    double num = 0;
    for (map<string, double*>::iterator it = prcRating.begin(); it != prcRating.end(); ++it)
    {
        sum += it->second[0];
        num += it->second[1];
        // it->second[0]/it->second[1] << endl;
    }
    // Display sum and mean for all names 
    cout << "-------------------------\nSum and Mean for All:\n";
    cout << "\tSum All: " << sum << "\n\tMean All: " << sum/num << endl;
}
int main()
{
    // People's Republic of China Social rating. 
    // Double array will contain 2 values
    // Value 1: Sum of all instances
    // Value 2: Number of those instances
    map<string, double*> prcRating;
    vector<string> data;

    do{
        string name;
        double number;
        cin >> name >> number;
        // num.push_back(buf);
        if (prcRating.find(name) == prcRating.end())
        {
            double* init_rating = new double[2]{number, 1.0};
            prcRating.insert(make_pair(name, init_rating));
        }
        else
        {
            double* rating = prcRating[name];
            *rating += number;
            rating++;
            *rating += 1.0;
        }
    }while(cin.peek() == ' ');
    
    displaySum(prcRating);
    displayMean(prcRating);
    displayAll(prcRating);

    /*
    cout << "Your numbers are: ";
    for (int i = 0; i < num.size() - 1; ++i)
    {
        cout << num[i] << ", ";
    }
    cout << num[num.size()-1] << endl;
    */

    // while(true)
    // {
    //     string name, number;
    //     cin >> name;
    //     if (cin.get() == '\n')
    //         break;
    //     cin >> number;
    cout << "Here" << endl;
    
}