//
// Generated file, do not edit! Created by opp_msgc 4.4 from routing/bitcar/BITCARControlPackets.msg.
//

#ifndef _BITCARCONTROLPACKETS_M_H_
#define _BITCARCONTROLPACKETS_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0404
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "IPv4Address.h"
#include "simtime_t.h"
#include "VanetModuleAccess.h"
#include "IVANETMobility.h"
#include "Coord.h"
// }}



/**
 * Enum generated from <tt>routing/bitcar/BITCARControlPackets.msg</tt> by opp_msgc.
 * <pre>
 * enum BITCARControlPacketType
 * {
 *     RREQ = 1;
 *     RREP = 2;
 *     RERR = 3;
 *     RREPACK = 4;
 * };
 * </pre>
 */
enum BITCARControlPacketType {
    RREQ = 1,
    RREP = 2,
    RERR = 3,
    RREPACK = 4
};

/**
 * Struct generated from routing/bitcar/BITCARControlPackets.msg by opp_msgc.
 */
struct UnreachableBITCARNode
{
    UnreachableBITCARNode();
    IPv4Address addr;
    unsigned int seqNum;
};

void doPacking(cCommBuffer *b, UnreachableBITCARNode& a);
void doUnpacking(cCommBuffer *b, UnreachableBITCARNode& a);

/**
 * Class generated from <tt>routing/bitcar/BITCARControlPackets.msg</tt> by opp_msgc.
 * <pre>
 * packet BITCARControlPacket
 * {
 *     unsigned int packetType;
 * }
 * </pre>
 */
class BITCARControlPacket : public ::cPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const BITCARControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BITCARControlPacket&);

  public:
    BITCARControlPacket(const char *name=NULL, int kind=0);
    BITCARControlPacket(const BITCARControlPacket& other);
    virtual ~BITCARControlPacket();
    BITCARControlPacket& operator=(const BITCARControlPacket& other);
    virtual BITCARControlPacket *dup() const {return new BITCARControlPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, BITCARControlPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BITCARControlPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/bitcar/BITCARControlPackets.msg</tt> by opp_msgc.
 * <pre>
 * class BITCARRREQ extends BITCARControlPacket
 * {
 *     unsigned int packetType = RREQ;
 *     bool joinFlag;
 *     bool repairFlag;
 *     bool gratuitousRREPFlag;
 *     bool destOnlyFlag;
 *     bool unknownSeqNumFlag;
 *     unsigned int hopCount;
 *     unsigned int rreqId;
 *     IPv4Address destAddr;
 *     unsigned int destSeqNum;
 *     IPv4Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     Coord position;
 *     Coord speed;
 *     Coord acceleration;
 *     Coord direction;
 *     double twr;
 *     double expirationtime;
 * }
 * </pre>
 */
class BITCARRREQ : public ::BITCARControlPacket
{
  protected:
    unsigned int packetType_var;
    bool joinFlag_var;
    bool repairFlag_var;
    bool gratuitousRREPFlag_var;
    bool destOnlyFlag_var;
    bool unknownSeqNumFlag_var;
    unsigned int hopCount_var;
    unsigned int rreqId_var;
    IPv4Address destAddr_var;
    unsigned int destSeqNum_var;
    IPv4Address originatorAddr_var;
    unsigned int originatorSeqNum_var;
    Coord position_var;
    Coord speed_var;
    Coord acceleration_var;
    Coord direction_var;
    double twr_var;
    double expirationtime_var;

  private:
    void copy(const BITCARRREQ& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BITCARRREQ&);

  public:
    BITCARRREQ(const char *name=NULL);
    BITCARRREQ(const BITCARRREQ& other);
    virtual ~BITCARRREQ();
    BITCARRREQ& operator=(const BITCARRREQ& other);
    virtual BITCARRREQ *dup() const {return new BITCARRREQ(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getJoinFlag() const;
    virtual void setJoinFlag(bool joinFlag);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getGratuitousRREPFlag() const;
    virtual void setGratuitousRREPFlag(bool gratuitousRREPFlag);
    virtual bool getDestOnlyFlag() const;
    virtual void setDestOnlyFlag(bool destOnlyFlag);
    virtual bool getUnknownSeqNumFlag() const;
    virtual void setUnknownSeqNumFlag(bool unknownSeqNumFlag);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual unsigned int getRreqId() const;
    virtual void setRreqId(unsigned int rreqId);
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<BITCARRREQ*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual IPv4Address& getOriginatorAddr();
    virtual const IPv4Address& getOriginatorAddr() const {return const_cast<BITCARRREQ*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const IPv4Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual Coord& getPosition();
    virtual const Coord& getPosition() const {return const_cast<BITCARRREQ*>(this)->getPosition();}
    virtual void setPosition(const Coord& position);
    virtual Coord& getSpeed();
    virtual const Coord& getSpeed() const {return const_cast<BITCARRREQ*>(this)->getSpeed();}
    virtual void setSpeed(const Coord& speed);
    virtual Coord& getAcceleration();
    virtual const Coord& getAcceleration() const {return const_cast<BITCARRREQ*>(this)->getAcceleration();}
    virtual void setAcceleration(const Coord& acceleration);
    virtual Coord& getDirection();
    virtual const Coord& getDirection() const {return const_cast<BITCARRREQ*>(this)->getDirection();}
    virtual void setDirection(const Coord& direction);
    virtual double getTwr() const;
    virtual void setTwr(double twr);
    virtual double getExpirationtime() const;
    virtual void setExpirationtime(double expirationtime);
};

inline void doPacking(cCommBuffer *b, BITCARRREQ& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BITCARRREQ& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/bitcar/BITCARControlPackets.msg</tt> by opp_msgc.
 * <pre>
 * class BITCARRREP extends BITCARControlPacket
 * {
 *     unsigned int packetType = RREP;
 *     bool repairFlag;
 *     bool ackRequiredFlag;
 *     unsigned int prefixSize;
 *     unsigned int hopCount;
 *     IPv4Address destAddr;
 *     unsigned int destSeqNum;
 *     IPv4Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     simtime_t lifeTime;
 *     double twr;
 *     double expirationtime;
 * }
 * </pre>
 */
class BITCARRREP : public ::BITCARControlPacket
{
  protected:
    unsigned int packetType_var;
    bool repairFlag_var;
    bool ackRequiredFlag_var;
    unsigned int prefixSize_var;
    unsigned int hopCount_var;
    IPv4Address destAddr_var;
    unsigned int destSeqNum_var;
    IPv4Address originatorAddr_var;
    unsigned int originatorSeqNum_var;
    simtime_t lifeTime_var;
    double twr_var;
    double expirationtime_var;

  private:
    void copy(const BITCARRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BITCARRREP&);

  public:
    BITCARRREP(const char *name=NULL);
    BITCARRREP(const BITCARRREP& other);
    virtual ~BITCARRREP();
    BITCARRREP& operator=(const BITCARRREP& other);
    virtual BITCARRREP *dup() const {return new BITCARRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getAckRequiredFlag() const;
    virtual void setAckRequiredFlag(bool ackRequiredFlag);
    virtual unsigned int getPrefixSize() const;
    virtual void setPrefixSize(unsigned int prefixSize);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<BITCARRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual IPv4Address& getOriginatorAddr();
    virtual const IPv4Address& getOriginatorAddr() const {return const_cast<BITCARRREP*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const IPv4Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual simtime_t getLifeTime() const;
    virtual void setLifeTime(simtime_t lifeTime);
    virtual double getTwr() const;
    virtual void setTwr(double twr);
    virtual double getExpirationtime() const;
    virtual void setExpirationtime(double expirationtime);
};

inline void doPacking(cCommBuffer *b, BITCARRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BITCARRREP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/bitcar/BITCARControlPackets.msg</tt> by opp_msgc.
 * <pre>
 * class BITCARRERR extends BITCARControlPacket
 * {
 *     unsigned int packetType = RERR;
 *     UnreachableBITCARNode unreachableBITCARNodes[];
 *     bool noDeleteFlag;
 *     unsigned int destCount;
 * }
 * </pre>
 */
class BITCARRERR : public ::BITCARControlPacket
{
  protected:
    unsigned int packetType_var;
    UnreachableBITCARNode *unreachableBITCARNodes_var; // array ptr
    unsigned int unreachableBITCARNodes_arraysize;
    bool noDeleteFlag_var;
    unsigned int destCount_var;

  private:
    void copy(const BITCARRERR& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BITCARRERR&);

  public:
    BITCARRERR(const char *name=NULL);
    BITCARRERR(const BITCARRERR& other);
    virtual ~BITCARRERR();
    BITCARRERR& operator=(const BITCARRERR& other);
    virtual BITCARRERR *dup() const {return new BITCARRERR(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual void setUnreachableBITCARNodesArraySize(unsigned int size);
    virtual unsigned int getUnreachableBITCARNodesArraySize() const;
    virtual UnreachableBITCARNode& getUnreachableBITCARNodes(unsigned int k);
    virtual const UnreachableBITCARNode& getUnreachableBITCARNodes(unsigned int k) const {return const_cast<BITCARRERR*>(this)->getUnreachableBITCARNodes(k);}
    virtual void setUnreachableBITCARNodes(unsigned int k, const UnreachableBITCARNode& unreachableBITCARNodes);
    virtual bool getNoDeleteFlag() const;
    virtual void setNoDeleteFlag(bool noDeleteFlag);
    virtual unsigned int getDestCount() const;
    virtual void setDestCount(unsigned int destCount);
};

inline void doPacking(cCommBuffer *b, BITCARRERR& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BITCARRERR& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/bitcar/BITCARControlPackets.msg</tt> by opp_msgc.
 * <pre>
 * class BITCARRREPACK extends BITCARControlPacket
 * {
 *     unsigned int packetType = RREPACK;
 * }
 * </pre>
 */
class BITCARRREPACK : public ::BITCARControlPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const BITCARRREPACK& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BITCARRREPACK&);

  public:
    BITCARRREPACK(const char *name=NULL);
    BITCARRREPACK(const BITCARRREPACK& other);
    virtual ~BITCARRREPACK();
    BITCARRREPACK& operator=(const BITCARRREPACK& other);
    virtual BITCARRREPACK *dup() const {return new BITCARRREPACK(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, BITCARRREPACK& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BITCARRREPACK& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/bitcar/BITCARControlPackets.msg</tt> by opp_msgc.
 * <pre>
 * message WaitForBITCARRREP
 * {
 *     IPv4Address destAddr;
 *     unsigned int lastTTL;
 *     bool fromInvalidEntry;
 * }
 * </pre>
 */
class WaitForBITCARRREP : public ::cMessage
{
  protected:
    IPv4Address destAddr_var;
    unsigned int lastTTL_var;
    bool fromInvalidEntry_var;

  private:
    void copy(const WaitForBITCARRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaitForBITCARRREP&);

  public:
    WaitForBITCARRREP(const char *name=NULL, int kind=0);
    WaitForBITCARRREP(const WaitForBITCARRREP& other);
    virtual ~WaitForBITCARRREP();
    WaitForBITCARRREP& operator=(const WaitForBITCARRREP& other);
    virtual WaitForBITCARRREP *dup() const {return new WaitForBITCARRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<WaitForBITCARRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getLastTTL() const;
    virtual void setLastTTL(unsigned int lastTTL);
    virtual bool getFromInvalidEntry() const;
    virtual void setFromInvalidEntry(bool fromInvalidEntry);
};

inline void doPacking(cCommBuffer *b, WaitForBITCARRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, WaitForBITCARRREP& obj) {obj.parsimUnpack(b);}


#endif // _BITCARCONTROLPACKETS_M_H_
