// MusicXML Class Library v0.3.0
// Copyright (c) 2015 - 2016 by Matthew James Briggs

#pragma once

#include "mx/core/ForwardDeclare.h"
#include "mx/core/AttributesInterface.h"
#include "mx/core/Decimals.h"
#include "mx/core/Enums.h"
#include "mx/core/Integers.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ATTRIBUTES( WavyLineAttributes )

        struct WavyLineAttributes : public AttributesInterface
        {
        public:
            WavyLineAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            StartStopContinue type;
            NumberLevel number;
            TenthsValue defaultX;
            TenthsValue defaultY;
            TenthsValue relativeX;
            TenthsValue relativeY;
            AboveBelow placement;
            StartNote startNote;
            TrillStep trillStep;
            TwoNoteTurn twoNoteTurn;
            YesNo accelerate;
            TrillBeats beats;
            Percent secondBeat;
            Percent lastBeat;
            const bool hasType;
            bool hasNumber;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;

            bool fromXElement( std::ostream& message, xml::XElement& xelement );
        };
    }
}
