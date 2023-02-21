#pragma once

class PowerMaxAlarmNG;

class Observer {
   public:
    virtual void notify(PowerMaxAlarmNG& pmax);
};