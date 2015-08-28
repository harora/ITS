<?xml version="1.0" encoding="UTF-8"?>

<!-- generated on Fri Aug 28 01:01:24 2015 by SUMO netconvert Version 0.19.0
<?xml version="1.0" encoding="UTF-8"?>

<configuration xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://sumo-sim.org/xsd/netconvertConfiguration.xsd">

    <input>
        <node-files value="simple.nod.xml"/>
        <edge-files value="simple.edg.xml"/>
    </input>

    <output>
        <output-file value="simple.net.xm"/>
    </output>

</configuration>
-->

<net version="0.13" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://sumo-sim.org/xsd/net_file.xsd">

    <location netOffset="2500.00,-500.00" convBoundary="0.00,0.00,5000.00,0.00" origBoundary="-2500.00,500.00,2500.00,500.00" projParameter="!"/>

    <edge id="1to2" from="1" to="2" priority="-1">
        <lane id="1to2_0" index="0" speed="100.00" length="5000.00" width="5.00" shape="0.00,-12.75 5000.00,-12.75"/>
        <lane id="1to2_1" index="1" speed="13.90" length="5000.00" width="5.00" shape="0.00,-7.65 5000.00,-7.65"/>
        <lane id="1to2_2" index="2" speed="13.90" length="5000.00" width="5.00" shape="0.00,-2.55 5000.00,-2.55"/>
    </edge>

    <junction id="1" type="unregulated" x="0.00" y="0.00" incLanes="" intLanes="" shape="-0.00,-0.95 -0.00,-14.35"/>
    <junction id="2" type="unregulated" x="5000.00" y="0.00" incLanes="1to2_0 1to2_1 1to2_2" intLanes="" shape="5000.00,-14.35 5000.00,-0.95"/>

</net>
