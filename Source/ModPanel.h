/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "ModSlot.h"
#include "ModTarget.h"
#include "Modulator.h"
#include "Modulation.h"
#include "ModMatrix.h"
#include "ModMatrixConfig.h"
#include <vector>

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ModPanel  : public Component
                  
{
public:
    //==============================================================================
    ModPanel (ModMatrix*  m);
    ~ModPanel();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    std::vector<ModSlot*> getSlots();
	void setConfig(ModMatrixConfig* config);

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;

    // Binary resources:
    static const char* mod_panel_png;
    static const int mod_panel_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    std::vector<ModSlot*> slots;
    ModMatrix* matrix;
	ModMatrixConfig* config;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ModSlot> modSlot1;
	ScopedPointer<ModSlot> modSlot2;
	ScopedPointer<ModSlot> modSlot3;
	ScopedPointer<ModSlot> modSlot4;
	ScopedPointer<ModSlot> modSlot5;
	ScopedPointer<ModSlot> modSlot6;
    Image cachedImage_mod_panel_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ModPanel)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

