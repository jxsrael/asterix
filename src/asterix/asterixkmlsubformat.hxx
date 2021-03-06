/*
 *  Copyright (c) 2013 Croatia Control Ltd. (www.crocontrol.hr)
 *
 *  This file is part of Asterix.
 *
 *  Asterix is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Asterix is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Asterix.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * AUTHORS: Damir Salantic, Croatia Control Ltd.
 *
 */#ifndef ASTERIXKMLSUBFORMAT_HXX__
#define ASTERIXKMLSUBFORMAT_HXX__

class CBaseDevice;
class InputParser;


/**
 * @class CAsterixKmlSubformat
 *
 * @brief Asterix Kml sub-format
 *
 * Specifies format of Asterix message.
 *
 */
class CAsterixKmlSubformat
{
public:

    static bool WritePacket(CBaseFormatDescriptor &formatDescriptor, CBaseDevice &device, bool &discard);

private:

};

#endif
