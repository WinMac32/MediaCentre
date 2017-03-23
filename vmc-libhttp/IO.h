/*
 * Copyright 2017 Seth Traverse
 *
 * This file is part of ViaWare Media Centre.
 *
 * ViaWare Media Centre is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ViaWare Media Centre is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * with ViaWare Media Centre.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef IO_H
#define IO_H

#include <istream>
#include <string>

#include "String.h"

namespace vmc
{
    namespace io
    {
        std::istream &getLineNoReturn(std::istream &stream, std::string &string);
        void writeFileToStream(std::string const &path, std::ostream &stream);
        std::size_t getFileSize(std::string const &path);
        bool fileExists(std::string const &path);
    }
}

#endif
