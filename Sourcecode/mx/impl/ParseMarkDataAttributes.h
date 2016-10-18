// MusicXML Class Library v0.3.0
// Copyright (c) 2015 - 2016 by Matthew James Briggs

#pragma once

#include "mx/api/MarkData.h"
#include "mx/impl/PositionFunctions.h"
#include "mx/impl/PrintFunctions.h"

namespace mx
{
    namespace impl
    {
        template<typename ATTRIBUTES_TYPE>
        void parseMarkDataAttributes(const ATTRIBUTES_TYPE& attr, api::MarkData& outMarkData )
        {
            outMarkData.positionData = getPositionData<ATTRIBUTES_TYPE>( attr );
            outMarkData.printData = getPrintData<ATTRIBUTES_TYPE>( attr );
        }
	}
}