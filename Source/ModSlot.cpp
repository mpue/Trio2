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

//[Headers] You can add your own extra header files here...
#include "Modulator.h"
#include "ADSR.h"
//[/Headers]

#include "ModSlot.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ModSlot::ModSlot (ModMatrix*  m, int index)
{
    //[Constructor_pre] You can add your own custom stuff here..
    this->matrix = m;
    this->index = index;
    //[/Constructor_pre]

    label.reset (new Label ("new label",
                            TRANS("Source")));
    addAndMakeVisible (label.get());
    label->setFont (Font ("Verdana", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (16, 44, 150, 24);

    sourceCombo.reset (new ComboBox ("sourceCombo"));
    addAndMakeVisible (sourceCombo.get());
    sourceCombo->setEditableText (false);
    sourceCombo->setJustificationType (Justification::centredLeft);
    sourceCombo->setTextWhenNothingSelected (String());
    sourceCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    sourceCombo->addListener (this);

    sourceCombo->setBounds (16, 68, 150, 24);

    targetLabel1.reset (new Label ("target1",
                                   TRANS("Target 1")));
    addAndMakeVisible (targetLabel1.get());
    targetLabel1->setFont (Font ("Verdana", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    targetLabel1->setJustificationType (Justification::centredLeft);
    targetLabel1->setEditable (false, false, false);
    targetLabel1->setColour (Label::textColourId, Colours::white);
    targetLabel1->setColour (TextEditor::textColourId, Colours::black);
    targetLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    targetLabel1->setBounds (16, 100, 150, 24);

    targetCombo1.reset (new ComboBox ("targetCombo1"));
    addAndMakeVisible (targetCombo1.get());
    targetCombo1->setEditableText (false);
    targetCombo1->setJustificationType (Justification::centredLeft);
    targetCombo1->setTextWhenNothingSelected (String());
    targetCombo1->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    targetCombo1->addListener (this);

    targetCombo1->setBounds (16, 124, 150, 24);

    modAmountSlider1.reset (new Slider ("modAmountSlider1"));
    addAndMakeVisible (modAmountSlider1.get());
    modAmountSlider1->setRange (0, 10, 0.1);
    modAmountSlider1->setSliderStyle (Slider::RotaryVerticalDrag);
    modAmountSlider1->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    modAmountSlider1->addListener (this);

    modAmountSlider1->setBounds (176, 120, 32, 32);

    targetLabel2.reset (new Label ("target2",
                                   TRANS("Target 2\n")));
    addAndMakeVisible (targetLabel2.get());
    targetLabel2->setFont (Font ("Verdana", 15.00f, Font::plain).withTypefaceStyle ("Regular"));
    targetLabel2->setJustificationType (Justification::centredLeft);
    targetLabel2->setEditable (false, false, false);
    targetLabel2->setColour (Label::textColourId, Colours::white);
    targetLabel2->setColour (TextEditor::textColourId, Colours::black);
    targetLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    targetLabel2->setBounds (16, 156, 150, 24);

    targetCombo2.reset (new ComboBox ("targetCombo2"));
    addAndMakeVisible (targetCombo2.get());
    targetCombo2->setEditableText (false);
    targetCombo2->setJustificationType (Justification::centredLeft);
    targetCombo2->setTextWhenNothingSelected (String());
    targetCombo2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    targetCombo2->addListener (this);

    targetCombo2->setBounds (16, 180, 150, 24);

    modAmountSlider2.reset (new Slider ("modAmountSlider2"));
    addAndMakeVisible (modAmountSlider2.get());
    modAmountSlider2->setRange (0, 10, 0.1);
    modAmountSlider2->setSliderStyle (Slider::RotaryVerticalDrag);
    modAmountSlider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    modAmountSlider2->addListener (this);

    modAmountSlider2->setBounds (176, 176, 32, 32);

    titleLabel.reset (new Label ("titleLabel",
                                 TRANS("Slot 1")));
    addAndMakeVisible (titleLabel.get());
    titleLabel->setFont (Font ("Verdana", 20.00f, Font::plain).withTypefaceStyle ("Bold"));
    titleLabel->setJustificationType (Justification::centredLeft);
    titleLabel->setEditable (false, false, false);
    titleLabel->setColour (Label::textColourId, Colours::white);
    titleLabel->setColour (TextEditor::textColourId, Colours::black);
    titleLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    titleLabel->setBounds (72, 16, 64, 24);

    enableButton.reset (new ToggleButton ("enableButton"));
    addAndMakeVisible (enableButton.get());
    enableButton->setButtonText (String());
    enableButton->addListener (this);

    enableButton->setBounds (184, 16, 24, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    sourceCombo->setEnabled(false);
    targetCombo1->setEnabled(false);
    targetCombo2->setEnabled(false);

    //[/Constructor]
}

ModSlot::~ModSlot()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    sourceCombo = nullptr;
    targetLabel1 = nullptr;
    targetCombo1 = nullptr;
    modAmountSlider1 = nullptr;
    targetLabel2 = nullptr;
    targetCombo2 = nullptr;
    modAmountSlider2 = nullptr;
    titleLabel = nullptr;
    enableButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
	delete config;
    //[/Destructor]
}

//==============================================================================
void ModSlot::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff5a5a5a));

    {
        float x = 6.0f, y = 6.0f, width = 215.0f, height = 215.0f;
        Colour strokeColour = Colour (0xffd1d1d1);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRoundedRectangle (x, y, width, height, 10.000f, 2.000f);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ModSlot::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void ModSlot::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]

    if (!slotEnabled) {
        return;
    }

    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == sourceCombo.get())
    {
        //[UserComboBoxCode_sourceCombo] -- add your combo box handling code here..

        if (matrix->getModulations().size() > 0) {
            if (sourceCombo->getSelectedId() == 1) {
                matrix->getModulations().at(index)->setModulator(matrix->getDummy());
            }
            // LFO 1
            else if (sourceCombo->getSelectedId() == 2) {
                matrix->getModulations().at(index)->setModulator(matrix->getModel()->getLfo1());
            }
            // LFO 2
            else if (sourceCombo->getSelectedId() == 3) {
                matrix->getModulations().at(index)->setModulator(matrix->getModel()->getLfo2());
            }
            else if (sourceCombo->getSelectedId() == 4) {
                matrix->getModulations().at(index)->setModulator(matrix->getModel()->getModEnvelopes().at(0));
            }
            else if (sourceCombo->getSelectedId() == 5) {
                matrix->getModulations().at(index)->setModulator(matrix->getModel()->getModEnvelopes().at(1));
            }
            else if (sourceCombo->getSelectedId() == 6) {
                matrix->getModulations().at(index)->setModulator(matrix->getModel()->getModEnvelopes().at(2));
            }
            else if (sourceCombo->getSelectedId() == 7) {
                matrix->getModulations().at(index)->setModulator(matrix->getModel()->getSequencer());
            }

			config->setSourceId(sourceCombo->getSelectedId());
        }

        //[/UserComboBoxCode_sourceCombo]
    }
    else if (comboBoxThatHasChanged == targetCombo1.get())
    {
        //[UserComboBoxCode_targetCombo1] -- add your combo box handling code here..

        // Filter envelope
        if (targetCombo1->getSelectedId() == 2) {

            ModTarget* target = matrix->getModel()->getFilter();

            if (matrix->getModulations().at(index)->getTargets().size() >= 1) {
                matrix->getModulations().at(index)->getTargets()[0] = target;
            }
            else {
                matrix->getModulations().at(index)->addTarget(target);
            }

            target->setModulator(matrix->getModulations().at(index)->getModulator());
			target->setModAmount(modAmountSlider1->getValue());

        }
        // Osc 1 Pitch
        if (targetCombo1->getSelectedId() == 3) {

            matrix->getModulations().at(index)->getTargets().clear();

            for (int i = 0; i < matrix->getModel()->getVoices().size(); i++) {
                matrix->getModel()->getVoices().at(i)->setModAmount(modAmountSlider1->getValue());
                MultimodeOscillator* m = static_cast<MultimodeOscillator*>(matrix->getModel()->getVoices().at(i)->getOscillator(0));
                m->setModulator(matrix->getModulations().at(index)->getModulator());
				m->setModAmount(modAmountSlider1->getValue());
                matrix->getModulations().at(index)->addTarget(m);
            }

        }
        // Osc 2 Pitch
        if (targetCombo1->getSelectedId() == 4) {

            matrix->getModulations().at(index)->getTargets().clear();

            for (int i = 0; i < matrix->getModel()->getVoices().size(); i++) {
                matrix->getModel()->getVoices().at(i)->setModAmount(modAmountSlider1->getValue());
                MultimodeOscillator* m = static_cast<MultimodeOscillator*>(matrix->getModel()->getVoices().at(i)->getOscillator(1));
                m->setModulator(matrix->getModulations().at(index)->getModulator());
				m->setModAmount(modAmountSlider1->getValue());
                matrix->getModulations().at(index)->addTarget(m);
            }

        }
        // Osc 3 Pitch
        if (targetCombo1->getSelectedId() == 5) {

            matrix->getModulations().at(index)->getTargets().clear();

            for (int i = 0; i < matrix->getModel()->getVoices().size(); i++) {
                matrix->getModel()->getVoices().at(i)->setModAmount(modAmountSlider1->getValue());
                MultimodeOscillator* m = static_cast<MultimodeOscillator*>(matrix->getModel()->getVoices().at(i)->getOscillator(2));
                m->setModulator(matrix->getModulations().at(index)->getModulator());
				m->setModAmount(modAmountSlider1->getValue());
                matrix->getModulations().at(index)->addTarget(m);
            }

        }

		config->setTargetId1(targetCombo1->getSelectedId());
		config->setAmount1(modAmountSlider1->getValue());

        //[/UserComboBoxCode_targetCombo1]
    }
    else if (comboBoxThatHasChanged == targetCombo2.get())
    {
        //[UserComboBoxCode_targetCombo2] -- add your combo box handling code here..
        //[/UserComboBoxCode_targetCombo2]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void ModSlot::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == modAmountSlider1.get())
    {
        //[UserSliderCode_modAmountSlider1] -- add your slider handling code here..

        if (index < matrix->getModulations().size()) {

        }

        for (int i = 0; i <  matrix->getModulations().at(index)->getTargets().size(); i++) {
            matrix->getModulations().at(index)->getTargets()[i]->setModAmount(modAmountSlider1->getValue());
        }

		config->setAmount1(modAmountSlider1->getValue());

        //[/UserSliderCode_modAmountSlider1]
    }
    else if (sliderThatWasMoved == modAmountSlider2.get())
    {
        //[UserSliderCode_modAmountSlider2] -- add your slider handling code here..
        //[/UserSliderCode_modAmountSlider2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void ModSlot::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == enableButton.get())
    {
        //[UserButtonCode_enableButton] -- add your button handler code here..
        sourceCombo->setEnabled(enableButton->getToggleState());
        targetCombo1->setEnabled(enableButton->getToggleState());
        // targetCombo2->setEnabled(enableButton->getToggleState());
        this->slotEnabled = enableButton->getToggleState();
		config->setEnabled(this->slotEnabled);

		for each (Modulation* m in matrix->getModulations())
		{
			if (m->getIndex() == index) {
				this->config->setEnabled(this->slotEnabled);
				matrix->getModulations().at(index)->setEnabled(this->slotEnabled);
				matrix->getConfiguration()->getSlotConfig(index)->setEnabled(this->slotEnabled);
				return;
			}
		}

        Modulation* mod = new Modulation(index);
        mod->setEnabled(true);
		matrix->getConfiguration()->getSlotConfig(index)->setEnabled(this->slotEnabled);
        matrix->addModulation(mod);

        //[/UserButtonCode_enableButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ModSlot::setTitle(String title) {
    this->titleLabel->setText(title, juce::NotificationType::dontSendNotification);
}

void ModSlot::addSource(int id, juce::String source) {
    this->sourceCombo->addItem(source, id);
}

void ModSlot::addTarget(int id, juce::String target) {
    this->targetCombo1->addItem(target, id);
    this->targetCombo2->addItem(target, id);
}

int ModSlot::getSelectedSource() {
    return this->sourceCombo->getSelectedId();
}

int ModSlot::getSelectedTarget1() {
    return this->targetCombo1->getSelectedId();
}

int ModSlot::getSelectedTarget2() {
    return this->targetCombo2->getSelectedId();
}

void ModSlot::setSlotEnabled(bool enabled)
{
	this->slotEnabled = enabled;
	this->config->setEnabled(enabled);
}

void ModSlot::setSelectedSource(int id) {
	this->sourceCombo->setSelectedId(id, juce::NotificationType::dontSendNotification);
	this->config->setSourceId(id);
}

void ModSlot::setSelectedTarget1(int id) {
    this->targetCombo1->setSelectedId(id, juce::NotificationType::dontSendNotification);
	this->config->setTargetId1(id);
}

void ModSlot::setSelectedTarget2(int id) {
    this->targetCombo2->setSelectedId(id, juce::NotificationType::dontSendNotification);
}

bool ModSlot::isSlotEnabled() {
    return this->slotEnabled;
}

int ModSlot::getIndex() {
    return index;
}

ModSlotConfig* ModSlot::getConfig()
{
	return config;
}

void ModSlot::setConfig(ModSlotConfig* config)
{
	this->config = config;

	this->modAmountSlider1->setValue(config->getAmount1(), juce::NotificationType::dontSendNotification);
	this->modAmountSlider2->setValue(config->getAmount2(), juce::NotificationType::dontSendNotification);
	this->sourceCombo->setSelectedId(config->getSourceId(), juce::NotificationType::dontSendNotification);
	this->targetCombo1->setSelectedId(config->getTargetId1(), juce::NotificationType::dontSendNotification);
	this->targetCombo2->setSelectedId(config->getTargetId2(), juce::NotificationType::dontSendNotification);
	this->enableButton->setToggleState(config->isSlotEnabled(), false);
	this->slotEnabled = config->isSlotEnabled();

	sourceCombo->setEnabled(this->slotEnabled);
	targetCombo1->setEnabled(this->slotEnabled);
	// targetCombo2->setEnabled(this->slotEnabled);

}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ModSlot" componentName=""
                 parentClasses="public Component" constructorParams="ModMatrix*  m, int index"
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff5a5a5a">
    <ROUNDRECT pos="6 6 215 215" cornerSize="10.0" fill="solid: ffffff" hasStroke="1"
               stroke="2, mitered, butt" strokeColour="solid: ffd1d1d1"/>
  </BACKGROUND>
  <LABEL name="new label" id="bebef9922d183d79" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 44 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Source" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="sourceCombo" id="41f7906efd83d1fd" memberName="sourceCombo"
            virtualName="" explicitFocusOrder="0" pos="16 68 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="target1" id="e41147e40eec10c8" memberName="targetLabel1"
         virtualName="" explicitFocusOrder="0" pos="16 100 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Target 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="targetCombo1" id="96eb30fcf7656b47" memberName="targetCombo1"
            virtualName="" explicitFocusOrder="0" pos="16 124 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="modAmountSlider1" id="5e4f6014b1e0bf95" memberName="modAmountSlider1"
          virtualName="" explicitFocusOrder="0" pos="176 120 32 32" min="0.0"
          max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="target2" id="19b619769e34b882" memberName="targetLabel2"
         virtualName="" explicitFocusOrder="0" pos="16 156 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Target 2&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="targetCombo2" id="667ed1e4630df9bd" memberName="targetCombo2"
            virtualName="" explicitFocusOrder="0" pos="16 180 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="modAmountSlider2" id="2a781a059068936a" memberName="modAmountSlider2"
          virtualName="" explicitFocusOrder="0" pos="176 176 32 32" min="0.0"
          max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="titleLabel" id="9b37c8458eed3a16" memberName="titleLabel"
         virtualName="" explicitFocusOrder="0" pos="72 16 64 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Slot 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="20.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <TOGGLEBUTTON name="enableButton" id="941d3267e40c3272" memberName="enableButton"
                virtualName="" explicitFocusOrder="0" pos="184 16 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

