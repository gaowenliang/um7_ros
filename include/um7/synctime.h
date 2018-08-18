#ifndef SYNCTIME_H
#define SYNCTIME_H

#include "registers.h"
#include <ros/ros.h>

class SoftSyncTime
{
    public:
    SoftSyncTime( )
    : is_first_run( true )
    {
    }

    ros::Time getTime( um7::Registers& r )
    {
        if ( !is_first_run )
        {
            return ros::Time( start_time + r.gyr_t.get_scaled( 0 ) );
        }
        else
        {
            start_time   = ros::Time::now( ).toSec( ) - r.gyr_t.get_scaled( 0 );
            is_first_run = false;
            return ros::Time( start_time + r.gyr_t.get_scaled( 0 ) );
        }
    }

    private:
    bool is_first_run;
    double start_time;
};

#endif // SYNCTIME_H
