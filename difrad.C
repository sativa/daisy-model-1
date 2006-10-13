// difrad.C  -- Diffuse radiation
// 
// Copyright 2006 Birgitte Gjettermann and KVL.
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


#include "difrad.h"

template<>
Librarian<Difrad>::Content* Librarian<Difrad>::content = NULL;

const char *const Difrad::description = "\
The 'difrad' component should calculate the diffuse radiation from\n\
meterological data.";

void
Difrad::output (Log&) const
{ }

void 
Difrad::load_syntax (Syntax&, AttributeList&)
{ }

Difrad::Difrad (Block& al)
  : name (al.identifier ("type")),
    alist (al.alist ())
{ }

Difrad::~Difrad ()
{ }
