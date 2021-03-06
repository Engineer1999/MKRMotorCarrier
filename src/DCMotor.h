/*
  DCMotor.h - Library for Arduino Motor Shields
  Copyright (c) 2018-2019 Arduino AG.  All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef __DCMOTOR_H__
#define __DCMOTOR_H__

#include "Arduino.h"

namespace mc {

class DCMotor {
  public:
    DCMotor();
    void setDuty(int duty);
    void setFrequency(int frequency);
  private:
    int instance;
};
}

namespace d21 {

class DCMotor {
  public:
    DCMotor();
    void setDuty(int duty);
    void setFrequency(int frequency);
  private:
    int instance;
    int duty = 0;
    int in1;
    int in2;
};
}

#endif
