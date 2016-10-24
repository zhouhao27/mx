// MusicXML Class Library v0.3.0
// Copyright (c) 2015 - 2016 by Matthew James Briggs

#pragma once

#include "mx/api/ApiCommon.h"
#include "mx/api/PositionData.h"
#include "mx/api/FontData.h"

#include <string>
#include <vector>

namespace mx
{
    namespace api
    {
        
        enum class FontSizeType
        {
            unspecified,
            css,
            point
        };

        
        enum class CssSize
        {
            unspecified,
            xxSmall,
            xSmall,
            small,
            medium,
            large,
            xLarge,
            xxLarge
        };
        
    
        enum class FontStyle
        {
            unspecified,
            normal,
            italic
        };
        
        
        enum class FontWeight
        {
            unspecified,
            normal,
            bold
        };
        
        
        struct FontData
        {
            
            // fontSizeType indicates which fontSize field
            // is in use. if css, then use the fontSizeCss
            // field, if point then use fontSizePoint
            FontSizeType sizeType;
            long double sizePoint;
            CssSize sizeCss;
            
            FontStyle style;
            FontWeight weight;
            
            std::vector<std::string> fontFamily;
            
            FontData()
            : sizeType{ FontSizeType::unspecified }
            , sizePoint{ -1.0L }
            , sizeCss{ CssSize::unspecified }
            , style{ FontStyle::unspecified }
            , weight{ FontWeight::unspecified }
            {
                
            }
        };
        
        MXAPI_EQUALS_BEGIN( FontData )
        MXAPI_EQUALS_FIRST_MEMBER( sizeType )
        MXAPI_EQUALS_NEXT_MEMBER( sizePoint )
        MXAPI_EQUALS_NEXT_MEMBER( sizeCss )
        MXAPI_EQUALS_NEXT_MEMBER( style )
        MXAPI_EQUALS_NEXT_MEMBER( weight )
        MXAPI_EQUALS_LAST_MEMBER( fontFamily )
        MXAPI_EQUALS_END;
        MXAPI_NOT_EQUALS_AND_VECTORS( FontData );
    }
}
