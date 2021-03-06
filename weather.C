// weather.C
// 
// Copyright 1996-2001 Per Abrahamsen and S�ren Hansen
// Copyright 2000-2001 KVL.
//
// This file is part of Daisy.
// 
// Daisy is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser Public License as published by
// the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
// 
// Daisy is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser Public License for more details.
// 
// You should have received a copy of the GNU Lesser Public License
// along with Daisy; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

#define BUILD_DLL

#include "weather.h"
#include "astronomy.h"

double 
Weather::extraterrestrial_radiation (const Time& time) const // [W/m2]
{ return Astronomy::ExtraterrestrialRadiation (time, 
                                               latitude (), longitude (),
                                               timezone ()); }

double 
Weather::sin_solar_elevation_angle (const Time& time) const // []
{ return Astronomy::SinSolarElevationAngle (time, latitude (), longitude (),
                                            timezone ()); }

Weather::Weather ()
{ }

Weather::~Weather ()
{ }

// weather.C ends here.
