// MusicXML Class Library
// Copyright (c) by Matthew James Briggs
// Distributed under the MIT License

#pragma once

#include "mx/core/ForwardDeclare.h"
#include "mx/core/ElementInterface.h"
#include "mx/core/Strings.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ELEMENT( MidiName )

        inline MidiNamePtr makeMidiName() { return std::make_shared<MidiName>(); }
		inline MidiNamePtr makeMidiName( const XsString& value ) { return std::make_shared<MidiName>( value ); }
		inline MidiNamePtr makeMidiName( XsString&& value ) { return std::make_shared<MidiName>( std::move( value ) ); }

        class MidiName : public ElementInterface
        {
        public:
            MidiName();
            MidiName( const XsString& value );

            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            XsString getValue() const;
            void setValue( const XsString& value );

            private:
            virtual bool fromXElementImpl( std::ostream& message, xml::XElement& xelement );

        private:
            XsString myValue;
        };
    }
}
