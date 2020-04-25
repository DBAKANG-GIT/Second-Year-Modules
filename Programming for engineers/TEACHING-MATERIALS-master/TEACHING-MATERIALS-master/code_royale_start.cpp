#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// class Point2D {
// public:
//     int x;
//     int y;
// };

class Site { //: public Point2D {
public:
    int siteId;
    int x;
    int y;
    int radius;
    Site(int id, int paramX, int paramY, int r) {
        siteId = id;
        x = paramX;
        y = paramY;
        radius = r;
    }
    int distanceToSq(int paramX, int paramY) {
        int dX = paramX - x;
        int dY = paramY - y;
        return (dX * dX) + (dY * dY);
    }
};

int main()
{
    vector<Site> sites;
    int numSites;
    cin >> numSites; cin.ignore();
    for (int i = 0; i < numSites; i++) {
        int siteId;
        int x;
        int y;
        int radius;
        cin >> siteId >> x >> y >> radius; cin.ignore();
        Site s(siteId, x, y, radius);
        sites.push_back(s);
    }

    cerr << "upto here" << endl;

    // game loop
    while (1) {
        int gold;
        int touchedSite; // -1 if none
        cin >> gold >> touchedSite; cin.ignore();
        for (int i = 0; i < numSites; i++) {
            int siteId;
            int ignore1; // used in future leagues
            int ignore2; // used in future leagues
            int structureType; // -1 = No structure, 2 = Barracks
            int owner; // -1 = No structure, 0 = Friendly, 1 = Enemy
            int param1;
            int param2;
            cin >> siteId >> ignore1 >> ignore2 >> structureType >> owner >> param1 >> param2; cin.ignore();
        }
        int numUnits;
        int ourQueenX;
        int ourQueenY;
        const int FRIENDLY = 0;
        const int QUEEN = -1;
        
        cin >> numUnits; cin.ignore();
        for (int i = 0; i < numUnits; i++) {
            int x;
            int y;
            int owner;
            int unitType; // -1 = QUEEN, 0 = KNIGHT, 1 = ARCHER
            int health;
            cin >> x >> y >> owner >> unitType >> health; cin.ignore();
            if (owner == FRIENDLY && unitType == QUEEN) {
                ourQueenX = x;
                ourQueenY = y;
            }
        }

        int minDist = 50000;
        int closestSiteIndex;
        for (int i = 0; i < sites.size(); i++) {
            int dist = sites[i].distanceToSq(ourQueenX, ourQueenY);
            if (dist < minDist) {
                minDist = dist;
                closestSiteIndex = i;
            }
        }
        
        int nearestSite = sites[closestSiteIndex].siteId;

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // First line: A valid queen action
        // Second line: A set of training instructions
        cout << "BUILD " << nearestSite << " BARRACKS-KNIGHT" << endl;
        cout << "TRAIN " << nearestSite << endl;
    }
}
