/****************************************************************************/
/// @file    TraCIServerAPI_Lane.h
/// @author  Daniel Krajzewicz
/// @author  Michael Behrisch
/// @date    07.05.2009
/// @version $Id: TraCIServerAPI_Lane.h 15218 2013-11-26 21:09:51Z behrisch $
///
// APIs for getting/setting lane values via TraCI
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo-sim.org/
// Copyright (C) 2001-2013 DLR (http://www.dlr.de/) and contributors
/****************************************************************************/
//
//   This file is part of SUMO.
//   SUMO is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/
#ifndef TraCIServerAPI_Lane_h
#define TraCIServerAPI_Lane_h


// ===========================================================================
// included modules
// ===========================================================================
#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#ifndef NO_TRACI

#include <foreign/tcpip/storage.h>


// ===========================================================================
// class declarations
// ===========================================================================
class TraCIServer;


// ===========================================================================
// class definitions
// ===========================================================================
/**
 * @class TraCIServerAPI_Lane
 * @brief APIs for getting/setting lane values via TraCI
 */
class TraCIServerAPI_Lane {
public:
    /** @brief Processes a get value command (Command 0xa3: Get Lane Variable)
     *
     * @param[in] server The TraCI-server-instance which schedules this request
     * @param[in] inputStorage The storage to read the command from
     * @param[out] outputStorage The storage to write the result to
     */
    static bool processGet(TraCIServer& server, tcpip::Storage& inputStorage,
                           tcpip::Storage& outputStorage);


    /** @brief Processes a set value command (Command 0xc3: Change Lane State)
     *
     * @param[in] server The TraCI-server-instance which schedules this request
     * @param[in] inputStorage The storage to read the command from
     * @param[out] outputStorage The storage to write the result to
     */
    static bool processSet(TraCIServer& server, tcpip::Storage& inputStorage,
                           tcpip::Storage& outputStorage);


    /** @brief Returns the named lane's shape
     *
     * @param[in] id The id of the searched lane
     * @param[out] shape The shape, if the lane is known
     * @return Whether the lane is known
     */
    static bool getShape(const std::string& id, PositionVector& shape);


    /** @class StoringVisitor
     * @brief Allows to store the object; used as context while traveling the rtree in TraCI
     */
    class StoringVisitor {
    public:
        /// @brief Constructor
        StoringVisitor(std::set<std::string>& ids, const PositionVector& shape,
                       const SUMOReal range, const int domain)
            : myIDs(ids), myShape(shape), myRange(range), myDomain(domain) {}

        /// @brief Destructor
        ~StoringVisitor() {}

        /// @brief Adds the given object to the container
        void add(const MSLane* const l) const;

        /// @brief The container
        std::set<std::string>& myIDs;
        const PositionVector& myShape;
        const SUMOReal myRange;
        const int myDomain;

    private:
        /// @brief invalidated copy constructor
        StoringVisitor(const StoringVisitor& src);

        /// @brief invalidated assignment operator
        StoringVisitor& operator=(const StoringVisitor& src);
    };


private:
    /// @brief invalidated copy constructor
    TraCIServerAPI_Lane(const TraCIServerAPI_Lane& s);

    /// @brief invalidated assignment operator
    TraCIServerAPI_Lane& operator=(const TraCIServerAPI_Lane& s);


};


#endif

#endif

/****************************************************************************/
