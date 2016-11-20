
#include <omnetpp.h>
#include "VirtualRouting.h"
#include "VirtualMobilityManager.h"
#include "GbeerRoutingPacket_m.h"
#include <vector>

using namespace std;

class GbeerRouting: public VirtualRouting {
 protected:
 	void startup();
	void fromApplicationLayer(cPacket *, const char *);
	void fromMacLayer(cPacket *, int, double, double);
	int greedy_forwarding(int, double, double);
	void get_location(double *x ,double *y,int i);
	void selectCell(int i,double x , double y);
	bool neigh_distance(double x_src, double y_src, double x_dest, double y_dest, double thres);
	double get_distance(double x , double y , double x_dest , double y_dest);

};


