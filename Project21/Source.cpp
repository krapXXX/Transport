#include <iostream>
#include "Air.h"
#include "Airship.h"
#include "Auto.h"
#include "Boat.h"
#include "Drawn.h"
#include "Ferry.h"
#include "Helicopter.h"
#include "Land.h"
#include "Plane.h"
#include "Tank.h"
#include "Train.h"
#include "Transport.h"
#include "Water.h"
using namespace std;
int main()
{
	Auto a;
	a.Input("Land", 1995, "Auto", "Volkswagen");
	a.Print();
	Drawn d("Land", 1970, "Drawn", "Horse");
	d.Print();
	Plane p("Mriya", 1998, "Plane", "ukr");
	p.Print();
};