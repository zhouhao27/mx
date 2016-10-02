// MusicXML Class Library v0.3.0
// Copyright (c) 2015 - 2016 by Matthew James Briggs

#pragma once

#include "mx/core/ForwardDeclare.h"
#include "mx/core/AttributesInterface.h"
#include "mx/core/Strings.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ATTRIBUTES( OtherAppearanceAttributes )

        struct OtherAppearanceAttributes : public AttributesInterface
        {
        public:
            OtherAppearanceAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            XsToken type;
            const bool hasType;

            bool fromXElement( std::ostream& message, xml::XElement& xelement );
        };
    }
}
