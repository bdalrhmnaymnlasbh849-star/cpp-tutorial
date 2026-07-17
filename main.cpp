#include <iostream>
#include <cstdlib>

using namespace std;

class Weapon
{
public:
    int capacity;
    float fireRate;

    float Fire()
    {
        return capacity * fireRate;
    }

    float Reload()
    {
        return capacity / fireRate;
    }
};

class Assassin : public Weapon
{
};

class Sniper : public Weapon
{
public:
    int scope;

    float Fire()
    {
        float result = Weapon::Fire();
        return (result * scope);
    }
};



int main()
{
    Sniper Aum;
    Aum.capacity = 7;
    Aum.fireRate = 120;
    Aum.scope = 8;
    cout << Aum.Fire();
}