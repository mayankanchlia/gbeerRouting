//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/gbeerRouting/GbeerRoutingPacket.msg.
//

#ifndef _GBEERROUTINGPACKET_M_H_
#define _GBEERROUTINGPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "RoutingPacket_m.h"
// }}

/**
 * Class generated from <tt>src/node/communication/routing/gbeerRouting/GbeerRoutingPacket.msg:21</tt> by nedtool.
 * <pre>
 * packet GbeerRoutingPacket extends RoutingPacket
 * {
 *     string source;
 *     string destination;
 *     string str;
 *     int priority;
 *     int hop_id;
 *     double X;
 *     double Y;
 *     int id;
 *     double X_dest;
 *     double Y_dest;
 * }
 * </pre>
 */
class GbeerRoutingPacket : public ::RoutingPacket
{
  protected:
    opp_string source_var;
    opp_string destination_var;
    opp_string str_var;
    int priority_var;
    int hop_id_var;
    double X_var;
    double Y_var;
    int id_var;
    double X_dest_var;
    double Y_dest_var;

  private:
    void copy(const GbeerRoutingPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GbeerRoutingPacket&);

  public:
    GbeerRoutingPacket(const char *name=NULL, int kind=0);
    GbeerRoutingPacket(const GbeerRoutingPacket& other);
    virtual ~GbeerRoutingPacket();
    GbeerRoutingPacket& operator=(const GbeerRoutingPacket& other);
    virtual GbeerRoutingPacket *dup() const {return new GbeerRoutingPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getSource() const;
    virtual void setSource(const char * source);
    virtual const char * getDestination() const;
    virtual void setDestination(const char * destination);
    virtual const char * getStr() const;
    virtual void setStr(const char * str);
    virtual int getPriority() const;
    virtual void setPriority(int priority);
    virtual int getHop_id() const;
    virtual void setHop_id(int hop_id);
    virtual double getX() const;
    virtual void setX(double X);
    virtual double getY() const;
    virtual void setY(double Y);
    virtual int getId() const;
    virtual void setId(int id);
    virtual double getX_dest() const;
    virtual void setX_dest(double X_dest);
    virtual double getY_dest() const;
    virtual void setY_dest(double Y_dest);
};

inline void doPacking(cCommBuffer *b, GbeerRoutingPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GbeerRoutingPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _GBEERROUTINGPACKET_M_H_

