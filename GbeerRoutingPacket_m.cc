//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/gbeerRouting/GbeerRoutingPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "GbeerRoutingPacket_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(GbeerRoutingPacket);

GbeerRoutingPacket::GbeerRoutingPacket(const char *name, int kind) : ::RoutingPacket(name,kind)
{
    this->source_var = 0;
    this->destination_var = 0;
    this->str_var = 0;
    this->priority_var = 0;
    this->hop_id_var = 0;
    this->X_var = 0;
    this->Y_var = 0;
    this->id_var = 0;
    this->X_dest_var = 0;
    this->Y_dest_var = 0;
}

GbeerRoutingPacket::GbeerRoutingPacket(const GbeerRoutingPacket& other) : ::RoutingPacket(other)
{
    copy(other);
}

GbeerRoutingPacket::~GbeerRoutingPacket()
{
}

GbeerRoutingPacket& GbeerRoutingPacket::operator=(const GbeerRoutingPacket& other)
{
    if (this==&other) return *this;
    ::RoutingPacket::operator=(other);
    copy(other);
    return *this;
}

void GbeerRoutingPacket::copy(const GbeerRoutingPacket& other)
{
    this->source_var = other.source_var;
    this->destination_var = other.destination_var;
    this->str_var = other.str_var;
    this->priority_var = other.priority_var;
    this->hop_id_var = other.hop_id_var;
    this->X_var = other.X_var;
    this->Y_var = other.Y_var;
    this->id_var = other.id_var;
    this->X_dest_var = other.X_dest_var;
    this->Y_dest_var = other.Y_dest_var;
}

void GbeerRoutingPacket::parsimPack(cCommBuffer *b)
{
    ::RoutingPacket::parsimPack(b);
    doPacking(b,this->source_var);
    doPacking(b,this->destination_var);
    doPacking(b,this->str_var);
    doPacking(b,this->priority_var);
    doPacking(b,this->hop_id_var);
    doPacking(b,this->X_var);
    doPacking(b,this->Y_var);
    doPacking(b,this->id_var);
    doPacking(b,this->X_dest_var);
    doPacking(b,this->Y_dest_var);
}

void GbeerRoutingPacket::parsimUnpack(cCommBuffer *b)
{
    ::RoutingPacket::parsimUnpack(b);
    doUnpacking(b,this->source_var);
    doUnpacking(b,this->destination_var);
    doUnpacking(b,this->str_var);
    doUnpacking(b,this->priority_var);
    doUnpacking(b,this->hop_id_var);
    doUnpacking(b,this->X_var);
    doUnpacking(b,this->Y_var);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->X_dest_var);
    doUnpacking(b,this->Y_dest_var);
}

const char * GbeerRoutingPacket::getSource() const
{
    return source_var.c_str();
}

void GbeerRoutingPacket::setSource(const char * source)
{
    this->source_var = source;
}

const char * GbeerRoutingPacket::getDestination() const
{
    return destination_var.c_str();
}

void GbeerRoutingPacket::setDestination(const char * destination)
{
    this->destination_var = destination;
}

const char * GbeerRoutingPacket::getStr() const
{
    return str_var.c_str();
}

void GbeerRoutingPacket::setStr(const char * str)
{
    this->str_var = str;
}

int GbeerRoutingPacket::getPriority() const
{
    return priority_var;
}

void GbeerRoutingPacket::setPriority(int priority)
{
    this->priority_var = priority;
}

int GbeerRoutingPacket::getHop_id() const
{
    return hop_id_var;
}

void GbeerRoutingPacket::setHop_id(int hop_id)
{
    this->hop_id_var = hop_id;
}

double GbeerRoutingPacket::getX() const
{
    return X_var;
}

void GbeerRoutingPacket::setX(double X)
{
    this->X_var = X;
}

double GbeerRoutingPacket::getY() const
{
    return Y_var;
}

void GbeerRoutingPacket::setY(double Y)
{
    this->Y_var = Y;
}

int GbeerRoutingPacket::getId() const
{
    return id_var;
}

void GbeerRoutingPacket::setId(int id)
{
    this->id_var = id;
}

double GbeerRoutingPacket::getX_dest() const
{
    return X_dest_var;
}

void GbeerRoutingPacket::setX_dest(double X_dest)
{
    this->X_dest_var = X_dest;
}

double GbeerRoutingPacket::getY_dest() const
{
    return Y_dest_var;
}

void GbeerRoutingPacket::setY_dest(double Y_dest)
{
    this->Y_dest_var = Y_dest;
}

class GbeerRoutingPacketDescriptor : public cClassDescriptor
{
  public:
    GbeerRoutingPacketDescriptor();
    virtual ~GbeerRoutingPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(GbeerRoutingPacketDescriptor);

GbeerRoutingPacketDescriptor::GbeerRoutingPacketDescriptor() : cClassDescriptor("GbeerRoutingPacket", "RoutingPacket")
{
}

GbeerRoutingPacketDescriptor::~GbeerRoutingPacketDescriptor()
{
}

bool GbeerRoutingPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GbeerRoutingPacket *>(obj)!=NULL;
}

const char *GbeerRoutingPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GbeerRoutingPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 10+basedesc->getFieldCount(object) : 10;
}

unsigned int GbeerRoutingPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<10) ? fieldTypeFlags[field] : 0;
}

const char *GbeerRoutingPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "source",
        "destination",
        "str",
        "priority",
        "hop_id",
        "X",
        "Y",
        "id",
        "X_dest",
        "Y_dest",
    };
    return (field>=0 && field<10) ? fieldNames[field] : NULL;
}

int GbeerRoutingPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destination")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "str")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "priority")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "hop_id")==0) return base+4;
    if (fieldName[0]=='X' && strcmp(fieldName, "X")==0) return base+5;
    if (fieldName[0]=='Y' && strcmp(fieldName, "Y")==0) return base+6;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+7;
    if (fieldName[0]=='X' && strcmp(fieldName, "X_dest")==0) return base+8;
    if (fieldName[0]=='Y' && strcmp(fieldName, "Y_dest")==0) return base+9;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GbeerRoutingPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "string",
        "string",
        "int",
        "int",
        "double",
        "double",
        "int",
        "double",
        "double",
    };
    return (field>=0 && field<10) ? fieldTypeStrings[field] : NULL;
}

const char *GbeerRoutingPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int GbeerRoutingPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GbeerRoutingPacket *pp = (GbeerRoutingPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GbeerRoutingPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GbeerRoutingPacket *pp = (GbeerRoutingPacket *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSource());
        case 1: return oppstring2string(pp->getDestination());
        case 2: return oppstring2string(pp->getStr());
        case 3: return long2string(pp->getPriority());
        case 4: return long2string(pp->getHop_id());
        case 5: return double2string(pp->getX());
        case 6: return double2string(pp->getY());
        case 7: return long2string(pp->getId());
        case 8: return double2string(pp->getX_dest());
        case 9: return double2string(pp->getY_dest());
        default: return "";
    }
}

bool GbeerRoutingPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GbeerRoutingPacket *pp = (GbeerRoutingPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setSource((value)); return true;
        case 1: pp->setDestination((value)); return true;
        case 2: pp->setStr((value)); return true;
        case 3: pp->setPriority(string2long(value)); return true;
        case 4: pp->setHop_id(string2long(value)); return true;
        case 5: pp->setX(string2double(value)); return true;
        case 6: pp->setY(string2double(value)); return true;
        case 7: pp->setId(string2long(value)); return true;
        case 8: pp->setX_dest(string2double(value)); return true;
        case 9: pp->setY_dest(string2double(value)); return true;
        default: return false;
    }
}

const char *GbeerRoutingPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *GbeerRoutingPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GbeerRoutingPacket *pp = (GbeerRoutingPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


