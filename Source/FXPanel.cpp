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
//[/Headers]

#include "FXPanel.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
FXPanel::FXPanel (TrioAudioProcessor* p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    this->processor = p;
    //[/Constructor_pre]

    dampSlider.reset (new Slider ("dampSlider"));
    addAndMakeVisible (dampSlider.get());
    dampSlider->setRange (0, 1, 0.01);
    dampSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    dampSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    dampSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    dampSlider->addListener (this);

    dampSlider->setBounds (25, 96, 67, 64);

    freezeSlider.reset (new Slider ("freezeSlider"));
    addAndMakeVisible (freezeSlider.get());
    freezeSlider->setRange (0, 1, 0.01);
    freezeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    freezeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    freezeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    freezeSlider->addListener (this);

    freezeSlider->setBounds (92, 96, 67, 64);

    sizeSlider.reset (new Slider ("sizeSlider"));
    addAndMakeVisible (sizeSlider.get());
    sizeSlider->setRange (0, 1, 0.01);
    sizeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    sizeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    sizeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    sizeSlider->addListener (this);

    sizeSlider->setBounds (159, 96, 67, 64);

    widthSlider.reset (new Slider ("widthSlider"));
    addAndMakeVisible (widthSlider.get());
    widthSlider->setRange (0, 1, 0.01);
    widthSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    widthSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    widthSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    widthSlider->addListener (this);

    widthSlider->setBounds (225, 96, 67, 64);

    wetSlider.reset (new Slider ("wetSlider"));
    addAndMakeVisible (wetSlider.get());
    wetSlider->setRange (0, 1, 0.01);
    wetSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    wetSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    wetSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    wetSlider->addListener (this);

    wetSlider->setBounds (291, 96, 67, 64);

    drySlider.reset (new Slider ("drySlider"));
    addAndMakeVisible (drySlider.get());
    drySlider->setRange (0, 1, 0.01);
    drySlider->setSliderStyle (Slider::RotaryVerticalDrag);
    drySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    drySlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    drySlider->addListener (this);

    drySlider->setBounds (358, 96, 67, 64);

    enableReverbButton.reset (new ToggleButton ("enableReverbButton"));
    addAndMakeVisible (enableReverbButton.get());
    enableReverbButton->setButtonText (TRANS("ON"));
    enableReverbButton->addListener (this);
    enableReverbButton->setColour (ToggleButton::textColourId, Colours::white);

    enableReverbButton->setBounds (376, 64, 47, 24);

    delayTimeLeftSlider.reset (new Slider ("delayTimeLeftSlider"));
    addAndMakeVisible (delayTimeLeftSlider.get());
    delayTimeLeftSlider->setRange (0, 1, 0.01);
    delayTimeLeftSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    delayTimeLeftSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayTimeLeftSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayTimeLeftSlider->addListener (this);

    delayTimeLeftSlider->setBounds (475, 96, 67, 64);

    enableDelayButton.reset (new ToggleButton ("enableDelayButton"));
    addAndMakeVisible (enableDelayButton.get());
    enableDelayButton->setButtonText (TRANS("ON"));
    enableDelayButton->addListener (this);
    enableDelayButton->setColour (ToggleButton::textColourId, Colours::white);

    enableDelayButton->setBounds (832, 64, 47, 24);

    delayTimeRightSlider.reset (new Slider ("delayTimeRightSlider"));
    addAndMakeVisible (delayTimeRightSlider.get());
    delayTimeRightSlider->setRange (0, 1, 0.01);
    delayTimeRightSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    delayTimeRightSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayTimeRightSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayTimeRightSlider->addListener (this);

    delayTimeRightSlider->setBounds (542, 96, 67, 64);

    delayFBLeftSlider.reset (new Slider ("delayFBLeftSlider"));
    addAndMakeVisible (delayFBLeftSlider.get());
    delayFBLeftSlider->setRange (0, 1, 0.01);
    delayFBLeftSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    delayFBLeftSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayFBLeftSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayFBLeftSlider->addListener (this);

    delayFBLeftSlider->setBounds (608, 96, 67, 64);

    delayFBRightSlider.reset (new Slider ("delayFBRightSlider"));
    addAndMakeVisible (delayFBRightSlider.get());
    delayFBRightSlider->setRange (0, 1, 0.01);
    delayFBRightSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    delayFBRightSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayFBRightSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayFBRightSlider->addListener (this);

    delayFBRightSlider->setBounds (675, 96, 67, 64);

    delayMixLeftSlider.reset (new Slider ("delayMixLeftSlider"));
    addAndMakeVisible (delayMixLeftSlider.get());
    delayMixLeftSlider->setRange (0, 1, 0.01);
    delayMixLeftSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    delayMixLeftSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayMixLeftSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayMixLeftSlider->addListener (this);

    delayMixLeftSlider->setBounds (741, 96, 67, 64);

    delayMixRightSlider.reset (new Slider ("delayMixRightSlider"));
    addAndMakeVisible (delayMixRightSlider.get());
    delayMixRightSlider->setRange (0, 1, 0.01);
    delayMixRightSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    delayMixRightSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    delayMixRightSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    delayMixRightSlider->addListener (this);

    delayMixRightSlider->setBounds (808, 96, 67, 64);

    driveSlider.reset (new Slider ("driveSlider"));
    addAndMakeVisible (driveSlider.get());
    driveSlider->setRange (0, 10, 0.1);
    driveSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    driveSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    driveSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    driveSlider->addListener (this);

    driveSlider->setBounds (25, 256, 67, 64);

    mixSlider.reset (new Slider ("mixSlider"));
    addAndMakeVisible (mixSlider.get());
    mixSlider->setRange (0, 1, 0.01);
    mixSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    mixSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    mixSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    mixSlider->addListener (this);

    mixSlider->setBounds (92, 256, 67, 64);

    modeCombo.reset (new ComboBox ("modeCombo"));
    addAndMakeVisible (modeCombo.get());
    modeCombo->setEditableText (false);
    modeCombo->setJustificationType (Justification::centredLeft);
    modeCombo->setTextWhenNothingSelected (String());
    modeCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    modeCombo->addListener (this);

    modeCombo->setBounds (168, 272, 80, 24);

    enableDistButton.reset (new ToggleButton ("enableDistButton"));
    addAndMakeVisible (enableDistButton.get());
    enableDistButton->setButtonText (TRANS("ON"));
    enableDistButton->addListener (this);
    enableDistButton->setColour (ToggleButton::textColourId, Colours::white);

    enableDistButton->setBounds (204, 227, 47, 24);

    enableSeqButton.reset (new ToggleButton ("enableSeqButton"));
    addAndMakeVisible (enableSeqButton.get());
    enableSeqButton->setButtonText (String());
    enableSeqButton->addListener (this);
    enableSeqButton->setColour (ToggleButton::textColourId, Colours::white);

    enableSeqButton->setBounds (800, 404, 24, 24);

    stepButton1.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton1.get());
    stepButton1->setButtonText (String());
    stepButton1->addListener (this);
    stepButton1->setColour (ToggleButton::textColourId, Colours::white);

    stepButton1->setBounds (200, 400, 32, 32);

    stepButton2.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton2.get());
    stepButton2->setButtonText (String());
    stepButton2->addListener (this);
    stepButton2->setColour (ToggleButton::textColourId, Colours::white);

    stepButton2->setBounds (232, 400, 32, 32);

    stepButton3.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton3.get());
    stepButton3->setButtonText (String());
    stepButton3->addListener (this);
    stepButton3->setColour (ToggleButton::textColourId, Colours::white);

    stepButton3->setBounds (264, 400, 32, 32);

    stepButton4.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton4.get());
    stepButton4->setButtonText (String());
    stepButton4->addListener (this);
    stepButton4->setColour (ToggleButton::textColourId, Colours::white);

    stepButton4->setBounds (296, 400, 32, 32);

    stepButton5.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton5.get());
    stepButton5->setButtonText (String());
    stepButton5->addListener (this);
    stepButton5->setColour (ToggleButton::textColourId, Colours::white);

    stepButton5->setBounds (328, 400, 32, 32);

    stepButton6.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton6.get());
    stepButton6->setButtonText (String());
    stepButton6->addListener (this);
    stepButton6->setColour (ToggleButton::textColourId, Colours::white);

    stepButton6->setBounds (360, 400, 32, 32);

    stepButton7.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton7.get());
    stepButton7->setButtonText (String());
    stepButton7->addListener (this);
    stepButton7->setColour (ToggleButton::textColourId, Colours::white);

    stepButton7->setBounds (392, 400, 32, 32);

    stepButton8.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton8.get());
    stepButton8->setButtonText (String());
    stepButton8->addListener (this);
    stepButton8->setColour (ToggleButton::textColourId, Colours::white);

    stepButton8->setBounds (424, 400, 32, 32);

    stepButton9.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton9.get());
    stepButton9->setButtonText (String());
    stepButton9->addListener (this);
    stepButton9->setColour (ToggleButton::textColourId, Colours::white);

    stepButton9->setBounds (456, 400, 32, 32);

    stepButton10.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton10.get());
    stepButton10->setButtonText (String());
    stepButton10->addListener (this);
    stepButton10->setColour (ToggleButton::textColourId, Colours::white);

    stepButton10->setBounds (488, 400, 32, 32);

    stepButton11.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton11.get());
    stepButton11->setButtonText (String());
    stepButton11->addListener (this);
    stepButton11->setColour (ToggleButton::textColourId, Colours::white);

    stepButton11->setBounds (520, 400, 32, 32);

    stepButton12.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton12.get());
    stepButton12->setButtonText (String());
    stepButton12->addListener (this);
    stepButton12->setColour (ToggleButton::textColourId, Colours::white);

    stepButton12->setBounds (552, 400, 32, 32);

    stepButton13.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton13.get());
    stepButton13->setButtonText (String());
    stepButton13->addListener (this);
    stepButton13->setColour (ToggleButton::textColourId, Colours::white);

    stepButton13->setBounds (584, 400, 32, 32);

    stepButton14.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton14.get());
    stepButton14->setButtonText (String());
    stepButton14->addListener (this);
    stepButton14->setColour (ToggleButton::textColourId, Colours::white);

    stepButton14->setBounds (616, 400, 32, 32);

    stepButton15.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton15.get());
    stepButton15->setButtonText (String());
    stepButton15->addListener (this);
    stepButton15->setColour (ToggleButton::textColourId, Colours::white);

    stepButton15->setBounds (648, 400, 32, 32);

    stepButton16.reset (new ToggleButton ("stepButton1"));
    addAndMakeVisible (stepButton16.get());
    stepButton16->setButtonText (String());
    stepButton16->addListener (this);
    stepButton16->setColour (ToggleButton::textColourId, Colours::white);

    stepButton16->setBounds (680, 400, 32, 32);

    label.reset (new Label ("new label",
                            TRANS("Note")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredRight);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (144, 440, 40, 24);

    label2.reset (new Label ("new label",
                             TRANS("Vel")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredRight);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (144, 472, 40, 24);

    note1.reset (new TextEditor ("note1"));
    addAndMakeVisible (note1.get());
    note1->setMultiLine (false);
    note1->setReturnKeyStartsNewLine (false);
    note1->setReadOnly (false);
    note1->setScrollbarsShown (true);
    note1->setCaretVisible (true);
    note1->setPopupMenuEnabled (true);
    note1->setText (String());

    note1->setBounds (200, 440, 32, 24);

    note2.reset (new TextEditor ("note1"));
    addAndMakeVisible (note2.get());
    note2->setMultiLine (false);
    note2->setReturnKeyStartsNewLine (false);
    note2->setReadOnly (false);
    note2->setScrollbarsShown (true);
    note2->setCaretVisible (true);
    note2->setPopupMenuEnabled (true);
    note2->setText (String());

    note2->setBounds (232, 440, 32, 24);

    note3.reset (new TextEditor ("note1"));
    addAndMakeVisible (note3.get());
    note3->setMultiLine (false);
    note3->setReturnKeyStartsNewLine (false);
    note3->setReadOnly (false);
    note3->setScrollbarsShown (true);
    note3->setCaretVisible (true);
    note3->setPopupMenuEnabled (true);
    note3->setText (String());

    note3->setBounds (264, 440, 32, 24);

    note4.reset (new TextEditor ("note1"));
    addAndMakeVisible (note4.get());
    note4->setMultiLine (false);
    note4->setReturnKeyStartsNewLine (false);
    note4->setReadOnly (false);
    note4->setScrollbarsShown (true);
    note4->setCaretVisible (true);
    note4->setPopupMenuEnabled (true);
    note4->setText (String());

    note4->setBounds (296, 440, 32, 24);

    note5.reset (new TextEditor ("note1"));
    addAndMakeVisible (note5.get());
    note5->setMultiLine (false);
    note5->setReturnKeyStartsNewLine (false);
    note5->setReadOnly (false);
    note5->setScrollbarsShown (true);
    note5->setCaretVisible (true);
    note5->setPopupMenuEnabled (true);
    note5->setText (String());

    note5->setBounds (328, 440, 32, 24);

    note6.reset (new TextEditor ("note1"));
    addAndMakeVisible (note6.get());
    note6->setMultiLine (false);
    note6->setReturnKeyStartsNewLine (false);
    note6->setReadOnly (false);
    note6->setScrollbarsShown (true);
    note6->setCaretVisible (false);
    note6->setPopupMenuEnabled (true);
    note6->setText (String());

    note6->setBounds (360, 440, 32, 24);

    note7.reset (new TextEditor ("note1"));
    addAndMakeVisible (note7.get());
    note7->setMultiLine (false);
    note7->setReturnKeyStartsNewLine (false);
    note7->setReadOnly (false);
    note7->setScrollbarsShown (true);
    note7->setCaretVisible (true);
    note7->setPopupMenuEnabled (true);
    note7->setText (String());

    note7->setBounds (392, 440, 32, 24);

    note8.reset (new TextEditor ("note1"));
    addAndMakeVisible (note8.get());
    note8->setMultiLine (false);
    note8->setReturnKeyStartsNewLine (false);
    note8->setReadOnly (false);
    note8->setScrollbarsShown (true);
    note8->setCaretVisible (true);
    note8->setPopupMenuEnabled (true);
    note8->setText (String());

    note8->setBounds (424, 440, 32, 24);

    note9.reset (new TextEditor ("note1"));
    addAndMakeVisible (note9.get());
    note9->setMultiLine (false);
    note9->setReturnKeyStartsNewLine (false);
    note9->setReadOnly (false);
    note9->setScrollbarsShown (true);
    note9->setCaretVisible (true);
    note9->setPopupMenuEnabled (true);
    note9->setText (String());

    note9->setBounds (456, 440, 32, 24);

    note10.reset (new TextEditor ("note1"));
    addAndMakeVisible (note10.get());
    note10->setMultiLine (false);
    note10->setReturnKeyStartsNewLine (false);
    note10->setReadOnly (false);
    note10->setScrollbarsShown (true);
    note10->setCaretVisible (true);
    note10->setPopupMenuEnabled (true);
    note10->setText (String());

    note10->setBounds (488, 440, 32, 24);

    note11.reset (new TextEditor ("note1"));
    addAndMakeVisible (note11.get());
    note11->setMultiLine (false);
    note11->setReturnKeyStartsNewLine (false);
    note11->setReadOnly (false);
    note11->setScrollbarsShown (true);
    note11->setCaretVisible (true);
    note11->setPopupMenuEnabled (true);
    note11->setText (String());

    note11->setBounds (520, 440, 32, 24);

    note12.reset (new TextEditor ("note1"));
    addAndMakeVisible (note12.get());
    note12->setMultiLine (false);
    note12->setReturnKeyStartsNewLine (false);
    note12->setReadOnly (false);
    note12->setScrollbarsShown (true);
    note12->setCaretVisible (true);
    note12->setPopupMenuEnabled (true);
    note12->setText (String());

    note12->setBounds (552, 440, 32, 24);

    note13.reset (new TextEditor ("note1"));
    addAndMakeVisible (note13.get());
    note13->setMultiLine (false);
    note13->setReturnKeyStartsNewLine (false);
    note13->setReadOnly (false);
    note13->setScrollbarsShown (true);
    note13->setCaretVisible (true);
    note13->setPopupMenuEnabled (true);
    note13->setText (String());

    note13->setBounds (584, 440, 32, 24);

    note14.reset (new TextEditor ("note1"));
    addAndMakeVisible (note14.get());
    note14->setMultiLine (false);
    note14->setReturnKeyStartsNewLine (false);
    note14->setReadOnly (false);
    note14->setScrollbarsShown (true);
    note14->setCaretVisible (true);
    note14->setPopupMenuEnabled (true);
    note14->setText (String());

    note14->setBounds (616, 440, 32, 24);

    note15.reset (new TextEditor ("note1"));
    addAndMakeVisible (note15.get());
    note15->setMultiLine (false);
    note15->setReturnKeyStartsNewLine (false);
    note15->setReadOnly (false);
    note15->setScrollbarsShown (true);
    note15->setCaretVisible (true);
    note15->setPopupMenuEnabled (true);
    note15->setText (String());

    note15->setBounds (648, 440, 32, 24);

    note16.reset (new TextEditor ("note1"));
    addAndMakeVisible (note16.get());
    note16->setMultiLine (false);
    note16->setReturnKeyStartsNewLine (false);
    note16->setReadOnly (false);
    note16->setScrollbarsShown (true);
    note16->setCaretVisible (true);
    note16->setPopupMenuEnabled (true);
    note16->setText (String());

    note16->setBounds (680, 440, 32, 24);

    vel1.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel1.get());
    vel1->setMultiLine (false);
    vel1->setReturnKeyStartsNewLine (false);
    vel1->setReadOnly (false);
    vel1->setScrollbarsShown (true);
    vel1->setCaretVisible (true);
    vel1->setPopupMenuEnabled (true);
    vel1->setText (String());

    vel1->setBounds (200, 472, 32, 24);

    vel2.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel2.get());
    vel2->setMultiLine (false);
    vel2->setReturnKeyStartsNewLine (false);
    vel2->setReadOnly (false);
    vel2->setScrollbarsShown (true);
    vel2->setCaretVisible (true);
    vel2->setPopupMenuEnabled (true);
    vel2->setText (String());

    vel2->setBounds (232, 472, 32, 24);

    vel3.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel3.get());
    vel3->setMultiLine (false);
    vel3->setReturnKeyStartsNewLine (false);
    vel3->setReadOnly (false);
    vel3->setScrollbarsShown (true);
    vel3->setCaretVisible (true);
    vel3->setPopupMenuEnabled (true);
    vel3->setText (String());

    vel3->setBounds (264, 472, 32, 24);

    vel4.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel4.get());
    vel4->setMultiLine (false);
    vel4->setReturnKeyStartsNewLine (false);
    vel4->setReadOnly (false);
    vel4->setScrollbarsShown (true);
    vel4->setCaretVisible (true);
    vel4->setPopupMenuEnabled (true);
    vel4->setText (String());

    vel4->setBounds (296, 472, 32, 24);

    vel5.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel5.get());
    vel5->setMultiLine (false);
    vel5->setReturnKeyStartsNewLine (false);
    vel5->setReadOnly (false);
    vel5->setScrollbarsShown (true);
    vel5->setCaretVisible (true);
    vel5->setPopupMenuEnabled (true);
    vel5->setText (String());

    vel5->setBounds (328, 472, 32, 24);

    vel6.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel6.get());
    vel6->setMultiLine (false);
    vel6->setReturnKeyStartsNewLine (false);
    vel6->setReadOnly (false);
    vel6->setScrollbarsShown (true);
    vel6->setCaretVisible (true);
    vel6->setPopupMenuEnabled (true);
    vel6->setText (String());

    vel6->setBounds (360, 472, 32, 24);

    vel7.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel7.get());
    vel7->setMultiLine (false);
    vel7->setReturnKeyStartsNewLine (false);
    vel7->setReadOnly (false);
    vel7->setScrollbarsShown (true);
    vel7->setCaretVisible (true);
    vel7->setPopupMenuEnabled (true);
    vel7->setText (String());

    vel7->setBounds (392, 472, 32, 24);

    vel8.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel8.get());
    vel8->setMultiLine (false);
    vel8->setReturnKeyStartsNewLine (false);
    vel8->setReadOnly (false);
    vel8->setScrollbarsShown (true);
    vel8->setCaretVisible (true);
    vel8->setPopupMenuEnabled (true);
    vel8->setText (String());

    vel8->setBounds (424, 472, 32, 24);

    vel9.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel9.get());
    vel9->setMultiLine (false);
    vel9->setReturnKeyStartsNewLine (false);
    vel9->setReadOnly (false);
    vel9->setScrollbarsShown (true);
    vel9->setCaretVisible (true);
    vel9->setPopupMenuEnabled (true);
    vel9->setText (String());

    vel9->setBounds (456, 472, 32, 24);

    vel10.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel10.get());
    vel10->setMultiLine (false);
    vel10->setReturnKeyStartsNewLine (false);
    vel10->setReadOnly (false);
    vel10->setScrollbarsShown (true);
    vel10->setCaretVisible (true);
    vel10->setPopupMenuEnabled (true);
    vel10->setText (String());

    vel10->setBounds (488, 472, 32, 24);

    vel11.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel11.get());
    vel11->setMultiLine (false);
    vel11->setReturnKeyStartsNewLine (false);
    vel11->setReadOnly (false);
    vel11->setScrollbarsShown (true);
    vel11->setCaretVisible (true);
    vel11->setPopupMenuEnabled (true);
    vel11->setText (String());

    vel11->setBounds (520, 472, 32, 24);

    vel12.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel12.get());
    vel12->setMultiLine (false);
    vel12->setReturnKeyStartsNewLine (false);
    vel12->setReadOnly (false);
    vel12->setScrollbarsShown (true);
    vel12->setCaretVisible (true);
    vel12->setPopupMenuEnabled (true);
    vel12->setText (String());

    vel12->setBounds (552, 472, 32, 24);

    vel13.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel13.get());
    vel13->setMultiLine (false);
    vel13->setReturnKeyStartsNewLine (false);
    vel13->setReadOnly (false);
    vel13->setScrollbarsShown (true);
    vel13->setCaretVisible (true);
    vel13->setPopupMenuEnabled (true);
    vel13->setText (String());

    vel13->setBounds (584, 472, 32, 24);

    vel14.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel14.get());
    vel14->setMultiLine (false);
    vel14->setReturnKeyStartsNewLine (false);
    vel14->setReadOnly (false);
    vel14->setScrollbarsShown (true);
    vel14->setCaretVisible (true);
    vel14->setPopupMenuEnabled (true);
    vel14->setText (String());

    vel14->setBounds (616, 472, 32, 24);

    vel15.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel15.get());
    vel15->setMultiLine (false);
    vel15->setReturnKeyStartsNewLine (false);
    vel15->setReadOnly (false);
    vel15->setScrollbarsShown (true);
    vel15->setCaretVisible (true);
    vel15->setPopupMenuEnabled (true);
    vel15->setText (String());

    vel15->setBounds (648, 472, 32, 24);

    vel16.reset (new TextEditor ("vel1"));
    addAndMakeVisible (vel16.get());
    vel16->setMultiLine (false);
    vel16->setReturnKeyStartsNewLine (false);
    vel16->setReadOnly (false);
    vel16->setScrollbarsShown (true);
    vel16->setCaretVisible (true);
    vel16->setPopupMenuEnabled (true);
    vel16->setText (String());

    vel16->setBounds (680, 472, 32, 24);

    octavesCombo.reset (new ComboBox ("octavesCombo"));
    addAndMakeVisible (octavesCombo.get());
    octavesCombo->setEditableText (false);
    octavesCombo->setJustificationType (Justification::centredLeft);
    octavesCombo->setTextWhenNothingSelected (String());
    octavesCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    octavesCombo->addItem (TRANS("0"), 1);
    octavesCombo->addItem (TRANS("1"), 2);
    octavesCombo->addItem (TRANS("2"), 3);
    octavesCombo->addItem (TRANS("3"), 4);
    octavesCombo->addListener (this);

    octavesCombo->setBounds (728, 472, 72, 24);

    label3.reset (new Label ("new label",
                             TRANS("Octaves")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (728, 440, 72, 24);

    notesCombo.reset (new ComboBox ("notesCombo"));
    addAndMakeVisible (notesCombo.get());
    notesCombo->setEditableText (false);
    notesCombo->setJustificationType (Justification::centredLeft);
    notesCombo->setTextWhenNothingSelected (String());
    notesCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    notesCombo->addItem (TRANS("32"), 1);
    notesCombo->addItem (TRANS("16"), 2);
    notesCombo->addItem (TRANS("8"), 3);
    notesCombo->addItem (TRANS("4"), 4);
    notesCombo->addItem (TRANS("2"), 5);
    notesCombo->addListener (this);

    notesCombo->setBounds (56, 472, 72, 24);

    notesLabel.reset (new Label ("new label",
                                 TRANS("Notes")));
    addAndMakeVisible (notesLabel.get());
    notesLabel->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    notesLabel->setJustificationType (Justification::centredLeft);
    notesLabel->setEditable (false, false, false);
    notesLabel->setColour (Label::textColourId, Colours::white);
    notesLabel->setColour (TextEditor::textColourId, Colours::black);
    notesLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    notesLabel->setBounds (56, 440, 72, 24);

    enableRunButton.reset (new ToggleButton ("enableRunButton"));
    addAndMakeVisible (enableRunButton.get());
    enableRunButton->setButtonText (String());
    enableRunButton->addListener (this);
    enableRunButton->setColour (ToggleButton::textColourId, Colours::white);

    enableRunButton->setBounds (728, 403, 24, 24);

    label4.reset (new Label ("new label",
                             TRANS("RUN")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (Label::textColourId, Colours::white);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (754, 403, 40, 24);

    label5.reset (new Label ("new label",
                             TRANS("ON")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (Label::textColourId, Colours::white);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (830, 404, 40, 24);

    cachedImage_fx_panel_png2_1 = ImageCache::getFromMemory (fx_panel_png2, fx_panel_png2Size);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (910, 600);


    //[Constructor] You can add your own custom stuff here..

    this->fxreverb_enabled_att = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"fxreverb_enabled", *this->enableReverbButton);
    this->fxreverb_size_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_size", *this->sizeSlider);
    this->fxreverb_width_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_width", *this->widthSlider);
    this->fxreverb_freeze_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_freeze", *this->freezeSlider);
    this->fxreverb_damping_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_damping", *this->dampSlider);
    this->fxreverb_drylevel_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_drylevel", *this->drySlider);
    this->fxreverb_wetlevel_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxreverb_wetlevel", *this->wetSlider);

    this->fxdelay_enabled_att = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"fxdelay_enabled", *this->enableDelayButton);
    this->fxdelay_mixleft_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_mixleft", *this->delayMixLeftSlider);
    this->fxdelay_mixright_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_mixright", *this->delayMixRightSlider);
    this->fxdelay_fbleft_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_fbleft", *this->delayFBLeftSlider);
    this->fxdelay_fbright_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_fbright", *this->delayFBRightSlider);
    this->fxdelay_timeleft_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_timeleft", *this->delayTimeLeftSlider);
    this->fxdelay_timeright_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdelay_timeright", *this->delayTimeRightSlider);

    this->fxdist_enabled_att = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"fxdist_enabled", *this->enableDistButton);
    // this->fxdist_mode_att = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"fxdist_mode", *this->modeCombo);
    this->fxdist_mix_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdist_mix", *this->mixSlider);
    this->fxdist_drive_att = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"fxdist_drive", *this->mixSlider);

    delayMixRightSlider->setValue(0.5);
    delayMixLeftSlider->setValue(0.5);
    delayFBRightSlider->setValue(0.5);
    delayFBLeftSlider->setValue(0.5);
    delayTimeRightSlider->setValue(0.375);
    delayTimeLeftSlider->setValue(0.5);

    modeCombo->addItem("Soft clip", 1);
    modeCombo->addItem("Hard clip", 2);
    modeCombo->addItem("Cubic shaper", 3);

    modeCombo->setSelectedId(1);

    stepButtons.push_back(stepButton1);
    stepButtons.push_back(stepButton2);
    stepButtons.push_back(stepButton3);
    stepButtons.push_back(stepButton4);
    stepButtons.push_back(stepButton5);
    stepButtons.push_back(stepButton6);
    stepButtons.push_back(stepButton7);
    stepButtons.push_back(stepButton8);
    stepButtons.push_back(stepButton9);
    stepButtons.push_back(stepButton10);
    stepButtons.push_back(stepButton11);
    stepButtons.push_back(stepButton12);
    stepButtons.push_back(stepButton13);
    stepButtons.push_back(stepButton14);
    stepButtons.push_back(stepButton15);
    stepButtons.push_back(stepButton16);

    for(int i = 0; i < stepButtons.size();i++) {
        stepButtons.at(i)->setToggleState(true, juce::NotificationType::dontSendNotification);
    }

    velocityFields.push_back(vel1);
    velocityFields.push_back(vel2);
    velocityFields.push_back(vel3);
    velocityFields.push_back(vel4);
    velocityFields.push_back(vel5);
    velocityFields.push_back(vel6);
    velocityFields.push_back(vel7);
    velocityFields.push_back(vel8);
    velocityFields.push_back(vel9);
    velocityFields.push_back(vel10);
    velocityFields.push_back(vel11);
    velocityFields.push_back(vel12);
    velocityFields.push_back(vel13);
    velocityFields.push_back(vel14);
    velocityFields.push_back(vel15);
    velocityFields.push_back(vel16);

    for (int i = 0; i < velocityFields.size();i++) {
        velocityFields.at(i)->setText("100");
        velocityFields.at(i)->addMouseListener(this, false);
        velocityFields.at(i)->addKeyListener(this);
    }

    offsetFields.push_back(note1);
    offsetFields.push_back(note2);
    offsetFields.push_back(note3);
    offsetFields.push_back(note4);
    offsetFields.push_back(note5);
    offsetFields.push_back(note6);
    offsetFields.push_back(note7);
    offsetFields.push_back(note8);
    offsetFields.push_back(note9);
    offsetFields.push_back(note10);
    offsetFields.push_back(note11);
    offsetFields.push_back(note12);
    offsetFields.push_back(note13);
    offsetFields.push_back(note14);
    offsetFields.push_back(note15);
    offsetFields.push_back(note16);

    for (int i = 0; i < offsetFields.size();i++) {
        offsetFields.at(i)->addMouseListener(this, false);
        offsetFields.at(i)->setText("0");
        offsetFields.at(i)->setComponentID(String(i));
        offsetFields.at(i)->addKeyListener(this);
    }

    notesCombo->setSelectedItemIndex(0);
    octavesCombo->setSelectedItemIndex(0);
    glow = new GlowEffect();
    //[/Constructor]
}

FXPanel::~FXPanel()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    stepButtons.clear();
    offsetFields.clear();
    velocityFields.clear();
    this->fxreverb_enabled_att = nullptr;
    this->fxreverb_size_att = nullptr;
    this->fxreverb_width_att = nullptr;
    this->fxreverb_freeze_att = nullptr;
    this->fxreverb_damping_att = nullptr;
    this->fxreverb_drylevel_att = nullptr;
    this->fxreverb_wetlevel_att = nullptr;

    this->fxdelay_enabled_att = nullptr;
    this->fxdelay_mixleft_att = nullptr;
    this->fxdelay_mixright_att = nullptr;
    this->fxdelay_fbleft_att = nullptr;
    this->fxdelay_fbright_att = nullptr;
    this->fxdelay_timeleft_att = nullptr;
    this->fxdelay_timeright_att = nullptr;

    this->fxdist_enabled_att = nullptr;
    this->fxdist_mode_att = nullptr;
    this->fxdist_mix_att = nullptr;
    this->fxdist_drive_att = nullptr;
    //[/Destructor_pre]

    dampSlider = nullptr;
    freezeSlider = nullptr;
    sizeSlider = nullptr;
    widthSlider = nullptr;
    wetSlider = nullptr;
    drySlider = nullptr;
    enableReverbButton = nullptr;
    delayTimeLeftSlider = nullptr;
    enableDelayButton = nullptr;
    delayTimeRightSlider = nullptr;
    delayFBLeftSlider = nullptr;
    delayFBRightSlider = nullptr;
    delayMixLeftSlider = nullptr;
    delayMixRightSlider = nullptr;
    driveSlider = nullptr;
    mixSlider = nullptr;
    modeCombo = nullptr;
    enableDistButton = nullptr;
    enableSeqButton = nullptr;
    stepButton1 = nullptr;
    stepButton2 = nullptr;
    stepButton3 = nullptr;
    stepButton4 = nullptr;
    stepButton5 = nullptr;
    stepButton6 = nullptr;
    stepButton7 = nullptr;
    stepButton8 = nullptr;
    stepButton9 = nullptr;
    stepButton10 = nullptr;
    stepButton11 = nullptr;
    stepButton12 = nullptr;
    stepButton13 = nullptr;
    stepButton14 = nullptr;
    stepButton15 = nullptr;
    stepButton16 = nullptr;
    label = nullptr;
    label2 = nullptr;
    note1 = nullptr;
    note2 = nullptr;
    note3 = nullptr;
    note4 = nullptr;
    note5 = nullptr;
    note6 = nullptr;
    note7 = nullptr;
    note8 = nullptr;
    note9 = nullptr;
    note10 = nullptr;
    note11 = nullptr;
    note12 = nullptr;
    note13 = nullptr;
    note14 = nullptr;
    note15 = nullptr;
    note16 = nullptr;
    vel1 = nullptr;
    vel2 = nullptr;
    vel3 = nullptr;
    vel4 = nullptr;
    vel5 = nullptr;
    vel6 = nullptr;
    vel7 = nullptr;
    vel8 = nullptr;
    vel9 = nullptr;
    vel10 = nullptr;
    vel11 = nullptr;
    vel12 = nullptr;
    vel13 = nullptr;
    vel14 = nullptr;
    vel15 = nullptr;
    vel16 = nullptr;
    octavesCombo = nullptr;
    label3 = nullptr;
    notesCombo = nullptr;
    notesLabel = nullptr;
    enableRunButton = nullptr;
    label4 = nullptr;
    label5 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    popup = nullptr;
    glow = nullptr;
    //[/Destructor]
}

//==============================================================================
void FXPanel::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    {
        int x = 0, y = 0, width = 910, height = 600;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_fx_panel_png2_1,
                     x, y, width, height,
                     0, 0, cachedImage_fx_panel_png2_1.getWidth(), cachedImage_fx_panel_png2_1.getHeight());
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void FXPanel::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void FXPanel::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    Reverb::Parameters params = processor->getReverb()->getParameters();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == dampSlider.get())
    {
        //[UserSliderCode_dampSlider] -- add your slider handling code here..
        params.damping = dampSlider->getValue();
        //[/UserSliderCode_dampSlider]
    }
    else if (sliderThatWasMoved == freezeSlider.get())
    {
        //[UserSliderCode_freezeSlider] -- add your slider handling code here..
        params.freezeMode = freezeSlider->getValue();
        //[/UserSliderCode_freezeSlider]
    }
    else if (sliderThatWasMoved == sizeSlider.get())
    {
        //[UserSliderCode_sizeSlider] -- add your slider handling code here..
        params.roomSize = sizeSlider->getValue();
        //[/UserSliderCode_sizeSlider]
    }
    else if (sliderThatWasMoved == widthSlider.get())
    {
        //[UserSliderCode_widthSlider] -- add your slider handling code here..
        params.width = widthSlider->getValue();
        //[/UserSliderCode_widthSlider]
    }
    else if (sliderThatWasMoved == wetSlider.get())
    {
        //[UserSliderCode_wetSlider] -- add your slider handling code here..
        params.wetLevel = wetSlider->getValue();
        //[/UserSliderCode_wetSlider]
    }
    else if (sliderThatWasMoved == drySlider.get())
    {
        //[UserSliderCode_drySlider] -- add your slider handling code here..
        params.dryLevel = drySlider->getValue();
        //[/UserSliderCode_drySlider]
    }
    else if (sliderThatWasMoved == delayTimeLeftSlider.get())
    {
        //[UserSliderCode_delayTimeLeftSlider] -- add your slider handling code here..
        processor->getStereoDelay()->setDelay(StereoDelay::Channel::LEFT,delayTimeLeftSlider->getValue() * 1000);
        // processor->getLeftDelay()->resetDelay();
        //[/UserSliderCode_delayTimeLeftSlider]
    }
    else if (sliderThatWasMoved == delayTimeRightSlider.get())
    {
        //[UserSliderCode_delayTimeRightSlider] -- add your slider handling code here..
        processor->getStereoDelay()->setDelay(StereoDelay::Channel::RIGHT,delayTimeRightSlider->getValue() * 1000);
        //processor->getRightDelay()->resetDelay();
        //[/UserSliderCode_delayTimeRightSlider]
    }
    else if (sliderThatWasMoved == delayFBLeftSlider.get())
    {
        //[UserSliderCode_delayFBLeftSlider] -- add your slider handling code here..
        processor->getStereoDelay()->setFeedback(StereoDelay::Channel::LEFT,delayFBLeftSlider->getValue());
        //processor->getRightDelay()->resetDelay();
        //[/UserSliderCode_delayFBLeftSlider]
    }
    else if (sliderThatWasMoved == delayFBRightSlider.get())
    {
        //[UserSliderCode_delayFBRightSlider] -- add your slider handling code here..
        processor->getStereoDelay()->setFeedback(StereoDelay::Channel::RIGHT,delayFBRightSlider->getValue());
        //processor->getRightDelay()->resetDelay();
        //[/UserSliderCode_delayFBRightSlider]
    }
    else if (sliderThatWasMoved == delayMixLeftSlider.get())
    {
        //[UserSliderCode_delayMixLeftSlider] -- add your slider handling code here..
        processor->getStereoDelay()->setMix(StereoDelay::Channel::LEFT,delayMixLeftSlider->getValue());;
        //[/UserSliderCode_delayMixLeftSlider]
    }
    else if (sliderThatWasMoved == delayMixRightSlider.get())
    {
        //[UserSliderCode_delayMixRightSlider] -- add your slider handling code here..
        processor->getStereoDelay()->setMix(StereoDelay::Channel::RIGHT,delayMixRightSlider->getValue());
        //[/UserSliderCode_delayMixRightSlider]
    }
    else if (sliderThatWasMoved == driveSlider.get())
    {
        //[UserSliderCode_driveSlider] -- add your slider handling code here..
        processor->getDistortion()->controls.drive = driveSlider->getValue();
        //[/UserSliderCode_driveSlider]
    }
    else if (sliderThatWasMoved == mixSlider.get())
    {
        //[UserSliderCode_mixSlider] -- add your slider handling code here..
        processor->getDistortion()->controls.mix = driveSlider->getValue();
        //[/UserSliderCode_mixSlider]
    }

    //[UsersliderValueChanged_Post]
    processor->getReverb()->setParameters(params);
    //[/UsersliderValueChanged_Post]
}

void FXPanel::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == enableReverbButton.get())
    {
        //[UserButtonCode_enableReverbButton] -- add your button handler code here..
        processor->setFxReverbEnabled(enableReverbButton->getToggleState());
        //[/UserButtonCode_enableReverbButton]
    }
    else if (buttonThatWasClicked == enableDelayButton.get())
    {
        //[UserButtonCode_enableDelayButton] -- add your button handler code here..
        processor->setFxDelayEnabled(enableDelayButton->getToggleState());
        //[/UserButtonCode_enableDelayButton]
    }
    else if (buttonThatWasClicked == enableDistButton.get())
    {
        //[UserButtonCode_enableDistButton] -- add your button handler code here..
        processor->setFxDistEnabled(enableDistButton->getToggleState());
        //[/UserButtonCode_enableDistButton]
    }
    else if (buttonThatWasClicked == enableSeqButton.get())
    {
        //[UserButtonCode_enableSeqButton] -- add your button handler code here..
        processor->getSequencer()->setEnabled(enableSeqButton->getToggleState());
        //[/UserButtonCode_enableSeqButton]
    }
    else if (buttonThatWasClicked == stepButton1.get())
    {
        //[UserButtonCode_stepButton1] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(0, stepButton1->getToggleState());
        //[/UserButtonCode_stepButton1]
    }
    else if (buttonThatWasClicked == stepButton2.get())
    {
        //[UserButtonCode_stepButton2] -- add your button handler code here..
       processor->getSequencer()->setStepEnabled(1, stepButton2->getToggleState());
        //[/UserButtonCode_stepButton2]
    }
    else if (buttonThatWasClicked == stepButton3.get())
    {
        //[UserButtonCode_stepButton3] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(2, stepButton3->getToggleState());
        //[/UserButtonCode_stepButton3]
    }
    else if (buttonThatWasClicked == stepButton4.get())
    {
        //[UserButtonCode_stepButton4] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(3, stepButton4->getToggleState());

        //[/UserButtonCode_stepButton4]
    }
    else if (buttonThatWasClicked == stepButton5.get())
    {
        //[UserButtonCode_stepButton5] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(4, stepButton5->getToggleState());

        //[/UserButtonCode_stepButton5]
    }
    else if (buttonThatWasClicked == stepButton6.get())
    {
        //[UserButtonCode_stepButton6] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(5, stepButton6->getToggleState());
        //[/UserButtonCode_stepButton6]
    }
    else if (buttonThatWasClicked == stepButton7.get())
    {
        //[UserButtonCode_stepButton7] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(6, stepButton7->getToggleState());

        //[/UserButtonCode_stepButton7]
    }
    else if (buttonThatWasClicked == stepButton8.get())
    {
        //[UserButtonCode_stepButton8] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(7, stepButton8->getToggleState());

        //[/UserButtonCode_stepButton8]
    }
    else if (buttonThatWasClicked == stepButton9.get())
    {
        //[UserButtonCode_stepButton9] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(8, stepButton9->getToggleState());

        //[/UserButtonCode_stepButton9]
    }
    else if (buttonThatWasClicked == stepButton10.get())
    {
        //[UserButtonCode_stepButton10] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(9, stepButton10->getToggleState());
        //[/UserButtonCode_stepButton10]
    }
    else if (buttonThatWasClicked == stepButton11.get())
    {
        //[UserButtonCode_stepButton11] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(10, stepButton11->getToggleState());
        //[/UserButtonCode_stepButton11]
    }
    else if (buttonThatWasClicked == stepButton12.get())
    {
        //[UserButtonCode_stepButton12] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(11, stepButton12->getToggleState());
        //[/UserButtonCode_stepButton12]
    }
    else if (buttonThatWasClicked == stepButton13.get())
    {
        //[UserButtonCode_stepButton13] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(12, stepButton13->getToggleState());
        //[/UserButtonCode_stepButton13]
    }
    else if (buttonThatWasClicked == stepButton14.get())
    {
        //[UserButtonCode_stepButton14] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(13, stepButton14->getToggleState());
        //[/UserButtonCode_stepButton14]
    }
    else if (buttonThatWasClicked == stepButton15.get())
    {
        //[UserButtonCode_stepButton15] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(14, stepButton15->getToggleState());
        //[/UserButtonCode_stepButton15]
    }
    else if (buttonThatWasClicked == stepButton16.get())
    {
        //[UserButtonCode_stepButton16] -- add your button handler code here..
        processor->getSequencer()->setStepEnabled(15, stepButton16->getToggleState());
        //[/UserButtonCode_stepButton16]
    }
    else if (buttonThatWasClicked == enableRunButton.get())
    {
        //[UserButtonCode_enableRunButton] -- add your button handler code here..
        processor->getSequencer()->setPlaying(enableRunButton->getToggleState());
        //[/UserButtonCode_enableRunButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void FXPanel::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == modeCombo.get())
    {
        //[UserComboBoxCode_modeCombo] -- add your combo box handling code here..
        processor->getDistortion()->controls.mode = modeCombo->getSelectedId();
        //[/UserComboBoxCode_modeCombo]
    }
    else if (comboBoxThatHasChanged == octavesCombo.get())
    {
        //[UserComboBoxCode_octavesCombo] -- add your combo box handling code here..
        processor->getSequencer()->setNumOctaves(octavesCombo->getText().getIntValue());
        //[/UserComboBoxCode_octavesCombo]
    }
    else if (comboBoxThatHasChanged == notesCombo.get())
    {
        //[UserComboBoxCode_notesCombo] -- add your combo box handling code here..
        processor->getSequencer()->setRaster(notesCombo->getText().getIntValue());
        //[/UserComboBoxCode_notesCombo]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void FXPanel::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
    /*
    if (e.mods.isLeftButtonDown()) {
        TextEditor* t = static_cast<TextEditor*>(e.eventComponent);
        if (t->getName() == "note1") {
            int item = popup->show();
            t->setText(items.at(item-1));
        }
    }
     */

    //[/UserCode_mouseDown]
}

void FXPanel::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...

    if (TextEditor* t = dynamic_cast<TextEditor*>(e.eventComponent)) {

        int oldval = (int)t->getTextValue().toString().getFloatValue();
        int value = - e.getDistanceFromDragStartY() / 20;

        if (value + oldval >= -64 && value + oldval <= 64) {
            t->setText(String(value + oldval));
        }

        if (t->getName() == "note1") {
            int step = t->getComponentID().getIntValue();
            int offset = t->getTextValue().toString().getIntValue();
            processor->getSequencer()->setOffset(step,offset);
        }

        else if (t->getName() == "vel1") {

        }
    }

    //[/UserCode_mouseDrag]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void FXPanel::changeListenerCallback(juce::ChangeBroadcaster *source) {


    if (Sequencer* s = dynamic_cast<Sequencer*>(source)) {

        if (s->isEnabled()) {

            glow->setGlowProperties(25.0f, Colours::yellow);

            for (int i = 0; i < this->processor->getSequencer()->getSteps().size();i++) {
                stepButtons.at(i)->setComponentEffect(nullptr);
            }

            stepButtons.at(s->getCurrentStep())->setComponentEffect(glow);
        }
    }
    else {

        for (int i = 0; i < this->processor->getSequencer()->getSteps().size();i++) {
            stepButtons.at(i)->setToggleState(this->processor->getSequencer()->getSteps().at(i), juce::NotificationType::dontSendNotification);
        }
        for (int i = 0; i < 16;i++) {
            int offset = this->processor->getSequencer()->getOffsetAt(i);
            offsetFields.at(i)->setText(String(offset), false);
        }
        for (int i = 0; i < 16;i++) {
            int velocity = this->processor->getSequencer()->getVelocityAt(i);
            velocityFields.at(i)->setText(String(velocity),false);
        }
        octavesCombo->setText(String(this->processor->getSequencer()->getNumOctaves()));
        notesCombo->setText(String(this->processor->getSequencer()->getRaster()));
        enableSeqButton->setToggleState(this->processor->getSequencer()->isEnabled(), juce::NotificationType::dontSendNotification);

    }


}


bool FXPanel::keyPressed (const KeyPress& key, Component* originatingComponent) {

    TextEditor* editor = static_cast<TextEditor*>(originatingComponent);

    if (key == KeyPress::upKey) {
         this->valueUp(editor);

    }
    else if (key  == KeyPress::downKey) {
        this->valueDown(editor);
    }

    return true;
}

void FXPanel::valueUp(TextEditor* editor) {
    if (editor->getName() == "note1") {
        int offset = editor->getTextValue().toString().getIntValue();

        if (offset < 63) {
            offset++;
            editor->setText(String(offset),false);
        }

    }

    else if (editor->getName() == "vel1") {
        int velocity = editor->getTextValue().toString().getIntValue();

        if (velocity < 127) {
            velocity++;
            editor->setText(String(velocity),false);
        }
    }

    if (editor->getName() == "note1") {
        int step = editor->getComponentID().getIntValue();
        int offset = editor->getTextValue().toString().getIntValue();
        processor->getSequencer()->setOffset(step,offset);
    }
}

void FXPanel::valueDown(TextEditor* editor) {
    if (editor->getName() == "note1") {
        int offset = editor->getTextValue().toString().getIntValue();

        if (offset > -63) {
            offset--;
            editor->setText(String(offset),false);
        }

    }

    else if (editor->getName() == "vel1") {
        int velocity = editor->getTextValue().toString().getIntValue();

        if (velocity > 0) {
            velocity--;
            editor->setText(String(velocity),false);
        }
    }
    if (editor->getName() == "note1") {
        int step = editor->getComponentID().getIntValue();
        int offset = editor->getTextValue().toString().getIntValue();
        processor->getSequencer()->setOffset(step,offset);
    }
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="FXPanel" componentName=""
                 parentClasses="public Component, public ChangeListener, public KeyListener"
                 constructorParams="TrioAudioProcessor* p" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="910" initialHeight="600">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ffffffff">
    <IMAGE pos="0 0 910 600" resource="fx_panel_png2" opacity="1.0" mode="0"/>
  </BACKGROUND>
  <SLIDER name="dampSlider" id="b826c2541264d4fa" memberName="dampSlider"
          virtualName="" explicitFocusOrder="0" pos="25 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="freezeSlider" id="b69b0c1377d40574" memberName="freezeSlider"
          virtualName="" explicitFocusOrder="0" pos="92 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="sizeSlider" id="ced39f993ceb1166" memberName="sizeSlider"
          virtualName="" explicitFocusOrder="0" pos="159 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="widthSlider" id="9e84967676e4d764" memberName="widthSlider"
          virtualName="" explicitFocusOrder="0" pos="225 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="wetSlider" id="2ae1bcfd0e9e165" memberName="wetSlider"
          virtualName="" explicitFocusOrder="0" pos="291 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="drySlider" id="e1599158ba8f8e4a" memberName="drySlider"
          virtualName="" explicitFocusOrder="0" pos="358 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <TOGGLEBUTTON name="enableReverbButton" id="e0c503b73b90520" memberName="enableReverbButton"
                virtualName="" explicitFocusOrder="0" pos="376 64 47 24" txtcol="ffffffff"
                buttonText="ON" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <SLIDER name="delayTimeLeftSlider" id="8fe21bc37d6a94a9" memberName="delayTimeLeftSlider"
          virtualName="" explicitFocusOrder="0" pos="475 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <TOGGLEBUTTON name="enableDelayButton" id="e3d5c417258854cd" memberName="enableDelayButton"
                virtualName="" explicitFocusOrder="0" pos="832 64 47 24" txtcol="ffffffff"
                buttonText="ON" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <SLIDER name="delayTimeRightSlider" id="4c083077d0bd49f6" memberName="delayTimeRightSlider"
          virtualName="" explicitFocusOrder="0" pos="542 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="delayFBLeftSlider" id="554d21dada798c8b" memberName="delayFBLeftSlider"
          virtualName="" explicitFocusOrder="0" pos="608 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="delayFBRightSlider" id="40b6d0bb8595d8da" memberName="delayFBRightSlider"
          virtualName="" explicitFocusOrder="0" pos="675 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="delayMixLeftSlider" id="43d0918259355f3d" memberName="delayMixLeftSlider"
          virtualName="" explicitFocusOrder="0" pos="741 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="delayMixRightSlider" id="43e2b34db49ee5ea" memberName="delayMixRightSlider"
          virtualName="" explicitFocusOrder="0" pos="808 96 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="driveSlider" id="b589cc15d635a996" memberName="driveSlider"
          virtualName="" explicitFocusOrder="0" pos="25 256 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="mixSlider" id="2f4d0926f2bbe1f0" memberName="mixSlider"
          virtualName="" explicitFocusOrder="0" pos="92 256 67 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <COMBOBOX name="modeCombo" id="17f14059e267c560" memberName="modeCombo"
            virtualName="" explicitFocusOrder="0" pos="168 272 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="enableDistButton" id="7d07680e3e57306d" memberName="enableDistButton"
                virtualName="" explicitFocusOrder="0" pos="204 227 47 24" txtcol="ffffffff"
                buttonText="ON" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="enableSeqButton" id="28fd42c0b4cac340" memberName="enableSeqButton"
                virtualName="" explicitFocusOrder="0" pos="800 404 24 24" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="399279df3c25523f" memberName="stepButton1"
                virtualName="" explicitFocusOrder="0" pos="200 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="6105a10df70880de" memberName="stepButton2"
                virtualName="" explicitFocusOrder="0" pos="232 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="7ca4ceb6cc6b7e3b" memberName="stepButton3"
                virtualName="" explicitFocusOrder="0" pos="264 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="346e2cfc71824461" memberName="stepButton4"
                virtualName="" explicitFocusOrder="0" pos="296 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="f63cbf2c845214ae" memberName="stepButton5"
                virtualName="" explicitFocusOrder="0" pos="328 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="bfa14419d441abd4" memberName="stepButton6"
                virtualName="" explicitFocusOrder="0" pos="360 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="c8b024292b4f536a" memberName="stepButton7"
                virtualName="" explicitFocusOrder="0" pos="392 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="2752843d91af060f" memberName="stepButton8"
                virtualName="" explicitFocusOrder="0" pos="424 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="14fed1c176a3251b" memberName="stepButton9"
                virtualName="" explicitFocusOrder="0" pos="456 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="93c4f88acc4a7ae2" memberName="stepButton10"
                virtualName="" explicitFocusOrder="0" pos="488 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="d93469fc40057961" memberName="stepButton11"
                virtualName="" explicitFocusOrder="0" pos="520 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="fb0bbbbefa8ef72f" memberName="stepButton12"
                virtualName="" explicitFocusOrder="0" pos="552 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="c4a99188b3a7c345" memberName="stepButton13"
                virtualName="" explicitFocusOrder="0" pos="584 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="20566a08a658f095" memberName="stepButton14"
                virtualName="" explicitFocusOrder="0" pos="616 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="3616bb59e3b4aeaa" memberName="stepButton15"
                virtualName="" explicitFocusOrder="0" pos="648 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="stepButton1" id="4b61324c906154f6" memberName="stepButton16"
                virtualName="" explicitFocusOrder="0" pos="680 400 32 32" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <LABEL name="new label" id="e8a10015ecd8f052" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="144 440 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Note" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="daf2bf1690d35bf3" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="144 472 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Vel" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="34"/>
  <TEXTEDITOR name="note1" id="90ce893ec11d1321" memberName="note1" virtualName=""
              explicitFocusOrder="0" pos="200 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="eb547dad73dcac93" memberName="note2" virtualName=""
              explicitFocusOrder="0" pos="232 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="107f2b54ed369549" memberName="note3" virtualName=""
              explicitFocusOrder="0" pos="264 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="bf8d1bc40a59acca" memberName="note4" virtualName=""
              explicitFocusOrder="0" pos="296 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="119aacc149b1175" memberName="note5" virtualName=""
              explicitFocusOrder="0" pos="328 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="efbb02422d9c6af9" memberName="note6" virtualName=""
              explicitFocusOrder="0" pos="360 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="c9d8e036b67e80a" memberName="note7" virtualName=""
              explicitFocusOrder="0" pos="392 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="3e0bfaa4513716ec" memberName="note8" virtualName=""
              explicitFocusOrder="0" pos="424 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="5a942c376061e351" memberName="note9" virtualName=""
              explicitFocusOrder="0" pos="456 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="f79d9377c4ad17da" memberName="note10" virtualName=""
              explicitFocusOrder="0" pos="488 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="13c49dd9947b63a3" memberName="note11" virtualName=""
              explicitFocusOrder="0" pos="520 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="e6da41e9763a554d" memberName="note12" virtualName=""
              explicitFocusOrder="0" pos="552 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="b9e021c747bb5d93" memberName="note13" virtualName=""
              explicitFocusOrder="0" pos="584 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="4daf3234708c4b8f" memberName="note14" virtualName=""
              explicitFocusOrder="0" pos="616 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="39c973d1846d1f9a" memberName="note15" virtualName=""
              explicitFocusOrder="0" pos="648 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="note1" id="c6a7cd1506a36d00" memberName="note16" virtualName=""
              explicitFocusOrder="0" pos="680 440 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="ef1d8e7d20b14651" memberName="vel1" virtualName=""
              explicitFocusOrder="0" pos="200 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="1ca19df1b93b6ffd" memberName="vel2" virtualName=""
              explicitFocusOrder="0" pos="232 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="37c84e212c820c1f" memberName="vel3" virtualName=""
              explicitFocusOrder="0" pos="264 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="fa0abf27d80af56d" memberName="vel4" virtualName=""
              explicitFocusOrder="0" pos="296 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="ea77e842a37ddd1a" memberName="vel5" virtualName=""
              explicitFocusOrder="0" pos="328 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="44a9e111d73c6964" memberName="vel6" virtualName=""
              explicitFocusOrder="0" pos="360 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="ee609a9c5bbba1c5" memberName="vel7" virtualName=""
              explicitFocusOrder="0" pos="392 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="3ff1177c88b6f941" memberName="vel8" virtualName=""
              explicitFocusOrder="0" pos="424 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="4e4b1842f297113f" memberName="vel9" virtualName=""
              explicitFocusOrder="0" pos="456 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="bc458777e38b376d" memberName="vel10" virtualName=""
              explicitFocusOrder="0" pos="488 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="55febf15e7fbca59" memberName="vel11" virtualName=""
              explicitFocusOrder="0" pos="520 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="a64c22ee92c4002" memberName="vel12" virtualName=""
              explicitFocusOrder="0" pos="552 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="344faea266ade142" memberName="vel13" virtualName=""
              explicitFocusOrder="0" pos="584 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="427cd6bd629a8321" memberName="vel14" virtualName=""
              explicitFocusOrder="0" pos="616 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="c06857524da62db3" memberName="vel15" virtualName=""
              explicitFocusOrder="0" pos="648 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="vel1" id="701fff4c62bf4d14" memberName="vel16" virtualName=""
              explicitFocusOrder="0" pos="680 472 32 24" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <COMBOBOX name="octavesCombo" id="1f63ea09d37ce9fd" memberName="octavesCombo"
            virtualName="" explicitFocusOrder="0" pos="728 472 72 24" editable="0"
            layout="33" items="0&#10;1&#10;2&#10;3" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="6ba6d979d890192a" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="728 440 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Octaves" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="notesCombo" id="4c2ae1bbe6e30e48" memberName="notesCombo"
            virtualName="" explicitFocusOrder="0" pos="56 472 72 24" editable="0"
            layout="33" items="32&#10;16&#10;8&#10;4&#10;2" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="a419e5a0d88a9703" memberName="notesLabel"
         virtualName="" explicitFocusOrder="0" pos="56 440 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Notes" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="enableRunButton" id="19de0beaf480970f" memberName="enableRunButton"
                virtualName="" explicitFocusOrder="0" pos="728 403 24 24" txtcol="ffffffff"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <LABEL name="new label" id="bfa112be6d16ccf7" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="754 403 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="RUN" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="bd69aaf613f989ae" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="830 404 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="ON" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: fx_panel_png2, 72148, "../fx_panel.png"
static const unsigned char resource_FXPanel_fx_panel_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,3,142,0,0,2,88,8,2,0,0,0,162,133,47,69,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,
156,24,0,0,13,85,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,
48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,
97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,52,53,32,55,57,46,49,54,51,52,57,57,44,32,50,48,49,56,47,48,56,47,49,51,45,49,54,58,52,
48,58,50,50,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,
47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,
58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,
46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,
97,112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,
47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,
48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,
99,111,109,47,112,104,111,116,111,115,104,111,112,47,49,46,48,47,34,32,120,109,108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,116,105,102,102,
47,49,46,48,47,34,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,32,120,109,112,58,67,114,101,
97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,120,109,112,58,67,114,101,97,116,
101,68,97,116,101,61,34,50,48,49,54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,34,32,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,61,34,50,48,50,48,45,48,51,45,49,54,84,
50,49,58,52,52,58,49,55,43,48,49,58,48,48,34,32,120,109,112,58,77,111,100,105,102,121,68,97,116,101,61,34,50,48,50,48,45,48,51,45,49,54,84,50,49,58,52,52,58,49,55,43,48,49,58,48,48,34,32,100,99,58,102,
111,114,109,97,116,61,34,105,109,97,103,101,47,112,110,103,34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,54,52,53,100,52,98,51,48,45,56,53,48,100,45,
57,52,52,55,45,98,100,54,52,45,101,97,49,101,97,100,50,100,99,102,54,48,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,
111,115,104,111,112,58,48,97,97,102,53,101,52,53,45,102,49,102,98,45,102,100,52,52,45,56,52,98,99,45,48,55,52,48,56,100,51,53,100,54,57,54,34,32,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,
99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,32,112,104,111,116,111,
115,104,111,112,58,67,111,108,111,114,77,111,100,101,61,34,51,34,32,112,104,111,116,111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,61,34,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,
34,32,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,61,34,49,34,32,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,61,34,55,50,48,48,48,48,47,49,48,48,48,48,34,32,116,105,102,
102,58,89,82,101,115,111,108,117,116,105,111,110,61,34,55,50,48,48,48,48,47,49,48,48,48,48,34,32,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,61,34,50,34,32,101,120,105,102,
58,67,111,108,111,114,83,112,97,99,101,61,34,49,34,32,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,61,34,57,49,48,34,32,101,120,105,102,58,80,105,120,101,108,89,68,105,109,
101,110,115,105,111,110,61,34,54,48,48,34,62,32,60,120,109,112,77,77,58,72,105,115,116,111,114,121,62,32,60,114,100,102,58,83,101,113,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,
105,111,110,61,34,99,114,101,97,116,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,
56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,34,32,115,116,69,118,116,
58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,34,47,62,32,60,114,
100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,50,54,51,
51,48,49,97,56,45,100,101,53,49,45,52,99,56,98,45,98,101,54,48,45,101,53,51,54,101,97,56,98,56,52,55,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,48,54,45,48,50,84,49,57,58,51,49,
58,49,49,43,48,50,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,
97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,101,100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,101,
100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,98,99,50,50,102,50,102,52,45,55,49,99,55,45,52,48,99,98,45,98,97,97,52,45,100,97,51,55,52,55,56,
48,102,101,56,55,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,49,50,45,49,48,84,49,50,58,52,50,58,50,49,43,48,49,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,
65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,101,
100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,99,111,110,118,101,114,116,101,100,34,32,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,
115,61,34,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,34,47,62,
32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,100,101,114,105,118,101,100,34,32,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,61,34,99,111,110,118,101,
114,116,101,100,32,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,
34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,
100,58,48,49,98,97,97,49,97,102,45,57,53,48,99,45,52,101,99,99,45,97,98,56,55,45,54,51,51,50,100,97,98,50,54,54,56,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,49,50,45,49,48,84,
49,50,58,52,50,58,50,49,43,48,49,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,
49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,101,100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,
61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,54,52,53,100,52,98,51,48,45,56,53,48,100,45,57,52,52,55,45,98,100,54,52,45,
101,97,49,101,97,100,50,100,99,102,54,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,50,48,45,48,51,45,49,54,84,50,49,58,52,52,58,49,55,43,48,49,58,48,48,34,32,115,116,69,118,116,58,115,111,
102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,57,32,40,87,105,110,100,111,119,115,41,34,32,115,116,69,118,116,58,99,104,97,
110,103,101,100,61,34,47,34,47,62,32,60,47,114,100,102,58,83,101,113,62,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,
32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,98,99,50,50,102,50,102,52,45,55,49,99,55,45,52,48,99,98,45,98,97,97,52,45,100,97,51,55,52,55,56,48,102,
101,56,55,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,52,102,99,100,51,101,99,52,45,54,57,55,
101,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,34,32,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,
100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,47,62,32,60,112,104,111,116,111,115,104,111,112,58,68,111,99,117,109,101,110,116,
65,110,99,101,115,116,111,114,115,62,32,60,114,100,102,58,66,97,103,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,52,53,98,54,51,
54,54,50,45,102,56,51,101,45,49,49,55,57,45,57,100,97,97,45,99,102,48,53,51,102,100,51,55,50,102,102,60,47,114,100,102,58,108,105,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,
100,58,112,104,111,116,111,115,104,111,112,58,55,48,54,57,57,50,51,50,45,102,102,54,102,45,49,49,55,57,45,56,48,48,53,45,99,57,52,50,48,48,99,56,98,97,49,51,60,47,114,100,102,58,108,105,62,32,60,114,100,
102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,97,55,97,55,57,53,99,100,45,102,102,54,99,45,49,49,55,57,45,97,57,54,98,45,102,97,50,53,51,102,52,48,
97,101,50,100,60,47,114,100,102,58,108,105,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,100,55,97,101,53,99,51,54,45,54,56,54,97,
45,49,57,52,56,45,57,98,51,54,45,100,98,54,102,97,48,101,49,51,52,99,50,60,47,114,100,102,58,108,105,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,
104,111,112,58,101,99,52,97,57,98,50,101,45,102,53,48,51,45,49,49,55,57,45,56,53,54,100,45,99,97,55,102,98,50,101,57,49,49,99,97,60,47,114,100,102,58,108,105,62,32,60,47,114,100,102,58,66,97,103,62,32,
60,47,112,104,111,116,111,115,104,111,112,58,68,111,99,117,109,101,110,116,65,110,99,101,115,116,111,114,115,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,
58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,114,34,63,62,18,104,37,191,0,1,12,37,73,68,65,84,120,156,236,157,119,156,93,85,213,
247,119,61,229,150,153,201,204,36,51,233,189,135,52,2,132,22,122,9,77,144,30,67,17,225,1,69,20,4,69,65,69,176,96,69,1,125,85,32,194,3,40,37,32,189,147,132,146,132,4,82,32,149,148,73,159,73,50,153,126,
203,105,187,188,127,172,185,199,107,200,228,33,48,33,243,248,236,239,199,15,78,110,57,119,239,83,214,254,237,181,214,94,27,143,25,61,26,237,11,90,235,125,250,124,71,96,140,59,229,56,6,131,193,96,48,24,
12,134,255,84,216,190,126,193,72,76,131,193,96,48,24,12,6,195,23,3,57,208,13,48,24,12,6,131,193,96,48,24,246,204,62,123,85,59,11,147,72,96,48,24,12,6,131,193,96,216,59,251,44,85,141,196,52,24,12,6,131,
193,96,48,124,49,152,4,0,131,193,96,48,24,12,6,67,23,101,159,189,170,132,116,45,117,219,89,94,94,131,193,96,48,24,12,6,67,87,227,128,85,0,48,18,211,96,48,24,12,6,131,193,176,119,254,37,85,181,214,32,67,
227,255,134,97,72,8,209,90,219,182,29,69,17,99,76,35,141,58,80,152,148,81,66,72,16,132,148,82,164,17,101,84,68,145,82,138,82,10,71,211,90,115,206,125,223,183,44,75,41,69,8,13,130,160,240,58,139,162,8,
99,76,41,5,9,139,49,81,74,41,165,108,199,86,74,105,173,145,214,132,16,41,21,33,4,99,236,251,126,50,153,200,231,243,186,224,232,197,8,105,173,225,93,104,182,214,154,49,166,148,130,31,130,23,219,189,194,
24,65,171,148,84,82,74,248,228,30,251,5,237,137,133,117,177,194,46,62,93,240,115,8,33,232,239,39,143,176,219,183,226,215,119,251,231,39,63,246,41,249,215,215,139,190,7,29,44,126,119,47,135,45,238,206,
39,15,222,209,23,247,169,217,123,57,206,129,226,127,108,210,231,188,46,6,131,193,96,48,24,62,15,56,222,2,96,55,169,42,165,180,109,91,8,33,132,32,132,114,206,45,219,142,162,168,163,4,0,74,9,66,136,16,42,
132,208,90,11,33,44,203,162,148,132,97,4,50,49,12,67,219,182,165,148,8,33,66,136,82,10,126,75,8,65,8,134,95,215,90,43,165,8,33,8,97,206,185,148,82,8,65,8,33,132,112,206,130,32,4,221,64,8,65,90,107,173,
226,119,65,39,98,140,25,99,90,35,165,148,227,56,249,124,30,122,230,186,110,224,251,112,240,66,191,219,255,95,43,13,82,245,147,18,51,62,45,123,127,61,150,170,197,255,252,228,135,247,119,226,196,39,27,128,
9,70,8,129,84,221,203,231,99,246,34,85,13,6,131,193,96,48,24,14,8,29,38,0,128,47,19,99,156,76,165,180,70,82,74,33,164,214,136,115,171,163,175,132,97,72,8,34,132,114,139,135,97,104,89,150,239,251,156,91,
224,79,165,148,105,173,25,35,148,82,33,4,227,148,16,18,69,17,56,89,99,193,199,57,161,148,194,207,217,182,109,219,142,82,138,113,22,69,145,109,59,148,82,165,84,24,6,82,41,132,80,42,157,6,49,141,49,102,
148,129,102,197,24,19,66,195,40,114,221,132,214,26,33,45,165,162,140,105,173,109,198,64,179,22,59,135,49,198,123,209,103,132,238,89,98,238,230,19,141,95,209,106,15,210,54,254,137,253,151,246,16,183,231,
95,110,66,141,208,158,218,223,254,73,212,129,151,84,237,238,54,254,60,237,249,252,199,249,34,249,223,216,102,131,193,96,48,24,254,179,233,80,170,50,198,180,214,8,99,248,219,118,28,33,36,33,180,163,64,
185,20,210,182,93,219,177,195,48,0,69,43,165,74,165,210,8,225,40,138,34,33,28,199,1,109,202,24,35,148,21,124,168,218,178,44,41,165,86,74,74,73,41,193,132,8,33,28,199,197,97,136,9,161,148,170,72,72,169,
9,97,224,154,197,24,113,203,78,114,30,134,97,20,69,148,82,66,32,70,143,48,38,152,96,74,41,33,4,124,171,72,107,74,9,66,90,43,173,148,244,125,159,80,166,181,130,95,212,72,239,93,167,162,142,229,203,191,
156,151,255,254,135,84,242,147,7,217,203,79,116,86,76,124,15,162,89,107,173,53,161,228,147,111,237,177,73,159,148,209,159,185,109,187,29,170,11,198,253,63,201,255,198,54,27,12,6,131,193,240,31,207,222,
164,170,82,138,91,22,101,140,49,78,41,19,66,217,182,253,175,24,250,191,67,41,139,162,72,41,21,4,97,73,73,9,165,52,8,2,132,136,148,194,117,93,173,117,24,134,74,41,56,172,101,89,66,8,208,148,148,82,140,
73,20,69,156,51,173,53,101,148,16,106,219,14,99,92,107,29,4,1,99,12,35,66,25,141,162,200,117,93,72,30,144,66,8,33,109,219,21,34,178,44,199,178,172,48,138,24,101,26,105,198,88,20,69,8,97,165,180,109,91,
132,16,41,165,31,120,182,109,51,166,180,150,144,65,160,16,66,144,5,187,87,93,178,71,157,135,16,138,221,178,177,131,118,239,1,244,98,249,184,219,145,247,232,106,253,108,185,170,197,190,219,246,195,234,
127,59,254,30,83,90,227,183,62,67,162,66,71,126,226,255,117,58,111,183,6,23,95,169,189,124,204,96,48,24,12,6,195,126,165,67,169,42,165,228,220,98,140,75,169,92,215,226,156,83,74,149,84,164,131,161,58,
148,145,214,10,35,84,86,86,170,148,202,100,50,233,116,58,147,201,118,235,86,218,210,210,66,41,181,44,11,82,66,115,57,31,132,30,33,84,107,4,158,81,140,49,183,184,151,247,34,33,210,233,84,24,134,249,124,
174,178,178,18,99,20,69,66,41,169,133,82,74,58,142,21,134,33,99,220,178,44,110,89,129,31,112,203,22,66,104,132,40,165,220,226,144,159,202,25,83,90,89,150,19,4,33,200,235,116,73,9,66,40,239,121,156,113,
165,20,66,2,33,164,49,214,74,237,209,15,250,47,138,228,74,113,208,92,233,127,147,236,113,228,125,55,193,26,43,30,248,64,241,31,241,23,255,245,83,159,35,61,0,23,40,126,77,107,77,200,191,173,250,42,110,
216,110,63,13,236,49,81,225,83,186,24,63,233,117,238,250,174,202,79,54,233,211,248,155,13,6,131,193,96,48,124,49,116,40,85,9,33,220,178,16,194,140,241,84,42,85,91,91,219,216,208,176,101,203,166,142,62,
191,155,86,75,151,148,114,110,141,31,63,254,131,247,23,230,114,185,32,240,81,145,74,99,140,75,41,181,86,8,161,100,50,61,108,248,112,74,105,50,153,84,142,98,148,109,217,188,57,8,253,186,186,90,93,240,122,
22,127,151,80,90,89,217,61,149,76,15,27,62,60,10,35,140,9,165,148,82,26,134,129,239,123,219,182,110,109,110,110,14,67,191,224,32,196,229,229,21,85,213,213,169,100,42,153,74,149,149,149,5,190,95,112,12,
11,165,144,198,122,55,237,184,27,197,171,205,254,77,134,126,66,150,225,34,226,6,195,90,46,173,53,46,146,131,197,223,2,47,230,158,29,159,251,2,38,237,96,140,161,45,133,67,233,98,138,219,182,23,169,90,220,
146,79,211,158,226,51,211,145,212,235,178,130,79,127,162,246,5,218,147,212,238,178,237,55,24,12,6,131,225,63,152,189,68,123,113,20,69,82,74,66,232,174,93,13,109,173,173,63,248,193,247,85,199,72,41,225,
191,176,206,105,197,138,229,65,224,215,214,110,187,236,178,75,218,218,90,226,215,165,148,82,74,207,203,69,81,8,95,121,253,245,215,142,59,238,216,77,155,54,109,218,180,145,82,42,68,20,69,225,61,119,223,
29,133,97,252,121,33,4,52,70,136,40,10,195,251,239,187,79,42,209,208,208,224,184,14,228,212,238,220,185,115,211,166,77,189,122,86,255,226,206,159,111,219,182,5,190,21,69,81,20,133,143,63,254,216,5,23,
156,191,124,197,178,149,43,87,104,173,25,227,32,109,9,161,132,16,74,232,255,224,231,195,24,188,145,8,10,25,80,74,40,165,140,89,220,138,255,199,25,143,255,0,87,52,231,22,252,143,49,14,255,195,123,34,22,
151,240,223,221,196,238,190,93,200,194,17,72,187,116,167,148,82,206,57,163,140,81,70,161,221,132,82,66,225,149,226,246,23,247,98,55,181,253,63,254,238,39,123,180,91,119,62,229,113,14,56,187,205,55,58,
235,186,24,12,6,131,193,96,248,60,116,44,85,177,134,184,60,165,36,149,74,10,33,56,99,74,254,91,172,28,254,137,49,142,162,8,33,84,156,198,154,74,38,188,124,94,10,21,4,33,99,92,8,129,16,2,47,169,214,26,
99,162,148,196,24,43,165,38,79,62,236,55,191,254,213,235,175,191,210,220,212,216,210,210,76,25,205,123,249,84,42,185,91,148,188,224,8,36,90,107,219,177,178,217,108,34,145,104,107,203,18,130,234,106,183,
137,40,152,249,228,227,207,62,251,204,229,151,93,86,89,89,89,44,56,142,63,254,184,31,253,240,214,141,27,214,95,112,254,185,43,87,44,211,72,107,132,8,101,8,97,33,36,101,212,118,28,33,37,8,110,76,48,161,
4,23,138,103,17,66,148,148,22,231,160,113,19,137,164,70,152,50,78,25,215,8,81,198,48,33,152,16,66,153,84,90,42,77,25,183,109,135,82,70,41,35,132,17,66,49,38,144,170,75,40,83,26,49,214,190,158,12,228,44,
194,132,50,70,40,101,156,115,206,225,45,248,22,101,20,84,46,183,56,227,140,50,74,25,37,180,253,117,248,39,101,148,91,220,118,108,203,182,40,37,133,50,11,200,178,108,55,145,160,140,19,202,9,99,140,115,
56,62,165,148,50,38,164,116,19,9,141,48,38,84,35,76,40,211,8,89,182,77,25,35,148,96,76,56,183,24,99,152,96,132,81,252,115,113,113,49,84,168,14,129,16,162,148,42,165,41,101,208,47,74,169,101,219,182,227,
32,140,53,194,8,19,92,40,37,214,126,195,40,101,59,54,161,132,80,98,217,22,244,136,91,60,238,29,227,12,190,199,56,131,255,194,39,225,191,182,99,195,139,220,226,48,119,136,15,11,205,43,56,149,17,33,152,
49,74,105,123,186,10,33,4,46,43,227,76,35,141,48,178,29,155,113,102,217,22,198,216,178,44,184,214,150,101,105,141,148,70,220,178,49,33,148,49,165,53,183,44,152,122,192,45,1,95,199,4,195,255,192,107,222,
81,2,183,193,96,48,24,12,134,207,73,199,82,85,35,165,20,231,92,41,149,207,231,45,203,242,131,128,80,42,101,187,76,17,66,96,66,124,223,135,170,254,8,33,173,33,175,84,33,132,26,155,154,109,219,161,255,82,
102,12,148,163,148,18,244,4,165,44,155,205,198,158,170,113,99,199,205,152,49,163,174,182,214,243,124,199,113,179,217,28,148,11,64,8,5,65,128,16,10,195,16,164,45,198,88,10,149,76,38,131,32,112,93,103,67,
77,77,255,254,253,103,205,154,117,212,81,71,161,66,104,59,8,66,248,3,170,186,106,173,186,119,239,241,251,223,255,254,166,155,110,90,179,230,99,198,24,99,140,16,154,72,36,148,210,82,74,199,113,62,233,51,
3,105,2,250,47,145,72,58,142,235,251,65,105,105,25,33,20,33,156,74,151,128,102,181,29,151,80,234,38,18,229,21,21,152,144,48,18,182,227,90,182,131,48,230,150,205,184,69,40,115,220,132,101,89,174,235,82,
198,45,203,78,165,210,140,49,66,169,109,219,74,33,215,77,40,165,165,210,137,100,202,118,28,141,52,161,132,81,142,17,145,66,137,72,42,169,145,198,24,17,248,159,86,72,43,132,52,70,26,139,72,70,161,208,10,
33,68,48,38,66,72,203,178,161,133,37,37,37,24,99,203,178,41,101,82,42,76,168,210,136,16,154,74,165,165,82,26,97,110,217,142,227,50,198,221,68,18,99,98,89,54,231,54,101,28,100,55,198,148,82,6,63,167,164,
230,156,23,46,28,181,44,203,178,44,168,5,225,38,92,165,21,38,212,178,29,141,176,16,50,12,5,198,52,153,76,82,74,41,101,220,178,44,219,134,115,158,76,38,3,63,196,136,80,194,148,212,82,40,232,5,210,152,18,
6,61,181,184,205,40,71,26,107,133,162,80,16,76,161,1,81,40,164,80,24,17,173,180,146,138,91,86,187,48,197,152,91,150,101,89,148,81,221,62,27,66,90,99,173,49,66,4,33,2,11,236,24,229,112,222,24,229,156,89,
82,168,40,20,97,16,217,142,19,132,33,101,12,99,162,17,182,29,199,182,109,165,180,109,59,156,91,142,227,74,169,64,150,194,77,94,156,175,108,82,2,12,6,131,193,96,216,223,116,40,85,65,164,250,190,47,165,
44,43,235,86,214,173,219,157,191,252,21,227,220,118,108,198,24,165,244,228,147,79,201,229,114,142,227,56,142,163,148,186,235,174,187,44,139,39,147,73,203,178,25,99,135,28,114,104,73,105,169,16,194,243,
188,120,81,185,214,250,134,27,190,195,185,197,56,103,140,253,249,207,127,65,8,73,217,238,94,61,227,140,211,83,169,132,82,218,113,220,235,175,191,1,99,108,219,246,210,165,31,58,142,35,165,176,44,107,201,
146,37,156,115,198,249,37,151,92,154,76,166,224,245,237,219,183,255,237,111,51,122,245,234,9,202,210,247,253,183,223,126,231,212,83,167,18,66,56,183,102,204,152,225,121,62,198,237,249,160,223,254,246,
183,167,76,57,106,219,182,173,90,107,112,161,49,198,163,40,98,159,168,255,143,11,9,169,132,80,169,20,66,24,99,66,25,87,74,219,150,147,76,164,40,101,150,101,151,148,148,66,77,46,219,118,60,207,183,109,
151,115,203,243,124,168,108,96,219,118,34,145,208,26,81,202,44,219,102,156,35,140,195,40,34,148,218,142,107,89,54,99,156,80,22,69,146,16,230,186,9,173,17,116,159,91,22,104,250,68,34,145,72,36,44,203,130,
128,190,109,219,237,206,81,74,33,27,129,82,6,138,42,153,74,75,165,45,203,73,165,210,8,35,74,105,20,70,22,231,24,19,40,167,0,233,11,8,97,66,41,33,180,180,180,12,33,76,40,67,152,32,132,45,219,33,148,97,
66,45,219,230,220,178,109,199,178,108,140,137,210,154,80,234,56,78,156,249,0,62,90,248,85,110,219,220,178,92,55,193,24,67,8,187,110,194,117,65,245,58,82,42,215,77,216,182,131,16,230,220,178,108,135,113,
174,180,182,109,155,49,6,153,15,174,235,66,73,7,66,192,249,203,29,199,137,125,156,142,227,164,82,41,33,36,165,212,113,28,232,59,99,204,178,108,199,113,45,203,182,29,23,78,35,33,4,19,194,24,179,109,27,
210,25,8,165,144,176,193,56,183,29,199,113,93,88,210,7,32,132,224,215,211,233,116,20,9,208,235,220,178,16,66,144,173,129,16,38,132,134,97,148,76,165,49,38,140,241,124,222,163,140,161,34,199,173,193,96,
48,24,12,134,47,128,14,151,85,249,190,111,219,14,161,52,138,162,198,198,198,146,146,210,146,146,210,129,3,7,50,198,149,146,153,182,54,16,82,8,161,246,2,254,24,15,28,52,184,186,186,167,214,8,244,140,16,
178,190,190,62,145,72,104,173,149,146,132,80,140,113,24,69,3,6,14,170,170,170,22,34,250,197,157,119,30,117,212,145,147,39,79,46,236,80,133,6,13,26,184,125,71,99,85,85,21,231,172,103,207,158,235,215,175,
227,156,107,173,161,18,150,101,89,165,165,101,99,199,142,207,229,242,37,165,37,66,136,109,219,182,254,226,23,63,239,215,175,111,188,253,213,139,47,190,116,213,85,255,213,167,111,223,35,143,154,162,164,
250,241,143,127,242,214,91,111,63,250,232,195,224,213,211,90,223,114,203,15,166,78,61,93,8,193,40,139,34,97,89,140,243,246,61,8,148,82,90,105,68,144,86,237,101,155,48,198,74,107,27,180,11,165,221,82,73,
207,243,56,231,185,124,222,117,93,173,81,16,132,8,97,219,182,91,91,91,161,2,23,231,212,247,243,203,151,127,212,220,220,164,148,234,209,163,106,236,216,113,5,47,175,76,165,210,142,227,66,200,216,113,28,
198,152,239,7,208,119,41,37,69,218,178,109,8,41,91,220,130,157,189,164,148,152,16,139,115,104,36,193,216,178,109,184,70,90,107,41,149,132,156,223,72,36,147,41,203,178,115,249,92,109,237,182,237,117,181,
66,68,182,237,246,234,221,167,111,223,190,140,115,66,136,101,219,113,182,109,54,155,115,28,71,8,193,24,133,6,196,122,81,136,72,8,161,181,18,81,123,220,31,82,150,11,53,4,40,66,176,170,12,67,65,49,110,89,
150,101,135,97,136,16,150,82,66,177,5,206,121,16,4,90,41,203,118,48,198,65,224,187,137,100,24,134,140,182,239,103,6,14,90,165,148,70,8,164,185,237,56,48,65,2,213,8,36,146,137,226,20,2,66,169,214,90,42,
21,5,237,197,206,160,13,133,154,18,132,80,141,17,172,147,251,151,163,92,105,133,49,135,123,64,8,17,95,110,33,37,165,204,117,19,190,239,167,210,169,48,12,29,199,245,189,32,157,118,35,17,149,87,84,102,50,
153,84,58,237,121,94,105,105,153,239,123,156,91,82,138,246,250,95,144,90,64,137,146,202,184,87,13,6,131,193,96,216,79,116,40,85,17,66,66,8,45,68,34,145,148,74,121,158,7,123,71,229,243,30,104,157,124,62,
31,123,152,64,121,48,198,40,5,237,69,165,108,47,161,10,78,83,208,169,74,41,140,48,99,44,12,67,199,177,29,199,169,171,171,195,69,75,173,65,77,42,165,149,210,110,34,225,7,65,20,65,4,95,195,62,171,97,20,
41,173,147,201,84,20,10,173,101,99,99,195,212,169,167,194,15,97,140,115,185,220,119,190,115,227,144,161,67,19,137,164,148,18,97,60,108,248,240,183,222,122,235,229,87,94,57,235,204,51,161,49,99,15,26,123,
196,225,135,215,108,216,148,76,166,108,199,86,82,216,182,157,207,231,80,188,232,91,253,107,133,62,36,42,68,145,0,199,225,251,239,191,31,4,126,16,248,4,147,210,178,110,99,198,28,148,205,100,187,117,235,
246,241,234,85,59,119,238,140,162,48,138,194,234,234,158,26,233,103,254,249,212,228,201,147,41,101,23,92,112,209,199,107,214,84,84,84,66,132,93,74,13,181,102,19,137,132,227,56,141,141,141,221,186,149,
181,180,180,112,206,161,131,74,41,41,181,101,217,24,35,216,54,54,206,194,140,79,5,101,92,107,45,165,36,148,82,134,149,210,132,16,112,84,251,158,151,78,167,118,236,168,219,89,191,179,172,180,116,227,198,
77,99,14,58,104,192,128,1,237,178,187,32,209,86,172,88,81,191,115,123,123,55,9,65,90,35,132,170,170,123,13,31,62,220,243,124,132,218,101,58,161,154,82,40,14,128,116,161,62,43,165,20,182,108,133,218,11,
112,53,125,63,128,148,0,207,243,108,219,146,82,66,181,50,164,81,24,69,174,235,132,97,132,49,77,36,146,66,8,78,40,92,50,165,20,161,136,80,102,219,54,156,109,223,247,49,161,142,237,64,14,40,46,170,240,5,
9,178,177,170,150,2,52,186,212,90,19,74,227,108,102,139,179,66,70,244,191,174,35,35,152,16,138,64,115,83,198,45,10,39,86,8,65,169,194,152,184,137,68,20,137,116,186,180,173,173,13,35,172,148,114,93,71,
8,1,19,45,206,184,148,34,153,76,182,182,182,50,70,33,55,22,233,246,173,107,13,6,131,193,96,48,236,63,246,86,239,157,177,246,93,76,69,20,33,164,181,86,81,20,129,86,224,150,101,219,54,42,132,239,219,51,
68,253,0,194,172,233,116,90,8,145,203,229,32,182,219,190,166,74,107,41,21,99,84,43,101,219,86,83,99,99,20,134,67,134,12,65,5,157,234,121,254,43,175,188,90,94,94,78,8,17,66,42,165,57,231,220,226,8,33,173,
52,4,196,93,215,197,24,123,190,231,251,62,161,164,186,186,106,196,136,17,176,177,42,66,104,245,234,143,219,50,109,165,165,101,249,188,167,53,178,109,71,74,153,72,38,151,125,180,44,118,227,33,132,78,58,
233,164,166,166,70,208,214,132,18,165,212,39,235,0,128,159,152,96,194,57,115,92,7,97,228,121,94,143,30,221,179,153,54,17,69,65,224,55,55,55,18,140,74,74,74,242,249,92,99,99,195,252,249,115,125,223,243,
253,224,71,63,250,81,253,206,250,113,227,198,99,76,218,90,219,254,249,244,83,169,100,58,10,69,24,6,24,163,48,12,41,165,224,88,173,169,169,217,178,121,243,235,175,191,186,120,241,7,155,55,111,106,107,109,
133,37,62,156,115,132,144,214,24,52,42,66,132,82,206,185,205,152,197,185,77,8,163,148,83,202,57,183,44,203,166,148,107,141,164,84,148,82,173,148,16,162,173,173,237,75,95,250,82,89,105,169,214,122,209,
162,15,122,244,168,146,178,221,143,232,186,110,16,4,185,92,238,244,211,79,15,195,176,189,186,66,20,9,33,130,32,188,238,155,223,172,221,182,13,33,36,165,210,74,99,76,40,101,148,113,66,152,214,196,77,36,
44,219,134,196,83,199,113,109,219,129,84,4,208,115,224,224,204,180,181,109,221,186,121,206,156,89,111,189,53,187,174,182,182,126,103,189,237,216,182,101,17,76,92,215,165,148,106,141,24,179,192,129,11,
255,117,156,132,109,187,90,227,32,136,132,80,148,114,215,77,88,150,29,39,155,90,150,131,49,165,148,219,182,107,219,46,156,1,173,49,194,136,91,60,153,76,38,83,41,200,112,128,149,106,81,168,148,212,148,
50,104,36,99,156,96,138,17,195,152,98,76,9,97,140,89,24,211,40,146,8,17,206,237,84,42,69,40,133,4,95,207,243,18,137,196,214,173,155,231,205,123,103,206,236,55,223,123,111,222,242,229,203,16,66,37,165,
165,220,178,96,167,95,74,40,250,68,90,179,73,9,48,24,12,6,131,97,63,209,161,84,197,24,75,41,181,146,90,43,140,81,20,134,97,16,16,130,65,72,133,97,8,31,3,241,167,148,70,26,193,186,147,84,42,149,205,101,
19,137,132,109,219,34,18,74,41,74,219,99,199,160,92,215,172,89,61,247,221,183,195,48,184,255,254,251,15,58,232,160,120,105,249,35,143,60,210,167,79,63,82,240,84,129,95,13,234,85,129,59,13,138,167,114,
206,19,137,4,38,184,165,185,229,148,83,78,1,241,7,106,245,253,247,223,175,168,168,104,109,109,237,214,173,155,109,219,97,24,58,142,211,183,111,223,135,31,126,88,74,17,119,173,127,255,254,217,108,150,210,
246,69,66,177,210,69,255,190,167,84,161,136,0,6,191,26,163,108,211,166,77,185,124,14,106,23,28,127,252,241,153,108,54,155,205,214,214,214,78,155,54,237,160,131,14,210,90,111,223,94,247,221,239,126,175,
87,175,222,233,116,154,49,86,94,94,222,179,87,239,100,42,73,40,102,148,42,37,19,9,7,99,36,101,36,68,132,145,190,245,214,91,68,20,5,190,127,211,141,55,70,81,152,203,102,181,82,90,43,206,25,198,136,82,2,
127,8,17,9,17,41,37,41,37,74,170,48,8,64,248,50,70,49,214,240,71,46,155,11,130,32,145,72,180,180,52,15,27,54,76,107,69,8,105,110,110,134,184,60,4,196,179,217,28,228,131,190,242,202,43,182,109,111,218,
180,17,250,251,229,47,127,57,157,78,255,241,143,127,236,213,187,55,103,20,105,165,148,196,24,41,165,162,40,194,4,39,146,9,41,21,33,20,82,147,41,37,176,221,3,103,204,113,236,108,54,99,91,22,37,164,174,
174,246,182,31,223,150,201,100,68,20,125,231,59,215,35,164,242,185,44,99,52,8,2,66,8,99,84,107,69,41,9,195,64,107,101,219,22,198,8,92,209,112,202,17,210,132,96,165,148,231,121,24,35,199,177,125,223,199,
24,73,41,148,146,133,74,104,145,148,2,99,196,57,35,4,35,164,41,37,150,197,193,47,43,133,100,140,81,70,49,198,240,174,16,2,182,120,8,130,0,20,38,28,193,178,184,109,91,24,107,33,34,66,48,33,84,8,73,41,11,
195,160,182,118,107,38,211,38,132,216,177,189,46,151,205,98,140,60,47,111,113,88,28,198,49,198,4,147,98,151,109,103,62,142,6,131,193,96,48,24,254,157,14,19,0,148,86,88,99,202,168,146,146,50,172,181,10,
195,144,16,66,40,231,156,11,193,25,103,82,74,136,228,66,60,26,114,16,35,17,89,150,21,71,171,11,193,98,172,164,194,4,255,225,15,191,191,251,238,63,20,75,67,112,196,46,95,177,226,166,155,190,59,97,226,68,
140,177,109,91,90,35,33,34,112,124,22,50,4,144,231,251,137,68,2,99,20,69,145,109,219,129,159,23,81,4,210,25,50,7,124,223,167,148,150,150,150,6,97,80,72,78,85,24,227,13,27,106,24,107,207,245,68,8,185,174,
11,91,188,74,41,64,173,234,194,91,123,36,14,205,99,132,119,213,239,26,56,112,160,86,186,170,170,170,161,161,201,113,220,237,219,107,127,114,251,79,180,214,74,171,223,255,254,174,158,189,122,230,114,57,
198,184,16,81,159,126,125,7,13,30,188,118,237,199,59,235,119,134,190,159,72,164,250,15,232,95,83,83,35,165,232,94,217,125,199,142,237,227,199,143,133,147,240,222,123,239,45,95,254,81,117,117,175,68,34,
81,91,91,27,134,62,66,168,186,103,175,97,195,134,249,126,126,253,250,245,173,173,45,24,227,138,138,202,161,67,134,237,218,181,115,219,182,109,158,151,131,230,81,202,42,43,43,123,246,236,107,219,118,24,
132,173,45,173,227,198,142,131,120,253,156,57,111,85,148,87,10,33,48,38,176,177,45,231,118,20,133,131,6,14,106,108,216,85,94,94,129,49,110,203,100,94,127,227,141,195,38,79,14,195,104,213,170,213,13,187,
118,16,66,123,84,245,160,148,238,220,185,83,41,213,179,103,239,161,67,135,18,74,40,33,74,169,198,198,134,109,219,182,53,54,236,82,74,34,132,8,161,253,250,245,183,109,123,215,174,93,77,77,13,131,6,13,116,
108,91,107,189,124,249,71,203,151,127,212,183,111,63,199,113,183,109,219,22,4,30,194,184,111,223,126,217,76,166,181,181,181,123,247,238,201,100,178,190,190,62,155,205,96,76,170,170,170,134,13,27,209,216,
216,80,91,91,219,210,210,132,16,234,219,183,127,143,30,61,182,110,221,86,95,191,157,80,90,89,81,25,134,97,75,75,51,66,168,123,247,170,161,67,135,238,218,213,180,125,123,93,38,211,134,16,170,172,236,209,
187,119,239,100,50,5,34,181,177,177,113,231,206,29,45,45,205,48,195,169,168,232,222,189,123,143,202,138,138,32,240,107,106,214,239,218,181,19,97,92,222,173,156,91,124,231,142,29,24,147,116,73,233,216,
177,227,49,198,13,13,13,187,118,237,188,248,226,139,161,190,216,199,31,175,246,253,252,59,111,207,169,170,234,53,114,212,72,21,169,184,236,42,92,53,164,16,166,70,170,26,12,6,131,193,176,31,249,151,87,
117,55,249,72,48,145,66,42,169,148,82,82,8,112,179,105,173,41,37,66,8,223,15,194,32,4,151,42,198,152,82,66,25,65,8,35,40,23,164,20,20,42,117,19,14,163,84,107,45,132,36,148,128,171,143,16,34,165,42,252,
22,194,24,255,245,190,251,14,63,252,136,126,253,7,104,141,41,165,82,202,40,10,181,214,81,24,69,97,132,49,254,228,134,245,157,206,39,87,198,192,121,144,66,133,65,8,53,56,211,233,244,182,109,181,8,33,76,
112,255,126,253,243,185,220,230,205,155,126,250,211,159,86,86,84,72,41,94,123,245,245,39,158,124,58,159,203,253,233,143,247,134,97,160,148,26,55,110,92,62,151,195,8,249,249,188,16,98,217,71,75,47,188,
224,188,85,43,151,135,65,240,211,159,222,17,69,98,242,228,195,193,125,251,240,35,255,45,165,252,229,47,239,108,108,216,181,114,197,242,40,138,162,40,58,242,136,35,26,27,154,54,111,218,244,250,107,175,
136,40,138,194,48,149,76,74,37,122,247,233,253,209,71,31,70,81,4,187,42,132,97,240,135,63,252,126,245,234,229,59,119,214,217,142,213,210,218,50,126,252,56,140,113,38,147,153,57,243,201,210,210,82,132,
80,34,225,58,142,205,24,243,125,159,115,158,203,231,206,58,235,204,116,58,173,181,94,177,124,185,227,36,60,47,84,74,149,151,151,74,41,243,249,252,179,207,60,251,147,219,110,243,242,185,40,12,47,191,236,
210,213,43,87,102,219,178,185,108,110,227,134,26,199,182,238,252,197,207,163,40,244,60,79,8,209,150,105,189,245,135,63,56,225,132,227,14,58,104,180,148,114,202,49,71,195,169,155,49,227,111,74,169,223,
252,230,55,59,118,108,255,240,195,37,66,8,17,69,103,158,113,250,139,47,62,31,4,254,93,119,253,110,231,206,29,75,150,44,150,82,134,97,112,252,241,199,230,242,185,45,91,182,60,247,236,51,208,47,219,177,
118,237,170,191,227,142,159,120,158,239,123,254,189,247,222,59,103,206,108,232,239,221,119,255,97,237,218,53,39,28,127,236,172,55,223,136,194,48,10,195,187,126,247,155,157,59,119,72,41,132,144,53,53,107,
143,57,230,232,23,95,124,33,159,207,69,97,232,123,222,195,15,63,24,134,249,186,237,181,8,105,219,182,161,37,207,62,251,236,79,239,248,105,20,69,65,16,92,255,237,235,214,174,93,165,149,168,171,221,250,
192,3,247,61,250,232,163,90,107,173,212,228,201,135,131,95,63,153,116,69,20,97,132,195,32,106,223,123,172,160,86,205,130,42,131,193,96,48,24,246,43,29,38,0,232,14,216,215,31,136,87,247,43,165,226,165,
45,177,44,6,111,229,179,207,62,219,191,127,255,84,42,5,43,159,160,50,148,16,162,144,181,9,177,120,228,58,78,62,159,215,186,176,186,92,35,198,57,212,94,133,32,190,227,56,82,202,214,214,86,219,178,181,210,
240,162,214,122,208,160,193,66,68,113,205,44,168,159,37,132,0,215,35,180,161,163,174,65,51,98,239,111,99,99,35,66,8,99,220,175,95,191,48,12,27,27,27,166,79,159,142,16,162,148,221,121,231,157,229,229,21,
158,231,13,27,54,12,33,148,201,102,223,124,243,205,166,166,166,203,46,187,12,190,50,112,208,160,31,254,240,71,3,7,14,10,195,240,202,43,175,188,252,242,203,33,249,97,209,162,69,142,227,50,206,111,189,245,
214,138,138,138,129,131,6,106,173,61,223,251,231,63,255,217,173,91,183,93,187,234,199,143,31,175,181,174,169,169,105,108,108,220,185,115,231,249,231,159,191,112,225,194,169,83,167,50,198,134,13,27,86,
87,87,119,238,185,231,46,93,186,180,161,161,33,151,203,245,232,209,99,232,208,161,8,161,165,75,151,246,232,81,45,132,132,206,10,33,96,106,17,4,65,83,83,211,153,103,158,25,133,17,66,104,229,202,149,201,
100,210,182,173,214,214,214,115,206,57,7,21,114,148,255,241,216,99,227,198,143,247,60,239,71,63,250,225,239,238,250,93,109,221,214,68,210,233,219,183,207,91,111,205,249,202,87,166,221,127,255,253,201,
100,138,82,122,211,141,223,157,56,225,224,178,178,110,107,215,174,155,62,125,58,193,4,33,52,111,222,60,72,216,248,214,183,190,21,183,7,33,116,247,221,119,31,124,240,36,165,212,203,47,191,220,179,103,207,
126,253,250,105,173,61,207,123,236,177,199,57,231,185,92,118,210,164,73,34,138,54,108,216,80,95,95,159,205,101,199,140,25,3,41,16,107,214,172,153,50,229,152,127,254,243,159,8,161,243,206,59,247,161,135,
30,10,195,232,212,83,167,190,252,242,203,8,161,139,46,186,232,148,147,79,14,130,96,229,202,21,183,222,114,235,61,119,223,67,9,29,53,114,244,200,145,35,27,27,27,143,153,114,236,11,207,191,72,8,110,105,
105,153,62,253,43,208,18,198,216,195,15,63,60,124,248,136,108,54,123,219,109,183,221,115,207,61,27,54,108,232,217,179,231,21,87,92,49,119,238,92,132,16,161,244,194,11,47,36,132,216,182,211,218,218,102,
217,182,101,91,176,119,213,190,62,2,6,131,193,96,48,24,62,51,159,86,170,130,152,139,37,221,167,31,176,11,203,198,219,127,232,218,107,191,193,57,191,243,206,59,225,159,150,197,25,99,119,255,225,15,27,55,
108,96,140,50,70,149,210,160,62,225,139,220,106,223,195,9,84,172,101,217,81,20,229,243,121,173,116,89,183,178,215,94,123,205,178,44,200,67,208,90,31,122,232,161,141,141,141,165,165,165,205,205,205,65,
16,88,150,229,251,254,214,173,91,47,189,244,82,74,255,149,234,176,121,243,230,84,42,5,123,25,196,223,69,159,216,11,190,189,13,69,46,52,215,117,183,111,111,95,56,95,86,86,150,207,231,126,127,215,93,61,
123,86,99,140,255,248,199,63,110,218,180,217,182,237,242,242,242,209,163,71,11,41,86,175,94,77,41,21,66,246,235,215,15,122,244,192,3,15,64,90,66,58,93,210,191,255,128,209,163,71,113,206,148,82,43,86,172,
28,52,104,240,17,71,28,213,173,91,249,177,199,29,7,85,69,151,125,180,44,145,72,54,52,52,156,123,238,121,148,50,165,116,125,253,46,66,72,239,222,189,255,240,251,223,127,255,251,223,95,185,114,37,66,168,
166,166,230,197,23,95,164,148,142,24,49,252,91,223,186,174,181,181,229,140,211,79,215,90,75,41,106,106,54,144,194,46,171,112,14,161,250,21,33,164,173,173,109,232,208,161,140,51,173,245,134,13,27,203,202,
202,132,16,13,13,13,19,39,76,64,8,73,41,159,127,254,249,29,219,119,238,216,190,115,225,194,133,132,144,139,47,190,232,162,139,46,216,184,113,195,245,55,124,155,16,108,89,214,179,207,62,219,183,111,223,
145,35,71,189,249,230,172,163,142,58,250,145,71,254,238,186,137,177,99,199,193,137,90,187,118,109,223,126,3,142,158,114,108,247,238,61,78,58,233,36,56,99,11,22,44,224,220,114,221,132,101,89,111,190,57,
235,180,211,78,3,233,252,193,7,139,202,203,43,61,207,59,243,204,51,45,219,226,150,85,91,87,71,41,205,229,114,195,135,15,71,8,173,93,187,238,206,59,239,236,209,163,71,115,115,51,180,127,243,230,205,175,
188,242,106,50,153,172,171,219,14,167,171,186,186,58,211,214,246,131,239,223,124,245,213,255,133,49,186,241,59,223,217,184,97,195,218,181,107,255,249,244,63,25,163,131,7,15,186,225,134,27,234,119,213,
143,31,63,62,138,66,132,208,211,79,63,221,208,208,216,214,214,182,104,209,34,165,212,151,207,249,242,153,103,158,41,165,108,107,107,27,55,110,28,66,40,147,201,62,253,244,63,143,58,106,202,209,83,142,25,
53,122,12,180,199,77,56,198,141,106,48,24,12,6,195,23,201,222,138,85,197,196,74,174,248,197,226,34,83,123,1,182,131,66,8,34,251,34,149,74,143,28,57,234,15,127,184,251,216,99,143,57,252,240,195,193,211,
57,116,232,208,255,254,239,255,190,230,235,95,31,53,106,52,148,235,135,188,216,124,62,23,187,66,161,6,167,231,121,90,107,23,74,147,74,185,99,199,206,143,63,254,120,196,136,17,144,135,58,114,228,136,146,
116,73,107,107,11,20,171,10,2,159,82,154,207,229,198,142,27,27,107,53,74,233,27,111,188,81,94,94,1,105,9,74,42,66,8,172,188,217,83,183,53,37,52,12,3,219,113,49,198,137,68,98,219,182,109,240,78,42,149,
42,47,47,255,218,215,174,144,82,54,55,55,255,241,143,127,234,219,183,95,75,75,235,193,7,79,68,8,49,202,214,175,91,159,74,165,235,235,235,71,143,30,13,106,248,247,191,255,195,97,147,143,128,141,229,55,
111,222,52,120,200,16,240,212,46,88,184,16,150,150,237,218,181,235,144,67,14,1,175,243,170,213,171,43,42,42,154,155,155,78,61,245,84,56,219,43,86,172,40,41,41,217,80,83,99,219,246,79,126,242,19,140,241,
165,151,94,2,50,20,33,164,148,92,183,126,157,214,122,252,132,241,90,43,74,217,250,245,235,75,203,202,40,163,97,24,185,46,197,152,192,98,166,40,10,115,217,204,200,145,35,161,96,211,211,79,63,93,214,173,
28,99,220,214,214,122,200,33,135,192,169,254,251,223,255,81,85,85,21,69,81,159,62,125,160,241,47,191,252,50,99,172,180,164,20,234,142,253,238,119,191,155,55,111,254,150,45,91,238,188,243,206,84,42,61,
104,208,192,149,43,87,14,25,50,68,8,193,24,91,185,114,165,109,187,82,234,166,230,230,131,15,62,24,154,247,214,91,111,15,28,56,168,170,170,167,214,170,177,113,215,136,145,35,224,162,172,89,179,150,115,
171,185,185,233,202,175,93,1,51,135,77,155,54,117,235,214,237,248,227,142,239,214,173,12,33,180,101,203,102,198,88,67,67,195,208,161,195,192,73,255,246,219,111,117,43,47,223,188,121,211,168,81,163,160,
52,196,170,85,171,54,109,218,120,254,249,231,194,49,223,122,251,173,221,238,210,205,155,55,123,249,252,228,201,135,65,25,221,153,51,159,42,43,43,243,125,191,111,223,62,144,145,242,250,235,175,247,234,
213,171,127,255,254,137,68,66,41,181,97,195,6,199,113,9,101,217,108,30,114,166,97,201,26,214,90,233,66,14,128,113,176,26,12,6,131,193,176,159,217,91,5,128,120,5,73,241,127,247,213,171,10,219,111,66,158,
43,66,56,155,203,41,173,123,246,234,117,229,149,87,53,53,55,163,130,47,243,220,115,191,252,181,43,190,182,121,211,166,40,10,41,37,82,10,215,117,74,74,74,68,20,129,75,50,138,34,74,169,197,57,193,56,151,
203,114,139,17,74,43,42,42,95,121,229,85,168,63,170,181,78,38,147,119,221,245,187,245,235,214,53,53,53,98,140,144,214,107,215,172,57,246,216,99,79,155,58,21,21,74,220,47,91,190,108,254,123,239,37,18,9,
74,72,224,7,24,227,32,8,40,41,202,217,37,255,150,179,11,255,132,232,185,227,56,171,86,173,130,119,251,247,239,127,195,13,215,115,206,40,165,51,102,252,77,35,20,69,81,107,107,235,41,167,156,2,97,253,21,
43,86,116,235,214,205,243,242,35,70,140,64,8,109,217,186,165,102,195,6,216,230,52,138,68,38,147,25,63,110,28,66,40,12,195,119,223,125,183,180,180,20,99,220,210,210,50,113,226,68,66,136,70,250,245,215,
94,79,167,211,217,108,22,210,9,16,66,207,61,247,156,214,250,250,235,175,95,183,110,221,197,23,95,60,106,212,168,187,239,190,219,182,237,53,107,214,64,157,132,167,159,126,186,185,169,105,244,168,81,8,97,
173,212,204,153,79,117,235,86,14,234,28,33,36,165,244,125,63,138,162,192,247,7,14,28,88,82,82,130,16,170,169,169,217,186,117,91,34,145,144,82,14,30,60,184,111,223,190,90,171,218,218,218,93,187,118,97,
140,147,201,212,144,33,67,148,82,155,55,111,218,177,99,103,73,73,233,207,127,254,139,45,91,182,42,165,134,15,31,254,213,175,94,126,219,109,63,222,213,176,235,242,203,47,219,176,161,38,159,207,141,31,63,
142,49,38,165,124,238,185,231,147,169,148,82,42,155,205,142,26,53,10,33,68,8,189,255,254,7,202,203,43,130,48,180,29,103,103,125,253,216,131,198,194,189,244,198,27,111,148,87,148,183,182,180,28,124,240,
193,160,188,31,123,236,49,74,233,73,39,157,4,149,83,183,109,219,86,81,81,145,203,229,122,246,236,73,8,241,125,255,137,39,158,72,38,147,249,124,110,226,193,19,49,198,77,77,205,175,190,250,234,224,193,131,
6,13,26,132,16,122,227,205,55,40,165,140,113,6,142,122,198,184,101,61,242,240,35,221,187,119,239,209,163,7,66,104,205,154,53,59,118,236,176,44,171,178,178,114,240,224,193,90,235,154,13,53,59,119,238,172,
175,175,63,247,220,115,193,21,189,118,237,218,242,242,114,216,91,216,117,221,108,54,43,165,128,93,205,246,152,214,252,41,31,7,131,193,96,48,24,12,251,196,222,234,170,126,82,173,238,246,238,167,253,13,
66,192,215,85,216,15,201,42,41,41,205,231,189,187,126,119,23,28,7,196,232,143,127,252,163,1,3,250,183,181,181,182,180,52,111,222,180,105,206,236,55,155,154,155,32,220,44,165,226,156,135,97,216,218,218,
50,119,222,59,155,54,109,216,185,115,7,165,180,79,159,190,183,220,114,43,136,39,104,234,25,103,156,254,204,51,255,172,172,168,152,55,247,157,5,11,230,223,113,199,79,30,122,232,65,144,203,66,136,40,18,
191,248,197,157,201,100,10,60,133,16,127,143,162,16,124,183,80,154,42,254,47,42,168,213,120,139,1,206,173,229,203,151,67,167,122,247,238,125,213,85,87,97,76,222,255,224,131,95,220,249,203,30,61,170,29,
215,241,253,252,208,161,67,9,33,66,202,127,254,243,159,150,101,157,113,198,153,37,37,105,173,117,93,109,157,99,59,190,31,228,114,185,68,34,145,74,165,134,14,29,42,133,216,177,99,71,77,77,13,84,60,85,74,
246,239,223,15,99,156,207,229,159,122,234,169,84,42,229,121,249,73,147,14,214,90,181,181,181,205,154,53,187,95,191,126,55,221,116,35,33,120,211,166,77,39,157,124,210,95,239,187,175,127,255,254,195,134,
13,163,148,190,247,222,130,202,202,202,182,182,54,144,134,181,181,181,117,117,117,208,84,219,110,223,252,201,113,108,66,72,16,4,95,250,210,89,144,167,187,122,245,170,238,221,187,251,126,208,212,212,248,
229,115,206,33,132,32,132,23,46,124,63,153,76,230,243,249,163,167,28,13,19,137,198,198,70,206,173,116,186,228,227,143,215,140,24,49,242,154,107,190,254,208,67,255,189,105,211,38,66,72,73,58,125,221,183,
190,217,218,218,90,93,93,53,104,208,32,173,245,246,237,219,235,234,234,18,174,171,148,204,231,178,99,198,140,70,8,181,182,182,110,222,188,201,113,93,219,182,61,207,203,101,179,99,199,142,69,8,69,81,244,
220,115,207,166,83,169,76,38,51,122,244,40,41,132,231,121,111,191,253,118,83,83,211,144,33,67,8,33,148,208,151,94,122,57,149,74,85,85,85,13,25,50,56,138,162,69,139,22,149,151,87,52,55,55,159,123,238,121,
182,101,97,140,215,175,95,111,219,118,207,158,61,17,66,66,200,116,170,36,149,42,153,124,248,17,199,28,123,252,177,199,30,63,101,202,177,71,30,121,116,50,153,156,54,109,26,20,3,94,179,102,173,227,56,158,
231,31,54,249,48,184,244,45,45,45,176,127,193,33,135,28,2,186,243,163,143,62,74,165,82,176,10,48,138,34,198,24,76,108,164,146,168,200,165,26,111,24,97,48,24,12,6,131,97,127,176,55,169,138,138,214,56,23,
255,129,246,69,167,82,74,131,32,136,221,78,97,0,186,16,247,238,221,247,190,251,238,255,199,63,30,131,232,42,66,40,149,74,222,125,247,239,183,110,217,92,187,109,219,140,25,15,68,81,148,207,101,199,140,
57,72,8,65,41,9,195,112,226,196,137,81,20,137,40,122,228,145,135,115,185,172,239,251,148,178,158,61,123,94,113,197,215,32,103,81,107,237,56,206,49,199,76,121,245,213,87,64,131,126,237,107,95,115,93,71,
235,246,210,173,119,223,125,247,59,239,204,237,211,167,47,198,56,12,67,168,178,201,57,23,114,79,9,0,168,160,70,148,130,149,73,182,109,215,214,214,182,181,181,65,107,225,108,252,225,247,119,247,232,81,
165,148,166,148,182,182,182,76,156,56,81,107,189,117,235,214,186,186,186,29,59,118,156,114,202,41,160,161,63,254,248,227,238,221,187,51,198,28,199,105,104,104,248,210,151,206,2,21,248,193,251,239,87,87,
85,65,201,213,73,147,38,85,86,86,106,173,215,175,175,73,167,211,109,109,109,103,159,125,54,231,76,35,180,110,221,90,215,117,207,62,251,75,90,235,32,8,234,234,234,74,210,37,24,227,243,47,184,0,58,94,83,
83,227,58,238,89,103,125,41,149,74,35,132,230,206,157,219,189,71,119,203,178,44,139,195,154,42,203,226,24,99,223,247,26,26,118,29,117,212,145,112,1,27,27,27,33,9,33,151,203,141,28,53,18,33,68,8,89,188,
120,113,105,105,169,231,121,39,28,127,60,198,88,41,181,100,201,210,100,50,185,109,219,86,223,247,71,140,24,190,96,193,130,59,239,188,115,220,184,113,245,245,245,26,105,168,51,122,252,241,39,192,73,158,
55,111,126,69,69,133,235,218,82,70,103,156,113,70,42,149,82,82,174,95,191,62,149,78,195,62,82,82,202,41,83,166,184,174,139,16,130,189,115,243,249,252,57,231,156,147,76,38,41,99,139,22,45,74,165,82,173,
173,173,35,71,142,144,66,228,61,239,249,231,159,215,90,79,155,54,77,107,205,57,95,187,118,93,58,93,130,180,30,208,191,63,220,135,11,23,46,44,45,45,219,188,121,139,31,248,156,179,97,195,134,117,235,86,
214,214,218,42,133,92,177,98,197,130,5,239,109,217,178,165,181,181,109,204,152,49,112,31,190,255,254,251,221,187,247,104,107,107,61,225,132,19,48,198,90,171,15,63,252,176,186,186,218,247,253,62,125,250,
64,47,158,122,106,102,85,85,21,220,248,174,235,50,6,133,44,4,232,212,98,55,170,113,169,26,12,6,131,193,176,255,216,155,84,141,199,224,79,254,241,233,129,26,168,197,175,64,62,34,165,108,240,224,33,119,
220,113,199,142,29,59,80,193,183,58,126,252,132,95,255,250,215,182,109,65,125,126,203,178,165,20,132,16,37,149,101,89,224,151,213,90,83,70,114,185,156,109,219,158,231,15,26,60,120,243,230,205,39,156,112,
2,44,220,6,253,103,219,22,252,97,89,92,107,141,49,217,181,171,254,134,27,110,248,237,111,127,59,124,248,8,144,110,74,201,124,62,79,8,166,148,250,190,191,199,190,195,65,194,48,228,156,251,126,0,165,142,
160,8,0,248,101,103,205,154,245,250,235,175,247,236,217,11,14,114,193,5,231,39,18,9,132,208,135,31,126,152,74,165,162,40,130,133,65,8,161,55,222,120,163,164,164,20,234,9,36,18,110,75,75,11,108,226,53,
106,244,168,45,91,54,47,94,188,104,237,218,181,141,141,13,240,163,61,123,246,204,100,218,26,27,27,111,184,225,122,74,25,193,100,213,170,85,201,100,114,235,214,173,90,41,219,182,123,247,238,189,179,126,
231,196,137,19,111,184,225,6,104,228,194,133,239,91,150,61,120,240,96,208,160,217,108,150,115,174,17,106,223,93,140,243,32,8,62,254,248,227,15,151,46,173,171,171,29,59,118,172,82,26,99,60,103,206,156,
124,62,31,134,97,38,147,25,60,120,48,252,250,223,255,254,247,94,189,122,213,215,215,143,29,55,22,206,249,156,57,115,146,201,196,247,190,247,189,151,95,126,105,226,196,137,43,87,174,88,191,126,221,21,87,
92,209,163,71,15,130,201,125,247,221,15,107,158,32,243,97,232,208,161,117,117,181,239,188,243,214,142,237,219,207,58,235,44,37,37,38,100,209,162,197,61,122,84,129,147,210,113,236,181,107,215,194,105,169,
170,170,242,125,47,147,105,187,225,134,235,225,156,215,212,212,164,82,169,65,131,6,149,149,149,17,66,22,47,90,92,82,82,210,216,216,120,240,164,131,161,47,27,54,108,176,109,59,151,203,141,27,63,14,190,
178,110,221,186,68,34,17,69,209,99,143,61,38,68,84,94,222,109,230,147,79,172,92,185,124,238,220,119,190,122,249,101,27,55,108,184,245,214,31,100,179,217,94,189,122,131,48,125,230,153,103,202,202,202,26,
27,27,199,140,25,131,16,194,152,204,158,61,187,164,164,36,138,162,120,239,217,19,79,60,241,221,185,239,172,90,181,138,115,22,69,33,56,86,193,231,110,18,0,12,6,131,193,96,248,194,232,80,170,194,226,30,
82,0,254,134,133,248,150,197,19,9,71,105,29,134,81,252,121,207,11,74,203,74,53,210,24,147,92,46,95,200,143,84,80,66,21,188,95,82,201,100,42,41,132,192,24,17,138,19,201,164,231,7,55,222,120,19,136,54,248,
202,127,253,215,85,23,95,124,161,214,237,110,78,248,105,202,168,110,247,102,41,140,113,224,135,169,84,42,159,207,151,148,164,162,72,246,233,219,143,91,206,217,231,156,123,197,21,95,123,244,239,127,111,
105,105,41,174,93,240,210,75,47,255,229,175,247,245,235,63,240,217,231,94,24,49,114,52,70,24,35,164,164,64,72,51,70,165,144,129,239,179,66,129,88,37,149,20,82,43,13,191,139,16,10,195,136,16,146,205,102,
28,199,110,105,109,45,47,175,220,184,113,19,72,147,124,62,255,205,235,190,213,175,127,127,66,176,101,49,223,247,6,13,26,12,205,110,108,104,76,38,147,153,76,219,176,97,67,17,66,185,124,238,169,167,159,
238,222,163,187,235,58,150,197,9,161,243,231,47,120,240,161,135,48,33,35,70,140,84,74,213,239,220,145,76,36,178,217,28,172,151,170,170,234,17,134,225,131,15,206,200,100,50,8,33,173,245,155,179,102,149,
148,150,60,57,243,233,71,30,125,20,33,52,114,228,136,93,245,245,167,77,157,186,230,227,143,193,107,251,210,75,47,35,164,71,142,28,14,255,124,235,157,119,82,169,52,99,204,243,124,199,113,132,136,48,70,
101,165,233,29,59,183,43,165,250,246,237,11,53,25,30,124,240,161,39,158,120,124,243,166,13,34,10,70,142,24,142,16,202,123,121,168,114,0,185,167,82,201,76,54,243,212,83,79,35,141,90,154,155,63,94,243,241,
111,127,247,27,33,68,20,133,191,255,253,239,103,206,124,234,220,243,46,120,96,198,223,170,170,171,23,47,94,114,239,189,127,68,8,77,152,48,94,74,217,212,216,148,78,167,170,170,123,16,74,17,66,115,231,205,
181,109,155,81,138,49,114,221,68,24,69,183,223,113,71,36,162,138,138,74,41,229,159,254,244,199,214,214,22,66,136,82,250,165,151,94,118,29,247,194,11,46,68,8,17,74,87,174,92,89,93,93,13,11,206,180,214,
97,20,62,245,212,83,21,21,21,109,109,45,135,76,154,4,194,241,245,55,94,239,213,187,87,247,30,85,55,222,120,243,29,183,255,116,249,242,229,147,14,57,36,12,131,32,240,126,241,139,159,47,94,188,232,177,191,
255,35,159,207,141,159,48,54,18,81,24,69,235,215,175,119,93,199,247,189,209,163,71,105,173,219,218,218,158,121,230,217,210,178,178,65,131,7,255,250,215,191,217,178,101,11,198,248,222,123,239,149,66,252,
242,206,95,108,217,178,25,33,109,219,86,62,159,83,133,155,10,33,164,149,134,232,63,101,148,50,218,121,143,164,193,96,48,24,12,134,127,129,199,140,30,189,199,55,96,97,117,188,0,159,80,74,41,163,148,114,
203,182,44,75,41,245,209,71,31,121,249,28,148,254,209,90,15,26,60,180,91,183,110,221,187,247,104,107,107,211,26,129,59,147,16,178,122,213,202,134,134,93,74,73,144,44,233,116,201,196,137,147,164,148,81,
36,28,199,206,229,178,27,54,212,180,181,181,133,129,15,199,33,132,166,82,233,178,178,178,173,91,55,35,132,8,161,90,107,80,168,32,17,8,165,149,149,221,83,201,244,176,225,195,219,90,219,16,198,156,51,132,
16,148,11,168,89,191,190,165,165,89,136,40,174,60,213,189,123,85,89,183,110,37,233,146,84,58,77,8,9,124,95,41,5,187,107,42,165,148,146,74,74,93,84,145,10,21,37,233,130,103,87,72,73,41,115,19,137,68,34,
185,126,253,186,40,12,183,110,221,172,181,182,44,39,149,78,79,154,116,8,84,236,103,140,174,94,189,122,87,253,14,132,113,101,69,247,33,67,134,110,217,178,165,185,185,201,243,114,140,241,110,229,21,195,
134,13,199,24,135,97,148,74,165,26,26,234,27,118,237,170,173,221,10,251,90,57,78,162,172,172,108,196,136,17,203,151,47,111,108,220,133,49,70,8,119,239,222,131,16,178,115,231,118,66,105,121,121,229,132,
9,19,119,237,218,181,117,203,230,230,230,38,41,69,50,153,182,44,139,82,10,253,237,209,163,103,85,85,143,124,62,183,126,253,58,140,113,101,247,30,7,29,52,78,74,201,24,247,125,143,115,206,57,91,190,124,
89,166,45,147,207,103,9,161,176,215,20,198,164,188,188,98,240,224,193,91,182,108,105,107,107,205,231,115,132,210,238,149,85,163,71,143,94,181,106,213,174,134,157,144,252,80,93,213,115,208,160,193,59,118,
238,200,102,50,245,245,59,149,146,132,80,165,84,183,110,229,131,6,15,177,109,187,180,180,164,174,182,110,215,174,250,186,186,90,173,149,214,154,115,171,162,162,210,182,173,173,91,183,32,140,123,246,236,
53,120,240,80,41,37,198,4,246,140,93,187,118,77,253,206,157,176,225,109,207,158,189,45,139,111,222,188,9,99,82,89,217,125,240,224,193,235,11,215,177,119,159,126,213,213,213,45,45,45,77,77,141,45,45,205,
148,210,116,186,116,212,168,209,219,235,106,119,237,218,149,201,180,82,202,74,74,75,199,143,159,0,115,164,108,166,117,211,166,77,249,124,22,147,246,237,79,187,87,246,232,223,191,127,93,93,221,142,29,219,
149,146,152,144,202,138,30,163,70,141,254,248,227,213,187,118,237,20,34,178,44,187,172,91,249,240,225,35,16,66,59,119,238,216,184,161,6,118,74,211,90,247,234,221,183,87,175,222,221,186,117,107,106,106,
196,8,9,17,41,41,160,100,219,191,110,21,130,181,214,200,248,85,13,6,131,193,96,216,15,116,40,85,227,133,74,240,79,168,207,73,8,197,132,50,202,40,99,9,55,209,218,218,154,74,167,8,198,82,202,32,8,210,233,
180,239,251,65,16,184,174,11,101,246,147,201,36,108,8,4,57,0,132,18,136,148,250,190,111,113,203,15,252,138,138,10,207,243,60,47,239,186,46,231,86,62,159,71,8,113,206,9,33,158,231,65,158,171,235,186,24,
99,88,228,158,72,184,97,24,50,198,41,165,66,136,192,15,40,163,80,116,9,22,63,65,217,255,132,235,134,81,136,49,14,130,208,113,156,76,38,147,74,165,16,66,249,124,30,195,14,247,237,130,3,54,214,2,209,182,
123,125,3,232,190,82,154,50,230,186,9,169,100,34,145,132,174,193,154,154,72,8,215,117,243,121,15,60,208,221,186,149,101,50,25,66,192,21,77,61,207,99,140,69,81,84,90,90,226,251,62,198,4,150,147,251,126,
96,89,92,41,21,133,17,165,68,35,237,186,174,231,249,144,11,43,165,196,24,89,150,21,6,145,16,194,77,184,176,251,171,231,249,182,237,72,41,109,219,138,162,136,115,14,101,161,194,48,12,130,160,188,188,28,
34,254,65,16,56,182,173,148,194,132,96,140,165,148,97,24,66,174,130,101,89,150,101,53,55,55,59,182,77,41,37,148,4,65,64,8,133,12,141,40,138,16,210,169,84,202,247,125,33,164,136,36,161,56,153,76,64,109,
218,32,8,41,97,65,232,39,147,73,198,40,236,154,155,205,230,202,74,203,50,217,172,109,219,217,108,54,225,186,82,201,192,15,74,75,75,148,82,109,153,76,143,30,61,154,155,155,210,233,116,20,9,8,160,107,141,
164,144,82,138,68,50,1,211,9,219,182,195,48,4,253,42,165,130,60,10,199,113,162,40,178,44,75,41,25,69,194,178,44,132,144,231,121,101,101,165,185,92,142,115,75,10,112,105,106,206,152,144,34,145,72,4,65,
152,205,230,146,201,164,82,18,82,90,57,103,82,74,33,36,92,83,56,117,182,109,7,65,144,203,230,17,194,220,98,140,81,173,116,216,126,6,4,231,60,8,124,206,57,37,132,49,150,203,229,184,101,33,132,130,32,200,
101,179,156,51,173,164,148,34,118,216,183,223,39,70,170,26,12,6,131,193,176,223,160,80,190,231,147,232,246,61,162,48,38,184,125,24,198,24,105,36,165,228,156,133,65,168,148,118,93,87,68,34,147,205,48,206,
17,194,97,24,100,50,25,132,180,82,18,170,59,73,41,125,63,128,172,205,32,12,65,95,74,41,93,215,69,72,75,41,65,50,114,206,41,101,45,45,173,156,91,174,235,102,50,89,132,16,33,148,16,202,57,39,132,134,97,
200,185,5,250,0,10,172,134,65,224,229,243,156,179,192,247,16,66,90,41,140,113,20,70,182,99,67,253,41,132,176,148,138,49,6,203,182,164,16,190,239,19,66,132,8,85,59,82,43,165,145,6,221,89,188,80,172,184,
232,1,165,164,93,10,83,138,48,210,90,123,158,207,56,87,82,73,37,65,204,59,142,99,219,118,38,147,97,140,89,150,29,134,81,20,69,72,35,219,182,17,70,82,42,173,145,86,58,18,145,82,138,49,162,148,142,194,136,
16,98,89,54,156,90,165,52,165,76,8,201,24,135,220,6,140,136,148,82,23,214,179,185,174,43,165,4,85,77,41,147,82,249,126,96,89,54,198,132,82,168,156,234,72,41,165,84,148,81,140,177,231,121,34,138,164,146,
10,190,38,132,148,82,8,145,72,36,48,33,66,74,40,170,128,16,38,132,134,97,4,103,62,159,207,91,150,21,6,33,231,22,148,107,104,109,109,77,165,210,190,231,43,173,109,219,6,143,41,66,24,230,6,121,47,111,89,
86,123,78,48,210,82,202,84,42,21,4,129,82,186,172,172,172,165,165,197,113,220,32,8,17,210,176,19,129,231,121,74,41,203,178,96,153,23,66,56,138,162,68,34,9,89,22,90,183,111,105,6,121,180,8,33,74,169,214,
112,2,85,34,145,136,34,97,219,78,38,147,81,90,43,41,75,74,75,130,32,176,44,59,159,7,183,49,135,107,141,49,145,82,8,33,16,194,140,49,66,168,16,82,73,153,76,38,91,90,154,29,199,213,26,49,198,132,16,150,
101,105,165,73,123,98,52,71,72,195,65,124,63,64,24,131,130,15,130,0,33,237,56,182,82,82,20,98,8,197,247,137,193,96,48,24,12,134,253,199,255,224,85,37,148,104,173,181,42,200,86,76,24,231,8,33,219,118,194,
48,132,45,160,108,219,142,68,20,248,129,109,91,148,82,208,169,176,194,134,82,6,62,70,17,9,110,89,74,74,76,176,101,89,185,92,214,226,28,70,124,141,144,214,218,182,29,40,143,10,197,255,161,164,17,108,172,
10,78,89,136,68,195,178,125,66,136,197,121,24,134,66,68,148,182,59,249,160,52,61,41,100,157,194,86,2,144,60,96,89,28,35,156,201,180,65,215,180,86,82,22,116,42,198,187,213,27,138,189,101,112,28,13,197,
170,180,102,140,49,198,9,165,24,147,192,15,185,197,181,86,224,249,131,207,68,145,128,47,130,220,129,150,83,74,195,48,116,93,215,247,60,144,155,97,24,194,103,148,214,81,24,57,174,11,158,96,144,224,80,62,
22,99,44,34,193,56,99,148,82,70,125,223,135,34,9,156,115,207,251,215,223,176,39,2,236,128,37,165,192,152,192,42,117,66,176,136,34,206,121,20,69,132,96,240,194,66,61,3,76,8,92,23,104,115,16,4,208,211,66,
249,91,172,148,180,109,59,147,201,58,142,13,41,28,112,93,16,194,65,16,88,22,135,85,113,156,115,223,247,161,205,32,91,65,192,41,169,16,66,148,49,136,161,91,150,29,4,1,198,88,74,129,49,178,109,59,12,66,
4,139,189,48,162,148,113,206,195,48,2,95,50,20,231,135,243,6,171,232,40,37,66,72,112,84,195,61,9,62,96,74,169,86,58,8,3,112,165,23,92,179,88,41,37,165,130,207,183,167,71,75,240,170,194,114,40,5,123,228,
34,132,61,207,75,167,83,65,16,40,169,165,20,37,165,37,66,8,88,63,23,133,145,214,136,91,80,200,44,98,148,10,1,217,185,129,237,216,97,16,22,47,185,67,168,189,78,132,241,170,26,12,6,131,193,176,63,248,31,
188,170,237,190,85,132,11,201,121,154,80,2,42,36,46,60,138,49,10,131,128,49,234,251,94,20,133,90,43,80,75,81,36,16,66,82,72,144,29,82,8,80,137,190,231,113,139,135,97,160,148,196,24,83,66,162,48,210,74,
81,74,130,192,39,24,67,132,30,106,248,107,173,40,33,74,73,8,214,115,198,48,66,81,24,248,190,39,68,4,18,86,74,9,18,132,22,218,70,8,241,3,15,105,205,40,149,34,10,130,32,8,124,66,8,231,60,10,67,173,20,66,
237,226,27,233,221,203,111,237,230,42,147,82,130,20,99,156,131,99,146,16,18,69,33,194,154,115,22,133,129,20,2,105,45,162,40,10,67,198,104,36,34,173,181,239,123,8,33,165,36,66,26,99,36,165,128,76,3,72,
237,197,24,105,173,130,192,231,156,69,97,136,49,194,24,41,41,131,192,119,108,91,10,1,117,93,41,33,190,239,43,165,64,221,106,37,195,32,64,8,41,41,69,20,9,17,229,243,57,139,115,12,63,164,149,84,82,41,201,
24,5,31,106,24,6,132,224,40,10,109,219,150,82,64,136,159,96,66,48,142,162,144,51,22,69,33,210,218,178,184,148,66,41,73,8,14,124,31,99,20,134,33,163,84,73,169,181,66,90,33,132,148,84,160,53,219,59,165,
81,16,4,24,33,33,132,214,90,73,161,164,196,8,17,130,125,223,103,140,42,41,53,210,156,113,223,247,64,52,194,97,181,214,66,68,140,81,33,34,173,20,210,58,12,67,132,180,214,10,105,164,181,130,251,71,73,201,
40,149,66,68,81,4,23,84,138,8,186,16,69,17,210,58,138,66,112,207,99,140,163,48,192,8,121,94,94,74,161,181,138,194,16,33,4,169,32,90,41,184,136,132,180,95,212,118,39,179,16,140,210,40,138,148,86,18,238,
213,48,160,148,136,40,146,66,32,132,164,20,82,10,164,53,120,253,225,150,84,74,18,140,97,63,222,127,187,85,140,107,213,96,48,24,12,134,253,198,222,164,42,130,193,88,255,155,122,99,140,33,173,163,40,130,
165,51,82,70,66,68,174,235,72,33,20,148,47,69,40,8,2,208,148,32,38,132,136,180,86,148,146,48,12,192,245,165,164,164,148,192,240,31,134,17,66,58,138,34,41,37,33,24,252,106,32,59,164,20,160,20,165,148,148,
146,32,8,192,147,90,72,161,213,190,239,139,40,210,90,99,132,60,223,3,105,40,165,68,72,115,198,164,148,185,92,150,115,38,165,160,132,20,106,84,41,132,138,228,133,70,176,74,134,144,221,139,33,192,25,96,
156,181,47,163,81,42,10,67,140,177,84,130,49,234,56,182,239,123,34,138,92,199,201,229,114,8,33,66,72,16,6,82,72,140,177,146,18,33,173,164,4,47,99,46,151,163,148,72,41,125,207,211,90,135,65,0,234,141,50,
162,149,142,23,129,193,26,35,232,35,232,54,88,220,6,115,6,216,40,1,188,152,177,99,15,33,29,4,126,24,134,208,33,17,133,74,202,48,12,192,239,168,149,210,74,105,173,131,32,112,108,71,41,233,251,62,200,217,
124,62,207,57,243,188,124,16,248,150,197,163,40,148,82,8,17,65,207,163,40,36,4,7,65,80,216,204,86,105,37,49,70,24,97,80,156,133,43,11,151,73,66,133,90,132,16,198,168,61,65,150,82,207,243,8,193,74,73,223,
247,48,198,4,99,33,4,33,8,14,11,137,9,224,6,6,255,37,184,192,85,123,62,168,18,66,192,31,24,183,239,85,38,132,112,93,7,36,184,82,210,178,44,200,88,128,237,118,49,70,156,51,168,161,11,215,26,46,99,20,133,
81,20,8,33,192,133,12,174,238,120,57,32,33,208,35,165,148,10,195,192,113,108,184,88,48,245,210,74,43,165,162,48,132,252,87,33,69,177,15,62,150,170,90,107,179,203,170,193,96,48,24,12,251,131,79,33,85,11,
11,140,224,117,41,165,70,8,146,252,194,48,144,66,80,66,124,207,211,72,65,254,31,193,4,62,22,69,145,101,91,82,72,112,7,82,66,162,48,4,233,41,162,118,117,66,9,13,124,31,170,165,42,213,158,82,41,133,208,
74,137,40,130,77,65,163,48,148,66,72,33,48,70,74,42,104,137,239,251,237,97,95,66,52,8,56,41,33,232,27,248,62,248,44,9,193,90,43,8,64,131,99,18,100,74,220,71,136,254,131,242,43,238,35,42,202,71,212,90,
51,202,218,221,135,74,89,150,5,91,192,135,97,0,98,212,47,106,191,86,138,96,34,133,0,135,49,184,12,145,70,148,144,32,240,41,33,176,72,8,28,156,150,109,229,114,57,25,9,130,177,148,194,243,242,240,49,80,
222,132,96,41,4,198,56,12,194,40,138,52,172,24,67,72,68,33,196,247,161,191,224,7,5,31,54,56,2,17,70,8,105,41,21,168,127,132,112,20,70,80,102,31,35,76,41,225,156,101,51,25,219,182,243,185,156,197,89,187,
152,11,195,66,144,93,10,17,97,132,132,20,140,210,32,8,8,44,122,66,40,12,67,41,37,210,26,50,49,164,16,176,228,75,41,240,77,146,246,140,88,41,40,161,176,249,22,184,78,193,255,154,207,231,25,227,24,163,48,
8,45,206,49,194,224,63,134,126,65,51,100,251,223,40,138,34,112,244,106,165,17,210,24,161,124,46,199,40,203,229,114,148,96,168,219,16,132,1,72,103,37,37,168,249,108,38,131,9,129,93,27,64,188,74,41,181,
86,148,210,118,191,168,148,22,40,78,240,224,42,29,70,33,231,12,92,227,8,161,108,54,11,147,19,112,27,199,249,15,97,24,73,165,48,198,72,239,65,170,34,132,140,84,53,24,12,6,131,97,127,208,97,174,106,167,
253,192,62,46,61,233,232,243,90,239,57,25,176,163,215,247,245,56,251,202,190,246,107,95,219,185,175,191,219,89,253,50,0,230,124,26,12,6,131,193,208,21,96,251,251,7,14,148,148,252,79,101,95,37,123,71,152,
213,235,6,131,193,96,48,24,186,62,251,93,170,118,68,103,121,73,247,245,248,157,69,103,29,127,95,143,243,191,229,252,24,12,6,131,193,96,48,124,126,58,220,88,213,96,48,24,12,6,131,193,96,56,176,116,57,175,
234,190,38,6,116,214,231,247,149,206,10,184,31,168,192,189,241,170,238,29,147,32,97,48,24,12,6,67,87,224,128,73,213,206,90,78,212,89,159,223,87,58,235,248,7,74,18,25,41,102,48,24,12,6,131,161,235,99,18,
0,12,6,131,193,96,48,24,12,93,148,255,53,21,0,140,23,16,56,80,197,182,12,6,131,193,96,48,24,190,120,246,89,170,114,139,103,51,89,219,182,8,161,126,16,88,156,51,70,67,223,87,132,113,78,181,210,176,83,165,
227,56,158,231,51,206,68,36,246,120,156,206,90,249,110,248,108,152,243,105,248,191,140,210,72,75,65,41,35,20,135,65,104,217,54,66,88,136,72,43,109,219,22,38,216,247,3,198,56,66,26,97,228,56,118,224,135,
157,244,187,154,115,166,21,242,61,207,118,172,48,12,9,97,8,105,219,182,252,32,20,145,178,44,162,53,162,148,5,129,207,216,30,236,179,153,100,26,12,134,3,139,82,138,115,75,107,173,145,114,93,71,107,157,
207,123,24,17,132,20,198,24,83,26,69,34,225,218,185,108,222,117,157,48,140,138,183,94,250,108,236,179,84,13,61,95,107,162,180,166,4,113,198,165,148,74,163,64,40,215,65,156,210,80,6,148,18,140,137,144,
82,107,45,133,36,212,228,24,24,12,134,174,133,244,188,116,89,183,32,240,164,80,182,155,240,124,47,225,216,201,164,235,251,97,40,34,199,177,147,169,68,24,132,81,36,28,199,246,253,160,179,118,35,131,125,
158,49,194,132,18,140,137,101,219,90,107,198,24,198,136,96,82,214,45,225,7,161,22,146,80,228,184,174,101,177,32,232,28,137,108,48,24,12,157,5,33,4,33,141,144,214,90,231,115,30,227,204,177,109,173,149,
84,20,99,28,5,62,197,68,73,101,89,182,16,178,83,188,98,251,172,35,195,40,178,109,206,25,245,252,128,115,206,56,37,88,39,19,174,16,176,141,59,161,148,43,173,24,99,110,194,137,132,236,140,70,26,12,6,67,
103,194,92,55,155,203,186,174,203,44,158,203,103,75,211,37,220,98,121,63,68,24,89,150,69,40,203,229,242,132,16,74,137,239,7,168,243,34,16,90,33,140,176,101,219,132,82,33,5,198,96,244,81,16,68,8,235,108,
107,27,37,148,219,76,73,237,229,115,66,181,235,227,221,182,125,54,24,12,134,3,72,50,149,16,82,68,81,196,25,167,148,70,97,20,134,81,24,74,164,132,18,17,194,8,19,42,165,160,148,34,164,56,227,159,255,23,
247,217,171,106,187,46,210,138,89,78,55,215,201,102,115,68,99,76,73,20,133,60,145,60,241,228,47,219,137,210,64,68,240,73,140,16,210,72,153,64,179,193,96,232,98,56,142,229,121,1,33,36,10,252,249,115,254,
233,101,219,48,161,68,233,68,50,213,150,105,81,74,35,68,9,161,140,33,66,148,214,157,38,19,125,207,35,148,72,165,17,66,150,101,33,173,131,32,84,74,59,54,83,152,75,33,189,92,214,178,221,147,190,116,25,183,
29,17,9,99,63,13,6,67,87,67,73,73,8,161,148,42,165,164,146,148,50,132,144,214,250,197,153,247,39,108,142,8,165,4,33,108,105,45,25,231,129,23,48,254,121,213,42,30,51,122,244,62,125,129,50,170,181,22,145,
180,108,174,148,246,61,47,81,82,114,236,73,23,104,76,8,161,16,37,35,4,75,169,148,148,132,80,76,140,51,192,96,48,116,45,164,16,148,49,140,181,146,154,48,42,131,224,149,231,30,102,24,105,21,57,78,82,35,
233,121,1,194,20,33,153,76,38,114,217,60,255,220,166,22,192,24,97,76,132,20,150,101,69,97,20,248,190,109,219,152,80,141,148,142,34,129,232,105,231,95,201,24,147,82,105,165,49,197,90,233,79,250,83,181,
222,195,139,6,131,193,240,197,32,68,196,40,83,90,99,140,109,219,82,90,9,33,17,66,81,16,166,83,238,147,143,222,147,112,18,66,72,70,137,20,74,107,77,63,119,34,232,62,75,85,66,41,193,168,173,181,45,153,74,
106,132,143,57,229,98,43,225,34,132,148,144,205,13,219,215,174,90,20,228,91,181,66,90,35,33,37,99,4,117,82,142,151,193,96,48,116,22,90,74,110,89,165,21,221,123,246,29,213,103,192,192,48,20,26,105,139,
243,23,159,188,47,10,131,210,146,164,16,82,72,109,217,150,146,66,43,45,165,234,148,223,141,162,208,178,109,200,76,133,245,169,142,235,68,66,40,133,143,57,245,34,203,113,161,117,245,59,182,213,172,252,
32,159,107,5,167,106,113,2,0,44,136,52,82,213,96,48,28,40,44,139,75,169,131,32,32,4,19,74,194,80,150,148,84,12,31,62,186,162,239,16,66,180,82,88,134,225,91,175,61,150,205,100,74,211,169,32,20,228,115,
187,44,247,221,171,74,73,62,239,165,82,105,169,162,41,167,124,133,59,54,210,40,223,214,176,106,217,130,166,166,122,172,81,58,93,226,121,30,165,148,81,66,48,193,196,44,171,50,24,12,93,11,169,148,150,10,
97,28,138,168,91,69,85,223,129,163,43,122,244,146,66,32,25,46,122,255,141,93,117,117,169,68,50,239,101,109,199,13,195,208,98,188,179,2,241,82,42,202,8,33,36,10,35,130,177,227,218,141,45,45,201,100,217,
201,95,186,212,182,121,62,239,5,94,219,138,197,115,219,90,155,184,197,100,40,109,199,198,69,32,35,85,13,6,195,129,38,140,34,94,168,79,194,57,15,163,80,8,233,184,174,144,100,244,132,195,75,202,186,43,41,
9,70,239,190,241,100,54,147,33,8,145,207,93,1,96,159,165,42,70,26,33,162,40,158,122,246,21,82,235,108,91,227,210,5,111,135,126,171,140,84,34,153,96,156,131,53,77,36,18,74,105,68,16,234,188,52,47,131,193,
96,232,20,48,70,152,16,130,49,37,88,74,21,68,33,34,238,65,19,14,229,110,153,12,242,111,190,252,184,22,65,42,85,154,247,243,72,35,17,9,110,117,78,2,128,148,210,118,108,132,144,151,247,57,231,132,34,169,
217,201,167,126,89,91,201,76,115,253,252,183,95,195,42,160,140,35,132,68,40,123,247,173,10,67,9,34,149,152,57,191,193,96,232,26,48,206,148,84,90,171,162,164,85,157,247,124,199,230,140,83,137,120,159,129,
7,85,246,168,246,61,255,221,217,79,145,200,143,87,136,126,102,58,148,170,90,169,80,42,198,152,99,81,41,4,166,44,240,124,199,181,149,20,154,216,71,157,120,158,147,72,212,215,110,90,189,252,125,37,60,173,
177,109,91,140,49,203,178,56,231,140,49,66,8,204,251,205,236,223,96,48,116,53,64,249,105,173,149,82,74,105,200,254,36,132,244,30,50,62,145,234,70,41,121,245,159,247,35,169,40,99,82,105,213,121,69,247,
48,33,74,8,41,165,237,58,90,107,169,209,212,47,127,77,74,21,229,26,230,189,59,39,159,105,46,43,43,145,82,17,202,28,219,102,148,216,142,3,13,51,9,0,6,131,161,139,208,81,93,118,66,176,239,7,8,97,219,77,
86,245,27,158,46,233,142,145,124,235,245,39,131,182,86,238,186,185,76,214,77,39,149,144,132,16,25,73,141,20,33,159,214,219,218,161,84,37,4,135,65,192,184,37,148,210,82,35,37,172,68,34,10,67,55,93,114,
248,209,103,88,78,114,251,182,77,181,91,86,230,51,205,74,34,219,178,28,215,97,140,113,206,57,231,148,210,226,136,149,193,96,48,116,41,64,170,170,118,180,82,10,33,164,181,38,140,119,239,61,162,172,188,
82,105,244,218,51,15,32,165,181,70,132,144,206,178,100,140,179,76,107,91,50,93,18,250,121,55,153,152,114,234,116,132,244,206,237,181,31,47,95,152,105,109,78,167,220,84,50,137,9,97,140,91,150,101,91,156,
20,217,82,140,49,140,16,102,89,149,193,96,232,130,104,173,9,33,74,202,48,138,220,84,89,73,69,239,62,253,6,181,52,55,191,253,250,147,217,76,198,177,29,164,68,164,180,197,184,136,66,55,233,134,65,244,41,
143,220,161,84,229,22,211,10,41,37,195,48,74,166,19,94,206,199,148,42,165,79,57,235,18,204,173,182,166,250,101,139,222,145,34,208,74,91,54,47,73,165,24,183,40,165,160,83,193,7,96,164,170,193,96,232,154,
128,236,139,81,74,75,41,149,82,182,205,67,137,171,250,12,79,164,187,105,45,103,191,248,40,70,154,81,28,4,123,222,117,111,95,33,132,104,173,66,33,187,149,149,28,121,226,133,10,227,108,115,253,71,139,231,
102,90,154,108,219,114,109,219,178,109,199,117,45,219,70,90,51,74,45,219,70,159,168,171,106,164,170,193,96,232,130,8,33,44,219,82,82,230,115,121,37,21,225,78,121,207,129,101,229,61,53,214,239,188,248,
136,23,248,24,17,140,53,66,4,97,229,216,206,167,223,226,164,67,169,106,219,84,8,236,121,121,66,168,155,116,68,36,66,63,56,249,236,43,152,109,55,212,111,95,182,232,45,170,133,66,58,153,76,51,198,92,199,
178,109,135,22,48,161,127,131,193,208,149,193,24,131,39,53,54,83,82,42,165,20,33,216,11,194,242,242,114,73,187,85,86,245,146,34,154,245,220,131,66,106,206,247,185,4,245,30,17,82,186,142,237,229,243,39,
157,115,37,179,120,125,221,182,141,107,151,180,236,170,175,232,94,142,17,198,24,59,142,147,76,165,8,165,32,85,97,89,106,108,81,205,126,200,6,131,161,203,162,164,162,140,70,34,66,136,104,33,49,70,136,59,
229,213,3,18,169,242,200,203,207,121,229,239,152,96,172,116,24,9,202,173,192,247,29,199,254,148,71,238,48,1,43,8,100,36,133,155,112,147,73,39,244,3,70,49,119,92,203,117,48,86,203,22,189,75,84,36,165,76,
38,146,156,51,199,177,25,179,24,99,177,63,181,147,122,109,48,24,12,251,133,98,205,7,62,75,74,9,99,84,43,157,112,221,108,38,147,105,220,20,133,97,42,157,114,74,74,83,41,183,179,126,215,77,56,74,74,137,
57,179,184,150,114,221,170,247,189,92,91,50,105,107,141,8,165,142,235,38,83,41,66,9,66,154,49,198,10,187,188,196,113,255,206,106,134,193,96,48,124,102,116,71,32,164,149,162,148,114,139,7,34,146,74,134,
94,166,101,231,38,141,52,115,93,77,168,197,88,36,148,194,24,97,85,82,146,248,244,191,216,161,84,85,82,42,41,164,16,90,107,130,105,24,169,163,78,60,95,107,212,214,80,239,101,27,41,227,137,148,155,78,165,
57,227,165,37,41,219,226,32,85,119,203,82,53,178,213,96,48,116,65,138,107,63,193,186,42,120,209,113,108,219,38,142,205,57,33,185,214,38,223,11,142,56,246,203,45,77,45,157,245,187,90,74,41,196,57,23,255,
23,35,56,10,114,153,150,70,173,132,237,166,48,161,150,101,59,174,75,25,195,24,83,74,25,99,97,24,154,76,42,131,193,208,213,192,29,128,176,38,132,112,74,57,163,201,164,91,82,90,226,216,118,232,231,189,108,
171,8,130,227,166,126,69,33,28,6,129,109,217,156,242,48,220,135,98,213,29,47,107,37,152,81,22,9,25,10,37,149,36,220,42,41,43,13,124,127,217,210,121,148,58,182,109,113,230,48,78,122,244,168,144,66,145,
2,187,233,84,99,97,13,6,67,215,100,55,21,8,127,231,242,94,20,34,138,81,16,6,50,108,34,148,48,139,59,233,146,78,251,85,141,104,34,25,9,165,180,158,243,234,179,150,237,148,164,203,108,155,187,142,227,56,
14,196,164,24,101,156,113,198,24,101,38,72,101,48,24,254,215,192,57,103,156,9,33,3,207,71,26,69,66,80,198,40,37,217,166,45,140,219,220,178,114,126,222,78,36,180,150,152,32,33,62,237,154,42,180,55,169,
170,177,227,112,206,121,152,207,83,70,143,61,229,162,40,138,164,240,114,153,86,199,181,18,174,157,76,184,145,64,81,36,109,199,38,244,223,18,185,226,64,149,137,88,25,12,134,46,8,120,82,227,146,165,241,
236,154,82,74,40,138,52,233,86,86,210,210,184,75,68,158,214,250,212,47,93,218,89,191,27,132,226,216,83,46,66,8,237,218,190,13,105,145,116,109,194,8,37,204,182,120,194,117,56,99,4,99,130,73,20,70,81,20,
50,206,141,9,53,24,12,93,141,142,226,255,249,172,31,9,161,144,214,168,221,142,65,168,42,10,242,249,108,51,194,232,204,115,175,65,74,32,41,53,210,251,84,172,186,67,169,202,24,9,35,169,164,180,92,71,10,
201,56,71,8,47,91,56,203,182,173,132,235,96,194,24,231,201,132,131,16,210,26,81,218,110,235,163,40,34,132,40,165,8,33,66,8,104,61,44,173,133,15,64,109,152,3,235,42,160,148,66,11,161,25,148,82,173,181,
16,194,178,44,24,189,226,255,30,192,70,26,12,134,253,71,28,253,255,247,58,0,138,82,170,164,210,82,132,145,72,36,18,245,155,86,96,132,101,231,237,99,66,25,129,82,130,235,86,46,40,41,77,41,141,9,34,140,
51,199,117,149,214,132,82,66,41,194,136,50,170,148,22,145,64,8,81,74,165,148,8,33,198,24,252,1,54,54,238,8,198,88,74,41,132,0,83,6,175,67,143,160,155,240,173,61,162,181,6,123,24,159,16,248,103,103,245,
215,96,48,252,231,209,81,2,128,227,90,90,105,130,9,33,88,163,118,99,34,165,98,140,183,213,215,32,141,20,66,26,97,68,105,232,71,96,223,62,37,123,91,214,170,84,123,89,108,164,17,24,242,48,12,105,17,113,
208,31,62,15,255,148,82,50,198,192,74,198,213,0,164,148,82,74,140,49,188,37,165,60,80,155,175,192,128,4,235,127,99,139,28,183,28,218,134,138,214,49,152,0,156,193,240,127,141,98,33,139,58,53,231,62,222,
122,64,8,129,49,226,204,226,156,91,150,85,156,141,16,255,40,8,71,176,168,96,178,56,231,8,161,40,138,96,94,29,69,17,66,8,10,90,199,173,253,100,95,104,199,187,26,194,65,44,203,10,195,144,115,238,121,30,
236,61,99,38,234,6,131,97,191,178,79,118,181,67,189,88,108,248,98,3,10,70,13,246,163,218,173,126,42,165,84,8,81,92,88,155,49,166,148,10,195,16,220,171,197,201,172,159,175,131,159,11,176,194,160,161,25,
99,177,116,70,8,9,33,160,46,44,88,118,48,217,7,176,169,6,131,225,11,166,88,155,238,63,67,5,19,102,66,8,231,220,182,109,216,222,111,143,179,119,88,89,197,24,19,66,120,158,7,17,42,74,105,20,69,24,99,203,
178,64,197,34,132,148,82,240,98,177,141,253,31,165,54,180,33,138,34,248,137,84,42,21,134,225,94,188,176,6,131,193,176,175,20,85,8,64,8,33,188,239,59,69,119,232,85,197,24,107,165,148,148,152,96,164,219,
253,189,220,226,48,131,143,109,107,108,4,133,16,177,149,132,185,126,44,97,99,115,169,148,2,57,11,42,246,51,118,250,243,1,86,152,82,26,4,65,156,172,6,178,91,8,33,132,0,31,6,156,199,88,124,27,12,134,255,
35,196,186,110,183,185,122,167,0,33,29,176,212,156,115,219,182,226,137,241,158,90,210,30,152,10,130,0,12,47,42,24,37,136,2,237,118,192,98,111,40,46,218,227,96,47,93,0,175,45,200,95,168,57,64,41,117,93,
55,8,130,206,234,178,193,96,48,124,210,2,237,147,184,234,240,163,197,209,40,76,48,33,24,97,28,199,253,139,69,113,156,20,69,41,5,31,42,231,220,117,221,194,166,133,255,170,179,29,251,41,65,203,30,16,226,
204,84,165,148,109,219,224,70,21,66,4,65,0,187,109,21,71,214,140,87,213,96,48,236,15,64,26,254,143,123,80,51,198,16,66,224,46,5,51,5,210,19,194,65,224,154,133,131,128,35,224,147,86,119,239,4,65,64,8,177,
44,11,178,93,193,146,231,114,185,78,237,171,193,96,248,63,77,177,37,250,108,161,245,142,19,0,10,78,90,26,187,78,11,179,243,248,151,138,195,76,74,41,41,165,109,219,16,156,130,156,39,132,16,168,91,173,53,
196,149,32,230,190,175,173,236,68,98,111,46,36,252,102,50,25,173,181,227,56,182,109,91,150,5,255,4,45,94,156,204,106,48,24,254,79,65,200,191,42,3,116,98,226,38,33,36,182,210,112,124,173,53,231,172,163,
159,0,239,166,101,89,8,33,41,101,58,157,182,109,59,138,34,208,172,224,56,136,87,2,196,137,176,113,125,131,255,49,231,202,117,221,124,62,79,8,209,90,219,182,13,199,52,83,116,131,193,176,95,193,251,184,
114,189,67,213,168,139,132,41,200,214,98,97,92,108,254,98,143,41,66,136,115,222,210,210,82,86,86,150,205,102,45,203,2,253,10,226,207,113,28,72,93,69,5,151,192,103,233,223,231,38,78,84,197,24,75,41,187,
117,235,118,193,5,23,156,112,194,9,74,169,69,139,22,61,248,224,131,249,124,30,25,127,170,193,240,127,146,127,133,146,138,228,93,231,166,215,199,54,58,62,44,33,68,202,61,215,69,1,67,4,46,85,72,82,106,108,
108,172,174,174,142,125,1,144,6,0,185,1,158,231,37,18,9,240,173,126,202,198,228,243,249,242,242,242,123,238,185,199,117,93,33,196,173,183,222,90,91,91,27,151,26,48,24,12,134,207,15,46,170,9,136,254,21,
138,223,135,35,236,77,170,106,93,152,160,23,108,247,110,115,244,221,242,247,193,73,89,89,89,249,211,159,254,180,170,170,10,33,4,241,41,41,37,56,86,87,172,88,241,198,27,111,44,95,190,220,243,188,3,168,
5,193,142,115,206,133,16,217,108,86,74,9,134,158,49,150,203,229,226,37,98,90,235,3,40,169,13,6,195,23,79,33,128,212,254,220,119,186,87,85,41,48,168,40,14,220,235,127,175,66,189,155,96,37,132,68,81,4,222,
83,132,144,231,121,213,213,213,63,249,201,79,122,245,234,133,10,166,12,108,233,230,205,155,87,173,90,245,204,51,207,160,162,12,171,255,49,87,213,178,172,108,54,235,186,46,66,40,174,51,208,89,157,53,24,
12,134,142,216,167,10,75,29,38,0,16,66,96,87,85,76,136,146,74,74,133,49,33,24,161,127,55,223,160,80,81,161,222,83,34,145,104,109,109,181,109,59,174,255,135,10,233,161,24,227,81,163,70,125,231,59,223,57,
242,200,35,33,222,84,172,5,161,82,96,108,37,33,158,197,57,135,63,116,161,56,43,36,120,197,198,23,138,94,193,235,160,164,119,43,53,0,217,96,241,234,168,56,111,1,252,19,24,99,203,178,132,16,208,17,144,212,
240,121,88,90,27,183,45,254,33,56,166,177,230,6,195,127,36,5,211,137,99,1,217,185,199,87,82,129,15,0,21,10,143,48,198,132,144,29,101,172,130,65,139,255,102,140,229,243,121,215,117,99,223,65,252,201,254,
253,251,159,116,210,73,247,221,119,223,216,177,99,227,242,168,16,215,130,169,120,220,65,176,102,96,208,160,26,43,250,247,242,124,240,69,248,185,120,215,217,184,252,42,152,199,48,12,193,222,194,43,177,
247,55,46,209,26,87,42,52,24,12,255,199,81,90,161,61,204,249,59,163,88,213,190,2,203,231,161,242,31,104,190,40,138,158,127,254,249,139,46,186,232,146,75,46,185,229,150,91,234,234,234,96,221,213,25,103,
156,1,75,236,57,231,190,239,131,216,133,58,41,177,89,132,183,160,132,10,66,8,138,6,128,131,33,12,195,32,8,44,203,138,162,200,113,156,246,110,16,226,121,30,108,64,128,16,130,232,88,24,134,240,121,219,182,
33,83,22,236,62,252,10,152,87,104,48,248,80,33,99,1,202,108,65,250,23,252,19,244,113,44,154,225,3,157,117,222,12,6,131,97,95,1,67,247,210,75,47,93,118,217,101,211,166,77,251,213,175,126,245,209,71,31,
129,93,186,225,134,27,38,76,152,0,243,115,203,178,28,199,241,125,63,54,107,24,99,219,182,61,207,131,66,170,29,9,74,120,221,247,125,48,143,80,50,5,142,224,186,110,107,107,107,58,157,142,162,8,234,185,218,
182,13,1,52,48,167,224,2,200,100,50,38,141,202,96,48,116,10,157,38,185,192,61,9,230,47,150,155,24,99,215,117,195,48,220,184,113,227,242,229,203,123,246,236,105,89,86,85,85,21,124,44,151,203,37,18,137,
145,35,71,30,113,196,17,199,28,115,140,239,251,142,227,52,54,54,206,159,63,255,153,103,158,9,130,160,162,162,226,158,123,238,1,101,249,199,63,254,113,233,210,165,185,92,206,113,156,175,126,245,171,39,
159,124,178,82,106,237,218,181,63,249,201,79,108,219,14,130,224,234,171,175,30,57,114,100,223,190,125,133,16,140,177,5,11,22,204,157,59,119,193,130,5,137,68,66,74,121,249,229,151,159,122,234,169,24,227,
249,243,231,191,247,222,123,167,159,126,250,136,17,35,222,122,235,173,25,51,102,128,18,69,8,229,114,185,35,142,56,226,140,51,206,232,215,175,31,33,228,163,143,62,154,57,115,230,134,13,27,64,121,199,182,
24,106,5,152,34,86,6,131,225,64,1,230,8,180,35,33,100,241,226,197,27,54,108,184,234,170,171,38,76,152,64,41,189,244,210,75,87,175,94,13,243,115,33,196,196,137,19,39,79,158,124,228,145,71,130,151,180,181,
181,117,238,220,185,79,61,245,84,28,128,43,46,113,5,175,156,116,210,73,19,38,76,24,59,118,44,252,16,66,168,161,161,97,225,194,133,79,62,249,100,46,151,43,41,41,185,227,142,59,250,244,233,35,165,124,241,
197,23,103,206,156,9,114,118,236,216,177,223,249,206,119,32,169,224,251,223,255,126,115,115,243,1,60,69,6,131,225,63,134,206,244,170,198,19,244,56,246,4,243,114,165,148,227,56,65,16,64,192,107,203,150,
45,48,83,119,93,247,172,179,206,186,249,230,155,143,58,234,40,132,16,184,72,43,42,42,78,61,245,212,239,126,247,187,156,243,134,134,134,229,203,151,67,82,215,248,241,227,61,207,179,109,27,99,60,124,248,
112,240,25,44,91,182,140,115,158,72,36,126,245,171,95,157,116,210,73,125,251,246,5,231,129,16,226,176,195,14,187,225,134,27,14,61,244,80,168,161,13,126,83,132,208,152,49,99,174,187,238,186,17,35,70,192,
194,127,132,144,231,121,208,254,163,142,58,234,202,43,175,28,48,96,0,172,253,26,53,106,212,13,55,220,208,163,71,15,223,247,225,235,32,106,57,231,197,1,53,131,193,96,248,130,1,249,8,85,165,44,203,162,148,
182,182,182,190,241,198,27,224,200,172,174,174,30,58,116,40,232,206,115,207,61,247,123,223,251,222,148,41,83,64,167,18,66,202,202,202,206,60,243,204,235,175,191,62,138,162,56,214,95,124,112,72,214,26,
53,106,84,252,67,82,202,202,202,202,211,79,63,253,142,59,238,72,167,211,158,231,45,91,182,12,33,68,41,61,241,196,19,133,16,144,244,117,200,33,135,64,108,106,217,178,101,77,77,77,102,109,150,193,96,232,
20,58,83,170,162,246,188,171,246,189,169,96,186,15,14,203,67,15,61,244,232,163,143,134,236,207,21,43,86,128,208,236,215,175,223,212,169,83,9,33,153,76,230,158,123,238,153,54,109,218,77,55,221,212,214,
214,198,57,31,56,112,224,201,39,159,44,165,92,178,100,9,66,72,107,61,105,210,164,146,146,18,165,212,192,129,3,251,247,239,15,57,91,179,102,205,82,74,125,229,43,95,233,215,175,31,198,120,217,178,101,95,
253,234,87,47,190,248,226,87,95,125,21,130,245,151,94,122,169,109,219,197,77,106,109,109,189,237,182,219,46,188,240,194,105,211,166,253,249,207,127,6,23,44,84,209,170,171,171,187,253,246,219,47,189,244,
210,25,51,102,128,223,183,162,162,226,152,99,142,73,38,147,160,194,133,16,176,94,193,152,96,131,193,112,0,1,113,9,41,245,241,6,1,43,86,172,240,60,15,210,238,199,141,27,39,132,232,221,187,247,185,231,158,
11,249,169,191,253,237,111,47,187,236,178,155,111,190,185,161,161,1,33,52,110,220,184,147,79,62,25,253,251,114,46,72,112,130,141,175,230,205,155,119,243,205,55,79,159,62,125,250,244,233,47,188,240,2,66,
72,74,217,175,95,191,35,143,60,210,117,221,151,94,122,9,90,98,219,246,196,137,19,163,40,178,109,123,252,248,241,96,246,103,205,154,197,24,131,26,91,6,131,193,240,57,233,52,169,10,149,243,227,189,0,32,
105,233,212,83,79,125,248,225,135,31,123,236,177,43,175,188,178,91,183,110,81,20,189,249,230,155,143,63,254,56,172,118,154,50,101,74,50,153,148,82,46,93,186,244,253,247,223,39,132,108,223,190,253,195,
15,63,132,76,128,190,125,251,90,150,53,123,246,108,240,28,184,174,59,102,204,24,66,200,164,73,147,32,170,181,98,197,138,182,182,182,146,146,18,112,202,134,97,120,255,253,247,131,19,247,245,215,95,135,
28,211,202,202,202,68,34,17,199,235,41,165,219,182,109,171,171,171,131,44,46,200,133,141,107,19,54,54,54,214,213,213,181,182,182,46,94,188,120,213,170,85,8,33,165,212,144,33,67,96,11,171,120,73,150,73,
84,53,24,12,7,22,88,192,4,235,71,97,157,0,108,52,149,207,231,33,97,9,22,3,156,116,210,73,176,248,105,246,236,217,203,151,47,151,82,110,217,178,101,217,178,101,190,239,19,66,6,14,28,8,107,179,226,116,166,
120,109,235,159,254,244,167,251,238,187,111,219,182,109,8,161,48,12,159,126,250,233,13,27,54,192,140,61,145,72,4,65,144,201,100,192,143,192,24,131,172,131,177,99,199,150,151,151,83,74,235,234,234,86,175,
94,13,235,86,15,224,41,50,24,12,255,49,116,154,234,138,151,252,67,170,126,24,134,142,227,128,149,4,217,138,16,122,231,157,119,30,127,252,113,240,191,42,165,250,246,237,11,75,157,142,59,238,184,227,142,
59,14,146,244,195,48,4,213,219,171,87,47,152,220,47,90,180,104,202,148,41,24,227,241,227,199,47,92,184,112,210,164,73,176,102,235,173,183,222,162,148,246,239,223,31,142,102,89,214,189,247,222,27,175,232,
2,227,203,24,27,57,114,228,188,121,243,226,229,252,156,243,32,8,96,161,21,124,49,8,2,144,215,217,108,54,8,130,110,221,186,249,190,15,89,1,90,235,210,210,82,56,102,220,205,40,138,96,71,174,206,58,117,6,
131,193,176,79,196,97,34,200,179,178,44,11,150,150,166,82,169,120,131,43,41,37,216,88,74,233,201,39,159,124,226,137,39,66,182,61,216,70,165,84,159,62,125,62,121,228,120,135,213,115,207,61,215,113,156,
73,147,38,85,87,87,163,130,133,135,223,133,45,93,230,207,159,63,102,204,24,203,178,142,58,234,168,135,30,122,104,226,196,137,32,160,231,207,159,15,233,82,190,239,155,137,189,193,96,248,252,116,154,87,
53,222,202,47,12,67,112,139,66,198,253,229,151,95,254,225,135,31,66,4,234,132,19,78,56,244,208,67,65,23,50,198,32,85,20,114,6,80,161,138,53,164,58,65,165,42,173,53,231,252,181,215,94,131,164,171,195,14,
59,172,79,159,62,213,213,213,16,199,95,188,120,49,66,8,252,178,80,124,10,21,74,12,194,161,32,16,6,57,169,249,124,30,204,40,68,246,131,32,136,162,8,202,101,195,30,176,240,45,206,57,232,99,219,182,225,104,
112,168,184,220,32,52,30,222,53,24,12,134,3,66,241,170,0,48,182,185,92,110,194,132,9,241,20,122,197,138,21,160,56,227,105,118,92,91,10,234,159,196,91,91,197,181,87,81,161,214,138,109,219,191,253,237,111,
207,62,251,236,51,206,56,3,116,42,84,194,6,203,12,94,88,219,182,231,207,159,159,203,229,180,214,174,235,158,120,226,137,71,28,113,132,82,202,247,253,217,179,103,115,206,99,43,106,48,24,12,159,147,78,155,
242,130,65,132,202,80,113,29,62,41,101,16,4,79,63,253,244,200,145,35,161,22,224,244,233,211,183,110,221,90,83,83,67,8,217,188,121,243,160,65,131,148,82,243,230,205,187,255,254,251,99,255,43,20,138,130,
221,173,8,33,219,182,109,91,191,126,253,224,193,131,45,203,154,54,109,26,136,197,185,115,231,186,174,235,121,222,170,85,171,192,134,50,198,190,249,205,111,182,182,182,130,114,5,163,28,151,151,130,172,
41,74,41,72,97,136,251,67,142,23,20,8,68,8,97,140,33,37,192,182,237,238,221,187,67,191,234,235,235,193,73,12,190,94,40,152,101,114,176,12,6,195,23,0,88,36,48,104,16,204,41,94,2,5,245,1,161,216,95,34,145,
56,245,212,83,225,245,117,235,214,173,91,183,46,12,195,29,59,118,140,25,51,6,18,0,30,124,240,193,48,12,19,137,4,84,102,5,143,108,92,208,58,174,75,29,4,193,69,23,93,84,93,93,13,110,209,231,158,123,238,
185,231,158,35,132,220,123,239,189,176,90,32,46,164,74,8,153,55,111,222,25,103,156,161,148,58,231,156,115,96,199,215,85,171,86,193,190,42,166,254,180,193,96,232,44,58,205,171,10,179,124,72,0,5,109,135,
16,98,140,37,18,137,181,107,215,62,252,240,195,240,25,219,182,191,254,245,175,131,236,123,237,181,215,64,86,78,158,60,249,130,11,46,128,201,186,148,242,240,195,15,255,246,183,191,125,206,57,231,184,174,
27,69,145,214,122,241,226,197,96,73,199,143,31,15,198,20,22,84,113,206,51,153,204,220,185,115,9,33,65,16,92,119,221,117,163,71,143,6,19,41,165,156,54,109,218,111,127,251,91,132,16,252,10,66,8,188,170,
113,137,150,40,138,226,204,90,248,12,120,85,191,252,229,47,67,49,1,41,229,59,239,188,3,74,23,214,201,66,89,108,179,172,202,96,48,124,1,88,150,5,154,18,66,234,241,230,41,176,190,211,182,109,152,60,31,122,
232,161,87,95,125,245,184,113,227,64,122,206,156,57,19,130,239,179,103,207,70,8,97,140,79,56,225,132,243,206,59,175,91,183,110,224,31,157,52,105,210,181,215,94,59,109,218,52,152,126,195,145,131,32,224,
156,219,182,237,251,62,216,112,223,247,223,125,247,93,173,245,136,17,35,92,215,133,143,197,83,125,200,1,64,8,17,66,32,186,197,57,159,63,127,62,180,173,216,89,107,48,24,12,159,135,78,243,170,194,60,59,
14,57,129,223,81,74,9,201,0,243,230,205,27,56,112,224,73,39,157,196,24,235,221,187,247,180,105,211,30,122,232,161,109,219,182,61,247,220,115,103,156,113,134,109,219,167,157,118,218,89,103,157,21,7,223,
149,82,111,188,241,70,46,151,3,227,248,238,187,239,158,126,250,233,201,100,18,36,230,154,53,107,118,237,218,133,16,82,74,217,182,253,248,227,143,247,233,211,103,192,128,1,195,135,15,191,233,166,155,192,
166,67,200,30,60,187,144,126,128,10,225,173,216,11,27,23,249,7,33,59,110,220,184,71,30,121,36,238,145,239,251,75,150,44,121,255,253,247,225,139,208,65,168,24,96,86,12,24,12,134,47,128,184,168,62,236,123,
2,75,60,45,203,130,64,255,137,39,158,8,158,84,48,98,66,136,124,62,255,240,195,15,175,92,185,18,33,68,8,169,169,169,121,228,145,71,46,185,228,146,40,138,206,62,251,236,169,83,167,66,98,43,66,72,107,253,
226,139,47,66,202,22,252,22,108,155,34,132,88,179,102,13,108,73,197,57,191,231,158,123,138,51,92,17,66,96,253,224,149,45,91,182,172,95,191,126,200,144,33,48,201,207,100,50,224,86,136,13,175,81,171,6,131,
225,243,211,105,94,85,199,113,180,214,190,239,187,174,155,207,231,17,66,160,20,193,81,154,203,229,158,120,226,137,45,91,182,64,56,254,148,83,78,57,239,188,243,194,48,124,230,153,103,126,243,155,223,188,
240,194,11,241,174,84,182,109,55,52,52,192,122,85,40,119,18,69,81,125,125,253,218,181,107,193,33,170,148,250,232,163,143,192,82,39,147,201,48,12,155,155,155,127,252,227,31,63,251,236,179,171,87,175,134,
162,45,176,48,246,195,15,63,124,241,197,23,57,231,176,230,0,212,42,4,209,192,34,67,42,106,28,165,106,110,110,110,110,110,134,156,215,182,182,182,89,179,102,221,123,239,189,176,241,85,92,87,21,26,96,234,
255,27,12,134,47,0,88,221,31,111,142,10,25,246,176,204,31,253,107,27,88,20,69,81,109,109,237,155,111,190,121,221,117,215,205,153,51,7,86,145,66,164,104,246,236,217,183,223,126,251,236,217,179,193,244,
129,78,109,108,108,124,237,181,215,54,109,218,4,187,79,65,240,42,54,158,203,150,45,187,239,190,251,54,111,222,140,10,91,94,63,241,196,19,77,77,77,241,196,30,118,19,132,63,96,17,21,124,114,206,156,57,224,
95,48,161,127,131,193,208,137,224,49,163,71,239,241,13,66,73,24,132,24,99,110,113,17,137,147,191,124,37,198,248,253,57,79,185,110,194,117,93,219,182,41,165,241,230,209,144,189,4,102,206,247,253,116,58,
157,205,102,227,85,246,150,101,129,95,19,18,152,226,192,16,152,51,200,196,2,95,44,36,66,65,142,20,248,86,225,195,32,127,33,10,143,16,2,111,40,236,131,133,16,226,156,103,179,217,146,146,18,8,232,199,97,
125,48,178,224,54,128,56,26,99,12,99,156,203,229,202,202,202,226,202,255,142,227,64,41,108,56,62,4,212,224,56,176,240,43,46,224,2,26,23,18,21,140,183,192,96,248,207,3,99,140,144,86,10,197,81,147,170,65,
147,16,66,111,60,51,163,83,142,175,148,58,229,220,171,148,148,31,188,253,76,34,153,112,108,199,177,29,198,89,71,179,223,88,246,129,21,114,28,7,54,249,3,251,19,4,1,66,40,158,156,195,70,122,144,43,5,6,25,
230,216,240,45,74,169,227,56,153,76,6,84,111,252,153,124,62,239,56,142,101,89,249,124,158,49,6,113,45,223,247,83,169,20,108,124,13,31,6,71,41,196,253,33,149,11,242,16,142,57,230,152,107,174,185,6,33,228,
251,254,247,191,255,253,134,134,6,176,219,187,249,98,13,6,195,255,93,48,194,8,119,31,48,17,99,252,218,211,247,83,70,181,210,113,42,230,167,161,51,189,170,176,252,19,100,37,8,62,152,166,231,243,249,32,
8,64,47,198,97,44,208,166,16,72,2,211,6,33,167,120,249,63,200,77,132,16,152,96,176,161,160,59,97,169,62,172,238,143,215,57,249,190,143,138,214,117,129,250,132,218,82,241,66,212,40,138,160,36,22,84,0,40,
246,170,50,198,60,207,3,63,4,188,5,61,2,138,147,180,226,106,0,6,131,193,176,95,129,26,210,197,94,213,100,50,153,207,231,193,148,89,150,5,121,255,144,87,26,59,2,192,165,10,129,35,8,106,113,206,33,59,43,
145,72,64,85,233,56,151,41,157,78,131,141,133,73,56,212,19,72,36,18,185,92,206,178,44,219,182,97,50,143,10,11,79,97,223,1,104,128,82,234,240,195,15,135,166,174,95,191,126,251,246,237,241,94,175,113,229,
1,131,193,96,248,156,116,102,174,42,66,8,236,20,72,64,216,219,9,22,212,131,149,4,25,154,201,100,82,169,20,104,83,132,16,148,53,1,175,39,148,80,1,33,24,27,199,184,78,42,56,95,193,110,198,202,21,33,4,229,
2,194,48,4,63,104,54,155,77,165,82,176,130,42,145,72,64,229,84,173,53,184,105,227,21,175,160,134,99,159,1,28,4,33,228,121,30,232,81,56,126,236,9,134,15,199,123,186,152,92,85,131,193,176,191,1,145,10,214,
18,116,39,100,73,197,166,12,82,66,33,129,10,178,2,226,216,84,252,71,188,42,20,33,4,146,20,54,169,134,169,62,56,2,164,148,182,109,195,187,16,37,3,155,12,95,129,35,196,94,210,120,131,171,145,35,71,142,27,
55,14,126,250,157,119,222,137,3,89,241,150,43,38,250,100,48,24,62,63,157,89,1,0,18,246,193,164,122,158,7,179,118,152,226,251,190,15,126,80,152,163,123,158,7,202,210,182,109,168,120,10,117,248,225,80,32,
82,227,77,89,81,81,132,43,54,214,16,184,7,59,8,191,18,39,18,36,18,9,144,197,80,78,21,62,239,186,46,8,214,221,42,0,160,162,37,83,241,183,224,128,224,76,133,181,98,241,214,172,80,29,198,68,181,12,6,195,
23,192,110,21,0,32,164,19,235,63,176,177,160,92,99,123,5,115,123,88,63,10,238,128,48,12,33,106,15,126,4,8,118,197,197,170,226,233,122,28,128,138,237,54,124,221,113,28,56,20,36,253,199,63,164,181,30,63,
126,60,180,164,185,185,121,225,194,133,241,114,43,136,107,25,157,106,48,24,58,133,78,243,170,130,85,130,208,57,40,63,84,52,249,134,89,123,188,18,31,222,5,87,43,248,12,226,221,164,226,119,81,193,61,80,
28,109,143,229,108,28,166,135,111,197,11,252,81,97,49,44,42,216,113,16,166,96,187,227,131,235,162,109,175,193,124,67,27,80,193,61,12,255,140,139,8,194,91,96,163,59,235,140,25,12,6,195,222,137,183,116,
70,69,69,247,16,66,16,228,1,251,22,199,151,98,19,26,23,212,139,237,85,60,201,71,5,107,9,128,77,139,109,38,124,38,254,81,48,140,177,71,0,108,35,42,178,183,51,103,206,156,57,115,102,124,180,56,244,4,19,
251,253,118,86,12,6,195,255,45,140,53,49,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,
12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,
131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,
96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,
116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,
140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,
53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,
12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,
131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,
96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,
116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,
140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,
53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,
12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,140,84,53,24,12,6,131,193,96,48,116,81,246,187,84,197,24,
35,132,164,148,132,16,165,20,66,136,49,166,148,210,90,19,66,164,148,74,41,66,218,155,17,255,209,165,32,132,132,97,136,49,134,230,69,81,4,175,107,173,225,143,40,138,160,131,241,43,255,123,129,235,162,148,
130,11,71,41,141,162,8,99,28,119,80,107,141,49,86,74,49,198,14,96,59,41,165,82,74,173,181,16,2,154,10,173,146,82,194,187,208,102,104,48,188,43,132,32,132,112,206,133,16,74,41,184,241,160,191,112,76,184,
33,227,254,98,140,181,214,240,7,124,6,126,232,128,160,11,96,140,161,47,113,123,226,167,9,99,28,69,17,156,153,184,169,74,41,206,57,156,138,3,248,124,197,55,18,92,166,184,37,241,5,162,148,162,194,237,247,
31,240,28,117,34,112,125,81,225,114,195,61,80,124,91,106,173,25,99,112,187,198,103,15,62,6,119,197,103,56,159,182,109,23,223,99,241,253,15,127,16,66,40,165,90,107,48,20,96,216,247,137,248,186,195,65,138,
223,98,140,69,81,196,24,131,238,112,206,63,195,241,247,2,156,16,74,105,124,31,118,238,115,177,199,241,2,44,82,108,169,226,11,26,159,4,41,37,216,88,120,16,224,173,120,244,164,148,194,115,221,137,237,220,
167,246,3,208,42,104,51,188,171,10,196,143,118,241,197,138,173,16,220,159,240,49,184,69,227,33,6,174,69,103,53,158,82,26,134,33,12,97,112,198,224,42,195,57,140,141,39,252,34,180,214,178,44,41,37,231,60,
30,65,246,50,180,193,145,161,239,148,82,24,125,58,177,253,29,1,102,28,21,78,59,244,8,218,16,247,11,206,124,124,225,58,58,14,33,36,8,130,216,14,199,194,12,236,12,92,26,66,8,92,178,253,221,175,79,207,126,
31,186,226,19,26,159,5,120,32,225,30,98,140,89,150,85,252,226,254,110,207,103,64,8,225,56,14,232,0,66,136,109,219,112,107,194,48,64,41,117,28,231,11,179,35,251,27,184,107,225,14,6,235,9,207,48,60,207,
168,200,172,195,217,56,80,237,140,162,200,178,44,198,24,140,100,81,20,193,192,198,24,99,140,249,190,31,11,83,120,228,48,198,160,216,60,207,179,44,139,115,14,29,132,255,198,154,207,178,44,199,113,16,66,
48,82,66,199,9,33,81,20,197,154,248,128,0,230,149,82,10,93,131,70,70,81,164,148,114,28,7,174,20,66,200,113,156,32,8,98,123,42,132,176,44,203,243,60,140,177,109,219,97,24,30,168,246,195,80,17,63,233,241,
153,4,59,43,132,136,71,199,98,33,107,128,129,60,30,89,81,97,74,6,207,35,220,246,8,33,152,125,21,75,88,16,4,159,121,138,146,203,229,56,231,240,200,192,136,14,46,6,56,32,252,1,214,15,126,107,95,143,15,74,
34,30,242,225,54,128,254,194,77,11,191,162,148,242,125,31,6,233,78,33,150,242,112,67,194,207,117,174,233,222,227,120,33,165,20,66,192,79,199,42,45,22,82,48,14,58,142,163,148,10,195,16,52,16,244,26,230,
33,8,33,223,247,191,24,239,192,30,219,95,172,170,81,225,52,194,61,0,247,9,220,129,96,108,161,157,208,11,184,253,130,32,0,11,166,148,130,174,65,239,224,200,197,106,248,115,162,181,182,44,11,21,132,7,216,
127,84,36,43,227,121,93,44,73,161,155,208,212,216,198,118,116,124,184,243,227,255,198,71,232,172,246,119,4,204,223,224,94,5,41,197,24,3,93,30,134,33,52,134,82,10,15,233,94,236,60,60,173,142,227,64,203,
133,16,66,8,56,33,48,158,198,70,56,182,45,93,132,47,98,72,0,11,11,247,16,231,60,62,209,177,3,15,110,145,248,153,236,82,196,147,239,216,226,199,87,17,238,215,98,3,244,31,48,196,218,182,141,16,10,195,16,
158,67,32,159,207,195,221,15,178,21,212,6,42,92,217,3,66,177,202,164,148,130,244,140,103,138,177,196,4,13,7,86,21,190,8,247,24,180,28,6,75,56,8,244,11,40,118,123,68,81,228,251,62,165,212,182,237,47,192,
36,117,4,60,47,74,41,215,117,65,64,32,132,64,166,195,227,195,57,135,230,105,173,97,238,20,15,18,112,54,50,153,12,8,220,3,130,82,42,30,243,80,65,100,195,91,96,25,96,202,122,0,239,168,174,9,88,200,248,22,
141,61,232,65,16,192,69,135,59,63,30,111,98,31,79,236,34,130,251,255,51,252,46,66,8,28,225,177,16,1,63,107,177,167,246,147,142,180,79,9,60,122,113,172,32,62,2,99,12,126,5,30,100,203,178,58,119,126,8,10,
53,30,104,224,188,117,174,87,111,143,227,5,8,163,216,161,24,235,123,184,237,195,48,12,130,0,30,85,16,37,208,84,184,202,177,201,253,2,198,151,189,140,119,113,180,45,238,69,172,161,227,47,34,132,48,198,
48,124,160,130,247,29,186,16,59,254,161,59,32,94,97,0,237,196,126,193,209,98,79,45,220,156,16,107,138,239,85,120,94,224,97,129,15,131,69,141,149,247,94,116,8,198,24,116,94,124,91,126,49,94,85,24,194,224,
97,143,173,168,239,251,150,101,81,74,99,117,14,93,128,65,188,163,227,192,213,137,135,206,216,77,238,251,62,184,57,138,95,236,58,124,17,183,62,0,103,39,8,130,216,21,207,57,135,9,65,124,106,130,32,216,223,
237,217,87,226,71,43,14,40,160,66,167,96,54,140,16,42,14,198,253,111,7,52,4,76,42,162,40,202,231,243,32,116,146,201,164,214,58,155,205,234,66,2,0,42,200,190,3,2,220,51,224,88,138,45,59,180,42,182,125,
96,10,99,111,83,252,221,120,78,12,119,29,76,159,192,156,193,223,197,209,127,206,121,34,145,128,39,28,44,194,1,36,8,2,104,85,236,33,224,156,231,114,185,216,213,1,157,245,60,15,62,3,163,50,152,179,120,44,
57,32,20,55,123,183,168,43,120,11,138,71,151,3,213,200,46,72,60,245,194,69,209,255,56,202,33,165,4,39,28,168,73,144,20,96,102,193,94,193,165,255,12,106,15,38,165,168,72,242,66,248,8,222,141,19,15,80,81,
126,194,190,2,242,55,190,232,197,142,246,216,117,4,30,175,78,140,6,128,11,63,246,233,198,10,172,179,142,191,151,241,2,28,123,241,244,24,21,185,250,192,35,0,111,193,3,2,166,6,116,3,216,55,199,113,190,128,
168,72,71,237,7,169,29,7,160,224,2,197,110,245,88,136,195,245,138,131,233,240,69,152,240,192,117,140,149,55,152,38,232,123,39,170,162,216,227,0,254,197,56,137,37,22,217,177,135,216,178,44,104,79,44,151,
225,78,240,125,127,47,67,57,92,175,120,136,137,199,145,206,106,127,71,196,201,33,48,222,65,191,32,80,166,10,73,56,177,149,128,119,247,72,113,22,4,42,56,89,17,66,112,33,224,174,131,12,10,136,108,236,239,
126,125,122,190,8,117,5,183,14,216,205,120,10,18,79,25,81,33,15,227,139,153,157,236,43,96,92,226,7,24,6,84,248,59,246,177,193,64,139,63,83,206,86,87,3,70,65,152,232,167,82,169,248,121,206,100,50,150,101,
37,18,9,240,228,193,109,125,0,189,140,112,9,96,150,25,191,24,251,123,160,11,224,10,133,6,219,182,29,219,175,56,115,3,108,25,60,144,182,109,131,255,56,138,162,100,50,41,165,132,97,30,38,87,113,184,228,
64,245,87,74,105,219,182,109,219,96,25,99,59,2,106,21,102,125,208,59,184,63,97,36,128,23,243,249,188,239,251,169,84,234,0,38,0,196,249,178,177,231,15,132,66,20,69,182,109,195,109,6,25,138,248,51,229,86,
254,167,2,247,106,236,47,1,65,3,146,20,102,251,164,144,96,13,82,18,158,77,24,213,98,127,222,103,152,69,131,158,3,231,25,248,233,131,32,136,99,211,197,202,50,14,248,238,19,241,163,23,71,57,224,186,195,
132,16,23,242,110,97,212,236,68,47,64,236,181,5,47,38,156,177,78,116,145,116,52,94,128,175,49,30,242,80,33,221,48,150,122,170,144,82,25,134,33,164,37,128,213,2,157,7,138,234,11,240,134,116,212,126,84,
148,94,12,122,20,158,217,216,229,4,105,27,208,206,92,46,135,11,185,40,177,63,56,118,214,66,119,192,32,123,158,87,156,14,244,249,137,179,38,80,145,7,29,126,29,238,55,41,37,184,129,161,59,197,209,57,120,
184,246,46,61,227,100,48,48,182,96,111,191,128,113,31,166,58,186,144,228,22,223,15,182,109,131,238,132,11,1,167,119,47,237,143,19,78,98,151,121,108,97,112,33,11,14,14,120,96,19,252,62,201,23,225,21,131,
7,15,110,83,33,196,160,65,131,202,203,203,225,206,200,231,243,155,54,109,170,175,175,135,225,42,206,119,238,58,208,194,234,129,56,69,1,204,77,60,227,132,73,36,196,20,186,212,165,253,108,104,173,61,207,
131,9,52,88,28,176,41,201,100,210,247,253,40,138,82,169,20,220,211,96,82,59,55,60,247,233,129,199,9,30,90,16,205,156,115,152,16,131,17,9,130,192,117,221,124,62,31,79,241,65,21,65,124,13,148,83,108,58,
193,60,65,18,149,227,56,45,45,45,174,235,130,69,131,231,31,46,238,129,234,44,66,136,82,234,121,30,42,100,163,10,33,130,32,72,36,18,66,8,219,182,125,223,199,133,197,34,112,151,198,25,2,144,121,70,41,109,
108,108,44,43,43,59,80,179,139,88,148,128,219,62,246,196,56,142,211,216,216,104,219,182,227,56,177,11,4,198,152,3,210,206,174,6,40,21,132,16,168,22,33,68,159,62,125,250,244,233,3,215,61,214,172,240,132,
126,240,193,7,99,198,140,201,102,179,155,54,109,130,209,11,86,71,201,125,207,197,140,71,47,90,200,203,87,74,29,126,248,225,235,214,173,107,108,108,132,87,98,57,251,25,158,11,140,177,235,186,160,164,81,
65,91,128,131,13,12,44,220,36,160,60,226,251,249,243,19,175,131,225,156,67,140,34,12,195,178,178,50,120,184,62,63,29,141,23,240,150,235,186,168,144,162,227,251,126,220,217,88,183,65,12,7,46,107,188,68,
18,30,249,120,118,221,41,237,220,215,246,131,81,5,239,47,248,8,224,117,16,52,224,110,207,102,179,132,144,84,42,5,102,39,158,111,192,64,207,57,135,238,192,119,161,95,48,232,119,226,243,94,28,215,142,101,
116,28,212,70,133,231,136,82,234,251,62,24,121,152,255,199,65,54,232,75,71,247,91,188,230,15,6,20,240,137,192,63,59,165,253,29,17,207,28,226,188,145,108,54,11,83,172,216,243,130,16,242,60,47,153,76,146,
142,151,253,196,74,12,124,204,65,16,196,94,109,184,154,66,136,68,34,129,16,130,107,212,117,36,205,126,151,170,48,252,199,211,202,100,50,121,194,9,39,28,118,216,97,13,13,13,48,107,236,217,179,231,198,141,
27,31,124,240,193,21,43,86,84,84,84,236,37,163,249,128,16,79,40,81,225,158,80,74,29,123,236,177,224,21,198,133,53,182,59,119,238,220,184,113,227,127,128,67,136,49,150,203,229,18,137,4,228,193,140,26,53,
106,212,168,81,156,243,124,62,191,106,213,170,141,27,55,102,179,89,215,117,135,12,25,210,216,216,216,210,210,114,160,28,117,113,20,35,78,170,27,58,116,168,148,114,227,198,141,48,252,84,85,85,13,27,54,
236,253,247,223,143,162,200,113,156,124,62,127,196,17,71,212,214,214,238,218,181,171,164,164,100,194,132,9,179,103,207,134,120,71,124,40,215,117,79,57,229,148,234,234,234,25,51,102,128,194,243,60,15,236,
17,198,248,160,131,14,58,255,252,243,111,187,237,182,3,210,223,73,147,38,109,218,180,105,219,182,109,96,80,134,13,27,150,78,167,151,46,93,10,107,200,56,231,135,29,118,216,226,197,139,97,132,3,95,5,12,
18,158,231,57,142,147,205,102,43,42,42,114,185,220,129,146,128,112,26,97,20,28,48,96,64,159,62,125,242,249,188,101,89,96,16,125,223,7,91,15,238,165,120,13,159,33,246,154,128,191,45,145,72,140,27,55,110,
202,148,41,24,227,40,138,122,247,238,237,251,126,99,99,35,204,211,90,91,91,47,188,240,194,21,43,86,52,55,55,55,53,53,161,130,248,147,123,93,212,188,71,226,172,3,140,49,24,186,84,42,117,205,53,215,252,
250,215,191,110,109,109,133,89,34,42,24,198,207,96,244,250,244,233,211,183,111,95,240,198,193,140,11,180,41,165,116,233,210,165,35,70,140,200,100,50,53,53,53,224,4,141,35,155,159,31,66,200,81,71,29,21,
4,1,12,246,45,45,45,141,141,141,153,76,166,179,114,153,58,26,47,242,249,60,68,12,32,98,219,220,220,92,83,83,115,204,49,199,196,105,75,217,108,118,219,182,109,77,77,77,112,177,108,219,6,229,4,242,180,180,
180,244,160,131,14,122,247,221,119,247,247,243,219,81,251,97,249,78,28,5,109,104,104,88,183,110,221,225,135,31,14,23,8,44,204,206,157,59,155,154,154,90,90,90,18,137,4,46,172,206,129,46,167,211,233,241,
227,199,231,114,57,219,182,243,249,124,75,75,203,230,205,155,91,90,90,210,233,116,177,135,254,243,19,171,222,56,253,64,8,49,98,196,136,146,146,146,76,38,179,106,213,42,152,45,120,158,151,74,165,14,58,
232,32,223,247,87,172,88,129,49,30,56,112,96,50,153,92,186,116,233,222,197,153,44,100,141,71,81,52,104,208,160,138,138,138,37,75,150,124,1,70,85,8,209,191,127,255,170,170,170,214,214,214,229,203,151,199,
89,22,90,235,131,15,62,56,138,162,101,203,150,73,41,7,13,26,84,89,89,185,116,233,210,142,154,4,115,63,80,219,8,33,173,117,191,126,253,170,170,170,64,109,183,181,181,213,213,213,53,54,54,130,202,71,159,
233,209,222,79,236,119,169,10,182,18,228,2,66,40,8,2,207,243,26,27,27,111,185,229,22,152,193,16,66,190,250,213,175,126,239,123,223,251,211,159,254,180,108,217,178,174,163,226,1,8,18,197,115,178,32,8,82,
169,212,127,253,215,127,109,223,190,61,206,121,18,66,188,247,222,123,219,182,109,235,106,62,243,207,64,24,134,229,229,229,45,45,45,142,227,92,115,205,53,163,70,141,90,185,114,101,54,155,29,49,98,196,212,
169,83,215,175,95,255,203,95,254,50,138,162,139,47,190,120,227,198,141,15,60,240,192,129,146,62,32,104,32,166,3,30,166,227,143,63,190,103,207,158,183,223,126,187,214,218,117,221,147,78,58,233,140,51,206,
80,74,125,244,209,71,158,231,185,174,251,205,111,126,243,111,127,251,91,125,125,253,240,225,195,175,188,242,202,121,243,230,129,209,241,125,31,46,113,16,4,37,37,37,131,6,13,66,8,49,198,110,190,249,230,
237,219,183,63,244,208,67,97,24,66,174,253,144,33,67,14,72,103,17,66,23,95,124,241,162,69,139,158,123,238,185,182,182,54,219,182,47,184,224,130,209,163,71,127,245,171,95,133,59,112,226,196,137,215,92,
115,205,119,190,243,157,250,250,250,184,232,1,76,48,192,103,144,74,165,254,242,151,191,252,229,47,127,89,176,96,193,1,105,63,24,86,240,4,31,115,204,49,199,30,123,108,99,99,35,100,53,84,87,87,175,88,177,
226,145,71,30,217,178,101,139,235,186,158,231,117,29,251,120,192,129,123,47,78,77,139,162,104,214,172,89,47,191,252,50,136,152,159,253,236,103,107,214,172,121,248,225,135,113,33,89,109,249,242,229,16,
22,40,41,41,129,180,1,120,82,246,213,235,19,71,111,193,53,171,181,110,110,110,182,44,171,164,164,4,23,86,79,199,190,156,56,52,252,233,25,63,126,252,228,201,147,65,205,244,236,217,51,8,130,230,230,102,
56,78,62,159,63,235,172,179,182,108,217,178,113,227,198,56,39,190,179,166,46,82,202,107,175,189,182,177,177,177,181,181,213,113,156,238,221,187,111,222,188,249,158,123,238,105,110,110,238,148,227,119,
52,94,212,215,215,199,55,54,231,124,246,236,217,13,13,13,87,95,125,245,174,93,187,32,49,160,71,143,30,148,210,23,94,120,225,149,87,94,65,8,101,179,89,120,114,17,66,97,24,78,156,56,241,170,171,174,90,184,
112,225,254,158,194,237,165,253,16,186,1,239,192,252,249,243,183,111,223,126,230,153,103,86,85,85,53,55,55,131,5,174,170,170,250,224,131,15,238,187,239,190,216,117,135,10,69,232,198,140,25,115,245,213,
87,215,215,215,131,47,182,95,191,126,115,230,204,249,251,223,255,158,207,231,59,55,87,24,110,75,112,75,131,7,212,117,221,195,15,63,252,180,211,78,91,187,118,237,207,126,246,51,8,83,56,142,115,194,9,39,
76,159,62,125,253,250,245,43,87,174,212,90,31,115,204,49,131,6,13,90,191,126,61,44,63,237,232,126,134,195,130,3,238,132,19,78,232,211,167,207,234,213,171,61,207,219,223,227,32,33,228,132,19,78,56,233,
164,147,86,175,94,189,117,235,86,40,234,162,148,58,237,180,211,166,79,159,190,110,221,58,144,167,167,158,122,106,239,222,189,87,172,88,209,209,41,141,19,132,224,82,38,18,137,41,83,166,156,112,194,9,117,
117,117,190,239,247,238,221,27,33,244,226,139,47,190,241,198,27,112,7,238,215,78,237,19,251,93,170,234,66,197,159,88,198,21,71,7,96,190,62,99,198,140,171,174,186,234,210,75,47,189,233,166,155,40,165,83,
167,78,61,233,164,147,42,43,43,17,66,117,117,117,47,189,244,210,156,57,115,48,198,35,71,142,60,239,188,243,230,204,153,115,214,89,103,245,238,221,187,181,181,245,247,191,255,125,175,94,189,46,190,248,
98,8,145,220,117,215,93,171,86,173,114,28,231,138,43,174,104,104,104,24,50,100,200,192,129,3,211,233,244,59,239,188,243,192,3,15,124,182,244,231,226,164,239,226,128,200,99,143,61,182,98,197,10,40,32,162,
138,170,144,130,181,133,24,7,68,223,160,167,224,85,130,12,7,72,235,137,19,234,227,225,36,214,190,224,120,183,44,11,34,218,113,194,16,124,0,94,135,224,69,156,134,223,89,163,59,33,4,150,82,157,120,226,137,
163,71,143,190,229,150,91,26,27,27,225,36,164,82,169,163,142,58,10,214,146,223,126,251,237,240,184,66,72,34,142,85,193,164,25,46,119,236,69,131,150,195,243,223,89,166,54,206,99,139,151,38,44,91,182,108,
202,148,41,168,176,100,117,232,208,161,45,45,45,35,70,140,128,89,239,208,161,67,57,231,31,125,244,145,82,106,201,146,37,95,251,218,215,226,124,35,56,183,112,180,248,114,32,132,226,64,21,100,187,198,17,
106,232,47,188,235,186,46,216,229,253,29,0,90,183,110,221,132,9,19,30,125,244,81,56,171,195,135,15,111,107,107,155,56,113,226,162,69,139,180,214,253,251,247,223,181,107,87,75,75,75,113,174,21,24,101,184,
33,131,32,128,88,24,220,75,48,117,4,39,71,188,174,113,191,182,63,206,175,128,244,217,237,219,183,255,248,199,63,70,8,17,66,210,233,244,180,105,211,110,191,253,246,187,239,190,251,163,143,62,138,235,27,
192,149,133,115,11,137,113,113,240,11,74,41,225,66,193,7,248,228,126,109,255,129,2,46,104,113,217,138,226,249,176,42,170,58,2,243,174,107,175,189,182,166,166,230,165,151,94,162,148,126,229,43,95,241,125,
191,91,183,110,227,199,143,119,93,119,193,130,5,143,62,250,232,21,87,92,113,200,33,135,4,65,176,120,241,226,63,253,233,79,112,123,140,30,61,122,218,180,105,131,6,13,18,66,188,255,254,251,143,62,250,104,
75,75,75,124,228,56,151,0,33,20,231,197,170,66,93,23,245,153,42,159,188,248,226,139,47,191,252,50,24,135,159,254,244,167,107,215,174,125,228,145,71,160,191,217,108,118,253,250,245,173,173,173,144,33,0,
38,55,78,22,79,167,211,205,205,205,37,37,37,16,207,137,157,5,241,114,153,248,239,120,173,15,60,233,113,170,52,33,228,225,135,31,94,188,120,49,66,168,172,172,236,142,59,238,152,54,109,218,159,254,244,167,
56,111,79,21,86,232,127,6,215,67,71,227,197,19,79,60,177,96,193,130,184,138,72,28,76,127,252,241,199,63,248,224,3,248,221,243,207,63,255,172,179,206,122,237,181,215,96,126,18,103,40,193,227,25,63,23,251,
149,142,218,255,248,227,143,47,92,184,16,194,29,241,34,36,206,249,130,5,11,30,124,240,65,48,131,35,70,140,248,225,15,127,248,250,235,175,67,254,73,156,150,10,57,63,24,227,31,252,224,7,240,248,15,27,54,
236,71,63,250,209,154,53,107,230,207,159,31,103,199,118,74,251,139,151,34,128,101,131,171,223,210,210,50,100,200,144,67,14,57,228,189,247,222,3,9,123,250,233,167,183,181,181,197,33,181,255,254,239,255,
134,97,58,153,76,66,38,6,12,97,8,33,24,2,98,167,50,60,14,112,45,96,97,211,23,224,175,129,155,161,177,177,113,228,200,145,163,70,141,130,129,76,41,117,230,153,103,54,52,52,192,194,95,173,245,131,15,62,
136,10,33,44,16,9,162,80,175,16,76,61,124,44,150,34,48,70,212,213,213,221,114,203,45,48,34,76,159,62,253,162,139,46,154,55,111,30,12,22,251,187,95,159,158,47,34,87,21,30,120,252,239,149,17,96,128,9,195,
208,182,109,207,243,230,204,153,243,189,239,125,15,166,53,173,173,173,207,63,255,252,75,47,189,148,72,36,190,252,229,47,79,159,62,125,201,146,37,77,77,77,37,37,37,35,70,140,104,109,109,253,235,95,255,
250,241,199,31,223,126,251,237,183,220,114,203,186,117,235,126,245,171,95,109,221,186,245,250,235,175,191,228,146,75,126,242,147,159,228,243,249,62,125,250,76,152,48,225,137,39,158,184,251,238,187,171,
170,170,110,188,241,198,175,124,229,43,15,63,252,112,39,118,10,110,119,120,116,193,14,186,174,59,109,218,180,186,186,186,108,54,59,101,202,148,100,50,249,253,239,127,191,178,178,242,170,171,174,26,57,
114,164,101,89,155,54,109,250,235,95,255,186,125,251,118,136,229,157,122,234,169,231,156,115,14,164,73,189,249,230,155,143,60,242,8,231,252,155,223,252,102,85,85,21,4,70,33,49,244,190,251,238,219,182,
109,155,101,89,87,95,125,245,248,241,227,41,165,107,215,174,125,232,161,135,54,111,222,12,102,37,118,186,116,10,48,8,57,142,83,94,94,158,201,100,118,237,218,21,63,243,45,45,45,179,102,205,106,110,110,
174,168,168,184,244,210,75,183,109,219,246,220,115,207,141,25,51,102,250,244,233,113,170,174,16,162,185,185,249,222,123,239,165,148,78,153,50,229,75,95,250,82,143,30,61,124,223,127,253,245,215,159,122,
234,41,72,30,232,148,118,234,66,209,123,120,134,125,223,223,180,105,147,239,251,19,38,76,248,240,195,15,17,66,131,7,15,126,251,237,183,71,142,28,153,207,231,211,233,244,152,49,99,182,111,223,14,177,203,
137,19,39,158,125,246,217,191,248,197,47,96,8,60,241,196,19,79,63,253,244,234,234,234,150,150,150,124,62,15,9,64,83,167,78,29,60,120,112,85,85,213,240,225,195,181,214,79,60,241,4,124,248,216,99,143,61,
237,180,211,170,170,170,124,223,191,247,222,123,151,47,95,254,197,60,207,171,87,175,62,226,136,35,92,215,13,195,112,204,152,49,173,173,173,224,30,94,176,96,1,99,108,220,184,113,53,53,53,249,124,62,145,
72,28,125,244,209,23,94,120,97,58,157,22,66,188,244,210,75,51,103,206,148,82,126,251,219,223,70,8,93,114,201,37,23,92,112,65,83,83,211,159,255,252,103,48,112,32,5,14,96,154,181,16,162,173,173,237,158,
123,238,185,249,230,155,207,59,239,188,53,107,214,4,65,112,205,53,215,108,218,180,41,138,162,35,142,56,34,145,72,60,245,212,83,231,158,123,238,45,183,220,2,3,79,62,159,191,241,198,27,183,109,219,246,210,
75,47,129,160,129,161,229,128,180,191,171,81,81,81,1,30,151,214,214,214,209,163,71,151,149,149,61,253,244,211,247,221,119,223,136,17,35,110,190,249,230,241,227,199,63,251,236,179,191,253,237,111,199,143,
31,127,211,77,55,29,124,240,193,203,151,47,119,93,247,218,107,175,93,176,96,193,77,55,221,52,116,232,208,175,127,253,235,211,167,79,255,227,31,255,216,209,79,176,162,61,92,80,193,255,218,89,237,135,164,
219,105,211,166,53,54,54,190,240,194,11,156,243,139,46,186,8,114,154,15,59,236,48,219,182,95,125,245,213,215,95,127,253,188,243,206,59,252,240,195,49,198,239,189,247,222,93,119,221,149,78,167,179,217,
236,132,9,19,46,188,240,194,1,3,6,16,66,230,206,157,251,196,19,79,212,213,213,65,209,58,104,112,92,115,134,21,42,107,6,65,176,112,225,194,145,35,71,198,139,135,138,245,110,39,170,67,72,148,7,157,10,119,
44,41,148,38,133,28,30,74,105,93,93,93,42,149,202,100,50,169,84,170,171,37,192,192,228,22,138,25,193,20,34,142,239,67,150,17,33,164,174,174,78,8,1,179,8,90,40,14,149,207,231,17,66,176,226,10,70,204,40,
138,62,254,248,227,13,27,54,140,30,61,250,237,183,223,142,189,54,251,181,253,45,45,45,27,55,110,156,58,117,234,220,185,115,181,214,83,167,78,101,140,189,247,222,123,67,134,12,129,68,196,169,83,167,246,
234,213,235,209,71,31,237,222,189,251,213,87,95,253,220,115,207,45,92,184,80,8,81,81,81,113,253,245,215,207,159,63,255,157,119,222,201,229,114,7,202,78,194,26,217,92,46,183,97,195,134,179,207,62,251,253,
247,223,167,148,126,233,75,95,138,162,104,213,170,85,221,186,117,131,5,130,167,156,114,74,223,190,125,255,250,215,191,14,28,56,240,218,107,175,125,228,145,71,150,44,89,146,201,100,122,244,232,113,235,
173,183,190,254,250,235,111,189,245,22,172,153,86,133,61,5,224,38,164,148,230,243,121,215,117,159,122,234,169,51,206,56,99,232,208,161,75,150,44,233,82,81,226,253,222,142,226,245,155,186,80,213,25,99,
236,121,30,120,218,124,223,151,82,46,95,190,156,115,222,189,123,119,199,113,230,205,155,55,107,214,172,68,34,49,112,224,192,237,219,183,91,150,53,124,248,112,24,164,149,82,247,222,123,239,186,117,235,
18,137,196,11,47,188,96,89,214,207,126,246,179,117,235,214,5,65,176,96,193,130,158,61,123,130,61,98,140,45,92,184,112,206,156,57,109,109,109,27,55,110,124,239,189,247,198,141,27,39,63,83,125,193,142,24,
50,100,200,97,135,29,54,97,194,132,73,147,38,141,24,49,34,8,130,108,54,59,116,232,208,243,206,59,239,236,179,207,174,173,173,173,171,171,35,132,220,116,211,77,97,24,94,127,253,245,215,92,115,205,174,93,
187,190,249,205,111,194,116,115,202,148,41,231,158,123,238,67,15,61,52,109,218,180,25,51,102,156,116,210,73,167,156,114,138,16,226,157,119,222,121,241,197,23,159,126,250,233,87,95,125,21,166,173,109,109,
109,158,231,253,224,7,63,80,74,93,119,221,117,95,255,250,215,179,217,236,183,190,245,45,93,88,235,7,194,183,179,250,21,223,157,181,181,181,189,123,247,62,251,236,179,33,252,7,174,148,108,54,91,89,89,153,
207,231,171,170,170,64,82,111,222,188,249,149,87,94,153,57,115,230,203,47,191,252,218,107,175,13,27,54,108,195,134,13,81,20,77,158,60,249,162,139,46,154,57,115,230,249,231,159,255,231,63,255,249,196,19,
79,60,250,232,163,211,233,116,39,182,83,21,213,97,198,24,239,216,177,35,147,201,140,29,59,150,49,54,112,224,192,32,8,102,205,154,213,175,95,191,84,42,149,203,229,134,14,29,186,105,211,38,152,47,185,174,
11,151,204,178,172,67,15,61,244,130,11,46,152,57,115,230,229,151,95,254,221,239,126,183,177,177,17,166,200,31,126,248,225,246,237,219,215,173,91,247,236,179,207,62,255,252,243,117,117,117,48,209,154,60,
121,242,159,254,244,167,43,175,188,114,205,154,53,23,93,116,17,46,20,34,232,172,126,117,196,138,21,43,40,165,99,198,140,177,109,123,228,200,145,155,54,109,90,178,100,201,168,81,163,96,186,210,163,71,15,
120,40,198,141,27,119,241,197,23,63,240,192,3,211,167,79,191,231,158,123,206,58,235,172,35,143,60,146,49,246,230,155,111,134,97,184,112,225,194,153,51,103,206,157,59,55,147,201,192,42,135,78,244,115,127,
54,224,54,78,38,147,47,190,248,226,144,33,67,202,202,202,56,231,189,123,247,190,244,210,75,167,76,153,178,117,235,214,157,59,119,110,218,180,169,178,178,242,236,179,207,134,33,176,127,255,254,135,30,122,
104,109,109,45,164,225,198,105,85,6,84,228,133,77,36,18,153,76,102,206,156,57,111,188,241,134,16,226,227,143,63,222,184,113,227,91,111,189,245,242,203,47,19,66,86,172,88,177,125,251,246,17,35,70,100,179,
217,115,206,57,167,166,166,230,225,135,31,118,93,183,174,174,110,246,236,217,99,199,142,237,232,248,184,104,167,52,16,94,16,90,233,172,246,131,116,235,219,183,111,58,157,134,165,78,144,42,80,87,87,119,
217,101,151,221,113,199,29,167,158,122,234,143,127,252,227,149,43,87,94,121,229,149,63,252,225,15,15,61,244,208,19,78,56,161,165,165,165,87,175,94,215,94,123,237,242,229,203,47,187,236,178,239,126,247,
187,3,6,12,56,239,188,243,74,74,74,104,97,203,162,120,65,12,204,168,97,138,155,207,231,123,244,232,1,33,236,184,240,16,45,212,168,233,196,80,201,208,161,67,39,77,154,52,97,194,132,67,15,61,116,232,208,
161,176,238,19,99,60,116,232,208,113,227,198,29,118,216,97,103,159,125,246,113,199,29,247,232,163,143,198,251,132,117,41,134,13,27,118,240,193,7,67,251,135,13,27,6,237,103,140,149,151,151,79,156,56,241,
200,35,143,156,50,101,10,72,58,240,20,196,11,213,25,99,241,202,84,72,250,135,129,184,178,178,114,243,230,205,95,152,87,82,41,245,216,99,143,245,233,211,231,200,35,143,180,109,251,172,179,206,122,254,249,
231,85,161,192,19,44,173,235,219,183,111,91,91,219,246,237,219,55,110,220,120,197,21,87,148,151,151,51,198,190,246,181,175,165,82,169,55,222,120,35,147,201,236,239,70,238,5,136,6,68,81,244,244,211,79,
15,30,60,248,208,67,15,165,148,158,124,242,201,175,190,250,106,46,151,75,38,147,8,161,40,138,42,43,43,7,12,24,160,181,174,169,169,249,248,227,143,175,189,246,218,138,138,10,203,178,110,188,241,198,40,
138,222,121,231,29,72,10,66,8,21,215,71,131,129,0,252,110,213,213,213,132,144,157,59,119,66,205,159,3,216,229,221,248,34,188,170,113,56,38,94,46,74,41,133,210,57,112,187,219,182,13,174,44,16,178,3,7,14,
188,252,242,203,7,13,26,4,57,239,96,124,97,222,9,86,38,246,243,161,66,73,94,66,72,54,155,5,225,11,243,54,8,122,86,84,84,52,53,53,109,216,176,97,234,212,169,180,104,203,141,207,207,196,137,19,71,141,26,
5,13,128,245,46,45,45,45,190,239,175,90,181,234,15,127,248,67,20,69,137,68,226,224,131,15,46,41,41,185,245,214,91,225,167,255,223,255,251,127,15,62,248,224,144,33,67,214,172,89,51,117,234,212,231,159,
127,254,253,247,223,199,24,207,157,59,119,236,216,177,147,39,79,158,61,123,246,210,165,75,65,148,31,118,216,97,189,123,247,254,127,255,239,255,109,223,190,125,202,148,41,37,37,37,63,250,209,143,224,4,
62,252,240,195,191,251,221,239,198,140,25,243,209,71,31,193,201,132,117,9,157,210,47,84,168,87,242,238,187,239,142,25,51,230,194,11,47,60,231,156,115,90,91,91,27,27,27,151,44,89,242,218,107,175,193,29,
28,7,202,165,148,239,189,247,30,92,214,95,252,226,23,31,124,240,193,203,47,191,204,57,63,229,148,83,94,125,245,213,249,243,231,219,182,189,104,209,162,73,147,38,29,113,196,17,179,103,207,238,172,89,26,
44,55,137,167,31,176,162,115,237,218,181,131,7,15,14,195,112,236,216,177,48,54,231,243,249,193,131,7,175,93,187,118,200,144,33,15,61,244,16,46,84,216,6,35,69,41,61,229,148,83,62,248,224,131,249,243,231,
67,23,106,107,107,93,215,133,63,130,32,104,109,109,93,188,120,49,56,29,135,13,27,166,181,254,245,175,127,13,106,254,221,119,223,189,238,186,235,224,246,251,2,210,122,26,26,26,106,107,107,199,143,31,255,
225,135,31,14,29,58,116,233,210,165,171,87,175,190,240,194,11,9,33,131,6,13,74,167,211,179,102,205,226,156,159,126,250,233,47,189,244,210,226,197,139,49,198,139,23,47,126,239,189,247,142,57,230,152,247,
222,123,111,245,234,213,150,101,173,89,179,102,209,162,69,112,237,96,89,46,60,68,95,76,108,113,143,128,75,198,178,172,117,235,214,41,165,6,13,26,4,43,75,22,47,94,124,207,61,247,64,212,5,34,194,7,31,124,
240,179,207,62,235,251,254,41,167,156,82,95,95,255,222,123,239,193,112,24,87,233,58,32,237,239,106,196,149,230,96,93,54,20,227,4,77,230,186,46,36,177,164,82,169,124,62,15,90,45,149,74,245,237,219,119,
192,128,1,119,222,121,39,204,91,108,219,78,165,82,29,29,191,56,58,28,175,187,66,157,183,252,34,214,46,80,14,79,107,157,201,100,86,174,92,9,41,13,107,215,174,173,169,169,217,176,97,195,219,111,191,141,
16,218,186,117,235,198,141,27,7,12,24,144,72,36,78,61,245,212,173,91,183,254,227,31,255,208,90,239,220,185,243,229,151,95,158,62,125,250,95,255,250,87,72,20,1,85,13,162,4,70,125,215,117,131,32,56,237,
180,211,14,58,232,160,187,238,186,43,158,249,23,175,115,239,196,21,63,147,39,79,30,62,124,56,36,65,173,93,187,118,211,166,77,45,45,45,8,161,137,19,39,78,156,56,17,172,119,255,254,253,27,27,27,33,164,214,
213,42,96,28,118,216,97,35,70,140,0,173,185,122,245,234,109,219,182,53,52,52,32,132,134,15,31,94,94,94,142,16,162,148,86,87,87,43,165,202,203,203,155,155,155,227,225,30,82,194,32,165,1,214,76,247,232,
209,227,194,11,47,244,125,127,222,188,121,16,128,254,2,30,94,140,241,214,173,91,87,173,90,117,238,185,231,66,141,130,151,95,126,249,242,203,47,7,223,86,124,182,57,231,217,108,246,111,127,251,219,136,17,
35,174,184,226,138,37,75,150,140,24,49,226,231,63,255,121,62,159,47,45,45,61,128,107,190,227,176,192,230,205,155,23,47,94,124,238,185,231,118,235,214,205,178,172,151,95,126,249,178,203,46,3,43,234,186,
46,216,67,48,2,16,75,185,244,210,75,151,45,91,214,179,103,207,59,238,184,3,114,106,227,140,65,168,15,24,215,250,213,90,247,237,219,247,210,75,47,93,188,120,241,182,109,219,210,233,116,92,126,164,43,240,
69,84,0,40,174,127,17,203,86,208,166,160,229,91,90,90,142,61,246,88,165,212,162,69,139,74,75,75,111,185,229,150,165,75,151,254,230,55,191,201,102,179,8,33,88,187,3,55,19,72,192,124,62,175,11,21,82,224,
1,136,111,53,198,24,36,113,194,67,210,212,212,20,219,62,200,55,232,44,19,48,115,230,204,165,75,151,66,182,168,109,219,185,92,206,178,44,219,182,215,173,91,135,16,114,28,167,181,181,245,208,67,15,181,109,
251,246,219,111,71,8,73,41,161,6,68,105,105,41,66,104,208,160,65,201,100,242,240,195,15,135,60,188,202,202,202,237,219,183,199,75,79,42,43,43,175,190,250,234,57,115,230,44,93,186,212,113,156,161,67,135,
166,82,169,219,110,187,13,146,38,65,97,192,135,193,119,66,10,155,17,124,126,96,108,3,161,255,151,191,252,229,185,231,158,59,228,144,67,82,169,212,200,145,35,167,79,159,126,212,81,71,221,118,219,109,241,
250,223,56,6,20,69,209,229,151,95,222,173,91,183,159,253,236,103,8,33,72,166,4,177,14,129,194,146,146,146,108,54,219,137,57,73,177,72,133,65,5,194,124,31,125,244,209,17,71,28,65,8,25,58,116,232,199,31,
127,76,41,221,188,121,243,232,209,163,41,165,142,227,44,93,186,52,142,235,129,102,13,195,112,216,176,97,175,190,250,42,12,141,80,156,11,110,81,24,48,96,37,1,76,55,85,161,46,32,43,236,58,3,147,40,184,10,
251,91,234,113,206,55,110,220,56,100,200,16,223,247,7,14,28,248,232,163,143,238,216,177,35,12,195,17,35,70,12,31,62,124,199,142,29,144,144,52,98,196,136,210,210,210,73,147,38,193,125,85,82,82,210,220,
220,12,254,99,84,72,236,67,69,134,47,126,24,59,235,254,249,12,192,189,145,72,36,8,33,185,92,14,66,165,235,215,175,7,85,1,131,196,11,47,188,240,163,31,253,168,87,175,94,77,77,77,19,38,76,120,237,181,215,
192,116,196,21,115,186,218,208,126,160,128,105,88,188,152,21,52,16,184,79,226,114,22,241,20,5,33,20,4,65,50,153,92,178,100,201,220,185,115,227,45,223,32,104,187,71,224,254,87,69,91,12,198,209,222,78,105,
63,36,154,147,66,101,67,8,253,67,130,108,34,145,200,102,179,241,150,108,170,176,69,39,180,100,192,128,1,61,122,244,184,243,206,59,193,28,37,147,201,68,34,1,214,18,110,45,80,75,240,32,92,127,253,245,240,
44,236,216,177,227,214,91,111,221,177,99,71,60,90,199,185,152,112,14,59,203,94,61,246,216,99,31,126,248,33,132,191,226,132,126,173,245,115,207,61,55,111,222,60,132,16,198,184,188,188,252,246,219,111,191,
224,130,11,158,124,242,201,174,230,88,125,252,241,199,63,252,240,195,120,55,35,152,31,10,33,230,205,155,247,196,19,79,196,30,162,31,254,240,135,87,95,125,245,47,127,249,203,184,166,41,228,51,64,199,31,
125,244,81,200,193,88,177,98,197,143,126,244,35,88,83,37,139,118,7,220,127,192,175,60,241,196,19,183,223,126,251,133,23,94,248,228,147,79,170,66,229,124,200,94,96,133,138,206,48,157,187,235,174,187,238,
188,243,206,113,227,198,221,115,207,61,27,54,108,72,38,147,113,13,181,253,218,206,142,136,35,96,144,55,252,171,95,253,234,194,11,47,124,226,137,39,96,174,24,47,113,129,65,42,46,55,121,239,189,247,222,
118,219,109,135,28,114,200,111,127,251,219,109,219,182,21,47,183,128,238,219,182,93,90,90,218,163,71,143,71,30,121,4,44,198,156,57,115,30,120,224,1,86,180,29,87,23,97,191,143,79,164,176,175,73,113,114,
33,172,74,1,115,147,201,100,186,117,235,118,252,241,199,207,155,55,143,115,62,100,200,16,199,113,254,252,231,63,195,133,129,89,62,20,192,131,72,31,108,152,148,72,36,226,65,23,76,12,184,181,132,16,158,
231,149,148,148,108,219,182,141,20,42,158,14,29,58,116,235,214,173,32,104,58,75,82,128,166,132,69,154,96,4,81,33,255,26,58,8,246,40,155,205,194,114,93,81,216,211,121,245,234,213,208,242,119,223,125,183,
182,182,22,18,67,33,37,52,46,158,247,221,239,126,119,195,134,13,143,63,254,120,188,68,160,177,177,241,229,151,95,134,24,138,148,242,197,23,95,172,173,173,197,133,37,213,157,104,215,226,180,191,100,50,
169,148,170,173,173,133,228,90,74,233,176,97,195,126,252,227,31,247,235,215,111,243,230,205,168,48,40,194,79,31,123,236,177,39,158,120,226,111,126,243,155,166,166,38,80,141,8,161,249,243,231,239,216,177,
3,30,36,33,4,76,60,58,139,120,241,25,46,212,127,209,90,127,240,193,7,223,248,198,55,198,140,25,51,112,224,192,103,158,121,134,115,190,118,237,218,131,14,58,72,41,181,125,251,246,76,38,131,139,170,28,163,
66,194,43,66,8,206,60,42,40,117,48,172,197,201,106,240,232,198,37,117,224,243,160,150,190,152,149,146,74,169,15,62,248,224,232,163,143,30,57,114,36,56,125,195,48,220,186,117,43,72,213,181,107,215,66,155,
181,214,139,23,47,94,183,110,29,140,1,177,117,131,44,17,215,117,193,168,193,37,86,133,141,16,33,227,126,127,119,97,143,128,202,36,132,28,114,200,33,97,24,126,252,241,199,241,147,133,10,91,120,123,158,
183,98,197,138,154,154,154,47,127,249,203,203,150,45,75,36,18,111,191,253,118,188,148,42,86,21,7,164,253,93,16,240,154,0,113,220,16,102,92,80,217,27,110,0,80,75,132,144,237,219,183,87,86,86,46,91,182,
12,21,170,216,236,69,247,235,66,41,208,120,49,83,231,22,181,129,105,21,41,148,199,7,211,17,63,125,112,175,66,48,135,21,182,71,2,123,91,82,82,178,110,221,58,24,68,192,252,182,182,182,130,127,20,33,4,249,
160,96,139,130,32,120,224,129,7,230,204,153,115,240,193,7,95,119,221,117,7,31,124,240,11,47,188,16,75,43,90,216,227,160,19,215,170,162,130,67,55,158,244,218,182,13,150,7,146,88,160,88,91,67,67,195,178,
101,203,70,141,26,213,165,188,89,64,220,126,24,202,193,61,28,71,207,193,97,196,24,123,251,237,183,175,185,230,154,184,232,47,140,185,224,200,247,60,239,218,107,175,245,60,239,140,51,206,56,255,252,243,
251,247,239,191,106,213,42,82,168,241,185,191,159,95,80,2,219,183,111,95,177,98,197,160,65,131,32,101,19,102,110,241,90,186,120,22,132,16,202,231,243,245,245,245,61,123,246,108,105,105,129,0,20,43,148,
205,63,32,196,11,151,17,66,59,118,236,88,180,104,209,224,193,131,33,178,4,233,215,112,9,224,97,137,43,126,180,181,181,213,214,214,14,24,48,0,6,44,152,85,198,202,10,4,107,54,155,221,181,107,215,119,191,
251,93,206,249,141,55,222,56,114,228,200,234,234,234,230,230,102,82,216,93,236,64,117,121,55,246,187,84,141,31,57,82,216,235,18,162,78,32,47,170,171,171,71,143,30,125,230,153,103,114,206,255,250,215,191,
66,29,43,33,196,200,145,35,151,47,95,46,165,156,54,109,26,66,8,238,39,24,140,33,97,0,182,142,68,133,93,85,98,159,16,60,75,176,222,25,28,0,80,150,226,217,103,159,237,220,181,35,48,75,139,205,168,42,236,
182,18,143,19,90,235,198,198,198,210,210,82,40,15,4,154,134,82,10,99,112,83,83,83,34,145,88,176,96,1,104,83,223,247,147,201,36,168,210,243,207,63,63,145,72,220,121,231,157,190,239,151,148,148,228,114,
185,198,198,198,30,61,122,44,88,176,32,94,10,26,135,177,16,66,144,170,210,89,106,21,236,38,56,167,91,91,91,227,117,75,90,235,53,107,214,32,132,202,203,203,107,106,106,64,97,195,248,151,72,36,46,186,232,
162,23,94,120,97,213,170,85,113,245,224,230,230,102,168,73,14,69,137,161,121,177,52,252,252,192,195,22,143,151,112,228,92,46,87,83,83,115,202,41,167,96,140,107,106,106,180,214,203,150,45,59,233,164,147,
114,185,220,186,117,235,192,191,94,60,6,16,66,218,218,218,42,42,42,64,171,217,182,221,220,220,60,100,200,16,88,55,0,222,26,248,137,216,89,5,75,98,193,186,193,139,160,255,58,165,83,123,193,247,253,15,63,
252,80,74,121,214,89,103,193,249,135,128,254,160,65,131,134,12,25,50,123,246,108,74,169,101,89,13,13,13,81,20,45,94,188,152,20,54,49,2,167,20,84,219,6,95,72,188,28,16,78,218,129,77,87,141,151,24,79,157,
58,245,253,247,223,7,57,18,23,12,137,23,155,39,18,137,185,115,231,94,112,193,5,101,101,101,203,151,47,135,245,13,170,80,202,199,212,97,45,6,178,164,192,71,2,55,45,60,194,144,77,145,72,36,96,11,137,120,
126,50,119,238,220,235,174,187,238,144,67,14,89,180,104,17,33,36,153,76,30,123,236,177,47,190,248,226,30,15,14,142,201,248,233,131,73,120,236,173,249,252,128,1,143,51,230,97,26,19,139,33,200,245,130,27,
24,34,158,176,85,27,198,120,203,150,45,201,100,18,238,13,104,33,236,213,30,134,161,239,251,176,205,158,44,148,44,5,155,185,98,197,138,199,31,127,252,138,43,174,200,231,243,115,231,206,133,229,19,113,185,
74,244,239,5,22,62,39,240,60,198,97,241,216,7,1,221,1,241,7,30,156,108,54,219,213,116,42,42,218,95,23,70,4,81,216,73,1,186,0,171,138,33,127,47,46,176,15,114,92,23,246,75,119,93,23,46,205,107,175,189,214,
187,119,239,111,125,235,91,63,255,249,207,107,106,106,146,201,228,110,102,121,127,0,122,14,99,252,192,3,15,164,211,105,8,135,66,88,38,78,214,4,203,3,117,81,166,79,159,30,4,193,188,121,243,190,249,205,
111,222,124,243,205,233,116,58,206,242,60,32,196,139,209,65,105,204,152,49,163,178,178,178,165,165,5,98,185,8,33,184,225,227,45,15,224,195,23,95,124,49,198,248,173,183,222,186,244,210,75,33,141,33,206,
132,33,133,189,114,180,214,48,226,231,114,185,63,252,225,15,191,254,245,175,191,255,253,239,223,124,243,205,224,218,56,128,27,28,238,198,126,159,37,192,237,139,10,103,25,76,100,117,117,245,227,143,63,
254,228,147,79,254,225,15,127,56,241,196,19,63,248,224,131,235,174,187,174,185,185,153,49,182,113,227,198,55,223,124,243,198,27,111,188,253,246,219,255,250,215,191,86,84,84,160,66,188,18,4,4,120,49,113,
97,135,33,152,214,195,164,25,21,4,49,198,248,184,227,142,187,251,238,187,127,242,147,159,220,115,207,61,139,22,45,122,245,213,87,97,137,92,103,245,11,23,54,47,134,112,57,60,174,177,61,130,63,222,125,247,
93,66,200,37,151,92,2,17,19,199,113,190,242,149,175,128,182,94,184,112,225,228,201,147,251,247,239,15,62,128,225,195,135,67,149,193,225,195,135,159,118,218,105,15,60,240,0,60,75,96,188,230,204,153,35,
132,248,234,87,191,10,150,46,12,67,72,82,4,123,1,99,79,103,245,43,118,104,157,115,206,57,223,248,198,55,250,245,235,23,27,145,233,211,167,231,114,185,15,62,248,64,23,10,30,33,132,164,148,215,93,119,93,
109,109,237,115,207,61,39,132,136,203,105,189,255,254,251,71,29,117,84,117,117,53,216,133,1,3,6,156,112,194,9,157,56,85,128,249,0,45,108,78,13,47,66,2,198,248,241,227,183,110,221,10,163,221,186,117,235,
48,198,35,71,142,92,187,118,45,196,61,99,101,6,14,164,213,171,87,31,125,244,209,8,33,165,84,50,153,60,248,224,131,179,217,44,140,244,177,87,158,20,213,91,6,241,7,250,9,38,175,240,156,119,86,191,58,2,114,
12,54,111,222,124,200,33,135,172,95,191,30,206,228,170,85,171,70,142,28,73,8,129,112,121,62,159,255,240,195,15,143,59,238,184,94,189,122,193,213,25,52,104,208,145,71,30,9,142,141,92,46,7,201,100,80,50,
2,218,15,7,63,128,137,158,233,116,250,132,19,78,184,235,174,187,108,219,126,244,209,71,99,103,48,188,27,123,133,131,32,120,227,141,55,8,33,35,71,142,124,234,169,167,226,81,159,22,246,42,59,80,237,239,
130,128,35,196,178,172,226,125,119,192,1,166,181,206,229,114,168,176,51,11,220,6,75,150,44,121,234,169,167,190,241,141,111,252,236,103,63,251,213,175,126,117,223,125,247,245,237,219,183,163,131,127,235,
91,223,154,49,99,198,63,254,241,143,127,252,227,31,143,60,242,200,37,151,92,2,219,133,116,86,227,227,217,108,28,247,0,181,13,3,7,24,58,24,98,65,106,195,88,128,49,94,184,112,225,152,49,99,198,142,29,11,
18,10,34,117,144,27,6,142,88,56,32,28,33,246,14,206,153,51,231,241,199,31,255,202,87,190,210,175,95,63,215,117,139,23,84,192,131,223,89,253,2,255,98,60,243,143,183,110,130,65,4,100,211,151,190,244,165,
177,99,199,194,218,151,206,250,221,206,2,204,69,60,204,129,97,140,7,98,24,224,142,60,242,200,11,47,188,240,221,119,223,141,227,93,249,124,30,190,8,3,119,60,201,185,255,254,251,107,106,106,174,187,238,
186,238,221,187,127,49,157,141,13,120,38,147,169,171,171,3,247,121,156,25,24,215,97,133,121,239,169,167,158,58,113,226,196,63,253,233,79,15,63,252,112,20,69,215,93,119,29,184,198,14,160,87,149,21,237,
41,133,16,202,231,243,53,53,53,197,94,18,152,72,196,153,51,90,235,169,83,167,78,156,56,241,222,123,239,125,226,137,39,108,219,190,242,202,43,69,97,127,71,132,16,204,55,224,128,112,240,68,34,17,134,225,
109,183,221,70,8,249,246,183,191,77,8,233,82,251,49,117,56,196,106,132,56,103,8,17,41,37,101,148,18,18,70,161,214,48,221,132,255,33,132,176,148,82,35,205,57,211,106,207,14,252,221,102,75,156,243,25,51,
102,204,152,49,99,183,143,197,211,26,132,208,195,15,63,252,206,59,239,148,149,149,109,217,178,165,177,177,241,47,127,249,11,204,65,23,44,88,0,158,69,56,236,210,165,75,167,79,159,14,241,65,206,249,226,
197,139,47,187,236,50,84,152,127,188,246,218,107,179,102,205,234,213,171,215,174,93,187,96,233,247,103,11,49,20,223,160,156,243,92,46,87,90,90,10,19,23,93,216,193,18,38,145,80,115,59,246,52,216,182,221,
210,210,114,215,93,119,93,117,213,85,147,39,79,110,105,105,169,174,174,110,104,104,120,254,249,231,51,153,204,223,255,254,247,68,34,241,203,95,254,114,221,186,117,101,101,101,233,116,26,238,167,243,207,
63,159,49,246,221,239,126,23,12,101,24,134,127,254,243,159,23,46,92,120,247,221,119,127,237,107,95,59,252,240,195,119,237,218,213,167,79,159,29,59,118,60,255,252,243,113,190,111,39,78,73,113,97,127,206,
85,171,86,157,127,254,249,191,252,229,47,119,238,220,217,214,214,86,93,93,189,99,199,14,72,66,2,113,12,23,2,22,180,90,150,245,183,191,253,13,204,211,250,245,235,111,191,253,246,135,30,122,168,164,164,
228,231,63,255,121,188,107,238,172,89,179,58,209,75,161,11,245,92,99,167,17,66,72,41,181,122,245,234,83,78,57,101,245,234,213,80,17,6,214,235,140,29,59,22,202,40,130,97,5,211,9,78,214,25,51,102,252,226,
23,191,248,221,239,126,7,67,20,236,125,0,169,38,255,248,199,63,174,187,238,186,123,238,185,39,151,203,61,241,196,19,177,60,133,221,161,226,59,54,174,212,189,95,1,43,179,110,221,186,222,189,123,67,184,
223,178,172,21,43,86,32,132,118,238,220,217,220,220,12,26,244,161,135,30,74,165,82,191,250,213,175,214,175,95,95,85,85,21,69,209,27,111,188,1,182,248,169,167,158,186,236,178,203,142,62,250,104,74,233,
15,127,248,67,152,46,195,97,59,55,214,185,71,98,27,250,255,219,187,243,104,201,202,242,94,252,207,59,238,161,234,12,61,208,208,64,51,216,66,11,205,16,13,10,120,149,65,17,28,32,34,14,56,224,112,77,140,
222,232,189,198,168,209,228,167,201,90,185,89,98,174,89,25,84,110,156,240,138,154,160,162,160,136,128,76,34,162,32,138,56,48,8,200,60,79,221,103,170,170,189,247,59,253,254,120,168,157,35,246,33,125,224,
116,119,209,126,63,203,229,58,244,169,83,103,239,170,58,187,190,245,188,207,251,190,188,66,214,158,123,238,121,218,105,167,113,230,184,235,174,187,126,248,195,31,126,235,91,223,226,196,201,229,37,49,92,
57,136,223,227,249,91,215,95,127,253,228,228,36,239,190,193,111,150,68,196,165,226,165,58,254,20,147,243,78,75,169,178,204,53,141,224,238,180,37,125,112,98,138,68,148,132,16,137,136,40,120,47,148,122,
98,127,22,188,54,109,251,88,181,255,194,145,226,175,255,250,175,219,91,134,16,248,91,109,151,121,251,93,33,196,25,103,156,113,225,133,23,242,60,209,91,111,189,149,215,155,108,95,213,237,253,191,225,13,
111,216,228,97,60,177,143,106,220,72,51,62,62,222,54,11,182,31,57,248,239,154,251,83,195,112,255,106,174,10,243,149,71,12,183,39,104,151,90,251,225,15,127,184,219,110,187,189,249,205,111,126,203,91,222,
242,240,195,15,239,181,215,94,23,93,116,17,95,4,212,112,63,79,55,220,184,142,247,34,238,118,187,222,251,115,206,57,103,183,221,118,123,239,123,223,251,233,79,127,250,154,107,174,161,225,60,224,39,182,
130,210,66,239,23,52,111,251,117,30,80,230,79,188,188,138,28,127,247,182,219,110,251,194,23,190,240,147,159,252,68,13,103,0,115,129,131,19,149,115,238,223,255,253,223,219,95,212,235,245,78,61,245,212,
159,252,228,39,126,73,119,243,122,252,247,59,254,69,92,24,26,31,31,151,82,30,125,244,209,71,31,125,52,17,57,231,30,121,228,145,139,47,190,248,130,11,46,104,63,102,112,21,169,215,235,241,69,181,213,239,
247,63,241,137,79,252,221,223,253,221,7,63,248,193,143,125,236,99,188,85,239,146,144,243,22,249,230,18,245,196,196,4,215,80,184,48,223,142,192,136,225,78,147,124,202,60,7,198,90,187,235,174,187,158,120,
226,137,223,252,230,55,31,122,232,161,94,175,247,229,47,127,249,93,239,122,215,177,199,30,123,225,133,23,206,207,130,143,185,142,133,225,122,79,239,126,247,187,249,211,160,24,46,208,187,36,231,197,97,
131,63,122,241,197,159,95,249,252,102,221,158,93,251,246,189,207,62,251,188,242,149,175,252,206,119,190,243,224,131,15,198,24,79,61,245,212,15,126,240,131,47,123,217,203,206,62,251,108,46,69,113,169,139,
119,100,148,243,150,239,125,232,161,135,78,57,229,148,191,250,171,191,250,139,191,248,139,127,254,231,127,94,146,131,39,162,20,41,166,40,164,8,206,199,152,98,221,72,41,165,86,180,217,87,86,177,223,250,
245,11,124,135,130,243,74,107,18,36,133,60,252,101,39,25,99,175,250,222,25,198,228,99,99,93,158,37,157,134,59,252,46,225,7,35,142,158,220,111,193,81,236,241,167,39,183,127,255,92,201,231,162,224,71,62,
242,17,94,83,186,29,199,105,199,232,23,251,39,205,23,71,254,45,60,218,187,97,195,134,21,43,86,240,212,46,62,72,238,214,226,166,219,182,170,58,24,12,198,198,198,102,103,103,87,174,92,185,243,206,59,143,
143,143,63,244,208,67,119,223,125,247,220,220,92,183,219,229,135,174,44,203,189,247,222,155,91,244,156,115,189,94,175,219,237,242,75,144,63,36,241,20,49,173,245,204,204,204,142,59,238,184,106,213,170,
101,203,150,221,125,247,221,131,193,224,161,135,30,226,129,117,206,142,75,85,168,231,211,108,199,164,150,45,91,182,106,213,170,229,203,151,223,118,219,109,188,128,197,196,196,4,247,87,241,223,63,215,3,
56,20,242,171,159,231,109,112,197,113,249,242,229,123,238,185,167,148,242,134,27,110,120,240,193,7,121,27,189,37,57,206,133,248,225,62,141,60,2,213,142,232,241,182,43,211,211,211,252,100,21,69,49,51,51,
195,107,124,16,209,186,117,235,184,49,151,123,30,218,78,181,157,119,222,121,249,242,229,69,81,92,125,245,213,252,78,201,215,95,190,159,241,241,241,135,31,126,152,47,229,91,122,0,139,223,59,83,74,227,227,
227,143,60,242,72,81,20,243,47,82,252,102,32,135,93,137,19,19,19,251,238,187,239,35,143,60,194,91,29,242,192,150,49,102,114,114,114,245,234,213,82,202,118,53,111,158,168,71,91,126,3,189,56,92,171,159,
199,109,173,181,211,211,211,60,68,200,67,7,252,6,147,82,234,247,251,43,86,172,224,63,58,126,46,184,225,103,229,202,149,31,249,200,71,206,60,243,204,139,46,186,72,12,151,224,22,195,245,218,150,170,176,
29,99,82,74,74,41,124,72,148,162,181,122,151,189,15,105,154,230,252,175,127,110,73,238,63,197,120,236,235,254,71,74,116,249,249,95,89,190,114,50,122,209,29,43,180,201,150,54,13,47,226,120,82,226,7,159,
135,173,66,8,252,118,184,21,94,207,220,103,207,91,254,246,251,125,190,170,240,235,161,211,233,240,254,156,237,215,89,150,113,127,14,111,143,20,66,232,118,187,28,109,249,175,128,235,175,19,19,19,107,215,
174,237,116,58,55,220,112,67,85,85,27,54,108,152,152,152,104,91,194,56,76,44,95,190,252,225,135,31,238,118,187,115,115,115,92,233,20,66,228,121,190,113,227,198,118,27,219,182,236,186,84,239,23,188,38,
35,127,232,226,119,183,251,239,191,127,135,29,118,224,55,59,14,34,124,120,220,217,233,231,109,80,194,141,134,101,89,242,134,97,124,132,147,147,147,109,243,253,18,190,5,47,246,253,206,15,183,173,225,191,
83,254,247,118,121,22,62,163,246,121,228,111,241,231,147,233,233,105,94,184,158,187,59,150,234,125,129,95,6,237,92,106,46,13,118,58,29,33,196,35,143,60,194,7,236,135,59,193,242,245,156,111,223,110,39,
222,254,44,151,231,219,245,25,219,227,220,228,117,140,95,45,101,89,62,240,192,3,19,19,19,252,50,110,87,210,125,242,248,193,204,243,156,207,34,132,208,190,231,246,122,61,94,69,155,31,237,177,177,49,238,
174,228,50,10,111,190,213,206,105,105,223,223,219,215,219,248,248,56,255,249,135,121,51,225,150,45,91,198,11,26,46,201,193,19,81,93,187,201,201,206,178,93,255,160,169,171,239,159,247,21,138,206,249,104,
51,227,221,230,190,110,213,170,85,171,54,253,13,165,156,119,222,135,177,110,57,24,12,214,237,127,176,86,242,190,59,127,29,35,25,99,249,163,149,16,66,74,33,133,172,235,37,107,191,109,199,68,248,161,87,
255,213,156,113,190,208,240,11,157,71,3,139,162,216,101,151,93,238,191,255,254,59,238,184,131,159,131,249,3,157,139,253,148,51,255,85,203,221,27,121,158,243,230,150,124,41,105,123,170,120,245,147,52,156,
33,206,163,36,252,214,187,97,195,134,123,238,185,135,119,14,228,13,36,184,23,162,105,26,222,114,151,63,217,112,254,224,121,145,237,162,51,28,25,133,16,77,211,12,6,131,135,31,126,248,145,71,30,225,35,225,
215,214,19,46,0,108,18,191,100,185,181,177,170,170,94,175,55,53,53,197,171,235,55,77,195,173,168,252,247,207,229,1,254,120,192,175,123,142,215,124,85,226,75,103,85,85,247,220,115,207,157,119,222,233,156,
219,58,61,157,227,227,227,247,223,127,63,119,176,241,103,24,30,197,224,184,147,101,25,191,168,218,221,243,248,35,254,236,236,236,195,15,63,204,151,99,190,192,17,81,140,113,122,122,122,122,122,154,151,
182,230,158,42,190,180,229,121,94,20,5,239,97,221,78,194,216,162,231,197,31,72,56,130,243,34,68,237,251,180,115,142,63,3,240,35,207,215,41,126,93,241,231,55,190,194,86,85,85,215,245,3,15,60,192,19,242,
184,171,137,63,7,46,109,97,126,147,120,112,141,131,81,28,206,242,110,63,149,241,95,77,251,249,109,118,118,182,109,180,224,189,48,180,214,199,28,115,204,190,251,238,123,202,41,167,240,235,173,237,81,94,
250,197,255,132,72,36,148,148,20,105,110,118,182,51,185,75,34,186,245,215,215,44,201,125,199,16,246,124,198,179,148,150,183,221,240,115,165,141,148,66,107,43,132,144,219,168,61,145,63,146,113,121,169,
221,155,237,191,188,234,62,121,237,32,190,16,130,103,202,182,159,27,219,234,17,95,247,56,61,196,225,106,243,124,65,230,84,193,133,177,182,15,138,219,27,54,108,216,112,199,29,119,180,121,171,125,93,241,
213,41,207,243,217,217,89,190,118,241,37,130,255,162,185,198,193,141,221,252,173,39,118,81,93,232,253,130,215,192,231,172,192,101,5,142,20,237,213,134,135,200,57,43,240,145,243,181,148,231,153,113,54,
226,30,54,78,123,126,184,217,97,219,125,184,36,207,203,98,223,239,218,65,45,62,84,190,186,242,197,159,75,45,97,184,225,194,220,220,28,15,60,182,101,96,238,167,226,49,186,165,186,126,182,131,93,252,70,
198,15,221,236,236,44,199,238,182,116,21,134,11,242,208,48,66,136,223,158,140,216,94,18,165,148,156,176,219,79,20,155,188,142,241,19,81,85,213,242,229,203,249,29,121,105,175,171,237,52,53,110,131,156,
95,162,110,151,173,229,26,54,159,221,252,26,4,63,41,220,138,153,134,211,211,219,147,157,255,65,174,237,238,104,119,32,90,170,143,64,74,233,166,105,58,203,118,209,74,221,240,203,171,40,137,170,174,149,
92,68,104,92,176,20,17,98,144,82,105,205,107,73,72,34,138,41,213,77,24,31,43,180,150,49,134,148,200,88,227,92,35,72,44,225,251,116,251,166,197,127,186,52,111,121,148,133,126,196,207,219,161,84,74,249,
200,35,143,240,166,216,28,77,248,83,84,155,32,23,155,150,248,169,109,63,133,240,172,210,78,167,195,11,193,240,199,154,246,98,209,174,3,192,127,18,252,185,173,221,94,149,95,76,252,226,230,15,118,109,175,
21,223,33,255,197,114,135,25,111,57,195,159,83,123,189,30,31,124,175,215,227,41,38,97,72,13,55,5,89,170,63,9,126,245,207,127,171,136,195,25,99,124,240,124,61,229,107,16,87,194,248,235,118,89,28,41,37,
15,177,181,107,190,204,191,54,109,233,72,180,97,195,134,101,203,150,197,225,238,0,28,43,249,154,18,135,147,247,141,49,237,99,152,82,226,101,38,137,136,159,145,182,172,34,135,155,241,132,16,56,233,242,
69,129,223,105,184,76,203,79,223,18,86,5,22,98,140,105,23,103,224,5,137,219,136,198,47,12,46,30,183,115,74,218,209,186,246,30,218,217,205,98,184,235,32,151,142,228,112,2,236,22,61,254,246,239,154,134,
173,177,124,209,231,131,105,175,164,109,224,230,43,64,251,9,199,24,179,227,142,59,94,124,241,197,60,158,27,135,107,23,240,139,112,9,143,83,74,41,164,8,33,70,74,66,200,177,241,49,33,5,45,221,107,86,72,
73,130,92,227,35,37,33,168,40,115,33,72,41,177,249,3,97,75,171,173,196,115,169,79,12,247,187,222,210,237,215,124,113,230,61,156,203,178,20,195,125,219,195,112,79,105,33,196,212,212,20,191,251,166,225,
198,235,28,43,121,130,32,17,181,99,250,85,85,181,31,68,211,112,13,127,126,145,240,133,180,157,232,205,239,226,60,16,196,23,79,254,46,191,139,115,4,228,15,72,156,107,23,59,93,108,161,247,11,63,220,55,65,
255,246,90,34,52,156,161,219,46,39,199,245,57,254,154,51,58,159,117,219,65,203,143,64,123,93,109,71,159,151,228,121,89,236,251,93,187,166,4,63,86,105,184,147,54,71,240,185,185,57,57,156,21,55,54,54,198,
111,100,188,115,41,23,134,249,243,243,18,230,135,246,19,44,63,185,92,180,230,42,53,191,186,248,217,231,119,219,246,242,216,22,200,196,176,31,128,63,42,16,145,82,170,219,237,182,207,203,66,215,49,26,182,
193,240,52,124,34,226,40,191,84,239,119,60,110,198,7,208,254,193,182,31,228,248,80,249,99,6,95,252,121,42,33,215,230,249,141,184,157,141,205,119,216,86,58,210,112,74,31,63,227,243,195,247,18,238,2,16,
124,99,50,75,130,66,76,82,73,107,77,18,73,136,69,12,38,45,88,85,77,244,104,24,119,222,27,107,246,220,251,15,72,138,59,111,191,165,200,84,183,219,145,66,16,241,159,77,80,90,73,177,100,47,53,126,176,248,
201,104,131,255,227,220,94,207,91,0,140,95,136,92,192,111,215,161,96,79,120,249,15,53,220,84,157,63,239,234,225,102,220,237,122,126,237,235,160,157,179,204,89,83,14,103,216,113,107,35,223,91,219,26,200,
183,140,195,205,205,120,177,146,118,226,57,95,140,196,188,21,6,104,120,229,226,31,231,215,92,219,195,183,132,189,122,124,72,109,166,231,79,135,243,231,21,114,33,36,13,251,113,57,17,182,133,213,182,155,
71,12,215,211,110,255,254,249,138,188,165,163,42,143,206,180,217,93,13,119,109,230,114,93,59,121,159,75,20,74,41,254,4,201,151,126,126,48,249,138,204,151,27,254,0,205,239,100,97,184,129,114,251,246,201,
228,112,86,230,22,61,175,246,145,228,39,72,15,87,234,137,243,182,213,104,71,45,105,216,111,215,190,42,218,207,27,237,191,240,7,39,190,198,109,133,227,231,81,126,26,182,136,209,176,158,199,239,112,237,
107,70,205,155,107,194,21,151,118,249,133,107,175,189,246,167,63,253,41,15,74,136,121,221,153,75,251,249,167,105,156,177,90,73,169,149,174,171,65,57,190,44,235,174,160,180,100,85,213,16,195,250,3,15,245,
49,204,77,63,44,41,40,173,37,145,53,118,91,45,181,213,62,245,252,57,33,12,151,102,220,10,127,167,124,9,229,184,195,207,41,191,66,248,53,192,31,230,249,179,58,31,91,251,35,109,49,201,15,55,154,167,97,169,
140,230,181,202,16,17,119,20,180,201,149,111,201,215,52,190,94,181,151,50,190,79,190,188,167,39,177,103,236,66,239,23,109,120,106,163,64,123,129,106,63,119,181,167,201,7,60,63,179,242,185,115,14,107,123,
189,218,195,94,194,39,107,177,239,119,109,220,167,225,71,199,56,156,184,169,134,205,253,106,184,232,152,29,238,206,195,139,213,115,233,142,63,96,44,225,71,229,249,37,21,26,190,120,218,39,183,109,113,110,
115,5,255,187,24,246,125,241,107,143,47,251,74,41,94,163,189,253,48,176,208,117,140,31,132,182,71,150,31,144,37,156,137,197,145,145,31,115,46,190,164,97,227,19,127,205,65,182,189,49,239,156,66,195,226,
17,119,12,115,9,128,31,13,14,33,109,241,162,125,100,248,185,224,110,183,37,28,93,81,74,117,39,150,155,114,153,72,226,166,107,175,210,70,165,152,22,245,178,93,48,170,106,173,67,240,206,135,162,200,181,
214,187,172,121,90,81,118,150,47,91,113,215,29,191,201,50,155,103,89,74,148,18,25,163,249,33,91,194,170,94,219,1,217,62,205,143,243,86,202,25,148,63,235,180,227,137,114,56,135,212,13,247,37,74,195,117,
121,158,192,113,202,225,162,199,252,164,242,29,182,95,171,225,234,155,243,47,40,237,229,190,141,218,92,196,106,75,71,237,69,153,7,77,248,99,77,91,63,158,159,249,218,207,118,52,28,157,79,195,233,92,52,
188,136,44,237,227,207,151,72,49,79,251,65,153,67,30,253,246,172,38,57,111,253,100,49,28,52,225,32,219,62,65,237,95,239,150,38,134,125,229,237,200,38,55,161,19,81,219,63,206,131,29,252,145,180,125,121,
240,99,206,157,15,92,137,81,195,149,197,184,162,192,159,19,104,184,227,34,63,5,66,136,182,121,107,75,179,195,221,204,249,122,26,135,139,103,181,67,54,98,184,13,137,26,78,61,228,71,224,49,151,84,126,207,
152,95,173,73,75,183,136,216,66,248,161,107,63,202,211,176,206,218,78,34,230,151,189,28,174,2,214,174,85,204,159,208,218,31,228,55,18,51,92,203,115,201,71,255,165,148,74,27,231,26,41,148,139,161,187,108,
87,99,202,228,171,91,111,250,213,146,220,127,119,172,187,195,78,187,217,44,47,138,238,212,198,251,181,228,137,5,66,170,109,51,185,152,159,133,199,252,241,110,133,117,118,121,124,131,159,244,182,94,216,
190,181,243,43,129,63,3,183,127,206,220,116,164,134,75,157,183,89,36,13,167,76,204,255,192,211,190,194,195,112,61,150,246,124,121,68,133,255,142,56,37,183,189,149,109,216,229,123,123,98,81,99,147,239,
23,109,4,228,63,132,118,23,134,249,203,14,182,113,150,115,91,187,58,38,13,211,42,223,131,28,110,248,210,94,171,151,246,249,90,212,251,157,155,183,68,122,27,253,219,191,104,14,85,60,28,196,143,54,23,104,
249,161,110,223,7,221,210,237,53,207,239,191,109,89,68,14,59,64,218,207,36,252,208,241,213,178,173,112,183,111,160,113,216,226,201,87,161,186,174,139,162,224,75,40,159,81,27,25,233,183,175,99,252,219,
219,71,137,111,179,132,139,14,241,243,219,182,149,183,23,207,199,124,212,225,191,20,30,173,229,168,221,94,222,249,57,229,135,37,13,215,44,138,195,110,129,246,133,215,126,186,104,63,194,45,201,241,19,137,
172,187,163,205,59,110,48,119,207,237,55,106,147,185,166,118,141,83,155,61,122,179,96,84,21,66,196,16,181,86,36,104,102,106,230,174,187,239,216,121,215,181,69,167,59,181,225,33,231,26,99,180,148,50,196,
152,101,54,198,24,92,88,194,75,109,59,82,195,175,33,122,220,170,97,91,54,107,31,125,49,92,70,170,253,228,196,111,234,124,141,91,236,67,223,94,16,219,15,253,237,135,72,51,220,236,135,95,61,252,215,200,
81,178,253,56,210,142,31,181,199,198,135,212,134,36,57,28,126,213,191,61,161,175,45,224,137,97,219,141,152,55,123,189,13,31,243,171,134,79,236,209,126,140,246,90,35,134,53,185,246,211,63,23,86,181,214,
60,226,198,9,169,189,190,243,101,148,230,109,202,208,94,154,57,213,45,225,40,213,227,8,195,197,86,127,55,159,205,239,85,104,51,28,95,173,194,112,94,142,247,158,47,79,105,184,184,163,24,110,195,200,173,
72,60,214,223,190,83,170,225,146,174,91,250,188,218,143,251,98,222,96,125,251,82,225,43,41,95,182,248,8,219,118,177,246,253,108,126,181,187,173,10,243,75,104,9,171,242,11,105,223,153,212,112,239,186,54,
67,180,131,179,237,169,137,225,14,97,237,40,103,156,55,24,218,62,236,113,56,239,106,9,171,23,49,6,74,130,136,234,170,154,92,185,211,228,14,107,2,197,239,126,235,223,229,18,141,208,207,205,205,222,115,
239,29,187,238,190,46,203,203,217,217,135,181,72,198,100,214,110,179,173,194,218,144,196,127,14,98,216,65,184,165,95,210,237,31,78,251,118,216,126,196,226,248,216,86,125,104,222,37,87,12,203,162,252,239,
143,121,217,180,159,100,248,101,67,243,58,113,253,188,5,83,249,175,88,14,87,56,111,231,24,240,27,7,95,228,219,75,241,98,207,107,161,247,11,126,84,249,175,140,143,132,67,85,59,68,211,166,43,254,195,156,
31,182,104,120,81,157,255,137,162,253,107,226,202,200,82,69,138,197,190,223,181,239,182,143,105,58,106,163,185,31,174,32,203,207,56,143,191,241,147,210,78,98,227,176,187,36,199,207,143,51,143,242,243,
149,161,45,189,139,223,94,76,84,14,87,150,20,195,130,107,123,226,252,10,228,183,6,158,37,204,143,127,187,234,214,38,175,99,237,237,249,213,219,126,62,89,146,243,18,243,22,56,111,31,100,154,55,163,78,12,
91,65,30,243,183,28,135,157,45,122,94,7,118,59,220,223,190,17,112,203,95,155,97,120,44,139,135,233,150,228,248,163,204,118,220,245,233,206,185,31,92,124,214,204,212,198,68,73,10,145,231,121,92,96,229,
168,223,181,224,245,200,53,142,82,170,235,58,203,172,82,74,166,90,107,147,72,238,181,247,190,66,62,58,84,250,232,95,212,19,93,172,100,147,218,15,103,68,100,173,109,219,167,22,186,61,63,208,188,248,109,
91,231,111,251,65,219,154,89,251,234,92,236,241,136,225,112,18,95,218,252,112,31,14,165,20,239,163,205,51,120,248,15,96,254,167,144,182,57,169,189,222,241,49,240,211,207,51,178,249,77,183,141,32,220,46,
198,47,122,61,156,168,228,135,235,242,240,181,163,189,222,209,240,237,223,123,95,20,197,98,207,107,33,243,107,21,237,167,100,78,66,124,169,138,195,41,8,109,19,12,127,208,228,11,1,191,220,253,112,74,92,
59,104,66,68,91,167,244,216,134,27,110,90,104,135,72,248,49,228,114,169,49,134,151,128,105,35,172,82,138,63,235,243,178,225,252,153,155,47,58,66,8,238,13,141,195,46,97,206,232,92,8,231,102,202,165,109,
151,220,36,254,48,211,150,72,219,77,49,218,145,4,126,181,204,111,9,224,167,131,205,127,207,227,14,153,182,144,28,134,125,198,91,84,155,134,185,98,170,135,91,170,240,199,30,190,65,59,6,194,215,101,62,78,
190,116,182,59,250,208,112,227,156,54,124,243,211,177,84,199,105,76,22,163,55,214,10,169,76,54,233,124,20,73,144,27,44,213,253,151,69,225,250,115,74,105,169,212,154,221,246,9,222,213,206,133,205,190,94,
111,9,237,112,121,59,128,179,116,165,148,255,226,151,242,229,189,125,137,166,97,239,138,30,78,79,110,95,51,109,115,63,13,107,174,109,74,243,195,237,69,248,143,189,45,70,202,97,23,83,91,173,111,247,91,
106,19,82,24,174,120,208,94,153,249,101,38,159,104,11,196,66,239,23,124,61,225,107,5,95,54,221,112,201,11,142,5,124,3,49,28,225,105,171,143,237,191,204,255,66,15,103,30,211,111,183,192,61,121,139,125,
191,227,24,20,134,155,135,205,127,33,137,97,145,158,199,166,249,104,219,2,182,16,130,27,0,248,77,109,169,142,159,223,143,184,226,216,30,85,155,192,230,95,231,249,145,108,135,251,248,165,18,231,53,218,
182,19,3,138,162,224,181,74,230,175,139,247,152,235,152,25,238,82,217,142,122,181,61,172,75,117,94,106,216,216,198,239,2,60,238,196,161,179,109,134,137,243,122,106,185,158,34,132,200,178,140,31,1,206,
69,237,200,126,219,120,35,134,179,98,248,189,128,19,197,210,78,192,24,159,220,41,37,138,33,86,179,83,188,204,89,74,162,174,23,241,248,44,184,88,85,140,81,10,225,125,80,70,105,165,131,119,94,168,99,254,
232,205,66,202,91,174,255,113,161,163,115,193,88,43,40,90,99,6,181,203,50,147,120,210,0,239,204,206,49,43,132,165,156,146,0,0,176,20,82,140,68,34,17,105,173,164,20,77,221,132,152,132,144,70,139,68,34,
203,140,208,249,196,142,235,82,138,63,184,232,140,193,244,148,84,75,180,24,86,74,74,36,210,217,81,199,189,145,72,220,114,237,229,50,37,173,85,138,97,108,114,162,170,106,73,66,8,33,181,244,222,55,181,207,
178,173,241,1,15,0,96,17,4,25,109,188,123,116,82,157,84,50,248,64,68,82,75,65,34,198,40,149,18,148,164,148,141,11,74,153,85,123,30,40,83,58,239,155,159,79,206,75,165,138,50,155,155,27,168,197,124,32,92,
176,202,168,141,118,222,211,176,72,233,189,239,148,185,85,81,8,177,122,205,211,243,238,68,217,41,140,209,202,102,194,216,178,204,99,72,41,82,112,193,53,222,213,174,26,84,33,196,37,156,110,5,0,176,84,98,
34,33,133,144,228,189,239,245,6,38,203,202,78,81,228,154,72,122,239,123,131,56,190,98,55,37,165,81,210,245,230,210,210,125,222,182,214,12,250,3,145,34,197,160,141,90,187,239,179,147,84,214,90,101,178,
126,111,32,136,148,146,33,122,174,235,23,197,82,175,195,5,0,240,164,197,152,188,247,49,6,41,5,73,10,49,8,37,108,102,136,4,81,170,235,166,169,155,186,113,181,107,178,188,147,143,175,166,68,179,83,83,214,
88,33,72,16,85,85,83,150,5,45,166,171,106,193,94,213,72,209,90,171,164,74,41,186,198,229,121,54,24,244,175,191,238,186,125,246,59,208,216,142,79,186,63,187,177,169,235,44,203,130,115,130,72,72,161,181,
226,18,69,140,145,215,183,242,219,116,47,50,0,128,77,74,68,82,80,145,231,82,233,152,82,138,129,18,197,72,141,115,221,137,21,227,43,119,53,89,183,26,244,47,57,231,63,124,12,20,151,172,29,217,213,149,206,
59,131,222,220,189,119,255,102,247,181,251,75,101,148,45,165,112,49,184,224,189,49,154,164,48,54,75,49,81,90,178,197,50,1,0,150,80,74,20,130,151,82,24,107,255,115,202,71,140,209,135,198,133,34,183,198,
104,99,109,112,162,92,182,203,216,178,29,66,53,184,234,138,243,102,166,167,243,172,20,50,72,109,230,102,123,52,236,54,220,28,143,183,2,0,17,121,231,165,160,16,188,181,89,158,103,193,55,191,185,241,218,
61,214,238,147,23,101,146,153,8,149,171,43,41,133,115,33,9,10,49,164,148,120,76,141,132,104,215,214,93,178,135,7,0,96,41,24,163,188,139,77,227,120,148,170,174,61,37,82,74,152,188,51,190,114,215,172,156,
160,68,23,127,243,52,18,65,12,23,217,94,146,223,27,82,50,82,45,95,57,81,215,205,117,215,92,185,247,250,63,204,178,82,217,220,215,125,87,87,82,168,186,241,49,122,165,164,16,66,105,185,249,211,14,0,0,182,
14,165,134,235,42,240,58,113,62,120,31,188,15,82,41,171,132,144,58,4,159,217,124,197,154,103,216,188,35,40,157,115,214,105,101,166,82,136,33,54,214,230,137,132,18,34,46,102,166,245,130,81,181,169,155,
24,67,12,161,40,11,34,26,12,106,239,125,102,77,83,213,247,221,245,235,167,63,227,15,139,178,212,89,233,170,185,186,30,20,121,38,72,42,41,5,137,16,162,247,65,72,41,36,229,185,13,97,139,111,80,4,0,176,56,
188,78,69,76,148,4,79,150,37,33,108,86,174,216,105,79,105,59,90,169,11,206,252,124,162,216,45,115,23,82,12,78,44,81,47,147,144,210,55,117,93,55,49,132,178,44,110,185,225,103,107,159,113,160,84,185,50,
153,82,49,250,90,242,225,8,25,66,106,92,179,168,13,93,0,0,182,130,118,250,123,12,209,59,47,136,140,86,214,24,18,68,137,4,37,161,204,228,234,189,149,201,5,137,243,207,60,181,204,173,20,49,132,104,109,86,
213,117,136,94,18,41,173,104,179,123,171,30,111,99,85,37,229,163,75,126,40,37,132,28,206,164,182,179,115,189,91,111,186,102,237,51,254,48,203,11,161,139,102,208,27,84,125,41,146,160,164,30,93,60,68,112,
179,173,144,2,85,1,0,24,53,62,164,44,51,66,80,8,222,88,173,140,205,59,203,138,241,85,58,31,79,49,125,231,171,255,55,198,40,136,132,210,193,59,165,150,108,209,150,20,130,201,172,16,202,90,67,68,141,115,
183,253,250,151,207,56,224,89,66,101,66,154,186,238,19,69,145,132,119,78,200,40,197,82,78,238,6,0,88,34,137,136,87,114,149,121,102,141,209,49,197,16,131,20,66,234,108,106,118,176,235,218,253,165,202,4,
137,75,191,115,154,171,43,231,130,148,50,70,202,50,243,232,44,1,74,105,49,61,78,11,70,85,18,148,98,164,225,210,8,193,251,152,18,37,178,153,17,49,73,37,111,190,225,103,79,91,247,7,198,230,221,137,149,99,
147,43,189,111,72,10,31,188,82,34,197,36,164,140,49,197,176,197,55,210,4,0,88,44,169,132,115,49,17,105,107,108,62,102,138,149,221,201,157,198,38,150,165,148,190,243,213,255,155,23,101,74,73,42,45,68,10,
49,198,16,133,92,154,235,88,34,242,141,211,246,209,109,59,146,143,181,119,119,223,113,227,154,61,158,49,62,185,92,154,177,188,28,31,212,115,90,75,99,50,99,36,70,165,0,96,212,104,173,82,74,206,121,41,69,
150,103,77,227,250,85,147,132,30,155,152,180,229,14,59,236,188,54,203,10,173,196,69,223,250,124,240,94,74,19,99,80,202,14,6,61,34,10,62,121,87,151,101,57,24,52,106,179,215,227,95,56,170,74,161,164,36,
18,33,69,41,164,148,66,27,21,124,16,66,132,16,41,37,173,228,29,183,94,183,254,192,131,124,36,169,236,216,196,14,36,180,247,46,6,39,4,73,33,226,188,237,200,0,0,70,135,150,210,185,166,236,78,78,174,220,
221,148,43,139,238,184,144,210,57,127,238,215,63,87,100,54,198,32,181,161,20,132,148,137,40,45,225,244,80,73,157,178,172,170,70,41,21,156,215,153,145,148,172,209,55,255,250,151,59,175,121,186,201,242,
206,248,120,103,124,149,177,229,236,236,198,65,111,160,53,174,159,0,48,90,82,74,41,81,187,219,81,221,120,155,143,173,217,109,173,233,238,52,62,185,44,198,212,52,245,217,95,253,44,197,144,72,8,33,178,60,
11,209,101,54,239,245,7,89,166,243,220,70,138,180,152,74,230,130,235,170,46,36,132,144,229,25,17,13,250,149,49,70,42,10,73,31,253,226,19,6,94,140,141,143,187,224,231,47,164,170,141,242,110,203,110,208,
7,0,176,104,130,40,145,214,210,251,152,82,74,174,190,240,188,175,26,25,131,223,54,85,204,162,200,122,189,129,79,116,236,9,111,21,90,199,152,172,213,77,179,197,183,102,0,0,88,42,49,4,171,226,89,103,124,
201,72,111,141,14,225,209,77,9,158,124,201,114,225,170,234,2,82,34,94,13,43,197,40,40,101,153,157,158,157,186,235,206,219,166,166,238,93,189,122,87,33,108,164,168,148,144,66,120,231,151,118,195,3,0,128,
37,97,148,168,235,42,179,249,236,244,212,149,223,255,214,245,63,191,82,137,228,221,146,109,80,188,88,41,69,41,181,76,241,166,235,127,122,199,173,55,236,178,235,211,133,210,148,54,127,214,1,0,192,54,118,
254,183,190,112,207,157,55,133,166,223,237,148,131,65,173,148,137,41,218,204,164,39,61,103,105,209,85,85,231,26,155,101,66,144,20,114,110,118,46,203,108,94,228,206,251,166,118,101,167,83,55,141,86,50,
134,208,212,141,144,210,88,19,209,107,5,0,35,38,145,144,82,166,228,164,208,36,146,247,73,107,233,92,208,155,221,59,181,180,170,198,107,37,149,72,82,105,231,155,60,239,134,208,212,85,189,117,182,35,6,0,
120,242,4,37,222,140,87,72,213,235,245,141,181,41,6,173,213,147,159,149,186,232,221,2,173,181,130,132,247,222,90,149,229,121,93,85,68,66,72,165,181,25,244,251,66,10,147,219,168,68,211,56,99,172,160,180,
84,211,17,0,0,150,138,119,174,169,83,167,180,68,162,9,49,198,164,149,244,206,61,206,6,126,91,148,209,50,133,96,11,219,184,164,148,13,161,142,33,150,101,225,3,26,168,0,224,169,65,73,29,19,13,170,154,40,
101,153,149,74,18,201,20,211,162,54,166,218,164,69,71,213,186,106,164,146,82,169,166,113,214,26,99,116,93,55,209,57,171,146,213,121,227,195,220,108,79,41,169,149,162,20,7,85,205,203,178,2,0,140,142,78,
217,105,92,19,72,56,231,51,163,146,76,41,81,158,103,110,27,245,214,75,165,92,8,66,154,186,154,206,242,60,70,81,59,167,141,193,110,127,0,240,84,225,131,55,214,40,173,40,37,107,109,93,215,137,40,196,168,
159,244,250,208,139,110,0,144,82,165,20,108,150,13,6,21,81,210,90,17,9,41,101,76,228,92,163,181,210,74,165,152,234,186,86,90,11,33,188,195,204,0,0,24,45,193,123,34,18,66,72,165,82,140,137,200,90,27,182,
233,70,208,69,145,53,206,59,231,108,150,121,231,202,178,24,244,43,94,217,26,0,96,244,165,152,72,8,107,173,247,62,120,151,82,146,74,241,102,1,79,242,158,23,93,85,21,146,98,72,77,93,199,16,172,181,41,165,
148,162,148,50,120,151,91,219,52,110,182,87,141,141,119,148,214,193,7,173,21,22,171,2,128,81,163,141,86,90,53,85,99,173,25,84,205,163,43,90,111,171,225,127,162,24,67,191,95,121,31,40,69,71,194,57,231,
125,20,98,9,102,206,2,0,108,37,50,57,239,133,36,99,117,74,65,43,205,219,4,60,249,173,160,22,29,85,157,243,198,232,20,41,134,38,165,216,52,141,148,58,248,90,74,57,24,212,198,232,44,179,222,69,215,120,173,
21,239,15,251,36,15,17,0,96,105,105,165,162,15,49,70,33,133,146,162,40,138,193,160,18,105,155,133,85,46,60,104,163,133,16,206,251,162,200,227,208,54,57,30,0,128,39,32,203,51,31,188,86,58,198,148,20,9,
37,151,228,18,182,232,6,0,0,0,0,0,128,173,3,61,251,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,168,69,
111,1,96,172,153,155,157,203,50,43,165,170,234,218,26,163,181,106,170,42,74,109,140,74,49,5,239,165,20,121,158,15,6,149,54,26,27,171,194,40,176,153,173,6,85,158,103,222,251,148,72,72,73,130,156,11,154,
162,212,186,105,156,144,82,10,97,173,169,170,186,40,11,215,184,109,125,200,0,0,0,176,248,168,218,12,170,148,100,76,73,73,50,218,132,16,98,162,218,199,34,39,163,84,19,106,165,164,16,210,135,144,82,10,62,
72,133,194,45,108,123,222,121,33,68,34,18,66,166,20,98,112,89,150,139,148,234,38,154,36,180,214,41,81,81,102,131,65,229,125,26,204,245,180,181,219,250,144,1,0,0,96,241,13,0,141,115,89,102,140,86,131,170,
54,198,104,163,164,72,157,178,240,62,58,231,82,146,74,153,152,162,214,186,40,115,231,195,150,56,104,128,197,170,27,87,118,10,99,76,76,81,74,157,146,12,33,132,144,140,86,130,162,84,66,74,233,124,200,172,
201,115,75,66,108,235,227,5,0,0,0,162,39,80,85,205,138,130,82,212,54,95,86,228,115,115,61,153,132,80,210,185,198,148,157,163,142,62,33,43,39,106,255,232,200,169,32,162,68,49,165,37,62,100,128,197,139,
33,104,163,73,136,148,18,17,101,218,52,131,153,139,46,56,211,245,231,242,162,112,85,157,36,229,89,22,147,24,12,102,180,181,132,215,45,0,0,192,8,16,251,173,95,191,168,31,80,90,165,148,188,11,54,51,49,166,
106,48,40,199,199,143,120,209,107,146,144,82,42,18,68,68,82,138,16,98,12,65,74,37,36,10,84,176,237,197,16,137,146,84,74,74,17,99,34,34,74,20,130,79,193,95,122,225,215,250,51,51,99,227,227,222,187,20,73,
27,37,132,64,143,53,0,0,192,40,88,116,84,149,74,73,65,51,211,51,157,110,39,145,56,252,152,215,217,178,32,162,232,195,198,135,239,187,233,250,159,214,253,233,20,41,37,242,33,104,45,185,186,10,176,109,73,
41,156,11,90,41,41,133,210,178,232,46,123,250,51,158,53,190,108,21,207,175,10,117,115,233,249,255,65,41,206,76,207,44,95,177,124,80,213,74,162,199,26,0,0,96,219,91,124,85,85,201,126,127,208,237,142,133,
232,14,59,230,13,38,207,40,81,127,230,225,235,127,121,229,134,13,15,138,68,99,99,227,131,193,64,41,165,149,148,66,10,188,229,195,8,16,68,49,197,16,83,74,169,211,233,204,205,205,146,20,43,86,236,184,247,
190,7,233,124,156,136,154,170,186,226,146,175,9,82,131,65,63,203,172,67,85,21,0,0,96,4,44,58,170,10,74,68,50,42,241,146,227,223,26,82,154,155,121,228,154,43,191,223,84,211,193,197,178,83,106,99,4,17,165,
84,150,101,140,137,36,81,66,85,21,70,128,72,20,73,107,229,156,147,74,9,41,5,47,11,160,200,100,227,107,247,125,102,150,143,75,65,223,61,251,11,161,106,140,81,17,173,170,0,0,0,35,96,193,168,154,98,108,66,
212,90,231,86,5,239,133,210,245,160,202,139,44,6,159,100,246,188,163,94,149,151,229,131,247,220,126,195,175,174,138,126,144,146,200,50,171,181,182,214,26,99,180,214,82,74,33,4,17,9,76,166,134,17,144,22,
152,38,21,66,140,209,151,221,101,203,119,220,125,124,249,78,253,185,217,203,47,250,134,145,129,132,172,6,181,205,179,224,26,155,101,62,10,231,156,76,81,42,181,149,143,28,0,0,224,247,217,130,43,0,40,173,
84,240,74,208,160,118,41,36,138,125,91,150,85,221,20,99,227,135,62,255,88,155,23,247,222,121,219,61,119,94,71,169,38,146,121,102,243,34,215,90,27,99,140,49,74,41,49,180,53,79,6,96,177,188,243,82,229,131,
254,84,127,54,111,154,176,114,199,93,254,219,145,199,255,228,138,243,234,126,207,228,121,213,235,9,101,66,237,140,82,20,156,206,178,136,114,43,0,0,192,86,180,96,85,213,88,157,34,197,24,154,198,117,198,
202,65,175,18,74,197,152,142,249,163,55,10,99,103,54,60,248,203,159,94,22,124,157,98,178,153,25,239,118,181,177,74,41,206,169,92,82,69,84,133,209,167,149,236,15,170,24,19,9,34,161,119,217,115,189,201,
199,170,222,236,15,46,250,70,8,62,133,208,29,239,244,231,6,82,10,33,164,54,202,53,232,97,5,0,0,216,122,22,140,170,89,166,188,23,131,65,95,74,85,116,114,239,124,83,213,71,31,255,86,157,101,15,63,120,223,
47,127,122,169,74,62,82,234,116,198,180,214,69,110,179,44,87,67,24,250,135,167,142,228,67,74,41,105,45,7,189,190,180,197,178,29,159,62,62,185,60,52,205,249,103,126,206,230,153,205,236,160,87,57,215,228,
121,145,101,178,174,177,171,5,0,0,192,214,179,224,244,252,186,14,46,248,162,44,58,157,188,169,106,173,132,201,11,91,228,66,196,95,254,244,7,50,186,16,66,167,236,24,163,243,60,211,218,106,173,219,122,234,
214,60,1,128,205,145,22,16,35,165,20,173,53,49,196,44,203,140,136,247,223,249,107,107,149,206,51,91,148,214,168,170,63,40,10,219,233,118,146,160,170,66,73,21,0,0,96,171,90,48,170,198,16,98,240,193,251,
148,146,20,170,113,241,121,71,189,58,37,154,121,248,193,193,220,35,74,155,178,91,140,117,199,140,54,19,227,221,204,26,142,170,143,233,82,69,108,133,17,33,22,32,5,141,143,117,154,186,177,198,230,69,150,
18,25,233,92,127,46,197,116,216,209,39,54,46,82,18,41,165,24,66,138,33,6,148,84,1,0,0,182,170,133,23,61,149,66,43,237,124,104,124,12,49,72,99,199,39,39,234,170,250,229,53,63,84,42,207,50,107,116,174,141,
92,181,106,69,240,81,14,61,38,167,34,170,194,136,139,49,54,141,239,118,11,165,69,85,57,33,133,82,249,93,183,95,231,157,27,155,24,23,218,36,74,141,143,206,7,37,149,80,88,36,24,0,0,96,171,90,248,173,55,
137,60,55,198,152,166,223,87,90,29,113,204,107,157,115,193,15,122,179,211,121,97,203,34,235,148,133,243,228,92,200,242,76,170,223,90,73,160,93,24,104,161,21,130,0,182,178,133,26,0,164,214,49,134,186,118,
85,29,40,197,204,106,147,41,73,81,10,239,189,63,252,232,19,181,209,190,170,180,214,214,42,241,56,127,47,0,0,0,176,5,44,248,214,171,181,108,92,136,33,216,34,15,62,104,99,136,196,47,127,124,113,150,217,
178,200,133,212,218,152,78,153,19,81,74,164,212,163,45,170,252,246,207,247,48,255,235,223,149,82,138,49,26,99,164,148,33,4,173,245,104,150,96,83,74,74,169,148,146,148,146,136,98,140,82,74,68,240,167,156,
133,26,0,104,248,34,149,34,41,173,125,72,146,72,73,249,200,221,191,142,49,25,107,131,15,58,179,174,105,26,199,27,5,3,0,0,192,214,243,120,111,189,49,38,33,4,143,236,115,187,94,211,52,106,158,118,208,255,
137,252,98,41,133,16,85,85,41,165,136,40,132,16,66,24,193,180,42,165,172,235,90,8,17,99,20,66,104,173,157,115,18,187,197,110,239,98,140,156,97,219,80,155,18,70,9,0,0,0,182,182,5,35,215,252,154,104,91,
49,117,206,181,251,81,61,201,245,83,219,34,101,140,209,90,203,169,183,105,154,39,122,34,91,144,49,38,165,20,66,224,180,106,173,69,100,217,238,133,16,82,140,92,77,71,215,53,0,0,192,182,178,96,84,21,66,
180,249,44,165,196,239,214,198,26,222,146,138,183,78,125,50,75,83,85,85,37,132,232,116,58,206,185,166,105,234,186,150,82,230,121,254,68,79,100,75,9,33,240,233,115,58,143,67,219,250,184,96,11,67,52,5,0,
0,24,1,143,23,85,219,98,170,144,66,74,65,66,180,227,254,220,24,192,183,124,252,158,212,133,100,89,150,82,242,222,19,145,214,58,207,243,166,105,6,131,193,19,61,145,45,133,107,168,92,79,141,49,54,77,19,
66,176,214,110,235,227,130,45,139,95,222,66,136,54,179,162,148,14,0,0,176,245,45,220,0,64,196,121,84,181,165,211,223,110,221,163,121,203,166,62,129,119,113,14,127,222,123,158,86,229,189,87,74,117,187,
221,39,118,26,91,14,247,60,208,240,28,185,1,128,19,54,108,199,164,148,36,230,165,212,148,136,8,89,21,0,0,96,43,123,188,94,85,154,87,91,157,95,94,162,223,94,51,245,137,117,242,133,16,178,44,211,90,55,77,
147,101,89,211,52,69,81,204,206,206,46,246,126,182,52,173,117,175,215,147,82,122,239,83,74,69,81,112,175,194,182,62,46,216,226,132,120,116,105,139,39,220,144,13,0,0,0,79,146,94,232,27,92,72,226,177,239,
196,109,0,66,60,102,138,201,147,121,255,54,198,244,251,253,148,210,62,251,236,243,161,15,125,200,90,235,156,251,212,167,62,117,229,149,87,62,177,59,220,66,188,247,198,152,247,190,247,189,7,30,120,160,
82,234,198,27,111,60,249,228,147,145,86,183,123,243,87,0,160,255,28,76,160,132,210,42,0,0,192,86,180,96,84,149,82,54,117,35,132,16,82,6,231,67,136,66,72,41,136,230,45,8,64,195,70,85,158,131,197,107,90,
241,127,126,226,19,159,88,190,124,121,251,45,254,238,125,247,221,119,245,213,87,127,251,219,223,238,247,251,60,51,169,44,203,186,174,121,138,189,49,134,136,148,82,77,211,24,99,132,16,60,169,107,254,128,
59,223,225,110,187,237,118,242,201,39,243,172,175,15,124,224,3,15,61,244,16,247,15,112,129,54,132,64,68,222,251,178,44,123,189,94,158,231,92,16,229,147,146,82,114,239,1,175,66,101,140,9,33,240,191,135,
16,222,253,238,119,31,124,240,193,49,198,171,174,186,234,19,159,248,68,123,130,124,255,252,159,124,255,220,189,192,191,174,125,40,218,88,19,99,204,243,124,48,24,104,173,249,246,82,74,231,92,150,101,188,
68,151,49,38,198,200,243,180,182,220,179,11,79,152,146,66,74,229,125,168,171,58,203,179,148,146,107,26,155,161,71,25,0,0,96,171,90,48,170,46,33,94,225,191,174,235,213,171,87,31,123,236,177,199,30,123,
236,191,254,235,191,94,113,197,21,28,230,238,191,255,254,55,188,225,13,92,175,141,49,114,112,76,41,85,85,85,20,5,127,97,173,229,68,40,165,212,90,247,251,125,26,118,145,90,107,57,237,241,111,225,233,249,
33,132,178,44,231,230,230,58,157,78,211,52,109,18,165,225,214,3,28,46,121,193,1,165,148,247,222,57,199,203,26,208,48,209,242,241,164,148,202,178,252,248,199,63,206,185,150,215,85,205,178,204,123,207,39,
197,17,118,126,243,46,231,224,217,217,217,60,207,219,45,3,98,140,157,78,103,110,110,78,8,193,1,157,179,181,214,91,227,41,0,0,0,0,120,42,218,226,57,233,236,179,207,62,235,172,179,156,115,7,28,112,192,43,
94,241,138,167,61,237,105,74,169,119,191,251,221,85,85,253,236,103,63,227,78,208,78,167,211,22,56,57,186,213,117,205,235,88,165,148,186,221,238,236,236,172,49,134,51,165,247,126,124,124,220,123,111,173,
109,154,166,45,121,182,229,73,14,133,60,79,159,255,209,24,51,55,55,55,49,49,49,55,55,199,253,166,60,157,107,48,24,40,165,140,49,60,202,207,133,79,14,151,237,138,84,214,218,217,217,89,107,109,150,101,28,
58,185,220,75,68,109,235,42,247,221,182,11,175,214,117,109,173,45,203,146,67,54,31,97,81,20,92,76,229,4,92,215,117,81,20,109,13,24,0,0,0,0,126,215,22,143,170,28,19,173,181,87,95,125,245,181,215,94,251,
190,247,189,111,255,253,247,119,206,253,201,159,252,201,123,223,251,94,231,92,81,20,159,255,252,231,185,196,248,247,127,255,247,183,222,122,107,211,52,147,147,147,135,31,126,248,243,159,255,252,221,119,
223,157,235,151,33,132,139,47,190,248,199,63,254,241,190,251,238,123,194,9,39,112,253,210,90,251,209,143,126,148,107,159,127,243,55,127,243,155,223,252,70,107,125,216,97,135,29,122,232,161,207,124,230,
51,185,10,187,113,227,198,239,125,239,123,223,254,246,183,167,167,167,243,60,23,66,188,250,213,175,126,201,75,94,34,165,188,226,138,43,46,191,252,242,151,189,236,101,251,238,187,239,149,87,94,185,215,
94,123,173,88,177,130,71,252,15,57,228,144,131,15,62,88,8,113,249,229,151,159,122,234,169,175,122,213,171,94,250,210,151,18,209,229,151,95,254,169,79,125,138,27,18,172,181,47,124,225,11,143,62,250,232,
21,43,86,112,109,245,150,91,110,185,244,210,75,127,248,195,31,214,117,93,215,117,183,219,253,204,103,62,195,251,199,190,255,253,239,127,209,139,94,116,228,145,71,114,183,195,5,23,92,240,165,47,125,169,
174,107,84,85,1,0,0,0,22,178,53,114,146,214,154,11,144,189,94,239,188,243,206,91,191,126,189,181,118,124,124,124,175,189,246,250,245,175,127,221,52,77,155,59,251,253,126,211,52,214,218,63,251,179,63,219,
127,255,253,231,79,93,82,74,61,239,121,207,155,157,157,245,222,115,151,39,87,70,219,69,94,185,162,249,134,55,188,225,152,99,142,153,63,40,63,49,49,113,194,9,39,28,120,224,129,255,244,79,255,196,63,206,
17,214,123,191,126,253,250,103,63,251,217,220,54,176,208,193,243,88,127,187,233,43,247,152,114,67,194,223,253,221,223,173,89,179,70,41,197,13,172,82,202,221,119,223,253,45,111,121,203,190,251,238,251,
217,207,126,182,170,170,126,191,47,165,228,67,253,219,191,253,219,162,40,148,82,206,57,99,204,17,71,28,177,113,227,198,115,206,57,7,171,117,2,0,0,0,44,100,139,71,85,238,40,109,154,134,123,79,175,191,254,
122,206,154,198,152,245,235,215,95,119,221,117,74,169,249,75,10,100,89,246,130,23,188,224,153,207,124,38,17,121,239,255,233,159,254,233,231,63,255,185,115,142,139,172,206,185,115,206,57,231,234,171,175,
254,200,71,62,194,9,248,3,31,248,192,221,119,223,205,133,213,231,62,247,185,92,251,12,33,124,253,235,95,255,234,87,191,186,126,253,250,247,188,231,61,203,150,45,91,187,118,237,155,222,244,166,127,253,
215,127,109,163,161,214,122,122,122,250,228,147,79,190,251,238,187,121,34,151,148,242,29,239,120,199,33,135,28,34,165,188,242,202,43,63,254,241,143,243,33,113,27,43,23,119,165,148,198,152,170,170,254,
248,143,255,120,245,234,213,74,169,185,185,185,127,254,231,127,190,241,198,27,15,58,232,160,63,255,243,63,39,162,131,14,58,232,222,123,239,253,250,215,191,206,63,206,225,251,251,223,255,254,23,190,240,
133,60,207,223,247,190,247,29,120,224,129,89,150,29,118,216,97,103,159,125,54,150,64,2,0,0,0,88,200,22,95,113,137,115,42,119,154,58,231,102,103,103,219,182,84,107,45,239,86,218,78,96,226,197,246,121,41,
128,148,146,214,250,153,207,124,230,209,71,31,157,101,217,101,151,93,246,15,255,240,15,223,248,198,55,184,97,148,167,55,241,126,167,92,19,213,90,239,187,239,190,220,48,250,200,35,143,156,115,206,57,221,
110,247,246,219,111,191,252,242,203,249,6,123,239,189,119,158,231,60,49,139,59,68,31,124,240,193,123,238,185,135,51,116,27,160,231,207,172,34,34,110,141,229,251,231,163,226,54,217,253,246,219,143,143,
243,231,63,255,249,205,55,223,220,52,205,53,215,92,243,139,95,252,130,219,94,159,246,180,167,241,102,1,92,67,37,162,43,175,188,146,243,238,205,55,223,204,149,221,110,183,139,70,85,0,0,0,128,199,177,197,
171,170,220,142,201,65,48,203,50,165,20,231,81,158,8,85,215,117,150,101,252,255,49,70,231,156,247,254,199,63,254,241,171,94,245,170,60,207,67,8,71,30,121,164,148,242,141,111,124,163,16,226,219,223,254,
246,153,103,158,217,235,245,120,20,158,35,32,15,205,115,14,230,57,91,68,116,243,205,55,243,236,40,231,220,195,15,63,204,99,244,203,150,45,91,177,98,197,189,247,222,235,156,227,155,241,140,168,110,183,
203,19,158,56,230,18,17,207,169,226,25,84,188,224,64,93,215,252,187,248,6,41,165,93,118,217,133,79,240,246,219,111,231,83,27,12,6,83,83,83,124,178,123,238,185,103,59,193,159,235,178,237,82,172,247,222,
123,47,167,94,78,177,104,0,0,0,0,0,88,200,146,85,85,149,82,92,173,228,18,233,252,85,72,121,241,116,94,243,255,192,3,15,108,59,80,175,185,230,26,238,4,205,178,140,134,133,76,41,229,204,204,204,191,252,
203,191,60,244,208,67,52,220,138,157,243,220,113,199,29,247,170,87,189,138,39,236,207,255,213,237,191,180,131,233,143,179,62,127,123,27,46,235,182,155,187,242,79,113,72,109,119,58,224,47,218,114,47,31,
222,19,203,151,243,7,250,57,239,182,235,103,1,0,0,0,192,38,45,89,85,149,151,38,77,41,181,243,144,56,243,117,187,221,118,221,211,178,44,143,57,230,24,94,191,233,134,27,110,184,237,182,219,120,57,39,154,
183,126,62,167,219,155,110,186,233,127,252,143,255,49,62,62,126,232,161,135,238,184,227,142,135,29,118,216,216,216,152,82,106,237,218,181,220,0,192,57,143,167,82,113,39,64,81,20,183,221,118,219,158,123,
238,233,156,219,115,207,61,57,101,26,99,86,174,92,25,66,80,74,109,220,184,241,145,71,30,225,159,165,97,82,228,14,84,62,126,222,134,64,74,201,221,165,252,47,90,107,254,154,255,145,136,56,136,223,115,207,
61,171,87,175,150,82,238,177,199,30,82,74,238,34,152,156,156,228,59,188,237,182,219,56,10,243,127,114,255,3,31,45,103,95,62,120,46,229,46,213,83,0,0,0,0,176,157,89,178,170,170,49,166,93,250,148,87,39,
229,210,163,115,142,87,239,223,127,255,253,255,252,207,255,252,128,3,14,32,34,33,196,55,191,249,205,193,96,192,237,170,131,193,128,115,42,111,242,116,220,113,199,189,255,253,239,127,213,171,94,229,189,
191,232,162,139,190,241,141,111,220,127,255,253,60,136,95,85,21,17,221,123,239,189,77,211,40,165,148,82,7,31,124,48,87,112,171,170,186,249,230,155,121,84,125,199,29,119,60,246,216,99,231,230,230,246,216,
99,143,231,61,239,121,156,77,111,186,233,38,254,113,154,183,79,44,223,45,167,70,99,204,61,247,220,67,68,214,218,21,43,86,172,90,181,138,59,13,120,217,84,94,165,149,215,112,29,12,6,215,94,123,173,115,142,
136,254,224,15,254,96,175,189,246,178,214,62,243,153,207,60,240,192,3,185,137,246,214,91,111,77,41,113,147,46,223,140,215,192,34,34,53,196,51,174,150,234,241,7,0,0,0,216,254,44,89,85,149,251,77,219,6,
77,107,45,247,143,190,232,69,47,122,217,203,94,70,195,214,76,34,234,247,251,159,254,244,167,111,184,225,6,34,226,219,20,69,193,133,207,24,227,236,236,236,178,101,203,214,173,91,183,207,62,251,188,230,
53,175,225,126,83,254,193,141,27,55,94,120,225,133,252,159,247,222,123,239,238,187,239,46,165,60,254,248,227,95,254,242,151,11,33,222,255,254,247,95,122,233,165,187,239,190,251,209,71,31,45,165,60,241,
196,19,79,60,241,68,34,226,90,230,45,183,220,242,197,47,126,145,23,13,224,186,38,151,99,137,136,3,107,8,33,132,192,139,9,72,41,119,219,109,183,143,127,252,227,49,198,95,252,226,23,255,240,15,255,192,251,
99,73,41,243,60,239,247,251,99,99,99,95,252,226,23,215,173,91,183,102,205,154,110,183,251,161,15,125,136,127,202,123,47,132,248,233,79,127,250,157,239,124,167,221,81,150,107,171,156,134,249,151,242,41,
112,209,23,27,171,2,0,0,0,44,100,201,162,42,247,155,114,103,106,81,20,51,51,51,99,99,99,28,49,137,136,199,214,239,185,231,158,159,252,228,39,188,138,19,17,41,165,120,210,21,71,55,30,49,47,203,242,166,
155,110,114,206,29,121,228,145,101,89,18,17,55,185,94,112,193,5,151,93,118,217,61,247,220,195,9,239,228,147,79,126,203,91,222,114,232,161,135,114,198,109,154,134,183,176,58,237,180,211,238,184,227,142,
131,14,58,232,89,207,122,22,143,245,79,79,79,243,22,0,115,115,115,188,211,41,87,121,249,104,121,229,41,174,233,42,165,190,255,253,239,143,143,143,191,244,165,47,157,156,156,228,127,25,12,6,89,150,181,
77,2,60,131,170,170,42,222,116,224,232,163,143,158,191,5,192,29,119,220,209,110,1,192,155,102,113,243,43,215,155,57,188,182,139,115,241,170,171,136,170,0,0,0,0,11,17,251,173,95,191,201,111,72,37,155,186,
17,66,24,107,188,243,71,159,240,39,66,136,171,190,247,245,162,40,121,71,80,30,197,166,121,131,233,60,179,94,107,61,53,53,181,243,206,59,79,79,79,115,175,103,191,223,111,11,174,221,110,183,215,235,241,
252,36,78,105,77,211,172,92,185,114,106,106,106,108,108,108,110,110,142,23,216,231,34,37,17,197,24,185,67,128,255,145,127,35,13,51,49,13,107,162,117,93,123,239,187,221,110,211,52,188,152,20,111,127,202,
13,9,89,150,181,27,171,114,191,41,31,106,150,101,189,94,47,203,50,174,4,55,77,195,203,14,112,150,229,146,39,255,246,162,40,120,153,42,30,208,231,126,89,34,178,214,206,223,88,149,31,10,238,106,213,90,183,
27,171,114,23,47,175,39,192,199,211,239,247,87,173,90,245,192,3,15,228,121,190,85,158,104,88,28,41,197,14,123,252,97,74,233,252,175,127,38,203,179,166,110,82,74,54,179,49,224,163,5,0,0,192,214,179,196,
235,170,114,250,236,118,187,83,83,83,92,37,77,41,117,58,29,107,237,96,48,40,203,114,110,110,142,167,94,17,17,71,186,60,207,123,189,94,8,97,102,102,70,74,153,101,25,207,58,226,27,8,33,234,186,30,27,27,
107,39,93,9,33,6,131,1,215,107,165,148,92,191,108,135,230,219,81,117,158,29,197,121,151,123,12,6,131,1,247,27,112,78,245,222,115,143,108,219,123,208,182,195,106,173,121,241,44,34,170,170,138,179,108,85,
85,124,51,238,109,37,34,62,146,249,107,187,242,92,46,222,190,181,223,239,115,188,38,34,173,117,81,20,92,154,229,229,171,172,181,51,51,51,156,155,1,0,0,0,96,147,150,44,170,114,177,144,71,204,57,32,242,
2,248,156,213,184,191,115,118,118,182,44,75,173,117,93,215,41,165,60,207,155,166,225,185,74,99,99,99,92,106,229,121,247,124,159,109,37,181,215,235,241,84,122,158,179,197,213,83,142,155,188,197,0,247,128,
230,121,206,57,146,67,100,183,219,237,247,251,156,35,219,35,225,186,108,91,15,110,211,36,255,162,170,170,202,178,148,82,246,122,61,30,169,231,165,169,164,148,188,153,170,115,46,203,50,158,200,207,167,
220,102,232,249,98,140,99,99,99,188,12,22,167,91,206,205,252,123,249,224,219,30,92,0,0,0,0,216,164,37,235,85,229,148,73,68,109,81,147,35,35,13,91,66,155,166,225,242,36,13,23,25,109,23,168,226,210,233,
252,31,225,250,101,123,75,78,120,92,254,36,34,30,130,15,33,240,64,60,87,67,57,185,242,143,112,227,1,79,192,111,23,118,229,227,228,220,201,19,249,137,136,39,66,241,63,206,95,61,138,7,244,231,159,32,31,
45,71,76,254,207,246,55,178,249,191,226,119,207,136,151,155,109,31,43,110,45,192,74,85,0,0,0,0,143,99,139,111,172,10,0,0,0,0,240,196,32,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,
81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,
0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,
0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,
162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,
170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,
5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,
0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,
0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,219,44,170,74,41,189,247,82,74,34,18,66,132,16,148,82,143,115,251,166,105,140,49,124,99,34,74,41,9,33,248,235,145,146,82,146,82,242,255,135,16,132,16,
49,198,148,82,8,65,107,157,82,138,49,242,63,74,41,71,240,248,23,194,199,207,95,207,63,139,148,18,13,159,193,44,203,82,74,252,212,44,116,63,252,83,124,87,252,179,74,41,254,2,0,0,0,224,49,182,89,84,117,
206,41,165,56,235,112,96,229,148,179,208,237,187,221,110,211,52,206,57,99,12,135,161,54,233,142,154,54,173,42,165,164,148,90,107,165,148,214,218,57,199,223,226,36,199,255,185,173,15,118,115,101,89,214,
52,77,140,145,136,180,214,237,121,181,193,52,198,216,235,245,104,51,162,103,74,169,174,107,33,132,214,58,198,56,178,207,35,0,0,0,108,115,122,91,254,110,173,219,178,28,23,234,30,231,198,77,211,8,33,140,
49,85,85,133,16,242,60,39,34,231,220,8,166,156,249,81,149,243,183,247,158,227,29,17,133,16,98,140,214,218,24,227,227,159,242,72,137,49,134,16,202,178,228,178,168,247,158,79,141,235,163,66,136,162,40,248,
233,248,47,115,106,158,231,124,238,33,132,246,83,202,86,58,13,0,0,0,120,74,217,102,81,85,107,237,189,23,66,240,184,63,71,28,107,173,115,110,147,183,87,74,133,16,184,134,215,233,116,234,186,166,97,51,192,
72,209,90,115,245,145,163,42,135,84,62,47,142,176,101,89,214,117,93,85,21,223,120,91,31,239,230,226,211,113,206,57,231,132,16,89,150,113,220,244,222,19,145,16,130,159,154,182,177,225,113,210,39,159,59,
17,41,165,140,49,222,123,110,39,216,74,103,2,0,0,0,79,29,219,172,36,201,5,69,99,76,8,161,223,239,115,104,235,247,251,11,221,190,170,42,173,181,49,70,74,89,85,85,74,41,203,178,17,44,169,54,77,99,173,205,
178,140,35,184,181,150,19,158,214,186,40,138,16,66,85,85,222,251,162,40,202,178,124,106,85,19,185,10,158,101,25,55,13,243,153,114,227,41,183,225,26,99,248,172,31,167,90,204,137,182,44,75,46,57,243,83,
249,248,109,202,0,0,0,240,123,107,155,69,61,78,39,222,123,99,12,7,59,41,37,15,235,111,82,81,20,222,251,193,96,192,5,75,107,109,8,129,75,122,35,69,107,205,121,148,167,85,133,16,154,166,225,174,220,166,
105,248,200,149,82,85,85,205,206,206,114,230,123,74,224,98,42,55,51,240,208,191,49,166,174,235,60,207,83,74,220,158,193,205,196,222,251,199,137,158,252,25,163,105,154,170,170,242,60,231,23,192,83,43,178,
3,0,0,192,86,179,205,162,106,211,52,121,158,15,6,3,158,95,197,163,192,143,83,141,227,17,255,101,203,150,85,85,197,229,201,94,175,103,173,221,138,135,188,89,120,148,191,157,228,158,101,153,24,226,242,33,
15,127,79,78,78,114,144,221,214,199,187,185,178,44,227,86,84,238,103,232,245,122,69,81,72,41,251,253,126,219,149,49,24,12,202,178,52,198,52,77,179,208,253,40,165,102,102,102,164,148,111,127,251,219,63,
241,137,79,236,191,255,254,222,251,167,208,227,0,0,0,0,91,211,54,235,149,124,254,243,159,255,246,183,191,157,91,21,185,18,121,245,213,87,127,227,27,223,184,251,238,187,55,121,123,99,204,255,252,159,255,
243,192,3,15,124,231,59,223,57,51,51,147,231,121,167,211,225,110,215,173,124,228,143,79,74,249,215,127,253,215,251,236,179,207,229,151,95,254,169,79,125,170,174,107,238,178,253,248,199,63,190,114,229,
202,171,174,186,234,227,31,255,248,110,187,237,246,161,15,125,232,138,43,174,248,220,231,62,55,130,61,12,155,196,83,160,94,251,218,215,30,119,220,113,15,60,240,192,7,63,248,193,233,233,233,162,40,138,
162,120,199,59,222,241,220,231,62,247,190,251,238,251,240,135,63,60,55,55,39,132,224,114,233,38,239,39,165,52,54,54,86,215,181,247,190,211,233,112,203,199,83,229,65,0,0,0,128,173,108,155,69,4,46,52,126,
245,171,95,125,243,155,223,124,210,73,39,157,126,250,233,107,214,172,249,232,71,63,122,200,33,135,132,16,184,235,145,7,154,121,198,149,247,254,159,255,249,159,223,254,246,183,79,77,77,149,101,233,189,
175,170,138,7,154,219,149,86,231,175,232,201,63,200,11,33,113,71,236,214,57,175,182,243,242,121,207,123,222,174,187,238,202,243,220,95,241,138,87,172,92,185,178,173,74,222,124,243,205,239,124,231,59,63,
243,153,207,104,173,185,218,202,243,138,248,76,141,49,35,184,50,0,31,18,63,164,59,238,184,227,49,199,28,195,61,27,187,236,178,203,115,159,251,220,16,66,81,20,253,126,63,207,115,174,145,243,58,172,237,
252,42,126,54,219,37,102,173,181,237,243,245,152,37,117,249,246,92,153,30,181,207,33,0,0,0,176,149,109,179,170,42,7,17,174,167,90,107,207,61,247,220,11,46,184,224,127,255,239,255,253,182,183,189,237,230,
155,111,126,232,161,135,222,245,174,119,237,187,239,190,87,94,121,229,115,159,251,220,137,137,137,111,126,243,155,171,87,175,222,127,255,253,223,243,158,247,188,224,5,47,56,241,196,19,255,242,47,255,242,
222,123,239,229,100,243,143,255,248,143,41,165,247,191,255,253,68,244,218,215,190,246,232,163,143,206,178,236,234,171,175,254,228,39,63,217,235,245,66,8,157,78,167,93,181,126,139,158,23,159,209,45,183,
220,50,57,57,249,138,87,188,226,223,254,237,223,156,115,7,30,120,224,77,55,221,180,247,222,123,87,85,53,55,55,247,7,127,240,7,239,121,207,123,126,248,195,31,158,118,218,105,111,125,235,91,95,248,194,23,
126,254,243,159,191,228,146,75,136,232,200,35,143,124,219,219,222,246,141,111,124,227,204,51,207,220,162,199,185,88,237,10,12,90,235,43,174,184,226,69,47,122,209,133,23,94,184,97,195,134,87,188,226,21,
51,51,51,237,70,0,83,83,83,79,123,218,211,94,255,250,215,31,116,208,65,77,211,244,251,253,243,207,63,255,252,243,207,159,155,155,43,138,226,144,67,14,121,221,235,94,183,124,249,242,16,194,244,244,116,
140,81,41,197,209,246,245,175,127,253,139,94,244,34,99,204,245,215,95,255,209,143,126,180,13,238,219,250,188,1,0,0,96,91,218,102,85,213,118,242,13,47,230,207,121,229,162,139,46,178,214,30,121,228,145,
60,136,188,108,217,178,21,43,86,188,239,125,239,123,221,235,94,247,31,255,241,31,74,169,178,44,167,167,167,175,189,246,90,34,58,252,240,195,121,174,207,222,123,239,189,122,245,234,171,175,190,186,105,
154,147,78,58,233,176,195,14,251,236,103,63,251,134,55,188,225,188,243,206,251,200,71,62,242,138,87,188,162,40,10,34,82,74,61,78,15,229,82,169,170,170,211,233,40,165,206,59,239,188,131,15,62,120,199,29,
119,60,228,144,67,246,222,123,239,11,47,188,144,115,94,158,231,189,94,175,211,233,56,231,154,166,57,237,180,211,238,188,243,206,55,190,241,141,69,81,236,182,219,110,175,127,253,235,191,255,253,239,159,
113,198,25,91,250,56,23,43,198,200,243,159,188,247,103,158,121,230,138,21,43,142,60,242,200,61,246,216,227,197,47,126,241,217,103,159,237,156,227,173,185,38,39,39,223,248,198,55,62,227,25,207,248,203,
191,252,203,63,253,211,63,189,254,250,235,95,243,154,215,28,120,224,129,69,81,236,183,223,126,127,250,167,127,250,235,95,255,250,13,111,120,195,91,222,242,150,123,239,189,87,41,85,215,181,148,242,164,
147,78,58,252,240,195,79,57,229,148,183,188,229,45,231,158,123,238,199,62,246,177,23,191,248,197,143,191,235,21,0,0,0,252,62,216,198,43,0,240,130,71,68,196,21,187,155,111,190,89,74,185,108,217,50,30,23,
126,228,145,71,254,237,223,254,109,106,106,138,136,120,57,36,222,94,245,246,219,111,191,249,230,155,15,62,248,96,99,140,16,226,136,35,142,168,235,250,59,223,249,78,81,20,135,30,122,232,213,87,95,125,217,
101,151,73,41,127,245,171,95,221,112,195,13,199,31,127,60,135,84,158,200,181,165,207,139,147,119,85,85,23,94,120,225,67,15,61,244,71,127,244,71,199,30,123,236,149,87,94,121,235,173,183,114,246,226,89,
71,156,249,198,198,198,98,140,159,254,244,167,157,115,127,254,231,127,254,206,119,190,147,79,185,44,203,45,125,156,139,213,174,159,170,181,190,239,190,251,174,184,226,138,99,143,61,246,136,35,142,232,
247,251,231,157,119,30,159,87,140,113,221,186,117,207,124,230,51,191,253,237,111,63,240,192,3,189,94,239,51,159,249,76,93,215,71,31,125,180,82,234,168,163,142,18,66,124,234,83,159,138,49,58,231,110,191,
253,118,110,225,80,74,29,126,248,225,151,93,118,217,47,126,241,11,239,253,79,127,250,211,235,175,191,254,248,227,143,231,69,30,182,245,121,3,0,0,192,182,180,205,26,0,218,221,56,105,184,254,255,252,54,
83,94,73,158,243,165,49,134,155,77,121,147,39,174,164,94,123,237,181,47,127,249,203,15,61,244,208,203,47,191,252,57,207,121,206,143,127,252,227,217,217,217,167,63,253,233,221,110,247,200,35,143,124,193,
11,94,192,29,144,188,34,210,220,220,92,89,150,33,4,158,228,180,69,207,139,155,44,249,139,243,206,59,239,77,111,122,147,247,254,115,159,251,28,239,86,197,11,23,172,92,185,146,247,62,224,233,243,119,222,
121,231,25,103,156,241,230,55,191,185,215,235,157,124,242,201,89,150,205,204,204,100,89,182,69,143,115,177,178,44,107,39,177,197,24,191,241,141,111,252,227,63,254,227,203,95,254,114,174,118,243,41,59,
231,246,218,107,47,34,186,253,246,219,155,166,25,27,27,171,170,234,182,219,110,219,113,199,29,83,74,187,237,182,219,117,215,93,199,171,83,113,51,6,55,182,46,95,190,188,211,233,188,248,197,47,126,217,203,
94,198,207,59,191,24,70,115,43,50,0,0,0,216,154,182,89,84,109,103,207,52,77,195,243,111,120,40,191,105,26,94,151,138,215,201,231,228,199,171,117,242,0,52,207,91,186,224,130,11,142,62,250,232,103,61,235,
89,124,179,95,255,250,215,41,165,153,153,25,165,212,89,103,157,245,141,111,124,131,39,0,241,242,251,101,89,74,41,7,131,193,216,216,216,150,238,1,224,17,109,107,109,191,223,191,252,242,203,95,248,194,23,
222,127,255,253,183,220,114,203,238,187,239,78,68,74,41,94,68,214,123,239,189,231,45,70,249,17,224,243,42,203,178,105,26,14,214,91,244,56,23,171,157,255,196,43,54,60,248,224,131,87,94,121,229,222,123,
239,125,254,249,231,243,41,115,209,154,63,102,240,150,7,51,51,51,69,81,116,187,93,222,212,170,237,247,104,154,134,51,40,175,219,197,43,230,126,247,187,223,61,253,244,211,57,13,183,155,181,162,87,21,0,
0,224,247,220,54,139,170,92,60,227,77,56,133,16,189,94,175,219,237,30,117,212,81,74,169,175,125,237,107,237,108,27,34,226,185,228,60,193,92,8,193,59,36,77,77,77,93,119,221,117,7,28,112,64,81,20,15,62,
248,224,37,151,92,194,249,169,105,154,117,235,214,13,6,131,60,207,57,235,104,173,121,83,211,199,89,65,105,9,77,78,78,114,87,131,82,106,227,198,141,127,253,215,127,205,149,66,14,106,220,208,201,219,59,
181,123,138,174,91,183,238,37,47,121,201,53,215,92,179,118,237,218,183,191,253,237,31,250,208,135,6,131,193,168,69,85,174,116,182,217,177,105,154,83,78,57,165,93,123,193,90,59,24,12,136,232,166,155,110,
18,66,172,95,191,254,87,191,250,213,196,196,68,85,85,203,150,45,187,251,238,187,7,131,193,131,15,62,184,106,213,42,206,187,28,124,249,57,186,245,214,91,235,186,94,179,102,13,159,114,150,101,131,193,128,
151,74,192,34,0,0,0,0,191,231,182,241,0,43,47,149,223,52,205,11,95,248,194,191,255,251,191,95,179,102,205,191,252,203,191,240,2,79,237,13,120,97,163,118,73,35,238,4,208,90,255,232,71,63,234,116,58,7,30,
120,224,213,87,95,205,99,202,33,132,11,47,188,112,239,189,247,126,239,123,223,203,63,254,186,215,189,238,111,254,230,111,56,56,210,176,225,114,139,154,155,155,227,118,5,14,163,124,180,109,87,0,17,181,
187,137,114,92,19,66,188,237,109,111,171,235,250,163,31,253,232,167,63,253,233,201,201,201,119,190,243,157,91,97,250,215,98,113,209,151,75,170,188,107,3,17,113,9,188,93,166,202,57,119,253,245,215,223,
126,251,237,135,29,118,216,65,7,29,84,85,213,187,222,245,174,177,177,177,11,46,184,96,98,98,226,170,171,174,90,189,122,245,43,95,249,74,34,58,232,160,131,158,243,156,231,16,81,93,215,66,136,203,46,187,
236,128,3,14,120,251,219,223,110,173,109,154,230,77,111,122,211,201,39,159,204,43,91,109,227,211,6,0,0,128,109,106,193,170,106,34,50,70,19,201,16,130,210,74,73,217,184,38,37,174,171,241,255,136,72,132,
16,18,37,99,116,138,139,78,21,222,251,215,189,238,117,175,126,245,171,219,45,0,62,249,201,79,222,117,215,93,220,199,201,241,84,74,201,61,139,188,176,81,93,215,101,89,206,205,205,197,24,175,186,234,42,
30,98,190,248,226,139,171,170,178,214,106,173,191,246,181,175,121,239,143,56,226,136,127,255,247,127,39,162,169,169,169,203,46,187,76,41,197,27,41,109,133,245,74,185,113,147,51,22,183,43,240,145,243,58,
89,214,90,222,140,180,174,235,44,203,98,140,239,126,247,187,119,218,105,167,191,251,187,191,35,162,95,254,242,151,223,250,214,183,78,56,225,132,215,191,254,245,167,159,126,250,150,62,212,69,225,168,202,
59,138,241,194,85,220,125,75,195,143,19,222,123,174,173,254,211,63,253,211,219,222,246,182,15,124,224,3,68,180,97,195,134,211,79,63,253,154,107,174,233,247,251,223,251,222,247,118,222,121,231,87,191,250,
213,39,156,112,194,131,15,62,88,215,53,151,210,133,16,95,250,210,151,98,140,135,28,114,200,105,167,157,198,219,210,94,112,193,5,220,68,177,197,219,85,5,197,152,40,241,42,99,158,40,105,173,67,136,36,100,
140,33,197,148,229,89,8,129,72,104,37,136,80,226,5,0,0,216,170,196,126,235,215,47,240,29,10,206,43,173,73,144,20,242,240,151,157,100,140,189,234,123,103,24,147,143,141,117,139,162,224,225,96,30,168,125,
2,163,213,188,89,209,244,244,116,150,101,60,212,203,213,71,26,182,51,134,16,150,45,91,182,113,227,198,78,167,195,181,73,158,136,179,113,227,70,110,229,228,192,148,231,249,134,13,27,150,47,95,206,211,201,
121,251,0,78,174,28,76,57,224,242,220,255,166,105,182,244,180,170,118,92,123,106,106,106,217,178,101,220,180,192,231,213,78,243,226,219,180,123,25,148,101,185,97,195,134,241,241,241,166,105,120,35,214,
170,170,70,109,70,17,71,237,16,194,228,228,228,134,13,27,242,60,239,247,251,221,110,55,165,196,129,114,124,124,124,227,198,141,99,99,99,206,57,254,17,126,66,121,130,84,81,20,83,83,83,43,87,174,228,50,
42,47,212,181,227,142,59,222,127,255,253,252,112,241,227,224,156,115,206,241,38,174,252,47,91,186,16,206,109,24,252,113,136,63,32,17,81,74,36,40,238,178,247,161,85,93,125,255,59,95,142,41,166,152,82,74,
62,120,107,70,110,47,95,0,0,128,237,216,130,121,72,73,21,83,172,235,166,200,179,166,169,181,54,74,10,206,130,33,68,158,134,47,165,148,82,8,34,215,184,197,254,98,107,109,85,85,69,81,180,195,229,82,202,
118,18,213,248,248,184,214,122,118,118,150,151,238,231,40,28,99,156,158,158,230,85,75,57,213,197,24,7,131,65,167,211,161,121,139,9,56,231,242,60,231,123,243,222,115,151,106,140,177,174,107,94,24,107,139,
234,118,187,189,94,175,170,170,110,183,219,118,166,242,177,241,1,240,193,115,55,45,151,42,103,103,103,121,229,87,34,114,206,205,204,204,24,99,182,244,113,46,22,183,20,91,107,31,122,232,161,177,177,49,
33,68,81,20,206,185,126,191,191,124,249,114,34,226,51,226,41,86,188,73,24,207,105,107,155,77,187,221,46,111,187,26,99,204,243,156,63,99,148,101,201,147,168,248,245,192,171,183,182,221,201,91,161,17,194,
59,31,67,80,74,182,139,27,52,141,227,227,143,49,104,109,234,186,42,139,220,251,160,148,228,87,26,0,0,0,108,53,11,70,213,16,131,148,202,90,19,66,16,66,18,81,76,169,110,66,158,103,90,203,24,67,74,164,141,
9,243,170,161,139,194,233,147,27,31,235,186,230,186,105,85,85,60,23,190,223,239,23,69,193,5,81,46,160,242,142,163,221,110,151,87,45,229,254,200,44,203,120,89,0,94,211,138,134,187,201,243,132,116,190,127,
174,215,210,214,218,104,158,115,39,215,116,219,173,95,57,55,107,173,189,247,189,94,143,23,1,32,34,158,86,213,233,116,82,74,28,242,82,74,227,227,227,60,53,126,164,112,51,131,49,166,211,233,84,85,197,203,
108,41,165,138,162,152,153,153,225,207,0,243,183,31,227,62,129,118,131,92,46,166,18,17,63,221,188,232,1,247,69,12,6,3,206,175,92,130,229,95,196,43,36,108,133,57,85,60,229,78,27,35,164,12,33,42,37,141,
81,198,232,68,210,251,64,68,66,72,239,131,16,228,125,64,239,44,0,0,192,86,182,96,122,227,185,243,90,235,186,113,54,179,148,40,17,37,153,9,65,121,158,153,97,4,76,41,145,124,116,117,161,197,253,98,41,137,
136,39,232,180,227,188,60,178,207,185,167,170,42,30,205,231,118,79,30,22,231,72,202,21,59,33,68,93,215,60,116,203,83,148,120,124,95,41,213,235,245,230,175,48,192,191,145,99,241,19,124,156,54,27,175,252,
202,35,248,237,60,176,52,164,148,226,149,185,184,220,200,241,186,105,26,110,207,229,127,247,222,143,218,162,170,52,92,187,96,118,118,150,136,56,161,242,83,214,206,15,227,37,198,184,248,202,55,230,81,126,
94,15,129,231,189,113,94,231,114,50,127,150,224,50,106,123,255,252,100,137,161,173,80,93,86,74,9,37,249,68,188,247,90,169,178,44,148,146,117,144,66,73,74,100,51,91,213,117,187,106,193,150,62,30,0,0,0,
152,111,193,168,170,181,142,49,212,77,195,149,75,95,207,89,163,159,245,236,231,205,245,6,117,221,24,99,4,81,240,143,70,201,16,159,72,175,42,135,182,118,112,159,91,84,57,95,182,219,205,211,176,158,39,165,
228,21,58,121,205,78,206,61,92,158,108,83,41,151,45,83,74,101,89,182,235,204,115,31,36,87,245,182,66,3,0,71,103,174,13,211,188,245,10,56,130,243,25,113,189,144,75,137,237,122,165,252,227,188,69,211,8,
174,208,196,71,200,255,207,35,245,109,71,169,214,58,203,50,158,32,213,118,3,207,127,130,184,111,164,45,27,183,115,179,218,98,57,207,159,227,39,189,77,171,68,180,21,26,0,164,122,116,199,129,20,147,146,
82,8,81,85,117,85,187,221,215,238,155,89,155,66,197,43,57,72,169,132,24,78,38,4,0,0,128,173,69,173,90,181,106,147,223,16,66,196,16,181,86,36,104,102,106,230,174,187,239,216,121,215,181,69,167,59,181,225,
33,231,26,99,180,148,50,196,152,101,54,198,24,92,144,106,113,195,235,28,64,249,107,110,81,109,227,29,127,209,142,38,183,11,81,205,15,163,109,192,229,180,215,142,251,243,102,244,252,143,237,8,114,59,60,
61,191,117,114,11,105,139,169,60,47,158,143,144,211,24,13,55,8,224,140,206,55,110,91,36,185,110,55,178,235,222,183,3,244,28,49,185,165,129,219,130,185,73,131,139,220,237,74,171,124,34,60,142,207,241,148,
139,244,252,92,183,143,201,252,222,12,62,241,249,81,117,254,30,102,91,234,188,66,20,146,63,207,4,163,85,76,177,95,53,54,31,27,91,190,83,227,220,69,231,158,49,152,155,17,74,88,99,234,170,73,34,73,49,90,
211,221,0,0,0,182,111,11,190,239,186,198,81,74,117,93,103,153,85,74,201,84,107,109,18,201,189,246,222,87,200,71,71,210,57,50,10,162,39,208,0,208,214,210,184,184,72,195,97,95,222,86,138,211,42,183,114,
242,70,71,188,226,102,27,88,219,192,199,113,176,13,190,220,78,192,203,42,113,21,147,195,43,135,158,45,61,253,159,113,32,230,35,231,229,241,185,214,200,1,218,24,195,99,229,188,160,108,59,247,156,136,154,
166,105,59,107,71,77,59,77,45,132,192,37,82,158,217,198,227,251,92,46,229,189,184,218,42,56,215,35,121,133,7,126,240,171,170,226,254,221,118,221,43,174,34,19,17,151,87,185,206,218,118,172,110,157,233,
101,102,222,2,20,49,70,165,237,206,187,236,30,34,105,169,124,61,107,141,41,138,188,105,26,162,164,212,54,219,50,3,0,0,224,247,211,130,139,85,197,24,165,16,222,7,101,148,86,58,120,231,133,58,230,143,222,
44,164,188,229,250,31,23,58,58,23,140,181,130,162,53,102,80,187,44,51,137,72,72,73,92,25,85,42,198,232,67,16,88,138,18,70,64,162,164,149,146,82,122,238,55,21,34,197,40,136,66,72,74,36,231,189,84,38,134,
80,150,249,192,203,157,247,60,32,134,240,221,179,79,211,41,40,109,124,240,193,5,173,85,76,105,212,22,17,3,0,0,216,190,45,88,37,210,70,215,85,45,132,212,90,187,198,197,224,59,19,29,171,162,39,181,122,205,
211,171,217,7,76,51,32,18,60,78,95,42,229,26,79,66,68,30,210,77,201,11,167,180,150,66,142,230,112,54,252,190,145,66,134,16,155,186,73,137,72,136,118,181,1,165,132,201,10,114,46,122,159,229,214,20,221,
78,103,7,34,178,42,118,202,188,55,61,29,19,25,107,130,143,206,251,44,207,98,24,197,154,55,0,0,192,246,106,193,94,213,72,209,90,171,164,74,41,186,198,229,121,54,24,244,175,191,238,186,125,246,59,208,216,
142,79,186,63,187,177,169,235,44,203,130,115,130,72,72,161,181,210,90,73,201,179,133,36,17,249,16,80,133,130,81,224,61,23,248,5,81,178,214,24,163,185,79,56,13,135,254,171,170,86,38,87,157,29,203,238,50,
163,197,89,95,253,66,104,250,153,205,154,198,41,165,180,210,198,234,16,49,74,0,0,0,176,85,45,24,85,31,157,171,238,188,20,20,130,183,54,203,243,44,248,230,55,55,94,187,199,218,125,242,162,76,50,19,161,
114,117,37,165,112,46,36,65,33,6,238,24,213,90,145,16,237,162,67,91,247,140,0,54,137,59,161,5,143,227,115,119,74,76,20,3,41,37,93,227,138,206,88,103,249,110,157,238,120,83,85,151,156,247,85,138,117,183,
83,166,36,156,107,180,82,188,228,170,148,242,9,108,32,12,0,0,0,79,216,130,81,181,169,155,24,67,12,161,40,11,34,26,12,106,239,125,102,77,83,213,247,221,245,235,167,63,227,15,139,178,212,89,233,170,185,
186,30,20,121,38,72,42,41,5,137,16,162,247,65,72,41,36,229,185,13,24,48,133,17,144,231,54,196,152,136,188,11,68,66,73,37,133,20,36,141,81,206,251,178,51,94,46,223,53,47,186,121,150,255,240,162,175,78,
111,156,42,138,108,48,168,235,186,201,50,155,101,89,93,85,49,70,231,252,214,153,153,7,0,0,0,108,193,168,202,43,18,241,50,239,82,41,110,90,141,49,26,99,103,231,122,183,222,116,205,218,103,252,97,150,23,
66,23,205,160,55,168,250,82,36,65,73,201,71,43,169,188,182,191,144,34,162,10,5,35,64,72,17,67,114,141,51,90,43,37,165,160,24,67,136,190,106,188,84,249,248,170,61,203,177,137,24,211,249,103,126,182,170,
26,253,232,34,178,70,72,169,180,242,206,5,31,172,177,18,57,21,0,0,96,235,90,48,170,146,160,20,35,241,242,81,82,6,239,99,74,148,200,102,70,196,36,149,188,249,134,159,61,109,221,31,24,155,119,39,86,142,
77,174,244,190,33,41,124,240,74,137,20,147,144,50,198,20,195,22,95,23,19,96,115,120,31,99,76,74,41,33,72,42,225,99,148,54,215,89,103,199,93,215,149,227,171,108,94,198,152,46,248,230,231,41,69,145,82,209,
201,157,243,49,69,74,81,41,21,121,193,87,34,33,241,98,6,0,0,216,170,22,142,170,82,40,41,137,68,72,81,10,41,165,208,70,5,31,132,16,33,68,74,73,43,121,199,173,215,173,63,240,32,31,73,42,59,54,177,3,9,237,
189,139,193,9,65,82,136,152,210,252,125,152,0,182,33,231,188,148,82,43,41,164,136,73,40,219,233,78,174,94,182,106,247,72,74,105,83,22,230,252,179,254,159,150,34,134,24,134,251,165,217,204,8,33,40,145,
143,65,73,165,180,74,66,96,195,42,0,0,128,173,105,193,117,85,23,18,66,200,242,140,136,6,253,202,24,35,21,133,164,143,126,241,9,3,47,198,198,199,93,240,243,167,72,107,163,188,195,182,233,176,237,61,230,
165,152,40,25,165,103,103,102,10,157,46,56,255,76,37,124,12,228,156,43,202,156,136,234,170,198,71,44,0,0,128,81,176,112,85,117,1,41,17,111,133,158,98,20,148,178,204,78,207,78,221,117,231,109,83,83,247,
174,94,189,171,16,54,82,84,74,72,33,188,243,188,39,234,22,57,112,128,197,80,74,185,166,49,90,9,65,33,70,73,50,184,222,213,63,185,232,250,95,253,188,215,155,234,150,165,119,142,4,113,61,53,69,146,24,235,
7,0,0,24,1,139,174,170,58,215,216,44,19,130,164,144,115,179,115,89,102,243,34,119,222,55,181,43,59,157,186,105,180,146,49,132,166,110,132,148,198,26,44,153,14,163,64,42,233,26,151,98,180,153,149,74,249,
16,51,107,251,189,158,205,140,209,186,26,84,117,221,116,199,186,49,197,148,168,169,107,99,236,182,62,100,0,0,0,88,120,183,170,133,88,107,5,9,239,189,181,42,203,243,186,170,136,132,144,74,107,51,232,247,
133,20,38,183,81,137,166,113,198,88,65,9,51,81,96,20,8,34,99,108,211,212,198,106,41,149,115,131,65,191,175,181,137,129,42,87,215,117,147,229,57,9,225,93,208,74,91,107,177,201,26,0,0,192,40,88,116,85,181,
169,27,169,36,175,218,99,173,161,148,234,186,137,49,89,149,164,202,27,31,82,242,74,73,74,36,165,172,234,154,151,101,5,216,182,6,253,65,158,101,49,70,18,20,66,20,66,91,173,98,168,154,32,164,20,89,102,73,
136,166,113,68,20,67,136,33,218,12,85,85,0,0,128,109,111,209,85,213,188,40,82,10,54,203,6,131,170,105,26,173,149,177,70,74,25,19,53,174,209,86,105,149,167,152,234,186,22,66,230,69,238,26,183,37,142,27,
96,81,242,34,79,41,197,20,51,155,217,76,248,16,26,239,140,45,10,65,49,198,152,34,111,13,80,20,121,83,215,194,170,24,49,29,16,0,0,96,219,91,116,84,21,146,98,72,77,93,199,16,172,181,41,165,148,162,148,50,
120,151,91,219,52,110,182,87,141,141,119,148,214,193,7,173,21,102,82,195,72,72,41,248,160,180,22,82,204,206,244,178,204,230,214,54,206,73,99,98,140,66,8,173,116,211,52,77,93,39,74,82,18,161,197,26,0,0,
96,4,44,58,170,58,231,141,209,41,82,12,77,74,177,105,26,41,117,240,181,148,114,48,168,141,209,89,102,189,139,174,241,90,171,68,132,21,0,96,20,72,37,165,148,174,241,130,100,150,89,126,185,42,37,235,170,
38,18,49,122,107,109,12,81,88,37,37,57,231,37,182,174,0,0,0,24,1,139,238,85,5,0,0,0,0,216,58,228,182,62,0,0,0,0,0,128,77,67,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,
0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,22,189,5,0,17,25,171,93,227,98,228,47,188,16,20,67,72,66,102,86,59,231,179,204,198,20,155,38,164,24,4,145,144,72,195,0,0,0,0,219,131,24,163,49,54,165,
148,40,22,69,158,82,234,247,7,130,36,81,20,66,8,165,156,243,101,145,245,230,250,69,145,55,141,123,242,187,150,46,126,99,85,65,206,185,40,164,54,178,26,84,157,110,153,98,114,65,68,31,67,136,82,169,186,
113,74,42,173,164,41,108,191,95,43,133,168,10,0,0,0,176,61,144,82,18,37,162,148,82,234,247,6,218,232,60,203,82,138,33,42,33,132,171,43,37,100,12,209,218,204,251,144,150,228,55,46,246,7,132,148,49,137,
220,26,74,81,41,221,159,235,85,77,67,73,116,199,186,77,83,11,74,90,203,72,193,133,224,125,164,20,150,226,32,1,0,0,0,96,219,235,116,75,31,188,115,206,104,163,148,114,141,107,26,215,52,129,162,143,222,145,
32,33,85,8,94,41,69,20,141,54,79,254,55,46,186,170,218,155,235,141,79,76,214,85,191,174,155,204,100,145,228,100,153,79,79,205,62,220,155,27,91,182,195,97,47,120,121,209,29,119,222,197,16,139,50,31,12,
106,129,189,212,1,0,0,0,182,11,49,4,41,165,82,42,198,24,98,80,74,19,81,74,233,156,51,62,91,102,134,164,82,146,72,216,148,130,54,166,30,212,218,60,217,180,42,246,91,191,126,81,63,160,164,8,41,197,68,86,
43,99,117,127,80,167,72,189,185,254,107,255,248,61,131,65,149,231,89,85,215,74,105,169,4,37,138,33,17,146,42,0,0,0,192,118,193,123,167,149,142,41,9,33,120,122,146,247,129,136,92,221,140,117,139,175,125,
249,227,101,94,122,31,180,146,193,199,148,210,147,111,4,93,116,84,165,20,163,16,130,36,133,166,51,62,222,175,155,163,95,246,70,169,85,136,68,148,54,62,252,192,245,191,186,178,63,253,136,36,73,34,37,33,
164,64,175,42,0,0,0,192,246,192,90,19,66,170,235,90,74,33,149,108,154,48,62,190,98,221,186,245,43,214,60,93,202,20,163,8,77,115,233,119,79,159,155,157,157,24,235,214,141,151,242,201,214,44,23,29,85,133,
20,41,165,254,92,175,211,25,147,70,61,255,69,39,106,171,133,80,247,220,254,155,91,110,254,197,220,212,35,101,158,197,24,141,205,140,53,253,126,213,233,20,79,242,16,1,0,0,0,96,20,52,206,25,253,104,251,
168,49,166,113,141,247,33,47,10,31,228,250,103,30,58,62,185,67,12,65,10,250,193,133,95,155,155,157,149,68,242,73,175,0,176,232,168,106,172,174,7,78,105,145,132,122,225,203,94,47,181,221,184,225,129,235,
127,246,131,193,220,76,150,103,49,198,162,44,148,182,174,241,121,166,139,60,171,106,255,36,15,17,0,0,0,0,70,129,54,58,134,152,82,156,215,180,154,250,131,42,207,140,54,42,144,217,117,207,253,87,174,218,
169,26,84,63,184,228,235,210,85,62,110,177,170,170,144,34,134,96,173,109,154,70,27,227,92,16,34,165,68,33,166,76,198,190,75,127,244,186,255,145,82,122,248,190,187,126,243,235,159,77,61,242,96,81,20,90,
107,107,173,49,70,107,173,181,150,82,74,41,83,218,244,74,5,152,110,5,0,0,0,240,212,178,80,174,147,82,84,85,77,36,178,162,179,227,110,235,198,198,119,16,20,46,189,224,107,245,204,180,41,138,222,236,92,
49,214,137,62,72,41,131,11,137,162,148,155,91,109,93,48,170,218,204,84,131,218,123,223,237,118,18,37,231,156,146,138,4,85,131,170,51,62,246,223,94,240,26,165,205,212,134,251,111,186,238,170,169,13,15,
25,91,116,138,76,41,213,70,85,165,148,148,82,8,129,72,10,0,0,0,176,125,75,41,73,41,99,8,141,115,69,119,114,124,197,46,187,238,246,180,169,141,27,191,127,193,215,230,102,103,243,44,167,232,93,76,86,27,
239,154,162,83,52,181,219,204,123,94,48,170,134,16,98,76,90,235,148,82,74,81,10,225,67,200,178,76,40,245,223,94,248,106,147,217,254,220,212,79,126,112,97,51,152,233,142,143,21,157,142,18,178,173,170,182,
57,149,30,93,42,22,0,0,0,0,182,91,222,123,155,217,24,66,191,215,143,33,74,147,47,95,189,231,228,242,213,73,164,203,206,249,210,160,174,4,73,33,18,145,36,17,243,44,175,235,102,51,239,249,113,122,85,83,
136,49,203,178,193,160,82,148,172,181,131,38,104,149,142,58,238,205,58,203,7,189,153,171,127,244,221,222,236,92,102,117,158,23,101,183,208,202,40,165,218,146,42,13,135,248,81,85,5,0,0,0,216,190,197,16,
149,86,206,59,34,153,124,16,130,200,228,203,119,218,163,236,46,119,131,254,247,206,251,119,33,133,136,169,113,94,25,91,87,85,158,103,155,121,207,143,83,242,20,74,42,239,125,89,150,218,154,24,67,74,81,
231,29,105,178,65,191,255,211,43,47,158,157,218,88,20,153,201,178,178,44,165,144,143,25,250,111,71,255,211,2,150,228,113,1,0,0,0,128,173,102,161,92,151,136,82,140,74,41,99,77,237,93,136,161,25,204,78,
61,112,123,162,164,139,34,73,101,181,118,62,70,33,72,196,241,241,114,243,127,227,130,81,53,81,202,115,227,156,171,235,42,68,145,132,82,74,30,245,146,19,137,210,236,212,134,153,13,15,118,198,58,69,89,230,
89,158,82,44,202,142,49,166,141,170,243,91,84,197,2,158,236,67,5,0,0,0,0,91,215,130,185,78,36,41,165,81,202,104,213,233,20,227,19,227,121,150,53,85,127,48,55,237,235,250,200,151,188,33,146,104,234,58,
179,153,81,166,105,226,230,255,198,5,163,170,247,49,132,216,41,59,68,164,148,112,190,177,101,39,73,227,27,127,231,173,191,176,214,22,121,41,132,80,82,88,107,243,60,111,235,169,252,227,168,155,2,0,0,0,
252,158,48,198,104,163,189,15,245,160,162,68,206,123,165,181,82,114,110,195,157,218,100,198,218,94,213,207,202,50,165,32,36,121,191,185,115,170,232,113,162,170,53,186,170,220,96,48,112,46,138,20,138,162,
123,216,11,78,72,41,109,220,248,224,3,247,63,144,41,163,148,44,242,172,40,59,227,147,19,193,57,154,215,150,186,96,113,24,13,0,0,0,0,0,79,89,11,229,186,254,92,229,188,143,148,18,9,41,164,107,156,16,34,
207,51,87,247,251,115,27,73,208,113,175,124,7,69,79,33,36,74,198,154,205,255,141,11,70,213,16,2,111,219,90,20,54,36,209,212,149,206,114,34,186,245,186,43,203,220,146,82,66,40,173,141,181,134,18,105,99,
180,214,33,132,16,194,252,51,225,94,85,33,4,23,92,149,82,41,37,173,181,16,34,132,208,86,97,99,140,68,196,55,38,34,110,33,224,47,248,72,248,63,99,140,90,107,34,242,222,183,43,12,40,165,188,247,145,119,
123,37,154,255,75,133,16,188,130,1,255,96,140,49,198,200,183,231,91,242,127,182,191,55,132,240,232,82,11,241,209,186,52,31,121,8,161,253,117,124,0,237,217,241,41,240,29,242,73,9,33,248,23,241,3,66,243,
10,204,124,238,206,185,246,172,249,183,243,23,124,131,16,130,30,110,2,1,0,0,0,48,82,22,106,0,200,11,155,98,146,66,74,41,18,37,165,84,140,49,132,168,181,153,121,240,22,74,20,137,18,9,82,170,169,156,119,
139,216,31,106,209,43,73,13,6,3,34,50,198,88,107,149,82,237,186,84,28,31,181,214,28,28,179,44,227,172,102,173,13,33,212,117,205,241,78,74,89,85,85,140,81,74,233,156,243,222,11,33,120,167,128,148,82,155,
77,157,115,77,211,112,170,51,198,16,209,252,219,112,238,228,92,200,191,162,125,164,56,89,242,161,54,77,195,233,217,90,91,215,53,31,173,247,190,61,102,78,165,124,228,41,37,107,109,187,103,1,199,92,231,
28,135,224,24,35,231,200,166,105,248,48,248,24,154,166,225,84,218,198,235,54,49,183,89,156,131,41,63,103,109,42,229,51,106,31,138,16,2,231,227,54,248,2,0,0,0,108,151,22,53,103,105,209,81,149,19,88,158,
231,198,252,231,12,42,14,115,156,222,56,176,214,117,237,189,207,178,172,105,26,34,234,116,58,28,19,133,16,198,24,14,178,28,58,219,89,86,92,230,228,219,228,121,158,231,57,255,58,78,174,28,248,56,221,18,
81,187,21,150,115,238,49,161,147,111,217,150,39,57,35,242,175,104,235,169,92,64,37,34,206,160,52,172,125,198,24,121,93,88,254,154,131,35,223,167,214,218,24,195,95,112,32,230,27,12,119,21,139,28,163,57,
140,26,99,248,14,57,236,242,237,219,147,229,147,106,215,246,226,223,194,143,76,158,231,152,118,6,0,0,0,219,135,199,116,126,114,102,91,212,61,44,58,170,114,208,180,214,180,33,149,127,125,150,101,206,57,
26,38,206,44,203,132,16,85,85,113,181,178,174,235,193,96,144,231,57,7,86,239,125,219,45,208,214,86,219,224,203,223,106,79,140,55,193,242,222,243,126,173,124,255,237,144,61,127,139,136,184,80,202,201,152,
107,162,74,41,78,138,28,22,185,198,105,173,165,225,158,10,237,45,219,241,122,41,229,96,48,8,33,240,125,106,173,179,44,35,34,239,61,215,104,185,126,204,65,147,239,144,143,191,61,134,246,216,184,74,218,
230,224,182,144,220,102,89,254,119,46,66,107,173,243,60,119,206,205,206,206,54,77,195,7,9,0,0,0,240,84,247,187,245,183,69,165,213,69,183,69,26,163,141,209,114,30,34,226,225,248,148,146,49,134,67,91,175,
215,75,41,173,95,191,254,144,67,14,121,238,115,159,59,49,49,65,68,77,211,120,239,191,247,189,239,53,77,115,214,89,103,53,77,211,150,21,157,115,156,92,57,242,114,22,180,214,114,200,227,251,231,1,122,99,
76,91,209,228,192,199,63,200,181,216,170,170,56,245,214,117,205,249,143,107,150,220,0,208,86,73,57,80,182,109,169,28,106,137,168,44,75,231,92,155,35,185,82,75,68,28,136,231,31,9,159,111,219,192,202,255,
89,215,117,150,101,28,64,249,153,224,91,114,85,152,203,174,92,129,230,7,51,132,96,140,225,131,225,102,128,162,40,82,74,179,179,179,72,171,0,0,0,240,84,39,136,218,169,244,143,150,56,105,113,115,235,159,
200,12,30,254,77,237,80,120,219,100,169,148,26,12,6,89,150,213,117,109,140,57,238,184,227,94,253,234,87,183,225,76,8,97,173,213,90,191,228,37,47,9,33,92,121,229,149,119,223,125,55,39,63,142,140,156,77,
171,170,226,250,104,27,82,185,49,52,207,115,239,253,96,48,224,223,219,214,147,67,8,121,158,115,212,35,34,254,86,93,215,28,34,155,166,225,58,232,248,248,56,223,192,123,223,22,86,219,134,87,33,4,71,204,
193,96,80,20,69,85,85,89,150,245,251,253,162,40,184,202,203,189,182,237,60,176,54,28,115,72,229,19,52,198,148,101,217,52,13,23,92,185,11,162,221,102,86,74,201,7,195,113,57,207,243,24,99,123,36,28,88,149,
82,77,211,112,41,23,139,36,0,0,0,192,246,167,141,133,155,121,251,69,55,0,208,176,207,160,13,148,92,92,140,49,58,231,218,73,238,251,236,179,207,113,199,29,199,221,153,223,251,222,247,222,244,166,55,157,
120,226,137,39,157,116,210,185,231,158,235,189,231,253,2,136,136,39,42,113,82,228,105,70,68,196,213,83,46,76,182,109,163,189,94,207,24,83,20,5,231,90,46,157,166,148,178,44,171,170,170,174,235,201,201,
201,118,244,159,103,125,113,110,230,150,217,185,185,57,158,17,101,140,169,235,154,115,161,115,78,41,85,150,101,93,215,220,171,64,68,179,179,179,156,182,187,221,238,96,48,232,245,122,220,243,90,20,133,
181,182,173,185,90,107,185,230,202,213,89,239,125,91,12,78,41,241,239,26,12,6,109,227,41,23,80,121,6,21,223,195,204,204,204,252,5,1,250,253,62,63,8,79,224,25,1,0,0,0,24,65,28,26,197,111,175,103,186,168,
41,57,139,174,170,206,223,52,181,29,200,230,48,199,35,242,189,94,175,44,203,253,247,223,191,219,237,198,24,7,131,193,23,190,240,5,231,92,167,211,153,155,155,251,250,215,191,126,206,57,231,188,239,125,
239,227,1,119,173,117,89,150,7,31,124,240,115,159,251,220,117,235,214,241,108,164,219,111,191,253,194,11,47,188,226,138,43,6,131,129,49,134,3,241,91,223,250,214,103,63,251,217,43,86,172,240,222,207,205,
205,25,99,58,157,14,17,125,245,171,95,253,214,183,190,85,20,197,223,252,205,223,236,186,235,174,33,132,51,206,56,227,219,223,254,118,8,97,239,189,247,62,249,228,147,137,40,198,248,255,253,127,255,223,
157,119,222,201,37,210,149,43,87,190,228,37,47,57,234,168,163,120,230,214,96,48,248,254,247,191,127,238,185,231,62,240,192,3,89,150,101,89,118,234,169,167,242,68,168,15,125,232,67,71,28,113,196,17,71,
28,193,243,195,206,61,247,220,179,206,58,139,207,154,203,159,235,214,173,59,248,224,131,15,63,252,112,174,143,134,16,46,187,236,178,107,175,189,246,199,63,254,177,115,110,197,138,21,199,30,123,236,179,
159,253,236,93,119,221,149,31,168,159,254,244,167,223,249,206,119,110,189,245,214,170,170,38,39,39,143,63,254,248,151,191,252,229,33,132,31,255,248,199,63,252,225,15,143,61,246,216,125,246,217,231,138,
43,174,248,191,255,247,255,162,170,10,0,0,0,219,165,182,133,114,115,44,58,170,182,35,239,92,152,108,123,85,185,38,202,235,70,241,146,85,68,20,66,232,116,58,111,127,251,219,111,188,241,198,75,46,185,132,
243,220,204,204,204,135,63,252,97,174,44,86,85,245,174,119,189,235,57,207,121,142,16,130,195,43,17,237,185,231,158,111,125,235,91,215,172,89,243,197,47,126,145,27,0,254,254,239,255,126,237,218,181,156,
222,180,214,69,81,240,108,39,34,226,42,38,207,217,162,97,21,182,93,0,139,230,45,107,202,217,122,159,125,246,121,223,251,222,87,20,5,247,158,74,41,139,162,56,230,152,99,158,243,156,231,252,213,95,253,21,
183,216,182,103,247,225,15,127,184,237,1,176,214,30,119,220,113,85,85,125,251,219,223,230,83,126,249,203,95,126,226,137,39,182,143,12,255,200,97,135,29,54,24,12,126,242,147,159,76,76,76,124,224,3,31,88,
179,102,141,152,183,224,235,65,7,29,116,192,1,7,252,235,191,254,235,53,215,92,195,147,201,248,103,247,219,111,191,3,15,60,144,195,55,166,255,3,0,0,192,246,33,166,40,72,252,78,54,93,68,212,89,178,213,230,
67,8,221,110,151,227,215,236,236,236,13,55,220,208,239,247,203,178,76,41,29,122,232,161,7,31,124,240,127,255,239,255,157,136,206,60,243,204,187,238,186,235,234,171,175,230,57,85,175,122,213,171,14,62,
248,96,34,186,253,246,219,79,61,245,212,27,111,188,241,249,207,127,254,59,223,249,78,173,245,49,199,28,115,225,133,23,222,117,215,93,175,121,205,107,214,174,93,203,99,235,159,249,204,103,46,185,228,146,
110,183,251,15,255,240,15,19,19,19,237,250,252,28,124,219,213,163,184,127,180,93,87,159,251,104,157,115,90,235,191,248,139,191,40,138,162,105,154,203,46,187,236,212,83,79,205,243,252,61,239,121,207,1,
7,28,176,124,249,242,147,78,58,233,147,159,252,36,175,51,192,63,120,233,165,151,126,249,203,95,86,74,189,231,61,239,121,214,179,158,165,148,122,222,243,158,247,205,111,126,211,24,179,219,110,187,157,120,
226,137,124,84,215,92,115,205,199,62,246,49,33,196,62,251,236,115,252,241,199,243,10,6,39,157,116,210,110,187,237,230,156,187,238,186,235,254,207,255,249,63,74,169,19,79,60,241,152,99,142,177,214,158,
112,194,9,191,248,197,47,218,222,6,165,212,67,15,61,244,197,47,126,241,230,155,111,118,206,113,27,235,82,61,47,0,0,0,0,79,93,75,214,25,201,165,77,94,61,52,207,243,27,111,188,241,236,179,207,38,162,118,
33,42,34,106,154,230,132,19,78,120,247,187,223,253,199,127,252,199,60,53,254,208,67,15,229,41,74,23,93,116,209,111,126,243,155,44,203,174,184,226,138,251,238,187,143,39,212,175,91,183,142,136,14,59,236,
48,158,210,244,163,31,253,232,170,171,174,18,66,108,216,176,33,13,119,189,226,156,206,119,194,149,84,110,6,109,215,118,157,223,9,122,212,81,71,149,101,73,68,15,61,244,208,255,251,127,255,143,39,96,253,
252,231,63,231,249,91,187,237,182,27,47,71,208,46,239,250,189,239,125,47,203,178,94,175,119,215,93,119,113,0,229,102,89,239,253,81,71,29,197,71,181,97,195,134,127,252,199,127,228,214,133,107,175,189,246,
228,147,79,254,202,87,190,50,54,54,198,17,220,24,243,185,207,125,142,31,162,115,207,61,151,31,135,181,107,215,46,95,190,156,59,107,249,215,109,216,176,225,150,91,110,33,162,178,44,121,89,174,165,122,94,
0,0,0,0,158,186,150,44,18,89,107,121,45,42,94,72,181,105,154,179,207,62,251,178,203,46,123,217,203,94,118,192,1,7,172,89,179,134,111,67,68,33,132,195,14,59,236,190,251,238,251,238,119,191,187,106,213,
42,30,160,255,147,63,249,147,55,190,241,141,60,172,207,165,74,34,218,125,247,221,173,181,59,238,184,35,151,96,239,188,243,206,185,185,57,173,245,196,196,68,59,170,78,243,54,68,165,225,208,63,207,133,106,
235,163,28,160,67,8,203,150,45,227,42,236,46,187,236,242,229,47,127,185,221,23,128,127,118,247,221,119,119,206,241,164,174,71,31,29,173,155,166,233,116,58,183,223,126,123,187,104,109,158,231,253,126,255,
105,79,123,26,255,248,77,55,221,196,139,12,240,242,168,188,27,214,158,123,238,41,132,224,21,0,62,249,201,79,242,111,105,3,104,74,233,105,79,123,218,198,141,27,231,239,28,203,115,188,184,9,152,247,53,88,
170,167,6,0,0,0,224,41,106,201,162,42,79,51,226,245,71,121,168,221,123,63,53,53,117,250,233,167,127,253,235,95,159,157,157,221,121,231,157,95,248,194,23,254,209,31,253,17,231,179,61,247,220,147,111,198,
203,75,113,135,43,205,107,45,37,162,170,170,56,44,242,2,171,60,142,207,201,146,27,91,57,119,242,239,106,75,170,41,165,201,201,73,46,139,114,112,228,105,254,188,50,0,255,22,110,21,224,113,246,118,147,45,
239,61,23,53,249,6,28,25,121,1,129,118,67,44,206,193,188,152,20,255,103,187,6,2,207,54,107,151,166,226,101,13,248,68,218,253,84,171,170,226,165,254,185,117,129,139,193,252,35,156,83,249,91,252,255,75,
245,212,0,0,0,0,60,69,45,89,84,229,117,151,120,57,167,178,44,143,63,254,120,107,237,151,190,244,37,34,154,155,155,235,118,187,247,221,119,223,183,190,245,173,253,247,223,127,247,221,119,87,74,205,204,
204,164,148,30,122,232,161,213,171,87,215,117,253,149,175,124,229,178,203,46,107,87,134,226,177,117,34,114,206,109,220,184,113,213,170,85,66,136,229,203,151,211,112,93,125,14,139,237,120,61,255,118,206,
139,198,152,233,233,105,94,198,149,191,197,205,9,117,93,223,127,255,253,92,221,188,231,158,123,254,242,47,255,146,111,80,215,117,167,211,153,153,153,89,185,114,101,191,223,151,82,242,74,254,188,98,43,
71,88,14,181,109,47,108,140,241,206,59,239,220,115,207,61,137,104,221,186,117,188,66,42,183,19,240,33,221,113,199,29,156,95,83,74,111,127,251,219,7,131,1,199,104,158,4,214,158,5,183,213,242,146,171,237,
118,0,109,191,4,0,0,0,192,239,185,37,235,85,229,234,35,47,128,207,107,133,190,244,165,47,253,216,199,62,118,194,9,39,140,143,143,243,114,164,71,31,125,244,30,123,236,193,55,184,249,230,155,99,140,23,95,
124,49,17,229,121,254,242,151,191,252,160,131,14,106,171,167,175,122,213,171,254,234,175,254,234,144,67,14,81,74,93,119,221,117,60,26,254,172,103,61,107,255,253,247,215,90,239,181,215,94,188,18,22,17,
113,64,36,162,123,239,189,151,136,164,148,251,238,187,239,178,101,203,38,39,39,215,175,95,207,45,7,156,32,181,214,151,95,126,121,175,215,139,49,174,89,179,230,221,239,126,119,167,211,113,206,21,69,177,
98,197,138,119,188,227,29,239,122,215,187,172,181,121,158,115,14,230,21,3,178,44,107,183,224,226,46,2,110,111,248,193,15,126,192,153,117,249,242,229,127,241,23,127,193,123,4,172,91,183,238,127,253,175,
255,245,202,87,190,114,122,122,250,170,171,174,162,225,58,89,123,239,189,55,255,96,74,233,149,175,124,229,41,167,156,18,66,224,252,218,14,250,243,23,188,165,2,86,87,5,0,0,0,160,37,172,170,242,94,166,109,
93,144,136,66,8,187,238,186,235,174,187,238,122,236,177,199,114,100,108,39,182,159,117,214,89,63,252,225,15,165,148,23,94,120,225,211,159,254,244,67,14,57,100,98,98,226,207,254,236,207,254,236,207,254,
140,111,192,209,246,162,139,46,138,49,94,112,193,5,135,28,114,72,89,150,147,147,147,31,252,224,7,231,39,57,222,110,138,119,67,189,229,150,91,246,221,119,95,158,134,127,202,41,167,240,8,59,39,78,222,233,
74,107,93,85,213,41,167,156,242,158,247,188,39,203,178,67,14,57,228,217,207,126,54,119,20,112,6,189,253,246,219,185,215,182,221,127,43,165,196,251,26,20,69,209,158,23,55,36,252,230,55,191,249,202,87,190,
242,154,215,188,134,136,14,58,232,160,175,124,229,43,52,108,72,56,247,220,115,157,115,159,255,252,231,215,172,89,179,122,245,234,221,119,223,253,195,31,254,48,205,235,193,229,241,253,118,163,175,118,189,
2,110,162,64,84,5,0,0,0,96,106,213,170,85,155,252,70,59,126,253,232,152,117,162,181,251,60,139,136,238,190,237,122,107,45,239,23,202,133,64,34,226,91,182,93,167,206,185,91,111,189,85,74,121,223,125,247,
241,40,57,103,175,233,233,233,75,47,189,244,212,83,79,253,209,143,126,212,174,189,250,139,95,252,226,190,251,238,19,66,236,176,195,14,237,250,77,15,62,248,224,165,151,94,122,253,245,215,111,220,184,209,
123,127,253,245,215,239,180,211,78,59,236,176,3,17,221,114,203,45,95,250,210,151,246,217,103,31,222,214,245,218,107,175,189,249,230,155,189,247,55,222,120,99,8,97,237,218,181,60,176,126,201,37,151,156,
126,250,233,135,30,122,40,119,20,92,116,209,69,188,102,234,253,247,223,255,227,31,255,184,170,170,85,171,86,241,58,166,92,28,253,209,143,126,116,237,181,215,242,97,31,127,252,241,124,36,151,92,114,9,247,
18,236,178,203,46,7,29,116,144,82,106,122,122,250,138,43,174,152,157,157,85,74,221,120,227,141,55,220,112,131,82,106,151,93,118,225,19,148,82,94,113,197,21,215,95,127,253,253,247,223,223,239,247,47,187,
236,50,142,185,147,147,147,156,83,249,56,175,188,242,202,235,174,187,46,165,180,223,126,251,237,189,247,222,82,202,91,110,185,229,151,191,252,101,155,89,249,139,173,241,252,3,0,0,0,108,57,130,4,137,206,
228,106,33,196,45,55,252,76,74,73,137,104,49,171,200,139,253,214,175,223,228,55,184,182,23,66,48,214,196,24,83,76,71,159,240,39,68,116,229,197,103,116,58,29,222,101,148,119,10,229,223,215,206,16,226,94,
204,126,191,63,57,57,201,75,68,241,252,33,165,20,199,83,238,31,229,181,253,149,82,131,193,160,44,75,238,212,228,121,84,52,156,213,196,7,64,68,188,103,21,239,221,202,195,241,167,156,114,202,178,101,203,
136,232,244,211,79,63,231,156,115,120,105,42,165,84,123,39,82,202,217,217,217,229,203,151,243,142,172,41,37,158,122,197,197,75,222,217,181,170,42,254,189,220,72,58,62,62,222,239,247,171,170,90,177,98,
197,131,15,62,184,124,249,242,185,185,185,178,44,121,235,87,158,224,85,20,197,198,141,27,151,45,91,198,179,199,56,86,182,191,189,221,254,32,198,152,231,249,212,212,20,55,63,180,27,37,112,237,121,114,114,
114,122,122,58,198,56,57,57,217,235,245,56,244,247,122,189,78,167,195,29,20,92,157,125,178,47,14,0,0,0,128,109,75,144,32,177,195,30,207,18,66,124,247,27,159,85,90,165,152,22,181,91,213,146,229,33,142,
86,28,179,242,60,31,27,27,227,244,198,121,142,27,0,156,115,156,65,219,29,161,120,86,62,127,139,23,4,224,111,209,112,91,44,190,91,231,92,211,52,28,227,218,159,226,193,250,118,78,82,158,231,156,71,57,50,
122,239,39,39,39,103,102,102,120,94,20,247,137,18,17,167,73,222,241,149,167,67,113,117,214,24,51,51,51,211,52,205,216,216,216,204,204,204,248,248,56,207,244,31,12,6,109,192,229,22,130,178,44,57,209,114,
248,230,38,1,173,53,7,119,158,221,149,101,25,239,131,213,46,14,192,171,192,242,18,4,188,173,87,167,211,153,157,157,181,214,214,117,29,99,228,5,95,185,56,141,117,85,1,0,0,0,104,9,123,85,137,136,167,7,133,
16,56,123,133,16,178,44,227,117,248,185,38,202,153,143,134,19,252,57,89,182,145,180,93,42,149,191,230,178,43,135,60,142,131,60,31,191,215,235,209,112,153,82,78,159,198,24,46,190,114,205,149,243,34,23,
65,121,185,40,30,184,231,224,200,137,147,227,99,155,131,57,233,182,7,208,46,158,213,102,220,193,96,208,46,80,165,134,98,140,77,211,240,253,240,17,242,41,115,245,151,147,122,219,141,202,165,86,62,223,16,
130,115,46,203,178,162,40,120,202,23,79,14,227,109,105,185,8,141,6,0,0,0,0,128,165,28,101,230,232,201,173,162,188,24,19,103,71,26,6,80,26,134,182,182,32,218,198,62,78,105,28,106,105,152,23,57,137,114,
242,227,122,237,220,220,156,16,130,91,11,104,216,120,48,54,54,198,119,110,173,229,40,204,25,145,127,133,247,190,174,235,162,40,140,49,156,44,249,56,121,4,191,105,154,148,82,150,101,188,132,42,55,218,90,
107,219,233,249,92,196,205,178,140,43,157,124,58,252,43,184,124,203,173,174,28,196,139,162,224,6,92,174,28,211,188,41,83,124,142,124,84,188,161,23,17,13,6,3,46,199,206,191,67,46,12,47,225,243,2,0,0,0,
240,20,181,100,85,213,54,137,242,160,127,74,137,231,221,115,146,107,27,79,185,42,201,51,238,219,194,42,223,140,139,169,237,48,125,219,255,202,97,142,147,43,7,190,251,239,191,255,111,255,246,111,7,131,
1,215,38,7,131,65,81,20,68,196,149,203,249,17,179,157,221,207,171,165,22,69,209,222,103,91,10,229,160,201,85,88,78,210,60,124,207,103,33,132,224,198,3,110,129,229,248,203,171,177,114,120,229,67,229,166,
2,30,253,111,39,153,241,9,182,39,194,41,188,173,1,243,143,112,106,231,199,132,143,153,111,143,170,42,0,0,0,192,146,69,213,118,1,166,182,162,201,1,145,3,31,143,203,183,181,82,254,199,118,156,189,29,244,
231,219,112,98,107,91,54,121,156,157,247,193,226,0,215,237,118,231,230,230,136,168,40,10,94,24,149,239,179,93,246,191,174,235,182,61,148,135,224,121,221,83,78,153,243,123,12,218,124,204,119,206,137,153,
127,156,134,203,32,240,221,182,211,197,120,142,23,255,63,159,72,187,209,64,187,108,66,219,57,208,22,74,173,181,60,178,207,235,121,181,251,108,209,112,13,47,78,201,220,204,202,165,89,0,0,0,128,223,115,
75,214,0,192,185,144,187,48,219,70,207,182,184,200,21,199,118,14,62,13,39,245,115,249,176,173,200,114,185,145,136,56,255,53,77,195,9,146,99,159,49,134,135,230,57,62,18,81,211,52,68,196,117,89,78,195,252,
35,188,150,22,127,139,19,161,49,38,207,115,174,233,182,133,207,182,9,33,13,55,199,226,133,250,249,126,218,28,201,115,170,218,41,255,109,108,37,34,222,28,139,134,13,175,252,173,249,145,151,179,108,187,
232,108,187,59,43,215,152,185,204,204,140,49,220,89,203,39,5,0,0,0,0,75,86,85,77,195,253,66,219,255,108,87,104,226,127,105,247,11,229,162,41,167,82,46,163,182,55,160,97,33,147,230,237,173,218,222,67,27,
233,218,98,103,251,131,109,245,180,253,89,26,206,166,111,123,94,57,22,183,7,214,86,64,249,223,219,133,247,219,229,177,230,143,194,183,203,199,114,123,67,155,116,231,183,150,242,178,169,124,70,220,35,203,
41,150,15,172,221,250,117,254,131,51,255,124,219,74,42,150,169,2,0,0,0,96,72,69,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,
20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,
85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,
0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,
96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,
66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,
10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,
0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,
40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,
170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,168,5,163,106,140,145,136,66,12,148,200,57,175,148,20,
41,197,24,41,145,16,194,57,47,164,48,70,135,16,133,32,99,244,86,60,102,0,0,0,0,120,10,72,145,66,136,66,138,224,125,140,201,213,77,12,65,72,177,249,247,176,96,84,149,82,214,117,109,141,37,65,214,26,165,
148,143,65,107,165,148,108,234,90,107,21,66,172,155,134,191,8,33,44,197,233,0,0,0,0,192,246,163,105,92,167,147,41,41,137,98,150,231,89,102,72,8,173,213,230,223,195,130,213,208,148,146,49,38,120,79,82,
139,68,131,193,64,41,77,68,69,153,167,72,101,89,164,68,41,145,148,210,251,16,66,32,90,68,64,6,0,0,0,128,237,158,181,182,215,27,140,135,104,140,173,235,90,9,89,213,141,148,139,104,64,93,240,166,74,43,33,
132,16,66,74,89,150,165,148,138,4,37,162,153,185,185,16,98,83,215,82,138,24,147,247,65,107,149,210,82,156,13,0,0,0,0,108,71,130,111,148,214,36,40,196,36,149,180,185,201,243,76,44,166,188,249,120,13,0,
252,133,119,225,225,135,30,22,66,80,164,24,227,138,29,118,241,49,52,77,211,222,82,8,66,73,21,0,0,0,0,30,195,24,211,29,95,70,68,130,68,240,46,81,148,139,10,170,143,19,85,67,8,66,202,68,73,41,37,164,178,
214,202,212,72,33,119,221,125,93,209,233,10,33,41,9,165,164,82,210,57,151,80,86,5,0,0,0,128,223,150,72,144,30,23,36,92,53,151,217,76,41,27,99,168,171,122,243,239,97,193,168,106,140,137,33,90,107,149,20,
157,78,103,110,110,238,59,223,250,74,53,232,23,221,101,69,103,50,81,114,222,165,152,98,140,82,74,185,152,153,92,0,0,0,0,240,251,32,74,59,177,98,199,16,252,229,151,126,123,118,118,182,223,239,9,33,202,
78,185,249,247,240,120,85,85,231,156,54,154,40,246,250,253,44,203,180,116,19,19,227,82,233,229,203,119,202,178,188,40,172,214,186,105,156,49,38,166,184,20,167,3,0,0,0,0,219,143,241,201,157,82,162,24,98,
53,59,53,62,62,46,165,76,73,212,117,243,95,255,228,208,130,81,53,197,148,101,182,174,26,239,83,158,89,34,162,72,223,254,202,167,136,104,197,78,107,124,148,179,211,179,193,7,33,37,17,25,99,19,165,24,99,
8,145,123,1,164,20,66,16,170,173,0,0,0,0,219,15,65,198,24,65,194,59,159,98,18,66,196,16,99,136,36,72,8,145,82,18,82,74,41,180,86,49,145,144,166,179,108,135,232,253,197,223,249,162,16,210,123,95,228,54,
166,184,52,43,0,44,36,120,39,149,218,253,25,207,234,140,47,119,174,214,74,106,155,197,224,165,16,90,43,173,37,81,140,49,134,144,136,4,122,88,1,0,0,0,182,27,49,38,239,125,140,65,74,65,146,66,12,66,9,155,
25,34,65,148,234,186,105,234,166,110,92,237,154,44,239,228,227,171,41,209,236,212,148,53,86,8,18,68,85,213,148,101,65,180,136,124,168,86,173,90,181,168,67,188,247,238,155,247,120,250,254,41,137,164,242,
222,204,6,99,148,107,154,152,200,57,207,107,91,17,201,148,104,120,16,216,184,21,0,0,0,96,59,145,18,133,224,165,20,198,90,41,165,214,90,8,17,98,140,62,52,46,20,185,53,70,27,107,131,19,229,178,93,198,150,
237,16,170,193,85,87,156,55,51,61,157,103,165,144,65,106,51,55,219,163,24,149,218,220,93,0,22,29,85,67,83,223,117,219,117,107,159,241,172,162,44,59,19,203,166,31,121,208,213,131,204,102,74,43,34,138,41,
249,16,120,53,86,169,164,86,50,70,20,86,1,0,0,0,182,7,74,233,148,146,16,34,17,197,24,131,15,222,7,239,131,84,202,42,33,164,14,193,103,54,95,177,230,25,54,239,8,74,231,156,117,90,153,169,20,98,136,141,
181,121,34,161,132,136,33,108,193,168,154,18,213,117,253,155,95,255,108,159,3,14,150,202,216,114,92,132,58,184,129,205,116,8,81,146,176,86,107,173,40,81,34,10,49,8,44,185,10,0,0,0,176,93,136,49,42,165,
184,69,213,59,47,136,140,86,214,24,18,188,48,85,18,202,76,174,222,91,153,92,144,56,255,204,83,203,220,74,17,67,136,214,102,85,93,135,232,37,145,210,106,243,151,228,95,244,0,189,144,68,66,81,76,223,252,
143,79,122,239,109,86,172,220,109,159,164,242,148,100,140,193,123,151,98,164,148,136,82,240,62,6,148,84,1,0,0,0,182,27,41,165,20,66,80,74,116,202,188,40,50,18,228,131,23,68,210,100,83,189,102,229,174,
207,144,42,163,68,151,126,231,180,20,154,65,127,224,92,72,73,104,173,172,205,180,50,36,196,162,166,50,45,186,170,170,141,137,193,147,84,90,201,251,238,252,245,238,123,29,96,76,214,25,223,65,8,173,109,
150,40,58,231,98,72,148,146,82,74,27,141,153,85,0,0,0,0,219,7,173,85,74,201,57,47,165,200,242,172,105,92,191,106,146,208,99,19,147,182,220,97,135,157,215,102,89,161,149,184,232,91,159,15,222,75,105,98,
12,74,217,193,160,71,68,193,39,239,234,178,44,7,131,70,169,205,173,150,46,190,87,53,68,155,217,224,157,146,218,53,245,237,183,92,183,219,211,246,21,82,153,162,99,243,177,44,43,165,164,166,233,231,121,
70,137,154,198,45,106,61,2,0,0,0,0,24,89,41,165,148,40,165,164,148,74,41,213,141,183,249,216,154,221,214,154,238,78,227,147,203,98,76,77,83,159,253,213,207,82,12,137,132,16,34,203,179,16,93,102,243,94,
127,144,101,58,207,109,164,72,73,108,254,238,170,98,191,245,235,151,228,208,143,123,237,59,166,167,103,242,162,228,229,178,248,0,188,15,136,170,0,0,0,0,219,183,24,130,85,241,172,51,190,100,164,183,70,
135,16,99,76,156,104,159,228,61,47,89,84,37,73,62,154,151,189,252,181,81,88,146,68,137,66,240,90,170,180,249,177,25,0,0,0,0,158,130,206,59,235,243,157,50,239,205,206,116,59,157,185,185,190,49,214,7,111,
173,14,254,201,110,104,186,116,81,149,168,174,235,110,183,219,52,77,74,41,198,80,20,69,8,33,4,236,185,10,0,0,0,176,61,19,148,188,247,89,150,9,169,122,189,190,177,54,197,160,181,122,242,83,150,244,82,28,
30,17,81,85,55,157,178,51,59,59,151,98,88,185,195,202,126,191,239,67,104,26,103,204,146,253,10,0,0,0,0,24,65,74,234,152,104,80,213,68,41,203,172,84,146,72,166,152,22,181,49,213,38,45,89,142,236,118,50,
162,84,148,69,8,97,80,87,73,144,20,34,179,22,203,170,2,0,0,0,108,223,124,240,198,26,165,21,165,100,173,173,235,58,17,133,24,181,124,178,189,170,75,22,85,149,54,222,121,239,26,65,194,215,49,165,68,90,55,
174,81,79,250,16,1,0,0,0,96,148,165,152,130,143,214,90,31,252,220,236,92,74,73,42,245,228,231,84,209,18,70,213,153,233,57,99,140,210,38,197,72,68,148,82,93,215,89,150,45,213,253,3,0,0,0,192,136,146,201,
121,47,36,25,171,83,10,90,233,24,163,82,50,198,145,105,0,200,139,76,41,229,156,83,90,197,24,163,143,198,24,239,61,22,171,2,0,0,0,216,238,101,121,230,131,215,74,199,152,146,34,161,228,146,204,172,95,116,
84,77,49,42,173,148,86,82,164,186,14,49,4,146,66,144,84,66,164,24,141,214,68,36,164,20,70,16,145,22,122,17,107,188,2,0,0,0,192,83,144,15,193,187,64,41,9,149,138,50,111,154,224,157,183,86,11,33,26,231,
181,150,130,4,81,10,33,22,101,238,156,79,155,93,109,93,116,84,109,66,148,222,229,69,25,73,68,162,72,73,11,85,20,118,80,53,188,214,43,223,140,19,106,74,233,209,126,0,0,0,0,0,216,78,141,79,116,167,167,102,
133,16,137,68,112,49,197,144,89,165,149,172,106,95,22,86,41,89,85,46,196,24,99,170,6,181,16,36,196,230,142,186,47,58,170,106,173,149,208,41,197,170,170,139,178,8,148,156,247,162,150,49,68,34,74,49,166,
148,164,148,82,202,148,82,140,17,85,85,0,0,0,128,237,219,244,198,25,18,130,132,72,41,21,133,173,107,242,62,8,73,68,73,8,53,59,215,51,198,100,89,230,26,239,92,211,233,148,206,249,205,188,231,69,71,213,
220,170,126,213,8,159,164,84,90,73,173,44,201,80,247,251,89,89,112,42,229,120,170,164,36,34,41,133,64,175,42,0,0,0,192,118,45,5,153,72,134,24,189,115,209,123,239,131,50,166,113,62,132,84,213,149,82,202,
24,219,239,247,149,84,221,110,167,174,235,45,88,85,245,206,81,164,206,120,25,99,170,170,90,10,21,99,200,202,194,53,78,41,37,165,164,68,137,146,15,65,8,145,136,124,227,22,251,43,0,0,0,0,224,41,36,81,18,
34,41,165,72,200,44,203,104,48,208,74,40,34,145,171,36,84,8,41,248,70,81,74,41,38,74,218,152,224,195,102,222,243,162,163,170,80,154,234,193,160,87,41,173,172,213,141,139,42,203,143,56,230,181,74,63,58,
131,74,8,145,82,74,41,41,37,137,232,201,47,82,0,0,0,0,0,163,76,74,225,26,151,101,89,227,26,169,20,5,170,251,211,223,187,248,91,185,150,131,193,156,209,150,98,180,214,58,31,156,115,49,10,185,217,253,161,
98,191,245,235,23,117,40,222,57,147,231,33,132,208,52,38,47,158,255,162,215,140,77,140,123,239,83,164,152,98,226,230,84,33,40,37,222,167,74,98,11,0,0,0,0,128,237,93,140,65,8,201,133,203,16,125,145,23,
117,85,7,215,92,118,201,153,77,191,23,66,20,66,82,10,121,158,249,16,196,102,111,103,186,232,168,170,181,172,106,39,164,58,234,101,39,217,34,79,137,154,186,246,174,255,171,171,46,25,12,6,77,211,104,163,
181,214,52,108,90,221,252,212,12,0,0,0,0,79,69,198,154,186,118,193,7,74,177,211,237,8,93,238,115,192,179,39,150,239,24,66,20,66,136,232,46,58,239,171,190,234,41,101,132,36,231,130,220,236,105,247,11,70,
213,20,99,19,162,214,58,183,202,59,39,148,110,170,58,47,50,99,116,19,196,225,71,191,70,25,75,41,206,108,124,232,87,63,187,188,25,204,37,34,165,20,183,171,74,41,219,102,128,136,197,170,0,0,0,0,182,119,
41,37,33,132,16,194,251,16,99,180,214,118,58,157,221,159,241,236,178,232,42,155,121,231,174,188,228,12,87,87,141,79,68,188,152,169,136,209,91,107,235,170,201,139,66,72,114,206,255,110,132,93,48,170,74,
41,234,170,50,54,115,33,80,36,138,222,150,165,107,154,172,40,15,123,209,43,181,45,30,126,240,222,187,110,253,213,189,119,221,86,118,198,164,16,70,43,165,148,214,154,163,42,13,151,86,197,98,85,0,0,0,0,
219,55,158,170,196,95,135,16,189,247,66,8,165,84,18,52,185,108,229,142,187,238,157,151,19,137,210,5,223,250,130,81,74,75,74,66,242,109,4,137,166,105,140,209,137,146,82,250,119,167,91,45,24,85,141,213,
49,164,148,98,211,184,206,88,57,232,85,36,101,74,244,162,227,222,168,140,125,240,222,187,239,248,205,207,250,115,211,33,164,178,204,99,76,101,89,114,84,85,74,181,241,20,57,21,0,0,0,96,187,199,11,234,115,
90,21,66,196,152,188,247,252,159,218,40,34,189,235,211,15,44,202,241,110,183,248,202,231,255,213,106,105,243,44,198,72,148,188,15,68,162,40,242,166,174,133,80,49,110,118,84,205,50,229,189,24,12,250,82,
170,162,147,123,231,155,170,62,250,248,183,234,44,123,248,193,123,111,251,245,79,7,115,51,137,40,203,236,196,196,68,74,73,74,213,66,66,5,0,0,0,248,253,209,46,0,197,109,0,82,202,148,40,198,88,55,77,102,
148,16,202,135,56,185,211,94,59,237,178,166,55,59,119,217,249,255,209,52,78,74,145,101,150,132,104,26,71,68,49,132,24,162,205,236,99,238,121,193,197,170,234,58,68,162,162,44,180,146,85,85,91,171,83,94,
216,34,79,49,222,125,219,181,253,185,105,33,164,86,186,200,75,173,21,9,173,164,104,123,85,31,115,232,91,226,17,1,0,0,0,128,209,193,133,85,46,166,242,180,165,148,100,94,20,83,83,211,203,150,21,179,51,253,
166,247,128,247,59,219,60,79,130,140,49,41,134,185,217,185,44,207,173,53,77,211,88,107,83,138,233,119,214,56,93,48,170,198,16,34,165,64,73,43,43,133,106,92,60,236,152,215,165,68,179,83,15,223,119,247,
237,69,94,22,69,150,103,197,212,244,236,14,59,172,232,13,106,107,237,252,9,85,0,0,0,0,240,123,34,198,200,33,144,167,212,243,23,68,36,40,78,142,119,132,80,89,150,249,166,71,177,178,121,247,5,47,125,227,
165,231,125,201,100,25,81,170,171,202,24,173,181,74,41,53,77,99,204,99,171,170,11,239,106,37,133,86,218,249,80,187,16,98,144,198,142,77,140,55,117,125,237,53,63,236,116,199,203,50,159,152,152,232,116,
139,167,175,221,61,9,209,237,148,143,153,251,15,0,0,0,0,191,63,98,140,28,82,219,142,80,41,101,136,36,164,118,206,11,34,173,236,29,55,253,194,55,141,50,38,36,253,200,212,84,94,228,89,150,213,117,67,36,
82,74,82,110,162,132,186,96,85,85,144,44,10,43,106,89,247,251,89,89,28,113,204,107,189,247,222,245,93,213,147,74,167,68,41,37,18,186,95,53,157,178,160,68,66,138,118,242,87,219,169,64,68,143,233,7,0,0,
0,0,128,237,140,82,170,141,170,243,167,88,41,69,121,110,123,189,40,172,84,82,40,107,123,211,27,187,203,87,30,253,226,19,46,56,255,76,231,189,144,42,58,199,229,206,224,235,223,189,231,5,163,170,82,162,
170,93,240,33,43,11,239,188,210,58,37,186,238,167,151,198,148,10,163,59,157,142,214,70,43,169,181,22,191,179,208,127,91,245,37,162,244,187,77,7,0,0,0,0,176,125,105,227,223,252,236,231,125,12,97,32,132,
144,66,120,159,148,242,115,27,239,40,198,151,83,214,85,228,67,136,74,41,225,41,132,64,68,74,109,98,139,211,5,75,158,188,208,0,127,193,63,25,67,168,170,74,205,131,17,127,0,0,0,0,88,200,252,242,37,13,7,
222,23,117,15,143,23,85,83,74,188,215,20,175,63,149,82,114,206,89,107,13,183,191,42,213,246,207,34,173,2,0,0,0,192,99,204,15,138,28,44,99,140,139,74,171,143,215,72,202,247,24,66,224,192,42,132,48,214,
104,173,57,170,162,164,10,0,0,0,0,143,175,77,138,79,44,52,46,216,171,218,174,224,42,132,120,244,151,8,49,191,152,218,206,151,66,55,42,0,0,0,0,108,74,74,137,210,48,167,62,129,217,246,11,254,64,76,137,187,
84,245,112,244,159,82,18,243,208,188,116,140,180,10,0,0,0,0,155,196,29,163,252,245,98,27,71,255,139,108,59,111,173,1,73,226,63,35,233,252,95,131,94,85,0,0,0,0,248,93,237,16,253,19,142,139,255,197,180,
42,110,84,77,191,93,79,69,72,5,0,0,0,128,255,210,38,67,234,210,77,171,226,61,178,164,244,206,123,31,132,144,74,254,231,184,127,187,218,63,79,186,2,0,0,0,0,120,12,231,61,17,249,16,137,82,140,41,196,176,
168,31,199,86,82,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,
162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,
170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,136,170,0,0,0,0,48,162,16,85,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,
5,0,0,0,128,17,133,168,10,0,0,0,0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,168,5,163,170,148,210,90,237,67,12,62,40,109,178,204,144,32,87,187,224,189,214,202,24,69,130,82,162,16,99,217,41,154,166,
217,154,7,13,0,0,0,0,163,79,27,157,98,108,106,103,51,35,180,41,115,45,136,130,247,68,84,59,103,180,110,106,231,155,70,43,173,181,74,155,186,135,5,163,106,83,55,33,144,20,66,164,88,13,250,77,237,155,170,
94,182,195,14,90,43,239,67,136,68,137,180,82,82,136,166,113,82,170,45,118,142,0,0,0,0,240,148,212,212,181,16,74,74,145,98,148,41,212,158,66,210,121,145,123,231,40,138,148,82,158,231,36,196,96,80,185,198,
73,33,126,247,30,22,140,170,206,185,24,131,84,106,108,98,204,216,204,55,149,214,122,183,189,255,48,198,212,56,23,66,12,62,120,231,136,40,132,40,37,26,9,0,0,0,0,224,49,100,136,81,8,217,84,46,248,216,155,
235,117,38,119,241,62,100,58,142,143,143,213,117,93,213,85,94,228,198,26,33,164,247,126,19,63,191,208,29,231,69,161,149,18,34,134,24,164,164,75,207,251,15,165,117,217,25,183,197,184,16,194,104,41,132,
72,68,130,40,134,40,21,162,42,0,0,0,0,252,22,239,131,160,24,130,215,70,147,72,227,147,203,118,88,189,179,49,250,130,243,206,156,157,157,202,178,204,26,99,173,245,222,53,77,157,210,38,90,0,30,167,87,149,
148,150,121,158,135,64,68,50,166,40,165,32,18,171,118,121,90,94,148,34,5,169,164,178,70,72,73,41,201,77,212,107,1,0,0,0,224,247,154,205,116,150,103,198,104,65,212,56,87,76,236,226,92,152,122,248,17,87,
247,202,178,20,66,56,239,98,140,90,107,99,140,82,155,104,40,93,48,170,10,82,51,51,115,51,83,179,77,221,212,85,95,107,245,157,175,159,234,154,102,217,202,157,165,46,170,198,135,24,165,148,49,197,148,208,
0,0,0,0,0,0,143,149,98,26,84,142,132,76,41,102,229,68,119,217,50,34,186,226,178,111,201,36,170,202,57,239,181,82,77,227,66,136,66,200,16,194,239,222,195,130,17,115,80,245,203,178,107,51,19,82,234,142,
77,164,68,153,74,86,75,33,101,103,98,85,222,93,17,66,108,170,154,136,164,86,222,199,45,119,146,0,0,0,0,240,84,212,237,150,90,203,198,135,32,108,49,190,147,150,58,185,70,166,144,98,116,206,11,33,140,49,
82,42,33,68,140,113,147,13,0,106,213,170,85,155,188,235,162,40,102,103,102,187,157,210,88,93,85,3,95,59,169,212,29,183,221,184,231,94,251,151,221,137,188,200,231,166,55,136,20,109,102,165,82,131,126,165,
53,22,1,0,0,0,0,128,255,52,24,84,70,235,126,229,119,222,99,239,178,187,124,110,102,230,251,23,126,205,135,80,22,70,42,173,148,116,206,165,68,82,9,33,104,147,43,74,137,253,214,175,95,212,175,212,70,253,
183,163,94,155,151,69,111,102,67,111,250,62,225,7,66,200,126,175,175,109,150,82,74,41,9,65,66,8,34,18,66,164,180,201,124,12,0,0,0,0,219,15,169,68,10,201,90,83,85,85,76,41,203,115,163,117,111,174,103,50,
237,130,94,189,199,58,169,10,41,232,187,103,127,193,15,234,44,51,33,110,110,64,92,116,84,77,36,98,244,71,190,244,164,172,40,137,200,187,193,253,183,95,111,116,82,82,197,24,219,226,173,26,174,9,16,55,251,
80,0,0,0,0,224,169,72,43,85,55,181,144,74,8,145,231,249,96,208,143,148,172,45,87,237,252,116,210,37,9,170,251,131,43,46,249,26,37,217,239,247,178,204,110,126,62,92,116,84,45,138,108,118,182,39,181,61,
252,197,39,230,69,41,69,74,36,101,170,238,191,253,186,56,212,86,85,137,8,101,85,0,0,0,128,237,91,140,129,72,74,33,136,146,177,218,39,189,124,213,30,89,57,65,66,144,32,95,213,223,255,238,233,130,210,204,
244,204,242,21,203,171,186,217,252,181,163,22,29,85,165,20,253,65,93,148,153,27,52,50,179,135,29,117,98,86,230,109,111,1,130,41,0,0,0,192,239,155,24,130,148,50,17,9,41,4,61,26,68,99,140,34,134,239,93,
240,213,222,244,116,119,108,204,123,151,34,105,163,164,148,174,113,155,121,207,79,160,1,128,82,12,69,145,215,181,75,68,82,144,208,246,240,99,94,171,180,94,220,57,1,0,0,0,192,246,33,165,152,162,49,38,198,
68,130,172,210,201,15,206,63,247,107,131,153,169,178,211,9,141,35,37,202,178,8,145,230,102,102,148,54,155,220,67,117,147,22,29,85,137,72,25,221,212,181,20,42,166,80,228,121,227,28,47,133,37,229,163,227,
254,237,208,127,74,73,108,246,161,0,0,0,0,192,83,81,140,100,140,20,66,214,117,157,34,197,24,179,204,212,181,83,74,42,37,133,20,49,144,80,194,40,233,92,116,77,173,141,217,204,123,94,244,210,253,218,232,
122,80,89,107,234,186,41,139,60,166,228,157,139,193,183,57,149,111,38,132,144,82,98,107,0,0,0,0,128,237,94,240,174,174,26,231,156,20,178,40,50,107,85,140,81,107,25,98,74,36,189,11,77,211,40,41,250,131,
106,48,168,83,92,196,122,252,139,30,181,239,205,206,17,81,138,166,40,172,115,161,63,24,116,58,221,224,155,20,185,138,154,104,88,88,229,175,227,98,142,6,0,0,0,0,158,114,108,102,131,15,70,235,170,170,234,
58,37,162,68,73,8,37,98,69,73,198,24,165,146,174,241,157,178,236,247,7,198,102,49,108,110,62,124,34,13,0,0,0,0,0,0,91,1,6,232,1,0,0,0,96,68,33,170,2,0,0,0,192,136,66,84,5,0,0,0,128,17,133,168,10,0,0,0,
0,35,10,81,21,0,0,0,0,70,20,162,42,0,0,0,0,140,40,68,85,0,0,0,0,24,81,255,63,28,158,129,219,67,130,164,196,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* FXPanel::fx_panel_png2 = (const char*) resource_FXPanel_fx_panel_png2;
const int FXPanel::fx_panel_png2Size = 72148;


//[EndFile] You can add extra defines here...
//[/EndFile]

