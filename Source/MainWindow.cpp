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
#include "ModPanel.h"
#include "ModMatrix.h"
#include <map>
//[/Headers]

#include "MainWindow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
/*
MainWindow::MainWindow (AudioProcessor* p) : MainWindow() {
    this->processor = p;
}
 */

//[/MiscUserDefs]

//==============================================================================
MainWindow::MainWindow (TrioAudioProcessor* p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    this->processor = p;

    //[/Constructor_pre]

    cutoffSlider.reset (new Slider ("cutoffSlider"));
    addAndMakeVisible (cutoffSlider.get());
    cutoffSlider->setRange (0.1, 12, 0.1);
    cutoffSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    cutoffSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    cutoffSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    cutoffSlider->addListener (this);

    cutoffSlider->setBounds (304, 96, 64, 64);

    resoSlider.reset (new Slider ("resoSlider"));
    addAndMakeVisible (resoSlider.get());
    resoSlider->setRange (0, 10, 0);
    resoSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    resoSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    resoSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    resoSlider->addListener (this);

    resoSlider->setBounds (392, 96, 64, 64);

    osc1PitchSlider.reset (new Slider ("osc1PitchSlider"));
    addAndMakeVisible (osc1PitchSlider.get());
    osc1PitchSlider->setRange (-36, 36, 1);
    osc1PitchSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc1PitchSlider->setTextBoxStyle (Slider::NoTextBox, true, 80, 20);
    osc1PitchSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc1PitchSlider->addListener (this);

    osc1PitchSlider->setBounds (32, 96, 64, 64);

    osc1FineSlider.reset (new Slider ("osc1FineSlider"));
    addAndMakeVisible (osc1FineSlider.get());
    osc1FineSlider->setRange (-2, 2, 0.01);
    osc1FineSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc1FineSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc1FineSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc1FineSlider->addListener (this);

    osc1FineSlider->setBounds (109, 96, 64, 64);

    osc1VolumeSlider.reset (new Slider ("osc1VolumeSlider"));
    addAndMakeVisible (osc1VolumeSlider.get());
    osc1VolumeSlider->setRange (0, 1, 0.02);
    osc1VolumeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc1VolumeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc1VolumeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc1VolumeSlider->addListener (this);

    osc1VolumeSlider->setBounds (184, 96, 64, 64);

    osc2PitchSlider.reset (new Slider ("osc2PitchSlider"));
    addAndMakeVisible (osc2PitchSlider.get());
    osc2PitchSlider->setRange (-36, 36, 1);
    osc2PitchSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc2PitchSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc2PitchSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc2PitchSlider->addListener (this);

    osc2PitchSlider->setBounds (32, 256, 64, 64);

    osc2FineSlider.reset (new Slider ("osc2FineSlider"));
    addAndMakeVisible (osc2FineSlider.get());
    osc2FineSlider->setRange (-2, 2, 0.01);
    osc2FineSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc2FineSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc2FineSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc2FineSlider->addListener (this);

    osc2FineSlider->setBounds (109, 256, 64, 64);

    osc2VolumeSlider.reset (new Slider ("osc2VolumeSlider"));
    addAndMakeVisible (osc2VolumeSlider.get());
    osc2VolumeSlider->setRange (0, 1, 0.02);
    osc2VolumeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc2VolumeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc2VolumeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc2VolumeSlider->addListener (this);

    osc2VolumeSlider->setBounds (184, 256, 64, 64);

    osc3PitchSlider.reset (new Slider ("osc3PitchSlider"));
    addAndMakeVisible (osc3PitchSlider.get());
    osc3PitchSlider->setRange (-36, 36, 1);
    osc3PitchSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc3PitchSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc3PitchSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc3PitchSlider->addListener (this);

    osc3PitchSlider->setBounds (32, 416, 64, 64);

    osc3FineSlider.reset (new Slider ("osc3FineSlider"));
    addAndMakeVisible (osc3FineSlider.get());
    osc3FineSlider->setRange (-2, 2, 0.01);
    osc3FineSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc3FineSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc3FineSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc3FineSlider->addListener (this);

    osc3FineSlider->setBounds (109, 416, 64, 64);

    osc3VolumeSlider.reset (new Slider ("osc3VolumeSlider"));
    addAndMakeVisible (osc3VolumeSlider.get());
    osc3VolumeSlider->setRange (0, 1, 0.02);
    osc3VolumeSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    osc3VolumeSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    osc3VolumeSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66ffffff));
    osc3VolumeSlider->addListener (this);

    osc3VolumeSlider->setBounds (184, 416, 64, 64);

    filterModSlider.reset (new Slider ("resoSlider"));
    addAndMakeVisible (filterModSlider.get());
    filterModSlider->setRange (0, 1, 0.02);
    filterModSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterModSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterModSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterModSlider->addListener (this);

    filterModSlider->setBounds (488, 96, 64, 64);

    lfo1RateSlider.reset (new Slider ("lfo1RateSlider"));
    addAndMakeVisible (lfo1RateSlider.get());
    lfo1RateSlider->setRange (0, 20, 0.2);
    lfo1RateSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    lfo1RateSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo1RateSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo1RateSlider->addListener (this);

    lfo1RateSlider->setBounds (304, 256, 64, 64);

    lfo1AmountSlider.reset (new Slider ("lfo1AmountSlider"));
    addAndMakeVisible (lfo1AmountSlider.get());
    lfo1AmountSlider->setRange (0, 1, 0.02);
    lfo1AmountSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    lfo1AmountSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo1AmountSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo1AmountSlider->addListener (this);

    lfo1AmountSlider->setBounds (488, 256, 64, 64);

    lfo2RateSlider.reset (new Slider ("lfo2RateSlider"));
    addAndMakeVisible (lfo2RateSlider.get());
    lfo2RateSlider->setRange (0, 20, 0.2);
    lfo2RateSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    lfo2RateSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo2RateSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo2RateSlider->addListener (this);

    lfo2RateSlider->setBounds (304, 416, 64, 64);

    lfo2AmountSlider.reset (new Slider ("lfo2AmountSlider"));
    addAndMakeVisible (lfo2AmountSlider.get());
    lfo2AmountSlider->setRange (0, 1, 0.02);
    lfo2AmountSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    lfo2AmountSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfo2AmountSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    lfo2AmountSlider->addListener (this);

    lfo2AmountSlider->setBounds (488, 416, 64, 64);

    filterAttackSlider.reset (new Slider ("filterAttackSlider"));
    addAndMakeVisible (filterAttackSlider.get());
    filterAttackSlider->setRange (0, 10, 0.1);
    filterAttackSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterAttackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterAttackSlider->setColour (Slider::thumbColourId, Colour (0xffff7900));
    filterAttackSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterAttackSlider->addListener (this);

    filterAttackSlider->setBounds (613, 96, 64, 64);

    filterDecaySlider.reset (new Slider ("filterDecaySlider"));
    addAndMakeVisible (filterDecaySlider.get());
    filterDecaySlider->setRange (0, 10, 0.1);
    filterDecaySlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterDecaySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterDecaySlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterDecaySlider->addListener (this);

    filterDecaySlider->setBounds (681, 96, 64, 64);

    filterSustainSlider.reset (new Slider ("filterSustainSlider"));
    addAndMakeVisible (filterSustainSlider.get());
    filterSustainSlider->setRange (0.01, 1, 0.02);
    filterSustainSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterSustainSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterSustainSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterSustainSlider->addListener (this);

    filterSustainSlider->setBounds (750, 96, 64, 64);

    filterReleaseSlider.reset (new Slider ("filterReleaseSlider"));
    addAndMakeVisible (filterReleaseSlider.get());
    filterReleaseSlider->setRange (0, 10, 0.1);
    filterReleaseSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    filterReleaseSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    filterReleaseSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    filterReleaseSlider->addListener (this);

    filterReleaseSlider->setBounds (819, 96, 64, 64);

    ampAttackSlider.reset (new Slider ("ampAttackSlider"));
    addAndMakeVisible (ampAttackSlider.get());
    ampAttackSlider->setRange (0, 10, 0.1);
    ampAttackSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampAttackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampAttackSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampAttackSlider->addListener (this);

    ampAttackSlider->setBounds (613, 256, 64, 64);

    ampDecaySlider.reset (new Slider ("ampDecaySlider"));
    addAndMakeVisible (ampDecaySlider.get());
    ampDecaySlider->setRange (0, 10, 0.1);
    ampDecaySlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampDecaySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampDecaySlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampDecaySlider->addListener (this);

    ampDecaySlider->setBounds (681, 256, 64, 64);

    ampSustainSlider.reset (new Slider ("ampSustainSlider"));
    addAndMakeVisible (ampSustainSlider.get());
    ampSustainSlider->setRange (0, 1, 0.02);
    ampSustainSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampSustainSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampSustainSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampSustainSlider->addListener (this);

    ampSustainSlider->setBounds (750, 256, 64, 64);

    ampReleaseSlider.reset (new Slider ("ampReleaseSlider"));
    addAndMakeVisible (ampReleaseSlider.get());
    ampReleaseSlider->setRange (0, 10, 0.1);
    ampReleaseSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampReleaseSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampReleaseSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampReleaseSlider->addListener (this);

    ampReleaseSlider->setBounds (819, 256, 64, 64);

    ampVolSlider.reset (new Slider ("ampVolSlider"));
    addAndMakeVisible (ampVolSlider.get());
    ampVolSlider->setRange (0, 1, 0.02);
    ampVolSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    ampVolSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ampVolSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66fff8f8));
    ampVolSlider->addListener (this);

    ampVolSlider->setBounds (616, 416, 64, 64);

    presetCombo.reset (new ComboBox ("presetCombo"));
    addAndMakeVisible (presetCombo.get());
    presetCombo->setEditableText (false);
    presetCombo->setJustificationType (Justification::centredLeft);
    presetCombo->setTextWhenNothingSelected (String());
    presetCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    presetCombo->addListener (this);

    presetCombo->setBounds (600, 16, 184, 24);

    storeButton.reset (new TextButton ("storeButton"));
    addAndMakeVisible (storeButton.get());
    storeButton->setButtonText (TRANS("Store"));
    storeButton->addListener (this);

    storeButton->setBounds (24, 544, 100, 24);

    imageButton.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton.get());
    imageButton->setButtonText (TRANS("Sawtooth"));
    imageButton->addListener (this);

    imageButton->setImages (false, true, true,
                            ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colours::white,
                            ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0xffff7e00),
                            Image(), 1.000f, Colour (0xffff7e00));
    imageButton->setBounds (96, 64, 24, 24);

    imageButton3.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton3.get());
    imageButton3->setButtonText (TRANS("Pulse"));
    imageButton3->addListener (this);

    imageButton3->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton3->setBounds (160, 64, 24, 24);

    imageButton2.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton2.get());
    imageButton2->setButtonText (TRANS("Sine"));
    imageButton2->addListener (this);

    imageButton2->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton2->setBounds (128, 64, 24, 24);

    imageButton4.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton4.get());
    imageButton4->setButtonText (TRANS("Sawtooth"));
    imageButton4->addListener (this);

    imageButton4->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton4->setBounds (104, 224, 24, 24);

    imageButton5.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton5.get());
    imageButton5->setButtonText (TRANS("Pulse"));
    imageButton5->setRadioGroupId (1);
    imageButton5->addListener (this);

    imageButton5->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton5->setBounds (168, 224, 24, 24);

    imageButton6.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton6.get());
    imageButton6->setButtonText (TRANS("Sine"));
    imageButton6->addListener (this);

    imageButton6->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton6->setBounds (136, 224, 24, 24);

    imageButton7.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton7.get());
    imageButton7->setButtonText (TRANS("Sawtooth"));
    imageButton7->addListener (this);

    imageButton7->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_saw_48_png, oscillator_saw_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton7->setBounds (104, 384, 24, 24);

    imageButton8.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton8.get());
    imageButton8->setButtonText (TRANS("Pulse"));
    imageButton8->setRadioGroupId (1);
    imageButton8->addListener (this);

    imageButton8->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_square_48_png, oscillator_square_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton8->setBounds (168, 384, 24, 24);

    imageButton9.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton9.get());
    imageButton9->setButtonText (TRANS("Sine"));
    imageButton9->addListener (this);

    imageButton9->setImages (false, true, true,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colours::white,
                             ImageCache::getFromMemory (oscillator_sine_48_png, oscillator_sine_48_pngSize), 1.000f, Colour (0xffff7e00),
                             Image(), 1.000f, Colour (0xffff7e00));
    imageButton9->setBounds (136, 384, 24, 24);

    statusLabel.reset (new Label ("statusLabel",
                                  TRANS("Trio Ready.")));
    addAndMakeVisible (statusLabel.get());
    statusLabel->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    statusLabel->setJustificationType (Justification::centredLeft);
    statusLabel->setEditable (false, false, false);
    statusLabel->setColour (Label::textColourId, Colours::white);
    statusLabel->setColour (TextEditor::textColourId, Colours::black);
    statusLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    statusLabel->setBounds (704, 544, 150, 24);

    browseButton.reset (new TextButton ("browseButton"));
    addAndMakeVisible (browseButton.get());
    browseButton->setButtonText (TRANS("Browser"));
    browseButton->addListener (this);

    browseButton->setBounds (472, 544, 100, 24);

    setupButton.reset (new TextButton ("setupButton"));
    addAndMakeVisible (setupButton.get());
    setupButton->setButtonText (TRANS("Setup"));
    setupButton->addListener (this);

    setupButton->setBounds (584, 544, 104, 24);

    fxButton.reset (new TextButton ("fxButton"));
    addAndMakeVisible (fxButton.get());
    fxButton->setButtonText (TRANS("FX"));
    fxButton->addListener (this);

    fxButton->setBounds (248, 544, 100, 24);

    noiseButton.reset (new ImageButton ("noiseButton"));
    addAndMakeVisible (noiseButton.get());
    noiseButton->setButtonText (TRANS("Pulse"));
    noiseButton->setRadioGroupId (1);
    noiseButton->addListener (this);

    noiseButton->setImages (false, true, true,
                            ImageCache::getFromMemory (oscillator_noise_48_png, oscillator_noise_48_pngSize), 1.000f, Colours::white,
                            ImageCache::getFromMemory (oscillator_noise_48_png, oscillator_noise_48_pngSize), 1.000f, Colour (0xffff7e00),
                            Image(), 1.000f, Colour (0xffff7e00));
    noiseButton->setBounds (200, 384, 24, 24);

    lowPassPutton.reset (new ToggleButton ("lowPassPutton"));
    addAndMakeVisible (lowPassPutton.get());
    lowPassPutton->setButtonText (TRANS("LP"));
    lowPassPutton->setRadioGroupId (111);
    lowPassPutton->addListener (this);
    lowPassPutton->setToggleState (true, dontSendNotification);
    lowPassPutton->setColour (ToggleButton::textColourId, Colours::white);

    lowPassPutton->setBounds (446, 64, 48, 24);

    highPassButton.reset (new ToggleButton ("highPassButton"));
    addAndMakeVisible (highPassButton.get());
    highPassButton->setButtonText (TRANS("HP"));
    highPassButton->setRadioGroupId (111);
    highPassButton->addListener (this);
    highPassButton->setColour (ToggleButton::textColourId, Colours::white);

    highPassButton->setBounds (494, 64, 48, 24);

    oscLabel1.reset (new Label ("label",
                                TRANS("Osc 1")));
    addAndMakeVisible (oscLabel1.get());
    oscLabel1->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    oscLabel1->setJustificationType (Justification::centredLeft);
    oscLabel1->setEditable (false, false, false);
    oscLabel1->setColour (Label::textColourId, Colours::white);
    oscLabel1->setColour (TextEditor::textColourId, Colours::black);
    oscLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oscLabel1->setBounds (24, 59, 80, 32);

    oscLabel2.reset (new Label ("label",
                                TRANS("Osc 2")));
    addAndMakeVisible (oscLabel2.get());
    oscLabel2->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    oscLabel2->setJustificationType (Justification::centredLeft);
    oscLabel2->setEditable (false, false, false);
    oscLabel2->setColour (Label::textColourId, Colours::white);
    oscLabel2->setColour (TextEditor::textColourId, Colours::black);
    oscLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oscLabel2->setBounds (24, 217, 80, 32);

    oscLabel3.reset (new Label ("label",
                                TRANS("Osc 3\n")));
    addAndMakeVisible (oscLabel3.get());
    oscLabel3->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    oscLabel3->setJustificationType (Justification::centredLeft);
    oscLabel3->setEditable (false, false, false);
    oscLabel3->setColour (Label::textColourId, Colours::white);
    oscLabel3->setColour (TextEditor::textColourId, Colours::black);
    oscLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    oscLabel3->setBounds (24, 377, 80, 32);

    pitchLabel1.reset (new Label ("label",
                                  TRANS("Pitch")));
    addAndMakeVisible (pitchLabel1.get());
    pitchLabel1->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    pitchLabel1->setJustificationType (Justification::centredLeft);
    pitchLabel1->setEditable (false, false, false);
    pitchLabel1->setColour (Label::textColourId, Colours::white);
    pitchLabel1->setColour (TextEditor::textColourId, Colours::black);
    pitchLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    pitchLabel1->setBounds (40, 160, 50, 32);

    fineLabel1.reset (new Label ("label",
                                 TRANS("Fine\n")));
    addAndMakeVisible (fineLabel1.get());
    fineLabel1->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    fineLabel1->setJustificationType (Justification::centredLeft);
    fineLabel1->setEditable (false, false, false);
    fineLabel1->setColour (Label::textColourId, Colours::white);
    fineLabel1->setColour (TextEditor::textColourId, Colours::black);
    fineLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    fineLabel1->setBounds (119, 160, 50, 32);

    volumeLabel1.reset (new Label ("label",
                                   TRANS("Volume")));
    addAndMakeVisible (volumeLabel1.get());
    volumeLabel1->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    volumeLabel1->setJustificationType (Justification::centredLeft);
    volumeLabel1->setEditable (false, false, false);
    volumeLabel1->setColour (Label::textColourId, Colours::white);
    volumeLabel1->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    volumeLabel1->setBounds (184, 160, 64, 32);

    pitchLabel2.reset (new Label ("label",
                                  TRANS("Pitch")));
    addAndMakeVisible (pitchLabel2.get());
    pitchLabel2->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    pitchLabel2->setJustificationType (Justification::centredLeft);
    pitchLabel2->setEditable (false, false, false);
    pitchLabel2->setColour (Label::textColourId, Colours::white);
    pitchLabel2->setColour (TextEditor::textColourId, Colours::black);
    pitchLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    pitchLabel2->setBounds (40, 320, 50, 32);

    fineLabel2.reset (new Label ("label",
                                 TRANS("Fine\n")));
    addAndMakeVisible (fineLabel2.get());
    fineLabel2->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    fineLabel2->setJustificationType (Justification::centredLeft);
    fineLabel2->setEditable (false, false, false);
    fineLabel2->setColour (Label::textColourId, Colours::white);
    fineLabel2->setColour (TextEditor::textColourId, Colours::black);
    fineLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    fineLabel2->setBounds (119, 320, 50, 32);

    volumeLabel2.reset (new Label ("label",
                                   TRANS("Volume")));
    addAndMakeVisible (volumeLabel2.get());
    volumeLabel2->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    volumeLabel2->setJustificationType (Justification::centredLeft);
    volumeLabel2->setEditable (false, false, false);
    volumeLabel2->setColour (Label::textColourId, Colours::white);
    volumeLabel2->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    volumeLabel2->setBounds (184, 320, 64, 32);

    pitchLabel3.reset (new Label ("label",
                                  TRANS("Pitch")));
    addAndMakeVisible (pitchLabel3.get());
    pitchLabel3->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    pitchLabel3->setJustificationType (Justification::centredLeft);
    pitchLabel3->setEditable (false, false, false);
    pitchLabel3->setColour (Label::textColourId, Colours::white);
    pitchLabel3->setColour (TextEditor::textColourId, Colours::black);
    pitchLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    pitchLabel3->setBounds (40, 480, 50, 32);

    fineLabel3.reset (new Label ("label",
                                 TRANS("Fine\n")));
    addAndMakeVisible (fineLabel3.get());
    fineLabel3->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    fineLabel3->setJustificationType (Justification::centredLeft);
    fineLabel3->setEditable (false, false, false);
    fineLabel3->setColour (Label::textColourId, Colours::white);
    fineLabel3->setColour (TextEditor::textColourId, Colours::black);
    fineLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    fineLabel3->setBounds (119, 480, 50, 32);

    volumeLabel3.reset (new Label ("label",
                                   TRANS("Volume")));
    addAndMakeVisible (volumeLabel3.get());
    volumeLabel3->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    volumeLabel3->setJustificationType (Justification::centredLeft);
    volumeLabel3->setEditable (false, false, false);
    volumeLabel3->setColour (Label::textColourId, Colours::white);
    volumeLabel3->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    volumeLabel3->setBounds (184, 480, 64, 32);

    cutoffLabel.reset (new Label ("label",
                                  TRANS("Cutoff")));
    addAndMakeVisible (cutoffLabel.get());
    cutoffLabel->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    cutoffLabel->setJustificationType (Justification::centredLeft);
    cutoffLabel->setEditable (false, false, false);
    cutoffLabel->setColour (Label::textColourId, Colours::white);
    cutoffLabel->setColour (TextEditor::textColourId, Colours::black);
    cutoffLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    cutoffLabel->setBounds (307, 160, 64, 32);

    resoLabel.reset (new Label ("label",
                                TRANS("Reso")));
    addAndMakeVisible (resoLabel.get());
    resoLabel->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    resoLabel->setJustificationType (Justification::centredLeft);
    resoLabel->setEditable (false, false, false);
    resoLabel->setColour (Label::textColourId, Colours::white);
    resoLabel->setColour (TextEditor::textColourId, Colours::black);
    resoLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    resoLabel->setBounds (400, 160, 48, 32);

    modLabel.reset (new Label ("label",
                               TRANS("ModAmt")));
    addAndMakeVisible (modLabel.get());
    modLabel->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    modLabel->setJustificationType (Justification::centredLeft);
    modLabel->setEditable (false, false, false);
    modLabel->setColour (Label::textColourId, Colours::white);
    modLabel->setColour (TextEditor::textColourId, Colours::black);
    modLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    modLabel->setBounds (488, 160, 70, 32);

    rateLabel1.reset (new Label ("label",
                                 TRANS("Rate")));
    addAndMakeVisible (rateLabel1.get());
    rateLabel1->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    rateLabel1->setJustificationType (Justification::centredLeft);
    rateLabel1->setEditable (false, false, false);
    rateLabel1->setColour (Label::textColourId, Colours::white);
    rateLabel1->setColour (TextEditor::textColourId, Colours::black);
    rateLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    rateLabel1->setBounds (313, 320, 50, 32);

    amountLabel1.reset (new Label ("label",
                                   TRANS("Amount")));
    addAndMakeVisible (amountLabel1.get());
    amountLabel1->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    amountLabel1->setJustificationType (Justification::centredLeft);
    amountLabel1->setEditable (false, false, false);
    amountLabel1->setColour (Label::textColourId, Colours::white);
    amountLabel1->setColour (TextEditor::textColourId, Colours::black);
    amountLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    amountLabel1->setBounds (488, 320, 64, 32);

    lfoLabel1.reset (new Label ("label",
                                TRANS("LFO 1")));
    addAndMakeVisible (lfoLabel1.get());
    lfoLabel1->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    lfoLabel1->setJustificationType (Justification::centredLeft);
    lfoLabel1->setEditable (false, false, false);
    lfoLabel1->setColour (Label::textColourId, Colours::white);
    lfoLabel1->setColour (TextEditor::textColourId, Colours::black);
    lfoLabel1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lfoLabel1->setBounds (296, 216, 80, 32);

    rateLabel2.reset (new Label ("label",
                                 TRANS("Rate")));
    addAndMakeVisible (rateLabel2.get());
    rateLabel2->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    rateLabel2->setJustificationType (Justification::centredLeft);
    rateLabel2->setEditable (false, false, false);
    rateLabel2->setColour (Label::textColourId, Colours::white);
    rateLabel2->setColour (TextEditor::textColourId, Colours::black);
    rateLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    rateLabel2->setBounds (313, 480, 50, 32);

    amountLabel2.reset (new Label ("label",
                                   TRANS("Amount")));
    addAndMakeVisible (amountLabel2.get());
    amountLabel2->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    amountLabel2->setJustificationType (Justification::centredLeft);
    amountLabel2->setEditable (false, false, false);
    amountLabel2->setColour (Label::textColourId, Colours::white);
    amountLabel2->setColour (TextEditor::textColourId, Colours::black);
    amountLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    amountLabel2->setBounds (488, 480, 64, 32);

    lfoLabel2.reset (new Label ("label",
                                TRANS("LFO 2")));
    addAndMakeVisible (lfoLabel2.get());
    lfoLabel2->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    lfoLabel2->setJustificationType (Justification::centredLeft);
    lfoLabel2->setEditable (false, false, false);
    lfoLabel2->setColour (Label::textColourId, Colours::white);
    lfoLabel2->setColour (TextEditor::textColourId, Colours::black);
    lfoLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lfoLabel2->setBounds (296, 376, 80, 32);

    filterLabel.reset (new Label ("label",
                                  TRANS("Filter")));
    addAndMakeVisible (filterLabel.get());
    filterLabel->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    filterLabel->setJustificationType (Justification::centredLeft);
    filterLabel->setEditable (false, false, false);
    filterLabel->setColour (Label::textColourId, Colours::white);
    filterLabel->setColour (TextEditor::textColourId, Colours::black);
    filterLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    filterLabel->setBounds (296, 56, 80, 32);

    ampEnvLabel.reset (new Label ("label",
                                  TRANS("Amp Envelope")));
    addAndMakeVisible (ampEnvLabel.get());
    ampEnvLabel->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    ampEnvLabel->setJustificationType (Justification::centredLeft);
    ampEnvLabel->setEditable (false, false, false);
    ampEnvLabel->setColour (Label::textColourId, Colours::white);
    ampEnvLabel->setColour (TextEditor::textColourId, Colours::black);
    ampEnvLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    ampEnvLabel->setBounds (616, 216, 160, 32);

    modEnvLabel.reset (new Label ("label",
                                  TRANS("Mod Envelope")));
    addAndMakeVisible (modEnvLabel.get());
    modEnvLabel->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    modEnvLabel->setJustificationType (Justification::centredLeft);
    modEnvLabel->setEditable (false, false, false);
    modEnvLabel->setColour (Label::textColourId, Colours::white);
    modEnvLabel->setColour (TextEditor::textColourId, Colours::black);
    modEnvLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    modEnvLabel->setBounds (616, 56, 160, 32);

    ampLabel.reset (new Label ("label",
                               TRANS("Amp")));
    addAndMakeVisible (ampLabel.get());
    ampLabel->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    ampLabel->setJustificationType (Justification::centredLeft);
    ampLabel->setEditable (false, false, false);
    ampLabel->setColour (Label::textColourId, Colours::white);
    ampLabel->setColour (TextEditor::textColourId, Colours::black);
    ampLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    ampLabel->setBounds (616, 376, 160, 32);

    volumeLabel.reset (new Label ("label",
                                  TRANS("Volume")));
    addAndMakeVisible (volumeLabel.get());
    volumeLabel->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    volumeLabel->setJustificationType (Justification::centredLeft);
    volumeLabel->setEditable (false, false, false);
    volumeLabel->setColour (Label::textColourId, Colours::white);
    volumeLabel->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    volumeLabel->setBounds (616, 480, 64, 32);

    attackLabel.reset (new Label ("label",
                                  TRANS("A")));
    addAndMakeVisible (attackLabel.get());
    attackLabel->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    attackLabel->setJustificationType (Justification::centred);
    attackLabel->setEditable (false, false, false);
    attackLabel->setColour (Label::textColourId, Colours::white);
    attackLabel->setColour (TextEditor::textColourId, Colours::black);
    attackLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    attackLabel->setBounds (627, 160, 32, 32);

    decayLabel.reset (new Label ("label",
                                 TRANS("D\n")));
    addAndMakeVisible (decayLabel.get());
    decayLabel->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    decayLabel->setJustificationType (Justification::centred);
    decayLabel->setEditable (false, false, false);
    decayLabel->setColour (Label::textColourId, Colours::white);
    decayLabel->setColour (TextEditor::textColourId, Colours::black);
    decayLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    decayLabel->setBounds (696, 160, 32, 32);

    sustainLabel.reset (new Label ("label",
                                   TRANS("S")));
    addAndMakeVisible (sustainLabel.get());
    sustainLabel->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    sustainLabel->setJustificationType (Justification::centred);
    sustainLabel->setEditable (false, false, false);
    sustainLabel->setColour (Label::textColourId, Colours::white);
    sustainLabel->setColour (TextEditor::textColourId, Colours::black);
    sustainLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sustainLabel->setBounds (765, 160, 32, 32);

    releaseLabel.reset (new Label ("label",
                                   TRANS("R")));
    addAndMakeVisible (releaseLabel.get());
    releaseLabel->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    releaseLabel->setJustificationType (Justification::centred);
    releaseLabel->setEditable (false, false, false);
    releaseLabel->setColour (Label::textColourId, Colours::white);
    releaseLabel->setColour (TextEditor::textColourId, Colours::black);
    releaseLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    releaseLabel->setBounds (834, 160, 32, 32);

    attackLabel2.reset (new Label ("label",
                                   TRANS("A")));
    addAndMakeVisible (attackLabel2.get());
    attackLabel2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    attackLabel2->setJustificationType (Justification::centred);
    attackLabel2->setEditable (false, false, false);
    attackLabel2->setColour (Label::textColourId, Colours::white);
    attackLabel2->setColour (TextEditor::textColourId, Colours::black);
    attackLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    attackLabel2->setBounds (627, 320, 32, 32);

    decayLabel2.reset (new Label ("label",
                                  TRANS("D\n")));
    addAndMakeVisible (decayLabel2.get());
    decayLabel2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    decayLabel2->setJustificationType (Justification::centred);
    decayLabel2->setEditable (false, false, false);
    decayLabel2->setColour (Label::textColourId, Colours::white);
    decayLabel2->setColour (TextEditor::textColourId, Colours::black);
    decayLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    decayLabel2->setBounds (696, 320, 32, 32);

    sustainLabel2.reset (new Label ("label",
                                    TRANS("S")));
    addAndMakeVisible (sustainLabel2.get());
    sustainLabel2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    sustainLabel2->setJustificationType (Justification::centred);
    sustainLabel2->setEditable (false, false, false);
    sustainLabel2->setColour (Label::textColourId, Colours::white);
    sustainLabel2->setColour (TextEditor::textColourId, Colours::black);
    sustainLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    sustainLabel2->setBounds (765, 320, 32, 32);

    releaseLabel2.reset (new Label ("label",
                                    TRANS("R")));
    addAndMakeVisible (releaseLabel2.get());
    releaseLabel2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Bold"));
    releaseLabel2->setJustificationType (Justification::centred);
    releaseLabel2->setEditable (false, false, false);
    releaseLabel2->setColour (Label::textColourId, Colours::white);
    releaseLabel2->setColour (TextEditor::textColourId, Colours::black);
    releaseLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    releaseLabel2->setBounds (834, 320, 32, 32);

    leftVolSLider.reset (new Slider ("leftVolSLider"));
    addAndMakeVisible (leftVolSLider.get());
    leftVolSLider->setRange (0, 1, 0.01);
    leftVolSLider->setSliderStyle (Slider::LinearBar);
    leftVolSLider->setTextBoxStyle (Slider::NoTextBox, true, 80, 20);
    leftVolSLider->setColour (Slider::backgroundColourId, Colours::grey);
    leftVolSLider->setColour (Slider::thumbColourId, Colour (0xffe28600));

    leftVolSLider->setBounds (360, 16, 208, 8);

    rightVolSlider.reset (new Slider ("rightVolSlider"));
    addAndMakeVisible (rightVolSlider.get());
    rightVolSlider->setRange (0, 1, 0.01);
    rightVolSlider->setSliderStyle (Slider::LinearBar);
    rightVolSlider->setTextBoxStyle (Slider::NoTextBox, true, 80, 20);
    rightVolSlider->setColour (Slider::backgroundColourId, Colours::grey);
    rightVolSlider->setColour (Slider::thumbColourId, Colour (0xffe28600));

    rightVolSlider->setBounds (360, 32, 208, 8);

    volumeLabel4.reset (new Label ("label",
                                   TRANS("Output")));
    addAndMakeVisible (volumeLabel4.get());
    volumeLabel4->setFont (Font ("Verdana", 18.00f, Font::plain).withTypefaceStyle ("Regular"));
    volumeLabel4->setJustificationType (Justification::centredLeft);
    volumeLabel4->setEditable (false, false, false);
    volumeLabel4->setColour (Label::textColourId, Colours::white);
    volumeLabel4->setColour (TextEditor::textColourId, Colours::black);
    volumeLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    volumeLabel4->setBounds (296, 12, 64, 32);

    modEditButton.reset (new TextButton ("modEditButton"));
    addAndMakeVisible (modEditButton.get());
    modEditButton->setButtonText (TRANS("Modulation"));
    modEditButton->addListener (this);

    modEditButton->setBounds (360, 544, 100, 24);

    mainButton.reset (new TextButton ("mainButton"));
    addAndMakeVisible (mainButton.get());
    mainButton->setButtonText (TRANS("Main"));
    mainButton->addListener (this);

    mainButton->setBounds (136, 544, 100, 24);

    modEnvCombo.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (modEnvCombo.get());
    modEnvCombo->setEditableText (false);
    modEnvCombo->setJustificationType (Justification::centredLeft);
    modEnvCombo->setTextWhenNothingSelected (String());
    modEnvCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    modEnvCombo->addItem (TRANS("1"), 1);
    modEnvCombo->addItem (TRANS("2"), 2);
    modEnvCombo->addItem (TRANS("3"), 3);
    modEnvCombo->addListener (this);

    modEnvCombo->setBounds (824, 61, 53, 24);

    slaveToggleButton.reset (new ToggleButton ("slaveToggleButton"));
    addAndMakeVisible (slaveToggleButton.get());
    slaveToggleButton->setButtonText (TRANS("Sync"));
    slaveToggleButton->addListener (this);
    slaveToggleButton->setColour (ToggleButton::textColourId, Colours::white);

    slaveToggleButton->setBounds (192, 64, 55, 24);

    voicesLabel.reset (new Label ("voicesLabel",
                                  TRANS("Voices : 0 ")));
    addAndMakeVisible (voicesLabel.get());
    voicesLabel->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    voicesLabel->setJustificationType (Justification::centredLeft);
    voicesLabel->setEditable (false, false, false);
    voicesLabel->setColour (Label::textColourId, Colours::white);
    voicesLabel->setColour (TextEditor::textColourId, Colours::black);
    voicesLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    voicesLabel->setBounds (800, 16, 88, 24);

    ampLabel2.reset (new Label ("label",
                                TRANS("Status")));
    addAndMakeVisible (ampLabel2.get());
    ampLabel2->setFont (Font ("Verdana", 24.00f, Font::plain).withTypefaceStyle ("Bold"));
    ampLabel2->setJustificationType (Justification::centredLeft);
    ampLabel2->setEditable (false, false, false);
    ampLabel2->setColour (Label::textColourId, Colours::white);
    ampLabel2->setColour (TextEditor::textColourId, Colours::black);
    ampLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    ampLabel2->setBounds (720, 376, 160, 32);

    cachedImage_trio_png2_1 = ImageCache::getFromMemory (trio_png2, trio_png2Size);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (910, 600);


    //[Constructor] You can add your own custom stuff here..

    animator = new ComponentAnimator();

    osc1PitchSlider->setValue(0);
    ampSustainSlider->setValue(0.8);
    filterSustainSlider->setValue(0.8);

    osc1VolumeSlider->setValue(1.0f);
    osc2VolumeSlider->setValue(1.0f);
    osc3VolumeSlider->setValue(1.0f);

    cutoffSlider->setValue(12);

    ampVolSlider->setValue(1.0f);

    //presetCombo->addItem("init", 1);
    //presetCombo->setSelectedItemIndex(0);

    presetCombo->addListener(processor);

    this->volumeAttachement = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"volume", *this->ampVolSlider);
    this->osc1VolAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc1vol", *this->osc1VolumeSlider);
    this->osc2VolAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc2vol", *this->osc2VolumeSlider);
    this->osc3VolAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc3vol", *this->osc3VolumeSlider);
    this->osc1PitchAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc1pitch", *this->osc1PitchSlider);
    this->osc2PitchAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc2pitch", *this->osc2PitchSlider);
    this->osc3PitchAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc3pitch", *this->osc3PitchSlider);
    this->osc1FineAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc1fine", *this->osc1FineSlider);
    this->osc2FineAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc2fine", *this->osc2FineSlider);
    this->osc3FineAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"osc3fine", *this->osc3FineSlider);
    this->filterModAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"filtermod", *this->filterModSlider);
    this->cutoffAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"cutoff", *this->cutoffSlider);
    this->resoAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"reso", *this->resoSlider);
    this->lfo1RateAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo1rate", *this->lfo1RateSlider);
    this->lfo1AmountAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo1amount", *this->lfo1AmountSlider);
    this->lfo2RateAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo2rate", *this->lfo2RateSlider);
    this->lfo2AmountAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"lfo2amount", *this->lfo2AmountSlider);
    this->ampAttackAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampattack", *this->ampAttackSlider);
    this->ampDecayAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampdecay", *this->ampDecaySlider);
    this->ampSustainAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"ampsustain", *this->ampSustainSlider);
    this->ampReleaseAttachment = new AudioProcessorValueTreeState::SliderAttachment(*processor->getValueTreeState(),"amprelease", *this->ampReleaseSlider);
    this->oscSyncAttachment = new AudioProcessorValueTreeState::ButtonAttachment(*processor->getValueTreeState(),"oscsync", *this->slaveToggleButton);

    /*
    this->modSourceAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"modsource", *this->modCombo);
    this->mod1TargetAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"mod1target", *this->lfo1ModCombo);
    this->mod2TargetAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(*processor->getValueTreeState(),"mod2target", *this->lfo2ModCombo);
    */
    int x = getScreenX();
    int y = getScreenY();

    presetPanel = new PresetDialog(this->presetCombo, processor->getModel());
    presetPanel->setBounds(x,y,getWidth(),getHeight());

    this->fxPanel = new FXPanel(processor);
    fxPanel->setBounds(x,y,getWidth(),getHeight());
    p->addChangeListener(this);
    p->addChangeListener(this->fxPanel);
    p->getSequencer()->addChangeListener(this->fxPanel);

    this->browserPanel = new BrowserPanel(processor);
    browserPanel->setBounds(x,y,getWidth(),getHeight());

    this->modPanel = new ModPanel(processor->getModMatrix());
    this->modPanel->setBounds(x,y,getWidth(),getHeight());

	this->settingsPanel = new SettingsPanel();
	this->settingsPanel->setBounds(x, y, getWidth(), getHeight());

    this->settingsPanel->addChangeListener(this);

    addChildComponent(fxPanel);
    addChildComponent(presetPanel);
    addChildComponent(browserPanel);
    addChildComponent(modPanel);	
	addChildComponent(settingsPanel);

    mainButton->toFront(false);
    fxButton->toFront(false);
    storeButton->toFront(false);
    modEditButton->toFront(false);
    browseButton->toFront(false);
    setupButton->toFront(false);
    volumeLabel4->toFront(true);

    leftVolSLider->toFront(false);
    rightVolSlider->toFront(false);

    presetCombo->toFront(false);
    statusLabel->toFront(false);

    for(int i = 0; i < processor->getProgramNames().size();i++) {
        presetCombo->addItem(processor->getProgramNames().at(i), i + 1);
    }

    // presetCombo->setSelectedId(1);

    LookAndFeel::getDefaultLookAndFeel().setColour(CaretComponent::caretColourId, Colours::darkorange);

    imageButton->setRadioGroupId(1);
    imageButton2->setRadioGroupId(1);
    imageButton3->setRadioGroupId(1);

    imageButton->setToggleState(true, NotificationType::dontSendNotification);

    imageButton->setClickingTogglesState(true);
    imageButton2->setClickingTogglesState(true);
    imageButton3->setClickingTogglesState(true);

    imageButton4->setRadioGroupId(2);
    imageButton5->setRadioGroupId(2);
    imageButton6->setRadioGroupId(2);

    imageButton4->setToggleState(true, NotificationType::dontSendNotification);

    imageButton4->setClickingTogglesState(true);
    imageButton5->setClickingTogglesState(true);
    imageButton6->setClickingTogglesState(true);

    imageButton7->setRadioGroupId(3);
    imageButton8->setRadioGroupId(3);
    imageButton9->setRadioGroupId(3);
    noiseButton->setRadioGroupId(3);

    imageButton7->setToggleState(true, NotificationType::dontSendNotification);

    imageButton7->setClickingTogglesState(true);
    imageButton8->setClickingTogglesState(true);
    imageButton9->setClickingTogglesState(true);
    noiseButton->setClickingTogglesState(true);

    // infoText->setEnabled(false);

    mode1 = Oszillator::OscMode::SAW;
    mode2 = Oszillator::OscMode::SAW;
    mode3 = Oszillator::OscMode::SAW;


    float val = processor->getValueTreeState()->getParameter("osc1shape")->getValue() ;
    float nval = processor->getValueTreeState()->getParameterRange("osc1shape").convertFrom0to1(val);

    if (nval == 0) {
        imageButton->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 1) {
        imageButton2->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 2) {
        imageButton3->setToggleState(true, NotificationType::dontSendNotification);
    }


    val = processor->getValueTreeState()->getParameter("osc2shape")->getValue() ;
    nval = processor->getValueTreeState()->getParameterRange("osc2shape").convertFrom0to1(val);

    if (nval == 0) {
        imageButton4->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 1) {
        imageButton6->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 2) {
        imageButton5->setToggleState(true, NotificationType::dontSendNotification);
    }

    val = processor->getValueTreeState()->getParameter("osc3shape")->getValue() ;
    nval = processor->getValueTreeState()->getParameterRange("osc3shape").convertFrom0to1(val);

    if (nval == 0) {
        imageButton7->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 1) {
        imageButton9->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 2) {
        imageButton8->setToggleState(true, NotificationType::dontSendNotification);
    }
    else if (nval == 3) {
        noiseButton->setToggleState(true, NotificationType::dontSendNotification);
    }

    processor->addListener(this);
    // processor->addListener(fxPanel);

    statusLabel->setColour(Label::textColourId, Colours::darkorange);
	voicesLabel->setColour(Label::textColourId, Colours::darkorange);

    /*
    cutoffSlider->setSkewFactorFromMidPoint(3.0f);
    resoSlider->setSkewFactorFromMidPoint(2.0f);

    ampAttackSlider->setSkewFactorFromMidPoint(1.0f);
    ampDecaySlider->setSkewFactorFromMidPoint(0.5f);
    ampSustainSlider->setSkewFactorFromMidPoint(0.5f);
    ampReleaseSlider->setSkewFactorFromMidPoint(1.0f);

    filterAttackSlider->setSkewFactorFromMidPoint(1.0f);
    filterDecaySlider->setSkewFactorFromMidPoint(1.0f);
    filterSustainSlider->setSkewFactorFromMidPoint(0.5f);
    filterReleaseSlider->setSkewFactorFromMidPoint(1.0f);

    osc1VolumeSlider->setSkewFactorFromMidPoint(0.3f);
    osc2VolumeSlider->setSkewFactorFromMidPoint(0.3f);
    osc3VolumeSlider->setSkewFactorFromMidPoint(0.3f);
    ampVolSlider->setSkewFactorFromMidPoint(0.3f);
     */

    startTimer(50);


    for(std::map<int,String>::iterator it = processor->getModMatrix()->getSources()->begin(); it != processor->getModMatrix()->getSources()->end(); ++it) {

        pair<int,String> p = *it;
        int id = p.first;
        String name = p.second;

        for (int i = 0; i < modPanel->getSlots().size();i++) {
            modPanel->getSlots().at(i)->addSource(id, name);
        }

    }

    for(std::map<int,String>::iterator it = processor->getModMatrix()->getTargets()->begin(); it != processor->getModMatrix()->getTargets()->end(); ++it) {

        pair<int,String> p = *it;
        int id = p.first;
        String name = p.second;

        for (int i = 0; i < modPanel->getSlots().size();i++) {
            modPanel->getSlots().at(i)->addTarget(id, name);
        }

    }

    for (int i = 0; i < modPanel->getSlots().size();i++) {
        modPanel->getSlots().at(i)->setSelectedSource(1);
        modPanel->getSlots().at(i)->setSelectedTarget1(1);
        modPanel->getSlots().at(i)->setSelectedTarget2(1);
    }

    processor->parameters->addParameterListener("mod1_attack", this);
    processor->parameters->addParameterListener("mod1_decay", this);
    processor->parameters->addParameterListener("mod1_sustain", this);
    processor->parameters->addParameterListener("mod1_release", this);

    filterDecaySlider->setValue(nval);

    //[/Constructor]
}

MainWindow::~MainWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    stopTimer();
    processor->removeListener(this);
    removeAllChangeListeners();
    processor->parameters->removeParameterListener("mod1_attack",this);
    processor->parameters->removeParameterListener("mod1_decay",this);
    processor->parameters->removeParameterListener("mod1_sustain",this);
    processor->parameters->removeParameterListener("mod1_release",this);
    this->volumeAttachement = nullptr;
    this->osc1VolAttachment = nullptr;
    this->osc2VolAttachment = nullptr;
    this->osc3VolAttachment = nullptr;
    this->osc1PitchAttachment = nullptr;
    this->osc2PitchAttachment = nullptr;
    this->osc3PitchAttachment = nullptr;
    this->osc1FineAttachment = nullptr;
    this->osc2FineAttachment = nullptr;
    this->osc3FineAttachment = nullptr;
    this->filterModAttachment = nullptr;
    this->cutoffAttachment = nullptr;
    this->resoAttachment = nullptr;
    this->lfo1RateAttachment = nullptr;
    this->lfo1ShapeAttachment = nullptr;
    this->lfo1AmountAttachment = nullptr;
    this->lfo2RateAttachment = nullptr;
    this->lfo2ShapeAttachment = nullptr;
    this->lfo2AmountAttachment = nullptr;
    this->ampAttackAttachment = nullptr;
    this->ampDecayAttachment = nullptr;
    this->ampSustainAttachment = nullptr;
    this->ampReleaseAttachment = nullptr;
	this->modSourceAttachment = nullptr;
	this->mod1TargetAttachment = nullptr;
	this->mod2TargetAttachment = nullptr;
    this->presetPanel = nullptr;
    this->animator = nullptr;
    this->browserPanel = nullptr;
    this->fxPanel = nullptr;
	this->settingsPanel = nullptr;
    this->oscSyncAttachment = nullptr;
	this->modPanel = nullptr;

    //[/Destructor_pre]

    cutoffSlider = nullptr;
    resoSlider = nullptr;
    osc1PitchSlider = nullptr;
    osc1FineSlider = nullptr;
    osc1VolumeSlider = nullptr;
    osc2PitchSlider = nullptr;
    osc2FineSlider = nullptr;
    osc2VolumeSlider = nullptr;
    osc3PitchSlider = nullptr;
    osc3FineSlider = nullptr;
    osc3VolumeSlider = nullptr;
    filterModSlider = nullptr;
    lfo1RateSlider = nullptr;
    lfo1AmountSlider = nullptr;
    lfo2RateSlider = nullptr;
    lfo2AmountSlider = nullptr;
    filterAttackSlider = nullptr;
    filterDecaySlider = nullptr;
    filterSustainSlider = nullptr;
    filterReleaseSlider = nullptr;
    ampAttackSlider = nullptr;
    ampDecaySlider = nullptr;
    ampSustainSlider = nullptr;
    ampReleaseSlider = nullptr;
    ampVolSlider = nullptr;
    presetCombo = nullptr;
    storeButton = nullptr;
    imageButton = nullptr;
    imageButton3 = nullptr;
    imageButton2 = nullptr;
    imageButton4 = nullptr;
    imageButton5 = nullptr;
    imageButton6 = nullptr;
    imageButton7 = nullptr;
    imageButton8 = nullptr;
    imageButton9 = nullptr;
    statusLabel = nullptr;
    browseButton = nullptr;
    setupButton = nullptr;
    fxButton = nullptr;
    noiseButton = nullptr;
    lowPassPutton = nullptr;
    highPassButton = nullptr;
    oscLabel1 = nullptr;
    oscLabel2 = nullptr;
    oscLabel3 = nullptr;
    pitchLabel1 = nullptr;
    fineLabel1 = nullptr;
    volumeLabel1 = nullptr;
    pitchLabel2 = nullptr;
    fineLabel2 = nullptr;
    volumeLabel2 = nullptr;
    pitchLabel3 = nullptr;
    fineLabel3 = nullptr;
    volumeLabel3 = nullptr;
    cutoffLabel = nullptr;
    resoLabel = nullptr;
    modLabel = nullptr;
    rateLabel1 = nullptr;
    amountLabel1 = nullptr;
    lfoLabel1 = nullptr;
    rateLabel2 = nullptr;
    amountLabel2 = nullptr;
    lfoLabel2 = nullptr;
    filterLabel = nullptr;
    ampEnvLabel = nullptr;
    modEnvLabel = nullptr;
    ampLabel = nullptr;
    volumeLabel = nullptr;
    attackLabel = nullptr;
    decayLabel = nullptr;
    sustainLabel = nullptr;
    releaseLabel = nullptr;
    attackLabel2 = nullptr;
    decayLabel2 = nullptr;
    sustainLabel2 = nullptr;
    releaseLabel2 = nullptr;
    leftVolSLider = nullptr;
    rightVolSlider = nullptr;
    volumeLabel4 = nullptr;
    modEditButton = nullptr;
    mainButton = nullptr;
    modEnvCombo = nullptr;
    slaveToggleButton = nullptr;
    voicesLabel = nullptr;
    ampLabel2 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..




    //[/Destructor]
}

//==============================================================================
void MainWindow::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff747474));

    {
        int x = 0, y = 0, width = 910, height = 600;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_trio_png2_1,
                     x, y, width, height,
                     0, 0, cachedImage_trio_png2_1.getWidth(), cachedImage_trio_png2_1.getHeight());
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainWindow::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainWindow::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]

	if (this->processor->getModel() == nullptr) {
		return;
	}

    int envIdx = processor->getCurrentModEnvIdx();
    Trio::ADSR* adsr = processor->getCurrentModEnv();
    double rate = processor->getSampleRate();

    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == cutoffSlider.get())
    {
        //[UserSliderCode_cutoffSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterCutoff(cutoffSlider->getValue());
        statusLabel->setText("Cutoff "  + juce::String(cutoffSlider->getValue() * 1000) + "Hz", juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_cutoffSlider]
    }
    else if (sliderThatWasMoved == resoSlider.get())
    {
        //[UserSliderCode_resoSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterResonance(resoSlider->getValue());
        statusLabel->setText("Resonance "  + juce::String(resoSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_resoSlider]
    }
    else if (sliderThatWasMoved == osc1PitchSlider.get())
    {
        //[UserSliderCode_osc1PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Pitch(osc1PitchSlider->getValue());
        statusLabel->setText("Osc 1 Pitch : "  + juce::String(osc1PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1PitchSlider]
    }
    else if (sliderThatWasMoved == osc1FineSlider.get())
    {
        //[UserSliderCode_osc1FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Fine(osc1FineSlider->getValue());
        statusLabel->setText("Osc 1 Fine : "  + juce::String(osc1FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1FineSlider]
    }
    else if (sliderThatWasMoved == osc1VolumeSlider.get())
    {
        //[UserSliderCode_osc1VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc1Volume(osc1VolumeSlider->getValue());
        statusLabel->setText("Osc 1 Volume : "  + juce::String(osc1VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc1VolumeSlider]
    }
    else if (sliderThatWasMoved == osc2PitchSlider.get())
    {
        //[UserSliderCode_osc2PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Pitch(osc2PitchSlider->getValue());
        statusLabel->setText("Osc 2 Pitch : "  + juce::String(osc2PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2PitchSlider]
    }
    else if (sliderThatWasMoved == osc2FineSlider.get())
    {
        //[UserSliderCode_osc2FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Fine(osc2FineSlider->getValue());
        statusLabel->setText("Osc 2 Fine : "  + juce::String(osc2FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2FineSlider]
    }
    else if (sliderThatWasMoved == osc2VolumeSlider.get())
    {
        //[UserSliderCode_osc2VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc2Volume(osc2VolumeSlider->getValue());
        statusLabel->setText("Osc 2 Volume : "  + juce::String(osc2VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc2VolumeSlider]
    }
    else if (sliderThatWasMoved == osc3PitchSlider.get())
    {
        //[UserSliderCode_osc3PitchSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Pitch(osc3PitchSlider->getValue());
        statusLabel->setText("Osc 3 Pitch : "  + juce::String(osc3PitchSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3PitchSlider]
    }
    else if (sliderThatWasMoved == osc3FineSlider.get())
    {
        //[UserSliderCode_osc3FineSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Fine(osc3FineSlider->getValue());
        statusLabel->setText("Osc 3 Fine : "  + juce::String(osc3FineSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3FineSlider]
    }
    else if (sliderThatWasMoved == osc3VolumeSlider.get())
    {
        //[UserSliderCode_osc3VolumeSlider] -- add your slider handling code here..
        this->processor->getModel()->setOsc3Volume(osc3VolumeSlider->getValue());
        statusLabel->setText("Osc 3 Volume : "  + juce::String(osc3VolumeSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_osc3VolumeSlider]
    }
    else if (sliderThatWasMoved == filterModSlider.get())
    {
        //[UserSliderCode_filterModSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterModAmount(filterModSlider->getValue());
        statusLabel->setText("Filter mod : "  + juce::String(filterModSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterModSlider]
    }
    else if (sliderThatWasMoved == lfo1RateSlider.get())
    {
        //[UserSliderCode_lfo1RateSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo1Rate(lfo1RateSlider->getValue());
        statusLabel->setText("LFO1 rate : "  + juce::String(lfo1RateSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo1RateSlider]
    }
    else if (sliderThatWasMoved == lfo1AmountSlider.get())
    {
        //[UserSliderCode_lfo1AmountSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo1Amount(lfo1AmountSlider->getValue());
        statusLabel->setText("LFO1 amount : "  + juce::String(lfo1AmountSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo1AmountSlider]
    }
    else if (sliderThatWasMoved == lfo2RateSlider.get())
    {
        //[UserSliderCode_lfo2RateSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo2Rate(lfo2RateSlider->getValue());
        statusLabel->setText("LFO2 rate : "  + juce::String(lfo2RateSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo2RateSlider]
    }
    else if (sliderThatWasMoved == lfo2AmountSlider.get())
    {
        //[UserSliderCode_lfo2AmountSlider] -- add your slider handling code here..
        this->processor->getModel()->setLfo2Amount(lfo2AmountSlider->getValue());
        statusLabel->setText("LFO2 amount : "  + juce::String(lfo2AmountSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_lfo2AmountSlider]
    }
    else if (sliderThatWasMoved == filterAttackSlider.get())
    {
        //[UserSliderCode_filterAttackSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvAttack(processor->getCurrentModEnvIdx(), filterAttackSlider->getValue());

        statusLabel->setText("Filter attack : "  + juce::String(filterAttackSlider->getValue()), juce::NotificationType::dontSendNotification);
        float nval = processor->parameters->getParameterRange("mod"+String(envIdx+1)+"_attack").convertTo0to1(adsr->getAttackRate() / rate);
        processor->parameters->getParameter("mod"+String(envIdx+1)+"_attack")->setValueNotifyingHost(nval);
        //[/UserSliderCode_filterAttackSlider]
    }
    else if (sliderThatWasMoved == filterDecaySlider.get())
    {
        //[UserSliderCode_filterDecaySlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvDecay(processor->getCurrentModEnvIdx(), filterDecaySlider->getValue());
        float nval = processor->parameters->getParameterRange("mod"+String(envIdx+1)+"_decay").convertTo0to1(adsr->getDecayRate() / rate);
        processor->parameters->getParameter("mod"+String(envIdx+1)+"_decay")->setValueNotifyingHost(nval);
        statusLabel->setText("Filter decay : "  + juce::String(filterDecaySlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterDecaySlider]
    }
    else if (sliderThatWasMoved == filterSustainSlider.get())
    {
        //[UserSliderCode_filterSustainSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvSustain(processor->getCurrentModEnvIdx(),filterSustainSlider->getValue());
        float nval = processor->parameters->getParameterRange("mod"+String(envIdx+1)+"_sustain").convertTo0to1(adsr->getSustainLevel());
        processor->parameters->getParameter("mod"+String(envIdx+1)+"_sustain")->setValueNotifyingHost(nval);
        statusLabel->setText("Filter sustain : "  + juce::String(filterSustainSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterSustainSlider]
    }
    else if (sliderThatWasMoved == filterReleaseSlider.get())
    {
        //[UserSliderCode_filterReleaseSlider] -- add your slider handling code here..
        this->processor->getModel()->setFilterEnvRelease(processor->getCurrentModEnvIdx(), filterReleaseSlider->getValue());
        float nval = processor->parameters->getParameterRange("mod"+String(envIdx+1)+"_release").convertTo0to1(adsr->getReleaseRate() / rate);
        processor->parameters->getParameter("mod"+String(envIdx+1)+"_release")->setValueNotifyingHost(nval);
        statusLabel->setText("Filter release : "  + juce::String(filterReleaseSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_filterReleaseSlider]
    }
    else if (sliderThatWasMoved == ampAttackSlider.get())
    {
        //[UserSliderCode_ampAttackSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvAttack(ampAttackSlider->getValue());
        statusLabel->setText("Amp attack : "  + juce::String(ampAttackSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampAttackSlider]
    }
    else if (sliderThatWasMoved == ampDecaySlider.get())
    {
        //[UserSliderCode_ampDecaySlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvDecay(ampDecaySlider->getValue());
        statusLabel->setText("Amp decay : "  + juce::String(ampDecaySlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampDecaySlider]
    }
    else if (sliderThatWasMoved == ampSustainSlider.get())
    {
        //[UserSliderCode_ampSustainSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvSustain(ampSustainSlider->getValue());
        statusLabel->setText("Amp sustain : "  + juce::String(ampSustainSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampSustainSlider]
    }
    else if (sliderThatWasMoved == ampReleaseSlider.get())
    {
        //[UserSliderCode_ampReleaseSlider] -- add your slider handling code here..
        this->processor->getModel()->setAmpEnvRelease(ampReleaseSlider->getValue());
        statusLabel->setText("Amp release : "  + juce::String(ampReleaseSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampReleaseSlider]
    }
    else if (sliderThatWasMoved == ampVolSlider.get())
    {
        //[UserSliderCode_ampVolSlider] -- add your slider handling code here..
        this->processor->getModel()->setVolume(ampVolSlider->getValue());
        statusLabel->setText("Amp volume : "  + juce::String(ampVolSlider->getValue()), juce::NotificationType::dontSendNotification);
        //[/UserSliderCode_ampVolSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void MainWindow::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	//[UsercomboBoxChanged_Pre]
	//[/UsercomboBoxChanged_Pre]

	if (comboBoxThatHasChanged == presetCombo.get())
	{
		//[UserComboBoxCode_presetCombo] -- add your combo box handling code here..
		for (int j = 0; j < processor->getModMatrix()->getModulations().size(); j++) {
			for (int i = 0; i < processor->getModMatrix()->getModulations().at(j)->getTargets().size(); i++) {
				processor->getModMatrix()->getModulations().at(j)->getTargets()[i]->setModAmount(0);
			}

		}

		try {
			String appDataPath = File::getSpecialLocation(File::userApplicationDataDirectory).getFullPathName();
			String presetPath = appDataPath + "/Audio/Presets/pueski/Trio/";

			String name = comboBoxThatHasChanged->getText();

			String filename = name + ".xml";
			File preset = File(presetPath + filename);

			if (preset.exists()) {
				ScopedPointer<XmlElement> xml = XmlDocument(preset).getDocumentElement();
				ValueTree state = ValueTree::fromXml(*xml.get());
				processor->setState(&state, true);
				xml = nullptr;
			}


			vector<String> v = processor->getProgramNames();

			if (v.size() > 0) {
				if (std::find(v.begin(), v.end(), name) == v.end()) {
					processor->addProgram(name);
					browserPanel->addProgram(name);
				}
			}



			processor->setSelectedProgram(name);
			processor->setCurrentProgram(comboBoxThatHasChanged->getItemId(comboBoxThatHasChanged->getSelectedItemIndex()) - 1);

			processor->updateHostDisplay();

		}
		catch (std::exception& ex) {
			std::cerr << ex.what() << std::endl;
		}
		catch (...) {
			std::cerr << "Caught unknown exception." << std::endl;
		}



	}
	//[/UserComboBoxCode_presetCombo]
    
    else if (comboBoxThatHasChanged == modEnvCombo.get())
    {
        //[UserComboBoxCode_modEnvCombo] -- add your combo box handling code here..
        processor->setCurrentModEnv(modEnvCombo->getSelectedId() - 1);

        Trio::ADSR* adsr = processor->getCurrentModEnv();
        double rate = processor->getSampleRate();

        filterAttackSlider->setValue(adsr->getAttackRate() / rate);
        filterDecaySlider->setValue(adsr->getDecayRate() / rate);
        filterSustainSlider->setValue(adsr->getSustainLevel());
        filterReleaseSlider->setValue(adsr->getReleaseRate() / rate);

        //[/UserComboBoxCode_modEnvCombo]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MainWindow::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == storeButton.get())
    {
        //[UserButtonCode_storeButton] -- add your button handler code here..

        ValueTree seq = processor->getValueTreeState()->state.getChildWithName("sequencer");

        while (seq.isValid()) {
            processor->getValueTreeState()->state.removeChild(seq, nullptr);
            seq = processor->getValueTreeState()->state.getChildWithName("sequencer");
        }

        seq = ValueTree (Identifier ("sequencer"));
        processor->getValueTreeState()->state.addChild(seq, 0, nullptr);

        seq.setProperty("raster", processor->getSequencer()->getRaster(), nullptr);
        seq.setProperty("octaves", processor->getSequencer()->getNumOctaves(), nullptr);
        seq.setProperty("stepconfig", processor->getSequencer()->getStepConfig(), nullptr);
        seq.setProperty("enabled", processor->getSequencer()->isEnabled(), nullptr);

        ValueTree offsets = ValueTree (Identifier ("offsets"));

        for (int i = 0; i < 16;i++ ) {
            offsets.setProperty("offset_"+String(i), processor->getSequencer()->getOffsetAt(i), nullptr);
        }

        seq.removeAllChildren(nullptr);

        seq.addChild(offsets, 0, nullptr);

        ValueTree velocities = ValueTree (Identifier ("velocities"));

        for (int i = 0; i < 16;i++ ) {
            velocities.setProperty("velocity_"+String(i), processor->getSequencer()->getVelocityAt(i), nullptr);
        }

        seq.addChild(velocities, 0, nullptr);

		ValueTree modMatrix = processor->getValueTreeState()->state.getChildWithName("modMatrix");

		if (!modMatrix.isValid()) {
			modMatrix = ValueTree(Identifier("modMatrix"));
			processor->getValueTreeState()->state.addChild(modMatrix, -1, nullptr);
		}
		else {
			modMatrix.removeAllChildren(nullptr);
		}

        for (int i = 0; i < processor->getModMatrix()->getConfiguration()->getNumConfigs(); i++) {

            ValueTree slotConfigValue = ValueTree(Identifier("slotConfig"));

			ModSlotConfig * msc = processor->getModMatrix()->getConfiguration()->getSlotConfig(i);

			slotConfigValue.setProperty("sourceId",  msc->getSourceId(), nullptr);
			slotConfigValue.setProperty("targetId1", msc->getTargetId1(), nullptr);
			slotConfigValue.setProperty("targetId2", msc->getTargetId2(), nullptr);
			slotConfigValue.setProperty("amount1",   msc->getAmount1(), nullptr);
			slotConfigValue.setProperty("amount2",   msc->getAmount2(), nullptr);
			slotConfigValue.setProperty("enabled",   msc->isSlotEnabled() , nullptr);

            modMatrix.addChild(slotConfigValue, -1, nullptr);

        }

        ScopedPointer<XmlElement> xml (processor->getValueTreeState()->state.createXml());
        presetPanel->setData(xml);

		toggleView(MAIN);
        animator->fadeIn(presetPanel, 100);


        // presetPanel->setVisible(true);

        //[/UserButtonCode_storeButton]
    }
    else if (buttonThatWasClicked == imageButton.get())
    {
        //[UserButtonCode_imageButton] -- add your button handler code here..
        mode1 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc1shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);

        //[/UserButtonCode_imageButton]
    }
    else if (buttonThatWasClicked == imageButton3.get())
    {
        //[UserButtonCode_imageButton3] -- add your button handler code here..
        mode1 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc1shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(2.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);

        //[/UserButtonCode_imageButton3]
    }
    else if (buttonThatWasClicked == imageButton2.get())
    {
        //[UserButtonCode_imageButton2] -- add your button handler code here..
        mode1 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc1shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton2]
    }
    else if (buttonThatWasClicked == imageButton4.get())
    {
        //[UserButtonCode_imageButton4] -- add your button handler code here..
        mode2 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc2shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton4]
    }
    else if (buttonThatWasClicked == imageButton5.get())
    {
        //[UserButtonCode_imageButton5] -- add your button handler code here..
        mode2 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc2shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(2.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton5]
    }
    else if (buttonThatWasClicked == imageButton6.get())
    {
        //[UserButtonCode_imageButton6] -- add your button handler code here..
        mode2 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc2shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton6]
    }
    else if (buttonThatWasClicked == imageButton7.get())
    {
        //[UserButtonCode_imageButton7] -- add your button handler code here..
        mode3 = Oszillator::OscMode::SAW;
        processor->setupOscillators(mode1,mode2,mode3);
        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton7]
    }
    else if (buttonThatWasClicked == imageButton8.get())
    {
        //[UserButtonCode_imageButton8] -- add your button handler code here..
        cout << "imageButton8" << endl;

        mode3 = Oszillator::OscMode::PULSE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(2.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton8]
    }
    else if (buttonThatWasClicked == imageButton9.get())
    {
        //[UserButtonCode_imageButton9] -- add your button handler code here..
        mode3 = Oszillator::OscMode::SINE;
        processor->setupOscillators(mode1,mode2,mode3);
        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_imageButton9]
    }
    else if (buttonThatWasClicked == browseButton.get())
    {
        //[UserButtonCode_browseButton] -- add your button handler code here..
        toggleView(PanelDisplay::BROWSER);
        //[/UserButtonCode_browseButton]
    }
    else if (buttonThatWasClicked == setupButton.get())
    {
        //[UserButtonCode_setupButton] -- add your button handler code here..
        toggleView(PanelDisplay::SETUP);
        //[/UserButtonCode_setupButton]
    }
    else if (buttonThatWasClicked == fxButton.get())
    {
        //[UserButtonCode_fxButton] -- add your button handler code here..
        toggleView(PanelDisplay::FX);
        //[/UserButtonCode_fxButton]
    }
    else if (buttonThatWasClicked == noiseButton.get())
    {
        //[UserButtonCode_noiseButton] -- add your button handler code here..
        mode3 = Oszillator::OscMode::NOISE;
        processor->setupOscillators(mode1,mode2,mode3);

        String id = "osc3shape";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(3.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_noiseButton]
    }
    else if (buttonThatWasClicked == lowPassPutton.get())
    {
        //[UserButtonCode_lowPassPutton] -- add your button handler code here..

		float nval;
		String id = "filtermode";

		if (lowPassPutton->getToggleState()) {
			processor->getFilter()->setMode(MultimodeFilter::Mode::LOWPASS);
			nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(0.0f);
		}
		else {
			processor->getFilter()->setMode(MultimodeFilter::Mode::HIGHPASS);
			nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
		}

        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
        //[/UserButtonCode_lowPassPutton]
    }
    else if (buttonThatWasClicked == highPassButton.get())
    {
        //[UserButtonCode_highPassButton] -- add your button handler code here..
		/*
        processor->getFilter()->setMode(MultimodeFilter::Mode::HIGHPASS);
        String id = "filtermode";
        float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(1.0f);
        processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);
		*/
        //[/UserButtonCode_highPassButton]
    }
    else if (buttonThatWasClicked == modEditButton.get())
    {
        //[UserButtonCode_modEditButton] -- add your button handler code here..
        toggleView(PanelDisplay::MOD);
        //[/UserButtonCode_modEditButton]
    }
    else if (buttonThatWasClicked == mainButton.get())
    {
        //[UserButtonCode_mainButton] -- add your button handler code here..
        toggleView(PanelDisplay::MAIN);
        //[/UserButtonCode_mainButton]
    }
    else if (buttonThatWasClicked == slaveToggleButton.get())
    {
        //[UserButtonCode_slaveToggleButton] -- add your button handler code here..

        bool sync = slaveToggleButton->getToggleState();
        processor->setSync(sync);

		float val = 0.0f;

		if (sync) {
			val = 1.0f;
		}

		String id = "oscsync";
		float nval = processor->getValueTreeState()->getParameterRange(id).convertTo0to1(val);
		processor->getValueTreeState()->getParameter(id)->setValueNotifyingHost(nval);

        //[/UserButtonCode_slaveToggleButton]
    }

    //[UserbuttonClicked_Post]


    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void MainWindow::timerCallback() {
    this->leftVolSLider->setValue(processor->getMagnitudeLeft());
    this->rightVolSlider->setValue(processor->getMagnitudeRight());
	this->voicesLabel->setText("Voices : " + String(processor->getNumVoices()),juce::NotificationType::dontSendNotification);
}

void MainWindow::visibilityChanged() {

    // String currentProgram = processor->getSelectedProgram();

    /*
    if (currentProgram == "") {
        for (int i = 0; i < processor->getNumPrograms();i++) {
            if (processor->getProgramName(i) == "init") {
                processor->setCurrentProgram(i);
                break;
            }
        }

    }
     */
    modEnvCombo->setSelectedId(1);
    presetCombo->setText(processor->getSelectedProgram(),NotificationType::dontSendNotification);
    // processor->updateHostDisplay();
}

void MainWindow::audioProcessorParameterChanged (AudioProcessor* processor, int parameterIndex, float newValue) {

	std::function<void(void)> changeLambda =
		[=]() {

		String id = processor->getParameterID(parameterIndex);

		float value = processor->getParameter(parameterIndex);
		float nval = this->processor->getValueTreeState()->getParameterRange(id).convertFrom0to1(value);

		if (id == "osc1shape") {
			imageButton->setToggleState(false, NotificationType::dontSendNotification);
			imageButton2->setToggleState(false, NotificationType::dontSendNotification);
			imageButton3->setToggleState(false, NotificationType::dontSendNotification);

			if (nval == 0.0f) {
				imageButton->setToggleState(true, NotificationType::dontSendNotification);
			}
			else if (nval == 1.0f) {
				imageButton2->setToggleState(true, NotificationType::dontSendNotification);
			}
			else if (nval == 2.0f) {
				imageButton3->setToggleState(true, NotificationType::dontSendNotification);
			}
		}
		else if (id == "osc2shape") {
			imageButton4->setToggleState(false, NotificationType::dontSendNotification);
			imageButton5->setToggleState(false, NotificationType::dontSendNotification);
			imageButton6->setToggleState(false, NotificationType::dontSendNotification);
			if (nval == 0.0f) {
				imageButton4->setToggleState(true, NotificationType::dontSendNotification);
			}
			else if (nval == 1.0f) {
				imageButton6->setToggleState(true, NotificationType::dontSendNotification);
			}
			else if (nval == 2.0f) {
				imageButton5->setToggleState(true, NotificationType::dontSendNotification);
			}
		}
		else if (id == "osc3shape") {
			imageButton7->setToggleState(false, NotificationType::dontSendNotification);
			imageButton8->setToggleState(false, NotificationType::dontSendNotification);
			imageButton9->setToggleState(false, NotificationType::dontSendNotification);
			if (nval == 0.0f) {
				imageButton7->setToggleState(true, NotificationType::dontSendNotification);
			}
			else if (nval == 1.0f) {
				imageButton9->setToggleState(true, NotificationType::dontSendNotification);
			}
			else if (nval == 2.0f) {
				imageButton8->setToggleState(true, NotificationType::dontSendNotification);
			}
			else if (nval == 3.0f) {
				noiseButton->setToggleState(true, NotificationType::dontSendNotification);
			}
		}
		else if (id == "filtermode") {
			if (nval == 0) {
				lowPassPutton->setToggleState(true, NotificationType::dontSendNotification);
			}
			else {
				highPassButton->setToggleState(true, NotificationType::dontSendNotification);
			}
		}

		else if (id == "mod1_attack") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 1) {
				filterAttackSlider->setValue(nval);
			}
		}
		else if (id == "mod1_decay") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 1) {
				filterDecaySlider->setValue(nval);
			}
		}
		else if (id == "mod1_sustain") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 1) {
				filterSustainSlider->setValue(nval);
			}
		}
		else if (id == "mod1_release") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 1) {
				filterReleaseSlider->setValue(nval);
			}
		}

		else if (id == "mod2_attack") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 2) {
				filterAttackSlider->setValue(nval);
			}
		}
		else if (id == "mod2_decay") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 2) {
				filterDecaySlider->setValue(nval);
			}
		}
		else if (id == "mod2_sustain") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 2) {
				filterSustainSlider->setValue(nval);
			}
		}
		else if (id == "mod2_release") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 2) {
				filterReleaseSlider->setValue(nval);
			}
		}
		else if (id == "mod3_attack") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 3) {
				filterAttackSlider->setValue(nval);
			}
		}
		else if (id == "mod3_decay") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 3) {
				filterDecaySlider->setValue(nval);
			}
		}
		else if (id == "mod3_sustain") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 3) {
				filterSustainSlider->setValue(nval);
			}
		}
		else if (id == "mod3_release") {
			if (this->processor->getCurrentModEnvIdx() + 1 == 3) {
				filterReleaseSlider->setValue(nval);
			}
		}

	};
	juce::MessageManager::callAsync(changeLambda);




}

void MainWindow::toggleView(MainWindow::PanelDisplay display) {

    if (display == PanelDisplay::MAIN) {
        if (fxPanel->isVisible()) {
            animator->fadeOut(fxPanel, 100);
        }
        if(modPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
        if(browserPanel->isVisible()){
            animator->fadeOut(browserPanel, 100);
        }
		if (settingsPanel->isVisible()) {
			animator->fadeOut(settingsPanel, 100);
		}

    }
    else if (display == PanelDisplay::FX) {
        if(modPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
        if(browserPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
		if (settingsPanel->isVisible()) {
			animator->fadeOut(settingsPanel, 100);
		}
        animator->fadeIn(fxPanel, 100);

    }
    else if (display == PanelDisplay::MOD) {
        if (fxPanel->isVisible()) {
            animator->fadeOut(fxPanel, 100);
        }
        if(browserPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
		if (settingsPanel->isVisible()) {
			animator->fadeOut(settingsPanel, 100);
		}
        animator->fadeIn(modPanel, 100);
    }
    else if (display == PanelDisplay::BROWSER) {
        if (fxPanel->isVisible()) {
            animator->fadeOut(fxPanel, 100);
        }
        if(modPanel->isVisible()){
            animator->fadeOut(modPanel, 100);
        }
		if (settingsPanel->isVisible()) {
			animator->fadeOut(settingsPanel, 100);
		}
        animator->fadeIn(browserPanel, 100);
    }
    else if (display == PanelDisplay::SETUP) {
		if (fxPanel->isVisible()) {
			animator->fadeOut(fxPanel, 100);
		}
		if (modPanel->isVisible()) {
			animator->fadeOut(modPanel, 100);
		}
		if (browserPanel->isVisible()) {
			animator->fadeOut(browserPanel, 100);
		}
		animator->fadeIn(settingsPanel, 100);
    }

    this->currentDisplay = display;

}

bool MainWindow::keyPressed (const KeyPress& key, Component* originatingComponent) {
    return true;
}

void MainWindow::changeListenerCallback (ChangeBroadcaster* source) {

    if (source == this->settingsPanel) {
		if(processor->getModel() != nullptr) {
			processor->getModel()->setGlobalTranspose(settingsPanel->getTranspose());
			processor->getModel()->setPitchbendRange(settingsPanel->getPitchbendRange());
		}
    }
    else {
        presetCombo->setText(processor->getSelectedProgram());
		modPanel->setConfig(processor->getModMatrix()->getConfiguration());
    }


}

void MainWindow::parameterChanged(const String &parameterID, float newValue) {
    Logger::getCurrentLogger()->writeToLog("MainWIndow : Parameter changed ->"+parameterID);
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainWindow" componentName=""
                 parentClasses="public Component, public SliderListener, public ButtonListener, public ComboBoxListener, public AudioProcessorListener, public Timer, public ChangeBroadcaster, public KeyListener, public ChangeListener, AudioProcessorValueTreeState::Listener"
                 constructorParams="TrioAudioProcessor* p" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="910" initialHeight="600">
  <BACKGROUND backgroundColour="ff747474">
    <IMAGE pos="0 0 910 600" resource="trio_png2" opacity="1.0" mode="0"/>
  </BACKGROUND>
  <SLIDER name="cutoffSlider" id="33e55ada7f13106b" memberName="cutoffSlider"
          virtualName="" explicitFocusOrder="0" pos="304 96 64 64" rotaryslideroutline="66fff8f8"
          min="0.1" max="12.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="resoSlider" id="72ce21eac8eaa69c" memberName="resoSlider"
          virtualName="" explicitFocusOrder="0" pos="392 96 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="10.0" int="0.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc1PitchSlider" id="860a64caafed9e9a" memberName="osc1PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="32 96 64 64" rotaryslideroutline="66ffffff"
          min="-36.0" max="36.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc1FineSlider" id="4fc66824ef24b612" memberName="osc1FineSlider"
          virtualName="" explicitFocusOrder="0" pos="109 96 64 64" rotaryslideroutline="66ffffff"
          min="-2.0" max="2.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc1VolumeSlider" id="4c562bc5b4c27b9" memberName="osc1VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 96 64 64" rotaryslideroutline="66ffffff"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc2PitchSlider" id="c7017c174a50a23" memberName="osc2PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="32 256 64 64" rotaryslideroutline="66ffffff"
          min="-36.0" max="36.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc2FineSlider" id="affffebc271612c" memberName="osc2FineSlider"
          virtualName="" explicitFocusOrder="0" pos="109 256 64 64" rotaryslideroutline="66ffffff"
          min="-2.0" max="2.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc2VolumeSlider" id="b8f800c1689b6ef0" memberName="osc2VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 256 64 64" rotaryslideroutline="66ffffff"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc3PitchSlider" id="bbf153190061abe1" memberName="osc3PitchSlider"
          virtualName="" explicitFocusOrder="0" pos="32 416 64 64" rotaryslideroutline="66ffffff"
          min="-36.0" max="36.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc3FineSlider" id="95d942fd7fabe58b" memberName="osc3FineSlider"
          virtualName="" explicitFocusOrder="0" pos="109 416 64 64" rotaryslideroutline="66ffffff"
          min="-2.0" max="2.0" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="osc3VolumeSlider" id="faa7136819574037" memberName="osc3VolumeSlider"
          virtualName="" explicitFocusOrder="0" pos="184 416 64 64" rotaryslideroutline="66ffffff"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="resoSlider" id="9160d334c6170269" memberName="filterModSlider"
          virtualName="" explicitFocusOrder="0" pos="488 96 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="lfo1RateSlider" id="b826c2541264d4fa" memberName="lfo1RateSlider"
          virtualName="" explicitFocusOrder="0" pos="304 256 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="20.0" int="0.2" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="lfo1AmountSlider" id="d652f9f030b1a4ca" memberName="lfo1AmountSlider"
          virtualName="" explicitFocusOrder="0" pos="488 256 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="lfo2RateSlider" id="e181558ceae467cc" memberName="lfo2RateSlider"
          virtualName="" explicitFocusOrder="0" pos="304 416 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="20.0" int="0.2" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="lfo2AmountSlider" id="d5b558442927d2fc" memberName="lfo2AmountSlider"
          virtualName="" explicitFocusOrder="0" pos="488 416 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="filterAttackSlider" id="dd143499d0f6a2f0" memberName="filterAttackSlider"
          virtualName="" explicitFocusOrder="0" pos="613 96 64 64" thumbcol="ffff7900"
          rotaryslideroutline="66fff8f8" min="0.0" max="10.0" int="0.1"
          style="RotaryVerticalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
  <SLIDER name="filterDecaySlider" id="33363d9ec7716419" memberName="filterDecaySlider"
          virtualName="" explicitFocusOrder="0" pos="681 96 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="filterSustainSlider" id="221683b72a922f05" memberName="filterSustainSlider"
          virtualName="" explicitFocusOrder="0" pos="750 96 64 64" rotaryslideroutline="66fff8f8"
          min="0.01" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="filterReleaseSlider" id="7c537539090ea5d7" memberName="filterReleaseSlider"
          virtualName="" explicitFocusOrder="0" pos="819 96 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ampAttackSlider" id="d39e583f4c75014f" memberName="ampAttackSlider"
          virtualName="" explicitFocusOrder="0" pos="613 256 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ampDecaySlider" id="792535f3bc392ff8" memberName="ampDecaySlider"
          virtualName="" explicitFocusOrder="0" pos="681 256 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ampSustainSlider" id="427fd5158260d560" memberName="ampSustainSlider"
          virtualName="" explicitFocusOrder="0" pos="750 256 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ampReleaseSlider" id="d914be54075f55e0" memberName="ampReleaseSlider"
          virtualName="" explicitFocusOrder="0" pos="819 256 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="10.0" int="0.1" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ampVolSlider" id="8a583b1da0600bb3" memberName="ampVolSlider"
          virtualName="" explicitFocusOrder="0" pos="616 416 64 64" rotaryslideroutline="66fff8f8"
          min="0.0" max="1.0" int="0.02" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <COMBOBOX name="presetCombo" id="dd92602a91bc7ca9" memberName="presetCombo"
            virtualName="" explicitFocusOrder="0" pos="600 16 184 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="storeButton" id="7f02553932604ec2" memberName="storeButton"
              virtualName="" explicitFocusOrder="0" pos="24 544 100 24" buttonText="Store"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <IMAGEBUTTON name="new button" id="ee7a53baa21af566" memberName="imageButton"
               virtualName="" explicitFocusOrder="0" pos="96 64 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1.0" colourNormal="ffffffff"
               resourceOver="oscillator_saw_48_png" opacityOver="1.0" colourOver="ffff7e00"
               resourceDown="" opacityDown="1.0" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="a214c8a1de4a68cd" memberName="imageButton3"
               virtualName="" explicitFocusOrder="0" pos="160 64 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1.0"
               colourNormal="ffffffff" resourceOver="oscillator_square_48_png"
               opacityOver="1.0" colourOver="ffff7e00" resourceDown="" opacityDown="1.0"
               colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="8c20ca18b3a9d2d7" memberName="imageButton2"
               virtualName="" explicitFocusOrder="0" pos="128 64 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1.0" colourNormal="ffffffff"
               resourceOver="oscillator_sine_48_png" opacityOver="1.0" colourOver="ffff7e00"
               resourceDown="" opacityDown="1.0" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="ef82a979049e8fee" memberName="imageButton4"
               virtualName="" explicitFocusOrder="0" pos="104 224 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1.0" colourNormal="ffffffff"
               resourceOver="oscillator_saw_48_png" opacityOver="1.0" colourOver="ffff7e00"
               resourceDown="" opacityDown="1.0" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="8aea33fc6afd4750" memberName="imageButton5"
               virtualName="" explicitFocusOrder="0" pos="168 224 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1.0"
               colourNormal="ffffffff" resourceOver="oscillator_square_48_png"
               opacityOver="1.0" colourOver="ffff7e00" resourceDown="" opacityDown="1.0"
               colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="28fc3adc877116d8" memberName="imageButton6"
               virtualName="" explicitFocusOrder="0" pos="136 224 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1.0" colourNormal="ffffffff"
               resourceOver="oscillator_sine_48_png" opacityOver="1.0" colourOver="ffff7e00"
               resourceDown="" opacityDown="1.0" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="9d8aa1824f425f4a" memberName="imageButton7"
               virtualName="" explicitFocusOrder="0" pos="104 384 24 24" buttonText="Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_saw_48_png" opacityNormal="1.0" colourNormal="ffffffff"
               resourceOver="oscillator_saw_48_png" opacityOver="1.0" colourOver="ffff7e00"
               resourceDown="" opacityDown="1.0" colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="c70ee3eb5acde81b" memberName="imageButton8"
               virtualName="" explicitFocusOrder="0" pos="168 384 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_square_48_png" opacityNormal="1.0"
               colourNormal="ffffffff" resourceOver="oscillator_square_48_png"
               opacityOver="1.0" colourOver="ffff7e00" resourceDown="" opacityDown="1.0"
               colourDown="ffff7e00"/>
  <IMAGEBUTTON name="new button" id="557c43e2f39f8df6" memberName="imageButton9"
               virtualName="" explicitFocusOrder="0" pos="136 384 24 24" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oscillator_sine_48_png" opacityNormal="1.0" colourNormal="ffffffff"
               resourceOver="oscillator_sine_48_png" opacityOver="1.0" colourOver="ffff7e00"
               resourceDown="" opacityDown="1.0" colourDown="ffff7e00"/>
  <LABEL name="statusLabel" id="f241e45e174945c6" memberName="statusLabel"
         virtualName="" explicitFocusOrder="0" pos="704 544 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Trio Ready." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="browseButton" id="f48c01fdd9a33988" memberName="browseButton"
              virtualName="" explicitFocusOrder="0" pos="472 544 100 24" buttonText="Browser"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="setupButton" id="2f8adecb1d3124d2" memberName="setupButton"
              virtualName="" explicitFocusOrder="0" pos="584 544 104 24" buttonText="Setup"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="fxButton" id="8928dfb414abfd9e" memberName="fxButton" virtualName=""
              explicitFocusOrder="0" pos="248 544 100 24" buttonText="FX" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <IMAGEBUTTON name="noiseButton" id="7351ad630e1b98c0" memberName="noiseButton"
               virtualName="" explicitFocusOrder="0" pos="200 384 24 24" buttonText="Pulse"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="oscillator_noise_48_png" opacityNormal="1.0"
               colourNormal="ffffffff" resourceOver="oscillator_noise_48_png"
               opacityOver="1.0" colourOver="ffff7e00" resourceDown="" opacityDown="1.0"
               colourDown="ffff7e00"/>
  <TOGGLEBUTTON name="lowPassPutton" id="60daab19b2c9e457" memberName="lowPassPutton"
                virtualName="" explicitFocusOrder="0" pos="446 64 48 24" txtcol="ffffffff"
                buttonText="LP" connectedEdges="0" needsCallback="1" radioGroupId="111"
                state="1"/>
  <TOGGLEBUTTON name="highPassButton" id="af92ba4031eff084" memberName="highPassButton"
                virtualName="" explicitFocusOrder="0" pos="494 64 48 24" txtcol="ffffffff"
                buttonText="HP" connectedEdges="0" needsCallback="1" radioGroupId="111"
                state="0"/>
  <LABEL name="label" id="5657ae779f570fb" memberName="oscLabel1" virtualName=""
         explicitFocusOrder="0" pos="24 59 80 32" textCol="ffffffff" edTextCol="ff000000"
         edBkgCol="0" labelText="Osc 1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Verdana" fontsize="24.0" kerning="0.0"
         bold="1" italic="0" justification="33" typefaceStyle="Bold"/>
  <LABEL name="label" id="81da6bd96e3f5ae3" memberName="oscLabel2" virtualName=""
         explicitFocusOrder="0" pos="24 217 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Osc 2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="c5a5697528593218" memberName="oscLabel3" virtualName=""
         explicitFocusOrder="0" pos="24 377 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Osc 3&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="72ced2892cc1acea" memberName="pitchLabel1" virtualName=""
         explicitFocusOrder="0" pos="40 160 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pitch" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="47307db3bffcb8f6" memberName="fineLabel1" virtualName=""
         explicitFocusOrder="0" pos="119 160 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fine&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="ad4fd2ffbc831cf" memberName="volumeLabel1" virtualName=""
         explicitFocusOrder="0" pos="184 160 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="add9ffc68d6fb182" memberName="pitchLabel2" virtualName=""
         explicitFocusOrder="0" pos="40 320 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pitch" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="ca9d28ebb0a1439d" memberName="fineLabel2" virtualName=""
         explicitFocusOrder="0" pos="119 320 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fine&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="fb8fc091b7af29ab" memberName="volumeLabel2"
         virtualName="" explicitFocusOrder="0" pos="184 320 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="e760b86769b7a9d0" memberName="pitchLabel3" virtualName=""
         explicitFocusOrder="0" pos="40 480 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pitch" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="581e25c3d0c7b0f3" memberName="fineLabel3" virtualName=""
         explicitFocusOrder="0" pos="119 480 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Fine&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="efe7290214fa80a" memberName="volumeLabel3" virtualName=""
         explicitFocusOrder="0" pos="184 480 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="747b4b6125822722" memberName="cutoffLabel" virtualName=""
         explicitFocusOrder="0" pos="307 160 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Cutoff" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="bdf16e1d7e58291d" memberName="resoLabel" virtualName=""
         explicitFocusOrder="0" pos="400 160 48 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Reso" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="7af13145b0478466" memberName="modLabel" virtualName=""
         explicitFocusOrder="0" pos="488 160 70 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="ModAmt" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="5f5e3d780dee0d7f" memberName="rateLabel1" virtualName=""
         explicitFocusOrder="0" pos="313 320 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Rate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="bbee85008b280580" memberName="amountLabel1"
         virtualName="" explicitFocusOrder="0" pos="488 320 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amount" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="6a7bad2271cb6ad2" memberName="lfoLabel1" virtualName=""
         explicitFocusOrder="0" pos="296 216 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="LFO 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="dbf138b7e2c11237" memberName="rateLabel2" virtualName=""
         explicitFocusOrder="0" pos="313 480 50 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Rate" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="6397e09c90ae19d1" memberName="amountLabel2"
         virtualName="" explicitFocusOrder="0" pos="488 480 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amount" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="845a47fbe1a7cc0c" memberName="lfoLabel2" virtualName=""
         explicitFocusOrder="0" pos="296 376 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="LFO 2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="a66b01a4a92e19d2" memberName="filterLabel" virtualName=""
         explicitFocusOrder="0" pos="296 56 80 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Filter" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="310ef9361e1337ea" memberName="ampEnvLabel" virtualName=""
         explicitFocusOrder="0" pos="616 216 160 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amp Envelope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="f04726959e887f9f" memberName="modEnvLabel" virtualName=""
         explicitFocusOrder="0" pos="616 56 160 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Mod Envelope" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="843742db9fb8656a" memberName="ampLabel" virtualName=""
         explicitFocusOrder="0" pos="616 376 160 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Amp" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="3eeb9e6b8bc89770" memberName="volumeLabel" virtualName=""
         explicitFocusOrder="0" pos="616 480 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Volume" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="61c4989a00ceb07" memberName="attackLabel" virtualName=""
         explicitFocusOrder="0" pos="627 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="8d84a0c2d2757176" memberName="decayLabel" virtualName=""
         explicitFocusOrder="0" pos="696 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="D&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="3ec264a9756af91c" memberName="sustainLabel"
         virtualName="" explicitFocusOrder="0" pos="765 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="S" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="ee162dde96565ce5" memberName="releaseLabel"
         virtualName="" explicitFocusOrder="0" pos="834 160 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="1c2282506216b5fe" memberName="attackLabel2"
         virtualName="" explicitFocusOrder="0" pos="627 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="A" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="bc332dca2988df5c" memberName="decayLabel2" virtualName=""
         explicitFocusOrder="0" pos="696 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="D&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="737a12f35ff15976" memberName="sustainLabel2"
         virtualName="" explicitFocusOrder="0" pos="765 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="S" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <LABEL name="label" id="35455129837bccf8" memberName="releaseLabel2"
         virtualName="" explicitFocusOrder="0" pos="834 320 32 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <SLIDER name="leftVolSLider" id="71b1221c67299992" memberName="leftVolSLider"
          virtualName="" explicitFocusOrder="0" pos="360 16 208 8" bkgcol="ff808080"
          thumbcol="ffe28600" min="0.0" max="1.0" int="0.01" style="LinearBar"
          textBoxPos="NoTextBox" textBoxEditable="0" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="rightVolSlider" id="331b71603552f421" memberName="rightVolSlider"
          virtualName="" explicitFocusOrder="0" pos="360 32 208 8" bkgcol="ff808080"
          thumbcol="ffe28600" min="0.0" max="1.0" int="0.01" style="LinearBar"
          textBoxPos="NoTextBox" textBoxEditable="0" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.0" needsCallback="0"/>
  <LABEL name="label" id="afe8f48f522c2c88" memberName="volumeLabel4"
         virtualName="" explicitFocusOrder="0" pos="296 12 64 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Output" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="modEditButton" id="725f3066f30ed3b3" memberName="modEditButton"
              virtualName="" explicitFocusOrder="0" pos="360 544 100 24" buttonText="Modulation"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="mainButton" id="247303c92b11a794" memberName="mainButton"
              virtualName="" explicitFocusOrder="0" pos="136 544 100 24" buttonText="Main"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="45d3e099f97d2b3c" memberName="modEnvCombo"
            virtualName="" explicitFocusOrder="0" pos="824 61 53 24" editable="0"
            layout="33" items="1&#10;2&#10;3" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="slaveToggleButton" id="552df8fb65ff3a22" memberName="slaveToggleButton"
                virtualName="" explicitFocusOrder="0" pos="192 64 55 24" txtcol="ffffffff"
                buttonText="Sync" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <LABEL name="voicesLabel" id="d66ad1b525af5a0f" memberName="voicesLabel"
         virtualName="" explicitFocusOrder="0" pos="800 16 88 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Voices : 0 " editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="label" id="802b4f32d1338d" memberName="ampLabel2" virtualName=""
         explicitFocusOrder="0" pos="720 376 160 32" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Status" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Verdana"
         fontsize="24.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: oscillator_saw_48_png, 15735, "../oscillator_saw_48.png"
static const unsigned char resource_MainWindow_oscillator_saw_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,
19,1,0,154,156,24,0,0,57,242,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,
34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,49,49,32,55,57,46,49,53,56,51,50,53,44,32,50,48,49,53,47,48,57,47,49,48,
45,48,49,58,49,48,58,50,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,
46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,101,
68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,48,53,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,
77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,53,58,53,57,43,48,50,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,32,32,32,
32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,53,58,53,57,43,48,50,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,
101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,116,
111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,
110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,101,48,53,54,50,99,51,45,49,50,100,56,45,52,52,56,98,45,56,55,100,49,45,97,51,57,52,50,56,99,53,56,98,52,49,60,47,120,109,112,77,77,
58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,
104,111,112,58,48,50,102,55,97,53,48,54,45,54,57,56,57,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,
32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,55,52,100,55,57,97,98,54,45,53,53,49,99,45,52,57,98,48,45,
97,56,99,55,45,97,48,98,56,53,99,100,54,57,100,52,52,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,
58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,
97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,
100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,
100,58,55,52,100,55,57,97,98,54,45,53,53,49,99,45,52,57,98,48,45,97,56,99,55,45,97,48,98,56,53,99,100,54,57,100,52,52,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,48,53,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,
110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,
67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,
100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,101,48,53,54,50,99,51,45,49,50,100,56,45,52,52,56,98,45,56,55,100,49,45,97,51,57,
52,50,56,99,53,56,98,52,49,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,
49,54,45,48,54,45,48,50,84,50,49,58,52,53,58,53,57,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,
111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,
111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,
110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,
32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,105,102,102,58,79,114,105,101,
110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,88,82,101,115,
111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,89,82,101,115,
111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,
110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,10,32,32,
32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,
32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,10,
32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,119,34,
63,62,70,163,14,13,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,2,255,73,68,65,84,120,218,236,151,75,72,84,81,24,199,
127,231,62,82,199,153,44,77,51,173,69,15,3,73,193,52,11,66,42,209,176,39,45,42,43,16,179,34,82,42,202,36,16,42,168,22,66,155,50,40,42,136,192,168,69,26,244,128,138,140,146,30,11,81,202,69,104,150,165,
153,217,99,28,165,178,124,140,119,238,109,113,71,49,98,212,209,17,92,204,185,155,251,29,206,253,255,57,191,243,125,223,225,10,131,241,29,18,126,3,191,193,132,55,144,143,255,55,181,147,43,196,114,143,44,
52,44,108,163,142,56,206,179,3,9,157,141,52,50,143,99,20,17,67,21,217,104,216,40,100,31,241,209,115,59,199,105,7,50,77,36,165,46,173,25,39,68,18,205,44,75,41,123,18,28,238,105,133,50,122,113,129,139,175,
164,175,90,249,0,116,135,228,235,29,8,92,56,152,177,41,230,129,155,148,111,13,4,58,77,20,236,202,45,51,99,195,240,41,34,129,198,119,50,14,44,44,238,159,241,108,32,141,38,111,186,249,204,236,252,126,121,
195,183,133,38,241,135,14,10,143,46,58,13,64,215,227,171,154,203,135,136,4,189,252,36,255,66,74,174,25,223,90,124,187,41,45,219,103,6,10,63,104,37,225,114,192,46,51,174,72,45,169,85,210,135,251,198,11,
246,109,132,145,115,35,32,19,160,189,231,120,170,84,105,39,89,29,250,28,164,145,195,233,196,197,165,242,140,76,0,58,78,37,221,174,236,165,29,139,225,147,52,85,177,227,16,171,159,201,41,0,246,134,230,52,
209,98,163,13,11,198,176,73,49,34,246,205,204,81,179,171,77,249,247,77,135,19,127,180,132,34,152,76,40,22,121,204,117,32,209,134,197,122,171,58,46,9,192,85,187,63,241,253,239,40,130,9,193,64,32,198,90,
201,6,237,168,17,133,47,166,196,0,180,85,213,47,167,39,148,46,100,108,56,209,199,122,163,201,56,8,136,141,121,101,202,191,124,114,106,137,220,51,21,43,141,212,49,19,27,33,4,201,99,48,144,248,200,186,228,
19,53,68,3,188,185,179,61,205,69,24,58,42,111,233,196,130,130,130,44,0,116,239,17,185,187,253,138,181,21,102,236,184,254,34,171,143,8,52,100,58,112,16,136,6,232,195,66,82,60,183,227,118,34,215,199,222,
53,227,135,23,63,229,133,19,130,6,192,36,38,211,135,1,244,18,44,141,18,209,59,246,108,216,235,150,47,61,123,40,111,26,65,24,128,19,43,17,72,40,168,168,168,253,136,116,47,118,32,48,248,198,138,205,107,
74,205,248,231,145,138,34,25,27,125,128,142,202,60,90,232,113,167,167,54,4,125,143,6,125,52,51,51,123,65,137,25,221,204,143,42,158,69,16,46,0,130,176,99,16,58,112,67,58,9,84,188,70,244,139,156,131,253,
242,39,115,175,21,79,31,88,36,16,52,208,141,149,0,247,19,200,36,201,235,44,218,177,123,195,25,243,237,209,150,115,165,91,81,7,250,141,76,7,160,226,28,88,235,68,243,30,81,224,115,94,19,15,79,215,182,222,
159,133,242,79,34,90,177,13,146,7,39,54,43,128,53,210,11,131,130,250,226,228,162,242,242,243,220,79,64,12,234,150,189,132,49,3,221,125,188,230,8,65,179,127,249,32,232,108,157,239,169,158,252,255,104,126,
3,191,129,223,96,2,24,252,29,0,27,24,242,132,168,8,115,79,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::oscillator_saw_48_png = (const char*) resource_MainWindow_oscillator_saw_48_png;
const int MainWindow::oscillator_saw_48_pngSize = 15735;

// JUCER_RESOURCE: oscillator_sine_48_png, 18394, "../oscillator_sine_48.png"
static const unsigned char resource_MainWindow_oscillator_sine_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,
19,1,0,154,156,24,0,0,66,11,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,
34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,49,49,32,55,57,46,49,53,56,51,50,53,44,32,50,48,49,53,47,48,57,47,49,48,
45,48,49,58,49,48,58,50,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,
61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,
116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,
98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,
32,32,60,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,51,58,53,57,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,
32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,51,48,43,48,50,58,48,48,60,47,120,109,112,58,77,111,100,105,102,
121,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,51,48,43,48,50,58,48,48,60,47,120,109,
112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,
32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,
32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,101,100,100,48,51,50,98,45,57,51,55,100,45,52,101,99,56,45,98,100,51,51,45,56,56,101,
55,98,51,99,49,56,98,50,48,60,47,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,
58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,101,55,49,55,99,52,51,56,45,54,57,56,97,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,120,109,112,77,77,
58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,53,97,
53,56,55,99,55,49,45,100,53,49,56,45,52,55,51,51,45,97,49,52,99,45,101,50,57,51,48,53,101,52,101,102,50,99,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,
62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,
115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,53,97,53,56,55,99,55,49,45,100,53,49,56,45,52,55,51,51,45,97,49,52,99,45,101,50,57,51,48,53,101,52,101,102,50,99,60,47,115,116,69,118,116,58,
105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,51,58,53,57,43,
48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,
100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,
101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,
69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,105,109,97,103,101,
47,112,110,103,32,116,111,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,
114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,
84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,
118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,101,101,53,
100,98,48,53,45,52,57,97,55,45,52,102,53,48,45,98,49,53,101,45,52,100,50,53,99,49,99,97,102,99,102,51,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,56,58,51,55,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,
53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,
58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,57,97,52,99,99,52,99,45,52,101,52,56,45,52,53,55,50,45,57,49,51,100,45,54,57,48,55,102,51,99,99,50,97,99,97,60,47,115,116,69,
118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,
51,48,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,69,118,116,58,97,99,116,
105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,
118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,
82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,100,101,114,105,118,101,100,60,47,115,116,69,118,116,58,97,
99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,99,111,110,118,101,114,116,101,100,32,102,114,111,109,32,
97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,
97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,
60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,
58,51,101,100,100,48,51,50,98,45,57,51,55,100,45,52,101,99,56,45,98,100,51,51,45,56,56,101,55,98,51,99,49,56,98,50,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,51,48,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,
110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,
67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,
102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,51,57,97,52,99,99,52,99,45,52,101,52,56,45,52,53,55,50,45,57,49,51,100,45,54,57,48,55,102,51,99,99,50,97,99,97,60,47,115,116,
82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,
112,104,111,116,111,115,104,111,112,58,54,54,100,48,99,97,56,55,45,54,57,56,57,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,115,116,82,101,102,58,100,111,99,117,109,101,
110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,53,97,53,56,55,99,55,
49,45,100,53,49,56,45,52,55,51,51,45,97,49,52,99,45,101,50,57,51,48,53,101,52,101,102,50,99,60,47,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,
32,32,32,32,32,32,60,47,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,
105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,
105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,
105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,
101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,108,111,
114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,
101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,
101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,
32,101,110,100,61,34,119,34,63,62,172,164,163,197,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,5,73,73,68,65,84,120,
218,236,151,107,76,20,119,20,197,127,51,179,111,221,5,22,124,44,138,138,96,177,200,67,43,136,86,177,213,104,197,166,45,106,213,88,137,177,24,162,109,170,169,54,177,138,53,129,84,99,27,99,177,245,145,190,
98,106,163,70,172,216,86,165,106,68,40,130,209,84,106,52,130,34,38,128,224,107,17,88,94,187,44,11,236,110,63,184,174,171,236,174,73,19,191,241,63,159,102,238,204,61,115,238,127,238,185,51,130,147,151,
187,68,250,9,250,9,250,9,100,0,99,220,135,86,162,152,132,142,72,133,244,78,212,228,168,192,194,202,218,130,187,21,122,82,41,226,39,6,251,73,228,68,131,132,19,144,176,98,70,4,10,158,16,60,93,18,237,116,
49,121,69,226,138,208,169,0,115,104,107,174,202,189,180,169,181,253,255,74,21,156,64,164,91,78,45,67,57,125,48,58,237,217,139,218,154,204,239,31,40,57,246,2,5,106,223,10,30,203,16,104,38,136,19,167,163,
83,0,44,230,166,98,149,217,18,55,58,26,2,66,2,206,171,18,90,174,12,194,238,135,192,207,30,200,92,151,152,56,154,21,159,2,80,248,101,209,246,72,139,129,34,222,152,50,231,144,44,28,86,253,125,114,72,149,
53,212,71,34,7,34,90,4,47,81,17,64,141,26,13,45,124,16,53,63,27,224,199,143,191,206,82,91,244,12,196,64,221,165,141,49,173,173,160,214,110,251,217,137,128,204,43,36,212,200,112,248,82,48,31,112,98,36,
59,23,160,34,239,139,31,94,101,48,2,160,162,131,223,58,73,218,81,5,73,105,11,182,92,175,26,230,53,141,72,23,54,36,95,125,160,39,4,7,51,147,131,199,67,183,117,199,135,201,132,114,3,25,26,238,115,157,100,
74,110,23,237,2,88,127,32,148,16,134,122,193,112,180,62,246,71,6,112,17,7,13,44,218,6,112,96,231,17,203,4,186,41,33,130,36,202,24,134,140,17,28,252,252,205,213,162,56,36,49,100,252,63,215,250,238,131,
64,47,14,148,94,247,199,245,122,55,18,247,202,216,105,0,229,91,83,137,35,145,100,236,92,68,142,136,157,32,106,108,103,247,2,44,222,236,64,133,242,57,40,208,32,121,45,157,75,129,1,59,169,171,1,46,253,218,
96,141,192,1,132,80,79,49,90,44,128,128,196,185,157,41,107,32,62,117,84,240,131,102,93,159,52,118,36,4,223,94,100,199,64,242,42,128,130,111,26,168,163,158,122,170,49,18,207,68,98,137,37,134,217,116,214,
222,41,1,165,236,237,229,15,0,135,7,236,136,168,252,247,65,49,233,105,130,2,42,175,228,151,7,97,114,55,78,35,102,122,93,85,110,228,92,78,198,116,72,94,153,144,163,123,198,35,37,186,49,250,55,187,112,82,
50,1,10,183,58,9,241,168,165,17,135,91,184,149,63,142,47,179,41,149,97,81,241,113,165,215,13,30,79,44,209,131,29,209,125,70,160,7,11,162,235,78,17,32,49,118,164,193,102,122,116,231,114,97,24,2,18,18,18,
50,36,228,40,144,187,160,195,196,185,61,0,49,159,180,99,243,128,21,11,74,20,110,200,144,208,235,244,58,131,222,109,118,153,186,69,61,66,247,5,251,6,2,221,226,237,244,176,132,225,152,221,207,213,66,72,
112,118,19,56,108,235,84,54,212,30,101,80,121,148,76,164,150,119,87,206,219,45,8,53,71,199,166,185,74,212,213,110,71,134,156,129,72,110,255,238,97,36,112,199,163,96,118,110,54,223,255,119,88,130,168,28,
189,224,244,239,97,174,136,0,180,120,148,210,70,55,179,179,148,10,200,59,180,249,73,137,4,68,68,36,4,15,128,150,78,76,180,186,97,166,134,99,223,2,44,206,210,33,185,187,64,141,137,123,24,49,98,164,129,
43,140,153,161,15,133,54,227,237,83,126,70,166,19,53,34,15,105,241,128,9,129,210,252,94,43,24,226,226,35,172,30,141,38,186,225,68,67,234,167,0,151,191,215,248,155,201,118,148,40,113,122,220,42,34,18,66,
89,91,65,46,192,164,245,215,105,196,136,145,70,170,105,65,139,10,21,42,172,196,104,95,79,5,184,176,215,246,244,53,237,187,172,132,18,137,197,75,95,150,237,158,155,14,211,150,70,126,102,236,12,4,154,25,
77,26,69,168,0,17,137,101,235,1,174,158,42,107,54,248,38,112,32,18,205,40,218,251,68,194,184,119,181,185,60,56,86,173,157,248,81,102,78,56,14,234,216,205,66,126,65,142,134,118,68,166,175,5,200,221,94,
73,183,111,2,1,13,85,212,120,49,96,129,90,116,155,118,156,132,53,89,199,115,58,80,48,132,20,122,9,229,1,80,79,118,166,70,11,166,170,166,243,11,93,213,23,189,43,80,98,163,149,142,62,104,71,69,126,126,71,
53,12,208,109,201,121,132,156,185,104,48,49,130,225,28,35,76,59,47,27,224,207,181,118,20,174,212,94,21,216,24,202,107,88,125,184,99,61,95,205,219,86,14,179,214,173,42,44,253,75,73,7,65,244,48,131,107,
236,42,17,21,80,81,188,241,76,56,85,254,190,236,36,2,104,247,129,54,6,112,182,226,198,62,128,45,249,203,151,84,99,198,206,45,148,250,210,130,136,241,0,223,45,13,37,152,64,2,125,43,144,97,194,230,242,81,
111,26,204,44,205,56,51,217,48,14,210,15,79,90,59,224,136,188,51,35,110,102,186,76,13,144,185,104,255,195,9,52,60,235,166,125,9,154,104,240,49,64,30,199,171,120,47,225,112,105,100,2,140,75,34,9,222,114,
69,10,51,138,242,244,116,188,232,227,215,137,220,203,96,124,10,137,72,238,118,125,149,248,112,187,219,11,129,155,133,123,102,148,238,11,71,238,242,99,201,95,163,189,104,245,50,8,17,211,134,138,60,251,
172,41,97,1,170,186,166,186,202,19,251,77,206,169,220,122,110,182,9,253,191,177,253,4,253,4,47,159,224,191,1,0,98,193,232,2,1,225,112,200,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::oscillator_sine_48_png = (const char*) resource_MainWindow_oscillator_sine_48_png;
const int MainWindow::oscillator_sine_48_pngSize = 18394;

// JUCER_RESOURCE: oscillator_square_48_png, 17545, "../oscillator_square_48.png"
static const unsigned char resource_MainWindow_oscillator_square_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,
11,19,1,0,154,156,24,0,0,66,11,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,
61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,49,49,32,55,57,46,49,53,56,51,50,53,44,32,50,48,49,53,47,48,57,47,49,48,
45,48,49,58,49,48,58,50,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,
61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,
116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,
98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,
32,32,60,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,49,48,43,48,50,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,
32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,49,50,43,48,50,58,48,48,60,47,120,109,112,58,77,111,100,105,102,
121,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,49,50,43,48,50,58,48,48,60,47,120,109,
112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,
32,32,32,32,32,32,32,32,32,60,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,
32,32,32,32,32,32,32,60,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,100,101,51,101,51,56,49,100,45,100,53,98,99,45,52,51,49,100,45,57,57,57,52,45,100,102,49,
48,100,51,56,53,50,50,56,52,60,47,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,
101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,100,100,98,52,51,48,102,48,45,54,57,56,97,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,120,109,112,
77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,
102,57,49,56,99,52,102,97,45,57,53,53,98,45,52,102,100,57,45,57,50,56,48,45,51,97,48,51,100,102,49,97,52,57,100,50,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,
73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,
69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,
105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,102,57,49,56,99,52,102,97,45,57,53,53,98,45,52,102,100,57,45,57,50,56,48,45,51,97,48,51,100,102,49,97,52,57,100,50,60,47,115,116,69,
118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,52,58,
49,48,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,
112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,
116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,105,109,97,103,
101,47,112,110,103,32,116,111,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,
101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,
101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,
69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,52,99,100,
49,55,101,53,53,45,55,48,50,56,45,52,55,57,48,45,57,50,49,48,45,51,99,57,52,55,56,57,50,52,54,48,98,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,52,55,58,53,56,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,
53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,
116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,
58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,51,52,102,52,48,50,55,45,98,57,52,53,45,52,97,49,55,45,98,98,101,48,45,49,98,50,49,52,48,52,100,100,100,57,54,60,47,115,116,69,
118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,
49,50,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,
117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,111,110,118,101,114,116,101,100,60,47,115,116,69,118,116,58,97,99,116,
105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,
118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,
82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,100,101,114,105,118,101,100,60,47,115,116,69,118,116,58,97,
99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,62,99,111,110,118,101,114,116,101,100,32,102,114,111,109,32,
97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,60,47,115,116,69,118,116,58,112,97,114,
97,109,101,116,101,114,115,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,
60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,
58,100,101,51,101,51,56,49,100,45,100,53,98,99,45,52,51,49,100,45,57,57,57,52,45,100,102,49,48,100,51,56,53,50,50,56,52,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,48,54,45,48,50,84,50,49,58,53,57,58,49,50,43,48,50,58,48,48,60,47,115,116,69,118,116,58,119,104,101,
110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,
67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,
32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,
102,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,50,51,52,102,52,48,50,55,45,98,57,52,53,45,52,97,49,55,45,98,98,101,48,45,49,98,50,49,52,48,52,100,100,100,57,54,60,47,115,116,
82,101,102,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,
112,104,111,116,111,115,104,111,112,58,52,100,98,99,55,54,48,51,45,54,57,56,57,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,60,47,115,116,82,101,102,58,100,111,99,117,109,101,
110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,102,57,49,56,99,52,
102,97,45,57,53,53,98,45,52,102,100,57,45,57,50,56,48,45,51,97,48,51,100,102,49,97,52,57,100,50,60,47,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,
32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,
116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,
47,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,
60,47,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,
102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,
108,111,114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,
105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,
68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,
101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,
99,107,101,116,32,101,110,100,61,34,119,34,63,62,49,166,221,40,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,1,248,73,
68,65,84,120,218,236,151,65,107,19,65,20,199,127,59,19,67,155,221,212,106,219,152,68,138,138,80,161,7,131,244,11,248,41,252,18,126,0,193,163,45,68,83,68,68,241,238,209,92,245,212,163,7,177,7,161,61,152,
173,165,196,82,178,40,90,169,96,154,118,155,76,198,67,164,73,186,152,221,141,187,224,97,223,158,118,118,230,253,118,222,127,222,123,140,161,137,215,4,9,32,1,36,128,216,1,41,239,208,234,210,110,201,10,
225,162,141,104,30,86,193,56,29,121,49,26,176,120,251,206,221,48,27,211,124,115,158,85,39,7,0,62,59,152,153,191,114,45,92,24,46,228,58,232,224,33,58,110,246,55,47,3,73,248,115,95,132,209,160,103,111,95,
77,148,23,140,239,35,16,130,115,250,75,233,230,203,116,88,145,123,182,83,127,179,249,156,139,252,248,203,65,19,100,216,196,249,181,52,238,49,45,100,29,42,180,153,67,35,60,143,36,203,54,54,86,206,24,23,
160,40,210,160,204,49,179,40,207,34,139,45,62,98,250,106,52,50,209,20,5,28,202,28,13,33,52,6,38,54,53,76,4,250,223,50,185,135,88,165,125,138,208,72,178,124,194,198,12,88,4,124,102,41,10,52,88,225,136,
28,10,144,88,212,254,252,125,68,181,168,75,30,135,10,45,102,233,98,98,179,69,38,68,9,11,48,83,81,100,143,71,184,204,99,83,35,19,64,218,144,213,84,113,153,6,79,89,167,142,137,68,71,13,0,69,158,207,188,
231,124,72,247,35,50,217,139,176,152,66,251,184,151,28,224,142,7,8,98,146,61,110,113,53,46,64,138,93,74,220,39,29,79,203,76,81,103,129,101,210,28,196,1,144,212,41,81,1,220,51,149,75,68,21,251,27,172,32,
0,227,76,235,140,4,240,245,228,58,143,131,247,228,240,86,156,123,114,79,246,203,237,6,107,17,3,242,211,60,28,120,125,237,3,176,46,1,76,20,148,231,139,129,24,138,169,64,100,188,122,200,174,79,136,214,171,
157,253,14,59,239,166,60,238,79,104,13,229,169,75,122,187,245,64,232,190,71,195,112,85,243,195,244,224,170,228,142,150,0,18,64,2,248,15,0,191,7,0,29,97,133,174,229,37,210,200,0,0,0,0,73,69,78,68,174,66,
96,130,0,0};

const char* MainWindow::oscillator_square_48_png = (const char*) resource_MainWindow_oscillator_square_48_png;
const int MainWindow::oscillator_square_48_pngSize = 17545;

// JUCER_RESOURCE: oscillator_noise_48_png, 17465, "../oscillator_noise_48.png"
static const unsigned char resource_MainWindow_oscillator_noise_48_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,48,0,0,0,48,8,4,0,0,0,253,11,49,12,0,0,0,9,112,72,89,115,0,0,11,19,0,0,
11,19,1,0,154,156,24,0,0,59,182,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,
61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,10,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,
58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,51,50,32,55,57,46,49,53,57,50,56,52,44,32,50,48,49,54,47,48,52,47,49,57,
45,49,51,58,49,51,58,52,48,32,32,32,32,32,32,32,32,34,62,10,32,32,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,
47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,10,32,32,32,32,32,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,
117,116,61,34,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,10,
32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,100,99,61,34,104,116,116,112,58,47,47,112,117,114,108,46,111,114,103,47,100,99,47,101,108,101,109,101,110,116,115,47,49,46,49,47,34,10,32,32,
32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,112,104,111,116,111,115,104,111,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,112,104,111,116,111,115,104,111,112,
47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
109,109,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,115,116,69,118,116,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,
84,121,112,101,47,82,101,115,111,117,114,99,101,69,118,101,110,116,35,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,116,105,102,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,
111,98,101,46,99,111,109,47,116,105,102,102,47,49,46,48,47,34,10,32,32,32,32,32,32,32,32,32,32,32,32,120,109,108,110,115,58,101,120,105,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,
46,99,111,109,47,101,120,105,102,47,49,46,48,47,34,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,58,67,114,101,97,116,
101,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,54,58,48,49,43,48,49,58,48,48,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
58,77,111,100,105,102,121,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,120,109,112,58,77,111,100,105,102,121,68,97,116,101,62,10,32,32,32,32,32,32,
32,32,32,60,120,109,112,58,77,101,116,97,100,97,116,97,68,97,116,101,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,120,109,112,58,77,101,116,97,100,97,116,97,68,97,
116,101,62,10,32,32,32,32,32,32,32,32,32,60,100,99,58,102,111,114,109,97,116,62,105,109,97,103,101,47,112,110,103,60,47,100,99,58,102,111,114,109,97,116,62,10,32,32,32,32,32,32,32,32,32,60,112,104,111,
116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,49,60,47,112,104,111,116,111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,
58,73,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,53,48,98,99,50,49,101,99,45,56,97,51,53,45,52,99,98,52,45,56,57,99,101,45,98,53,51,97,57,50,56,52,56,100,51,48,60,47,120,109,112,
77,77,58,73,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,
115,104,111,112,58,50,97,48,50,49,50,98,52,45,102,53,52,101,45,49,49,55,57,45,97,54,50,55,45,56,98,49,101,51,48,50,97,101,48,97,56,60,47,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,62,10,
32,32,32,32,32,32,32,32,32,60,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,120,109,112,46,100,105,100,58,49,97,49,51,99,49,98,56,45,57,100,100,101,45,52,54,
99,97,45,97,56,55,99,45,49,51,97,50,55,57,50,97,100,54,55,51,60,47,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,62,10,32,32,32,32,32,32,32,32,32,60,120,109,112,
77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,
112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,99,114,101,97,116,
101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,
105,100,58,49,97,49,51,99,49,98,56,45,57,100,100,101,45,52,54,99,97,45,97,56,55,99,45,49,51,97,50,55,57,50,97,100,54,55,51,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,54,58,48,49,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,
101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,105,105,100,58,57,100,99,52,97,53,56,52,45,54,98,53,55,45,52,54,51,97,45,98,53,102,54,
45,55,102,100,100,51,54,55,56,99,53,52,52,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,
110,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,
118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,
116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,
118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,114,100,102,58,108,105,32,114,
100,102,58,112,97,114,115,101,84,121,112,101,61,34,82,101,115,111,117,114,99,101,34,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,97,99,116,105,111,110,62,115,97,
118,101,100,60,47,115,116,69,118,116,58,97,99,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,120,109,112,46,
105,105,100,58,53,48,98,99,50,49,101,99,45,56,97,51,53,45,52,99,98,52,45,56,57,99,101,45,98,53,51,97,57,50,56,52,56,100,51,48,60,47,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,62,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,119,104,101,110,62,50,48,49,54,45,49,49,45,50,55,84,49,55,58,51,55,58,51,48,43,48,49,58,48,48,60,47,115,116,69,118,116,58,119,104,
101,110,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,
32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,60,47,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,60,115,116,69,118,116,58,99,104,97,110,103,101,100,62,47,60,47,115,116,69,118,116,58,99,104,97,110,103,101,100,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,108,105,
62,10,32,32,32,32,32,32,32,32,32,32,32,32,60,47,114,100,102,58,83,101,113,62,10,32,32,32,32,32,32,32,32,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,10,32,32,32,32,32,32,32,32,32,60,116,
105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,49,60,47,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,88,82,101,115,111,
108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,89,82,101,115,111,
108,117,116,105,111,110,62,55,50,48,48,48,48,47,49,48,48,48,48,60,47,116,105,102,102,58,89,82,101,115,111,108,117,116,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,116,105,102,102,58,82,101,115,111,
108,117,116,105,111,110,85,110,105,116,62,50,60,47,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,67,111,108,111,114,83,
112,97,99,101,62,54,53,53,51,53,60,47,101,120,105,102,58,67,111,108,111,114,83,112,97,99,101,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,
110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,32,32,32,60,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,
110,62,52,56,60,47,101,120,105,102,58,80,105,120,101,108,89,68,105,109,101,110,115,105,111,110,62,10,32,32,32,32,32,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,10,32,32,32,60,
47,114,100,102,58,82,68,70,62,10,60,47,120,58,120,109,112,109,101,116,97,62,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,119,34,63,62,161,90,142,80,0,0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,
0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,7,253,73,68,65,84,120,218,236,152,91,76,219,215,29,199,63,127,223,109,108,108,99,27,27,204,37,128,129,16,66,33,161,185,39,52,77,166,164,221,90,101,205,
182,108,235,195,158,38,85,234,54,109,210,164,61,109,213,52,85,218,211,246,52,169,218,75,215,77,233,195,182,106,173,70,51,41,235,42,145,75,9,228,2,1,130,66,128,152,91,192,23,48,216,248,126,251,255,247,
224,63,142,129,132,100,149,246,48,105,231,188,252,125,126,231,252,190,231,247,251,157,223,239,124,143,5,137,255,110,83,240,191,14,160,130,91,197,31,34,85,132,56,134,77,198,205,96,199,69,30,35,249,109,
11,179,24,203,143,125,127,93,173,246,246,254,117,29,245,83,212,143,162,218,9,93,73,148,122,76,172,82,134,184,69,22,197,179,235,167,191,129,72,116,250,82,38,161,221,201,130,167,55,137,44,6,222,226,115,
52,104,217,124,28,86,105,111,7,48,155,246,122,188,163,229,95,54,6,2,171,28,225,27,44,2,74,20,197,174,36,143,231,104,97,142,222,153,38,255,148,254,12,11,10,110,154,231,5,26,249,16,11,66,73,180,86,120,243,
133,194,119,133,211,140,245,203,185,168,96,67,14,145,175,113,11,77,201,228,60,118,236,110,25,172,163,143,250,39,174,21,159,7,0,4,226,228,232,32,138,166,56,150,194,228,172,106,44,124,183,116,54,226,218,
182,38,79,30,221,243,1,128,146,52,235,40,81,22,3,157,162,241,160,90,246,88,99,71,29,138,109,138,82,120,176,62,25,64,66,122,130,177,122,114,196,138,211,35,52,29,219,144,217,170,53,141,75,94,227,166,13,
173,80,69,39,161,2,128,163,196,176,10,2,164,88,164,2,21,34,89,212,8,8,128,128,64,148,113,212,8,128,132,31,75,231,99,133,77,149,10,175,169,36,172,126,218,56,135,159,149,2,192,165,162,40,141,203,122,230,
221,63,150,103,35,23,127,150,76,104,128,4,89,217,158,12,86,218,101,56,145,106,156,110,8,36,130,137,14,59,76,185,254,70,109,113,147,97,170,121,139,12,57,132,2,64,111,17,32,200,161,189,111,190,253,61,224,
193,251,15,134,44,232,120,68,172,120,110,116,180,144,66,2,178,40,77,206,38,88,232,31,187,218,241,43,232,106,245,81,37,171,79,19,165,135,26,194,176,1,96,145,247,40,176,70,91,151,108,244,177,161,33,59,57,
194,104,139,25,41,18,34,130,132,192,26,29,221,6,3,228,252,233,123,0,77,93,49,214,17,128,28,57,206,209,194,2,186,199,153,236,199,79,152,53,66,196,232,254,106,97,184,231,59,205,120,80,179,66,138,36,25,50,
232,49,96,194,130,10,13,18,13,93,0,129,185,123,35,0,206,189,26,114,228,145,8,80,73,3,75,40,75,19,173,25,7,235,104,201,226,161,165,163,48,236,57,180,106,155,10,169,169,197,102,115,255,162,194,100,153,94,
248,181,1,45,97,162,168,89,64,93,11,48,61,110,240,2,88,237,135,0,45,126,142,114,128,37,164,146,156,87,65,61,7,24,100,26,21,142,38,135,156,157,106,165,185,189,255,234,17,60,120,78,86,254,24,60,152,63,72,
249,64,129,13,21,41,170,218,0,86,71,66,172,120,237,141,26,123,176,34,189,154,195,66,37,43,155,212,131,2,214,128,19,72,44,209,120,166,144,7,0,111,124,253,101,234,185,143,115,63,128,30,215,137,97,166,9,
99,199,72,189,178,241,0,68,163,3,83,131,76,143,130,94,101,104,241,33,112,24,43,201,237,213,84,36,66,45,167,9,211,249,10,192,208,213,92,26,90,15,187,209,144,196,36,23,132,250,61,58,108,196,249,156,191,
19,235,182,217,33,178,100,200,102,153,155,2,104,236,84,97,167,156,216,182,242,172,128,52,41,230,168,227,69,172,93,32,241,135,119,124,94,176,119,221,44,159,160,189,88,148,119,237,222,67,27,109,212,225,
98,127,23,128,255,161,133,30,52,62,0,207,62,55,26,252,36,137,203,61,70,130,164,28,131,215,58,206,53,84,199,67,191,44,179,212,192,210,195,43,87,222,184,91,219,86,174,63,126,250,179,143,187,14,84,215,201,
22,28,87,18,164,140,221,148,211,84,11,112,255,70,136,114,130,62,128,202,206,5,12,187,79,255,46,185,42,202,87,159,70,183,158,92,184,196,69,21,216,247,212,156,183,84,88,100,147,98,227,86,130,83,0,71,206,
191,247,177,251,196,134,169,46,119,230,96,255,205,93,212,178,140,126,55,64,96,176,18,23,169,49,0,179,99,13,101,103,197,233,82,231,148,147,247,113,81,1,194,166,234,246,96,24,70,46,3,212,118,72,152,107,
65,34,47,1,188,184,223,142,153,48,122,154,14,0,40,23,109,36,153,156,88,94,6,42,149,180,187,182,150,108,65,2,21,124,248,151,129,91,214,178,116,22,4,65,175,255,180,63,206,112,127,208,87,89,213,214,121,86,
95,91,15,145,224,80,223,169,11,224,108,176,162,98,136,246,70,87,61,68,147,19,11,73,226,132,243,161,121,135,195,102,210,169,213,205,0,239,255,188,239,19,171,91,64,169,76,231,215,103,255,132,10,38,230,22,
231,180,228,229,107,34,131,155,101,102,167,42,171,20,156,125,199,230,129,120,244,210,71,167,46,128,99,255,36,30,90,104,113,3,204,14,37,162,118,202,128,120,0,224,200,107,53,173,0,131,151,254,49,110,31,
87,33,32,146,41,4,217,140,3,3,57,64,32,137,154,151,89,100,241,19,122,224,245,31,232,180,176,54,19,254,76,68,193,222,99,110,83,54,106,161,169,5,96,236,139,135,128,155,20,177,69,128,67,223,181,213,66,52,
22,158,58,73,140,36,122,178,36,183,179,10,17,19,9,114,92,239,149,0,139,73,167,129,129,59,99,225,21,47,24,245,7,155,181,140,97,60,10,224,31,180,82,134,17,51,161,187,0,109,223,180,183,192,210,237,61,241,
87,233,193,88,44,243,138,205,119,153,146,16,125,12,243,207,233,249,153,141,209,249,235,49,238,93,3,48,122,18,236,163,243,8,64,118,193,133,158,44,42,124,35,0,54,65,47,192,100,255,35,230,208,224,34,33,23,
12,69,169,250,60,102,140,152,176,147,227,97,145,81,138,147,58,190,248,23,64,213,87,238,163,115,186,219,32,69,112,94,75,146,41,22,184,57,30,77,111,204,29,27,189,203,24,215,72,226,38,183,149,85,228,176,
227,1,68,4,156,76,246,158,186,0,176,186,156,154,238,198,56,5,112,252,165,61,232,236,2,224,27,81,7,106,8,51,131,72,34,188,60,107,106,149,139,228,226,94,44,128,128,138,20,209,199,0,10,50,72,168,152,148,
57,232,26,218,59,5,201,240,149,155,98,11,243,147,241,76,153,198,221,226,196,228,0,24,29,188,76,29,26,122,80,178,138,232,167,21,32,45,69,38,205,242,21,165,164,141,250,199,46,202,96,98,31,46,170,168,161,
134,26,218,144,238,7,231,1,124,195,26,194,92,91,27,31,0,136,150,91,186,0,86,231,68,114,228,9,224,195,203,74,176,160,101,230,110,32,168,71,64,64,32,143,154,138,199,22,8,8,172,145,43,169,129,17,126,244,
195,119,143,54,199,227,31,29,36,64,150,185,219,7,123,160,243,213,142,2,155,152,61,136,13,37,122,36,242,68,70,248,22,192,244,104,63,13,91,72,143,12,160,38,74,112,211,145,210,243,105,239,201,222,102,194,
44,82,65,55,226,44,64,207,219,14,23,136,76,220,150,136,163,68,66,34,199,244,232,217,2,43,89,104,192,253,100,110,42,161,196,176,233,38,210,161,66,7,232,201,240,136,8,119,239,124,27,216,223,163,0,124,211,
153,73,39,26,18,60,68,32,130,102,74,102,37,19,134,18,122,249,156,228,55,195,44,6,36,174,13,44,5,171,43,11,1,28,189,117,153,93,164,177,112,6,21,73,180,193,181,176,213,146,64,188,221,141,246,63,123,128,
128,18,27,22,4,22,69,239,245,234,243,50,113,156,211,161,65,71,150,223,162,66,65,122,245,247,181,245,26,181,52,177,182,85,221,79,118,2,144,80,3,121,60,152,0,45,209,251,27,146,178,153,87,176,33,96,231,61,
6,208,145,199,21,51,96,34,68,182,132,176,60,211,2,5,101,140,113,3,23,33,96,13,239,196,134,228,214,109,63,113,32,130,27,48,144,199,132,9,3,90,20,207,15,32,96,164,159,65,116,36,101,87,141,247,137,40,128,
213,224,220,144,68,28,136,83,79,43,94,12,59,63,99,11,234,20,91,248,76,14,7,62,14,227,148,115,91,34,246,40,48,85,213,12,254,133,41,204,40,1,137,36,229,50,201,221,17,64,65,154,24,234,77,41,18,163,14,5,125,
197,220,144,8,240,250,92,85,51,100,22,60,69,202,175,162,14,63,129,157,1,36,210,84,211,140,184,9,64,66,141,136,182,100,119,89,102,62,216,189,146,18,111,252,57,89,66,175,140,24,89,218,233,1,246,255,63,67,
158,213,254,61,0,214,74,239,174,195,29,23,91,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainWindow::oscillator_noise_48_png = (const char*) resource_MainWindow_oscillator_noise_48_png;
const int MainWindow::oscillator_noise_48_pngSize = 17465;

// JUCER_RESOURCE: trio_png2, 20281, "../trio.png"
static const unsigned char resource_MainWindow_trio_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,3,142,0,0,2,88,8,2,0,0,0,162,133,47,69,0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,
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
50,49,58,52,52,58,52,53,43,48,49,58,48,48,34,32,120,109,112,58,77,111,100,105,102,121,68,97,116,101,61,34,50,48,50,48,45,48,51,45,49,54,84,50,49,58,52,52,58,52,53,43,48,49,58,48,48,34,32,100,99,58,102,
111,114,109,97,116,61,34,105,109,97,103,101,47,112,110,103,34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,51,101,48,100,100,54,100,102,45,48,50,98,101,
45,99,56,52,50,45,98,98,50,102,45,52,101,97,54,99,52,48,102,98,100,50,49,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,
111,115,104,111,112,58,102,100,101,100,52,53,100,52,45,102,102,53,98,45,49,49,55,57,45,56,99,52,102,45,101,54,56,97,53,57,57,101,57,97,55,101,34,32,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,
111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,32,112,104,111,116,
111,115,104,111,112,58,67,111,108,111,114,77,111,100,101,61,34,51,34,32,112,104,111,116,111,115,104,111,112,58,73,67,67,80,114,111,102,105,108,101,61,34,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,
49,34,32,116,105,102,102,58,79,114,105,101,110,116,97,116,105,111,110,61,34,49,34,32,116,105,102,102,58,88,82,101,115,111,108,117,116,105,111,110,61,34,55,50,48,48,48,48,47,49,48,48,48,48,34,32,116,105,
102,102,58,89,82,101,115,111,108,117,116,105,111,110,61,34,55,50,48,48,48,48,47,49,48,48,48,48,34,32,116,105,102,102,58,82,101,115,111,108,117,116,105,111,110,85,110,105,116,61,34,50,34,32,101,120,105,
102,58,67,111,108,111,114,83,112,97,99,101,61,34,49,34,32,101,120,105,102,58,80,105,120,101,108,88,68,105,109,101,110,115,105,111,110,61,34,57,49,48,34,32,101,120,105,102,58,80,105,120,101,108,89,68,105,
109,101,110,115,105,111,110,61,34,54,48,48,34,62,32,60,120,109,112,77,77,58,72,105,115,116,111,114,121,62,32,60,114,100,102,58,83,101,113,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,
116,105,111,110,61,34,99,114,101,97,116,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,
45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,48,54,45,48,50,84,49,57,58,50,52,58,50,49,43,48,50,58,48,48,34,32,115,116,69,118,
116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,77,97,99,105,110,116,111,115,104,41,34,47,62,32,60,
114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,50,54,
51,51,48,49,97,56,45,100,101,53,49,45,52,99,56,98,45,98,101,54,48,45,101,53,51,54,101,97,56,98,56,52,55,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,48,54,45,48,50,84,49,57,58,51,
49,58,49,49,43,48,50,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,32,40,
77,97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,101,100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,
101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,98,99,50,50,102,50,102,52,45,55,49,99,55,45,52,48,99,98,45,98,97,97,52,45,100,97,51,55,52,55,
56,48,102,101,56,55,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,49,50,45,49,48,84,49,50,58,52,50,58,50,49,43,48,49,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,
101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,
101,100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,99,111,110,118,101,114,116,101,100,34,32,115,116,69,118,116,58,112,97,114,97,109,101,116,101,
114,115,61,34,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,103,34,
47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,100,101,114,105,118,101,100,34,32,115,116,69,118,116,58,112,97,114,97,109,101,116,101,114,115,61,34,99,111,110,118,
101,114,116,101,100,32,102,114,111,109,32,97,112,112,108,105,99,97,116,105,111,110,47,118,110,100,46,97,100,111,98,101,46,112,104,111,116,111,115,104,111,112,32,116,111,32,105,109,97,103,101,47,112,110,
103,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,110,61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,
105,100,58,48,49,98,97,97,49,97,102,45,57,53,48,99,45,52,101,99,99,45,97,98,56,55,45,54,51,51,50,100,97,98,50,54,54,56,48,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,49,54,45,49,50,45,49,48,
84,49,50,58,52,50,58,50,49,43,48,49,58,48,48,34,32,115,116,69,118,116,58,115,111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,
48,49,53,46,53,32,40,77,97,99,105,110,116,111,115,104,41,34,32,115,116,69,118,116,58,99,104,97,110,103,101,100,61,34,47,34,47,62,32,60,114,100,102,58,108,105,32,115,116,69,118,116,58,97,99,116,105,111,
110,61,34,115,97,118,101,100,34,32,115,116,69,118,116,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,51,101,48,100,100,54,100,102,45,48,50,98,101,45,99,56,52,50,45,98,98,50,
102,45,52,101,97,54,99,52,48,102,98,100,50,49,34,32,115,116,69,118,116,58,119,104,101,110,61,34,50,48,50,48,45,48,51,45,49,54,84,50,49,58,52,52,58,52,53,43,48,49,58,48,48,34,32,115,116,69,118,116,58,115,
111,102,116,119,97,114,101,65,103,101,110,116,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,57,32,40,87,105,110,100,111,119,115,41,34,32,115,116,69,118,116,58,99,104,
97,110,103,101,100,61,34,47,34,47,62,32,60,47,114,100,102,58,83,101,113,62,32,60,47,120,109,112,77,77,58,72,105,115,116,111,114,121,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,
109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,98,99,50,50,102,50,102,52,45,55,49,99,55,45,52,48,99,98,45,98,97,97,52,45,100,97,51,55,52,55,56,48,
102,101,56,55,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,52,102,99,100,51,101,99,52,45,54,
57,55,101,45,49,49,55,57,45,57,48,97,102,45,100,52,56,57,54,55,57,53,97,52,101,55,34,32,115,116,82,101,102,58,111,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,
105,100,58,99,57,53,54,53,52,48,57,45,54,52,50,97,45,52,56,52,100,45,56,50,52,99,45,48,51,49,50,53,53,54,101,100,98,51,48,34,47,62,32,60,112,104,111,116,111,115,104,111,112,58,68,111,99,117,109,101,110,
116,65,110,99,101,115,116,111,114,115,62,32,60,114,100,102,58,66,97,103,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,52,53,98,54,
51,54,54,50,45,102,56,51,101,45,49,49,55,57,45,57,100,97,97,45,99,102,48,53,51,102,100,51,55,50,102,102,60,47,114,100,102,58,108,105,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,
105,100,58,112,104,111,116,111,115,104,111,112,58,55,48,54,57,57,50,51,50,45,102,102,54,102,45,49,49,55,57,45,56,48,48,53,45,99,57,52,50,48,48,99,56,98,97,49,51,60,47,114,100,102,58,108,105,62,32,60,114,
100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,97,55,97,55,57,53,99,100,45,102,102,54,99,45,49,49,55,57,45,97,57,54,98,45,102,97,50,53,51,102,52,
48,97,101,50,100,60,47,114,100,102,58,108,105,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,115,104,111,112,58,100,55,97,101,53,99,51,54,45,54,56,54,
97,45,49,57,52,56,45,57,98,51,54,45,100,98,54,102,97,48,101,49,51,52,99,50,60,47,114,100,102,58,108,105,62,32,60,114,100,102,58,108,105,62,97,100,111,98,101,58,100,111,99,105,100,58,112,104,111,116,111,
115,104,111,112,58,101,99,52,97,57,98,50,101,45,102,53,48,51,45,49,49,55,57,45,56,53,54,100,45,99,97,55,102,98,50,101,57,49,49,99,97,60,47,114,100,102,58,108,105,62,32,60,47,114,100,102,58,66,97,103,62,
32,60,47,112,104,111,116,111,115,104,111,112,58,68,111,99,117,109,101,110,116,65,110,99,101,115,116,111,114,115,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,
102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,114,34,63,62,61,66,94,125,0,0,65,138,73,68,65,84,120,156,237,221,123,144,92,213,
97,239,251,181,95,221,61,211,51,61,51,18,210,60,36,36,52,122,34,25,184,144,235,128,101,35,174,13,134,155,155,170,148,15,182,110,130,227,83,46,95,200,181,207,45,108,39,156,115,237,202,177,33,101,129,237,
10,39,33,55,70,231,220,123,2,10,80,149,2,19,113,8,38,39,229,35,30,193,118,108,65,30,128,37,98,132,94,35,6,52,47,49,72,243,234,121,246,222,235,254,177,186,215,236,233,121,168,119,247,238,214,26,233,251,
41,149,24,237,217,207,158,89,172,223,94,107,237,181,173,29,219,183,11,0,0,0,192,60,246,133,62,1,0,0,0,96,97,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,220,
243,174,97,89,214,18,255,92,130,148,242,188,235,171,117,74,60,244,130,155,44,118,20,203,178,230,239,124,233,195,1,0,0,192,40,75,69,85,157,255,212,23,150,101,9,203,42,61,170,150,34,159,29,165,44,10,145,
75,28,75,74,185,240,250,11,109,168,86,147,65,176,240,113,1,0,0,96,176,69,163,234,108,60,21,194,118,28,219,182,45,203,18,98,118,225,18,230,7,193,37,219,71,101,209,38,133,149,23,56,150,222,68,74,25,4,129,
148,210,10,109,18,62,201,185,27,21,4,129,250,175,90,159,192,10,0,0,96,178,133,163,170,206,169,150,101,21,114,170,109,229,217,177,70,213,124,134,20,115,187,242,173,124,203,104,113,195,170,202,155,133,184,
169,6,218,202,194,17,44,29,88,67,105,85,206,97,7,65,16,4,190,175,190,177,224,32,1,0,0,0,24,98,169,86,85,203,178,28,215,181,44,219,182,109,219,206,7,86,219,177,133,142,158,225,152,87,8,135,75,132,191,112,
238,44,116,205,75,29,88,231,174,150,79,197,225,173,212,58,129,31,132,90,85,3,181,112,54,76,219,182,37,242,27,134,247,175,34,106,16,88,234,114,124,223,23,170,81,150,180,10,0,0,96,170,37,199,170,170,108,
106,219,142,227,58,142,235,184,174,109,219,58,216,73,41,139,122,218,195,73,116,145,142,251,121,79,65,57,249,231,159,116,195,106,161,237,214,42,218,74,111,226,186,214,108,78,13,164,148,65,62,218,218,150,
109,59,197,205,183,142,176,44,75,173,236,231,252,32,80,127,44,33,132,47,68,236,105,181,146,103,200,170,125,2,36,114,0,0,176,236,44,58,0,192,178,109,199,113,84,78,117,61,207,113,92,33,132,239,7,225,206,
250,5,55,44,252,45,173,217,118,86,161,55,153,63,38,85,229,82,29,79,149,32,8,212,211,83,225,77,194,235,59,142,99,89,110,209,192,83,61,24,181,248,90,44,97,219,142,157,112,130,192,247,115,57,223,247,213,
242,92,46,167,210,234,210,159,81,137,79,146,45,152,212,231,167,237,106,68,198,162,7,224,22,60,129,37,182,154,191,26,185,22,0,0,152,96,129,168,26,138,155,58,178,186,185,92,238,84,215,201,190,190,158,18,
247,155,76,166,58,58,214,172,89,187,238,196,241,163,253,253,189,75,172,185,114,229,170,203,86,173,90,181,170,213,178,242,97,110,116,116,180,175,183,103,137,173,218,218,58,218,59,214,100,50,25,125,182,
42,218,142,142,142,12,126,112,102,96,160,47,151,203,233,149,91,91,219,27,26,27,219,218,58,212,181,88,158,45,196,140,16,194,247,115,142,227,248,115,155,123,23,252,40,230,124,38,225,216,170,55,9,141,175,
45,202,220,133,0,29,136,32,16,115,155,135,23,19,53,38,134,31,128,83,131,53,194,231,160,159,63,19,161,105,16,244,205,193,156,131,206,109,219,142,116,38,23,188,57,57,22,180,73,3,0,96,154,165,94,1,96,229,
147,170,109,89,86,111,207,233,251,239,255,142,44,217,123,239,117,247,246,246,156,61,59,248,217,207,254,155,165,215,124,254,249,231,254,247,221,159,125,235,240,155,31,124,112,38,8,100,16,200,190,222,158,
199,31,255,203,37,54,121,252,241,191,236,235,237,209,255,244,253,224,220,185,179,71,222,254,215,43,183,109,254,206,119,254,104,104,104,40,188,242,19,79,60,246,127,253,187,47,255,203,63,191,118,250,253,
238,32,144,150,101,169,70,98,199,113,84,14,95,226,242,133,14,160,182,237,184,174,235,121,174,235,186,174,231,186,158,171,254,169,254,184,174,235,122,249,97,18,142,171,194,125,248,11,215,117,109,199,177,
22,98,135,194,101,248,136,145,126,138,86,97,162,6,215,205,31,212,182,29,253,71,157,128,235,121,142,235,58,250,180,67,39,236,56,174,235,230,175,69,159,167,40,173,57,185,232,180,227,186,162,90,90,248,135,
82,152,245,162,200,133,62,89,0,0,46,45,37,77,86,85,118,147,82,41,27,238,220,185,115,231,206,157,159,251,220,231,118,237,186,41,153,76,53,52,52,150,120,184,66,19,160,56,253,126,119,34,225,62,255,252,115,
59,119,238,156,191,218,109,183,221,118,219,109,183,125,225,11,95,216,179,103,207,51,207,60,187,105,243,86,199,177,29,215,149,50,176,237,64,8,25,216,182,110,242,44,218,118,54,167,58,142,158,250,32,220,
96,25,94,109,110,230,81,131,122,165,106,212,12,2,95,8,75,205,63,32,11,163,117,11,83,107,205,94,142,250,174,154,5,214,58,223,8,218,240,182,249,120,104,59,118,225,11,253,93,53,78,55,152,59,75,151,62,201,
208,209,103,231,85,176,109,91,207,147,176,52,125,20,203,182,75,185,162,240,182,37,254,148,203,219,170,116,179,151,96,89,214,220,132,45,22,105,20,143,253,28,0,0,192,98,22,141,170,133,32,120,254,55,78,45,
161,244,58,253,234,171,175,126,250,233,31,126,241,139,95,218,184,105,75,164,157,247,245,245,116,118,94,241,212,83,79,173,94,189,122,137,149,87,175,94,189,119,239,222,206,206,206,7,31,252,147,205,91,182,
217,182,74,171,82,74,105,219,182,63,239,29,1,225,16,230,56,186,133,50,63,201,128,16,122,54,88,245,249,216,66,245,168,11,75,53,211,234,136,47,165,244,115,57,41,29,223,207,5,65,96,89,115,122,225,139,130,
157,101,217,225,217,181,66,203,151,250,252,11,25,209,182,44,171,208,148,235,168,212,37,165,12,2,63,240,3,21,62,133,144,115,90,63,157,217,168,170,230,85,40,154,39,65,22,146,90,56,156,229,79,102,94,99,106,
120,190,176,165,175,104,49,231,189,210,249,235,235,175,196,220,59,7,113,190,79,108,254,18,245,153,88,161,235,210,69,192,102,142,51,0,0,46,144,165,6,0,228,115,138,31,72,41,59,214,172,189,247,222,63,10,
55,27,222,124,243,205,225,149,31,122,232,161,240,119,215,173,91,223,222,222,49,63,48,220,125,247,221,122,157,135,30,122,40,252,173,219,110,187,173,169,169,49,151,155,105,239,88,243,197,47,126,73,173,115,
248,240,97,189,194,225,195,135,213,194,47,126,241,75,237,29,107,132,16,65,16,244,247,245,62,242,200,35,225,156,122,240,224,193,155,111,190,89,173,185,111,223,190,240,33,238,185,231,158,79,126,242,166,
15,62,24,144,82,170,166,199,124,206,179,23,248,28,242,113,206,113,102,251,241,189,132,151,72,122,94,194,243,18,137,100,210,75,36,19,201,84,34,153,74,36,147,158,151,112,93,207,113,221,208,71,151,159,69,
203,75,36,28,215,115,221,132,234,136,119,28,199,81,143,170,121,9,79,237,176,176,207,162,78,121,221,53,63,127,97,209,119,213,25,122,94,194,245,60,47,145,112,92,87,231,45,215,205,47,113,221,217,142,126,
47,145,76,36,147,122,207,174,235,169,203,241,18,9,207,83,215,18,58,132,231,121,137,196,236,104,135,208,248,129,240,185,169,113,17,249,139,42,252,41,90,97,137,11,41,101,133,249,235,231,255,132,78,44,127,
170,110,232,187,243,254,44,126,92,71,95,133,27,58,255,252,56,10,215,181,236,226,150,117,0,0,80,85,11,180,170,134,218,141,242,89,213,247,115,158,231,109,222,178,117,227,166,45,170,75,119,124,60,59,127,
195,245,87,116,182,181,117,56,142,163,219,20,207,157,251,112,254,106,91,182,110,111,106,106,22,66,220,127,255,119,111,184,225,134,112,175,253,218,181,107,135,134,199,210,233,134,141,155,182,108,232,220,
244,246,175,14,23,109,155,201,52,109,223,113,181,58,132,148,178,191,191,119,207,158,239,116,118,118,234,21,246,239,223,255,229,47,255,187,182,246,142,27,62,118,99,46,151,251,143,255,241,219,47,189,244,
210,83,79,61,165,87,248,195,63,252,195,93,187,110,186,236,178,213,106,122,3,213,96,166,219,210,138,90,203,242,83,201,218,142,109,59,174,231,169,134,70,181,126,184,9,48,152,59,126,96,104,232,92,95,111,
239,224,224,25,33,68,71,199,218,205,91,182,186,174,43,29,199,246,237,194,60,175,66,77,173,37,66,161,167,48,253,214,108,103,189,254,129,8,33,230,189,130,107,150,110,85,213,179,137,117,117,157,232,235,237,
201,229,114,13,13,141,237,29,107,58,58,214,56,142,43,109,41,132,156,211,92,90,56,136,122,160,77,229,90,233,200,32,240,253,156,95,24,54,80,116,50,249,35,234,102,212,194,167,164,122,207,231,60,209,21,158,
80,44,88,100,136,197,92,114,137,203,92,100,253,5,102,150,16,115,135,175,136,162,6,87,33,230,31,101,182,101,186,48,229,153,85,152,67,173,48,107,68,46,63,199,217,146,51,96,0,0,128,120,45,60,0,64,74,41,130,
192,247,125,33,44,33,114,150,101,89,194,114,92,87,165,80,245,112,210,252,173,236,194,252,86,182,173,186,158,23,109,124,82,57,32,149,74,245,244,20,79,41,16,234,80,94,184,163,54,60,32,114,160,191,239,51,
159,249,140,254,110,54,155,253,246,183,191,125,197,134,206,186,186,122,181,230,198,77,91,94,126,249,149,3,7,14,220,118,219,109,106,157,171,175,190,250,55,126,227,127,61,242,206,241,76,38,51,127,108,226,
130,199,82,163,5,44,203,58,118,244,29,61,7,66,123,251,154,77,155,183,168,11,25,28,252,160,175,183,103,104,232,156,16,162,173,173,35,151,155,249,209,143,242,3,103,239,184,227,142,163,199,78,100,50,77,42,
8,138,208,157,64,56,45,90,150,229,56,142,16,142,80,9,47,8,164,40,53,12,21,154,134,109,203,178,84,208,237,235,237,25,26,26,74,167,211,93,93,93,215,92,243,63,181,183,171,217,15,242,45,199,82,202,240,133,
104,237,237,107,182,108,221,102,21,70,17,168,62,111,25,204,190,160,33,148,206,213,49,45,33,132,37,242,15,82,137,121,131,70,244,21,229,135,123,206,125,209,67,37,100,48,187,31,169,230,247,157,59,68,65,202,
208,47,143,53,251,174,10,203,178,230,135,225,194,59,35,44,125,21,225,159,139,235,122,106,112,71,46,55,35,165,180,29,199,207,229,10,71,33,176,2,0,80,93,75,189,2,64,6,129,180,131,32,16,190,159,179,44,75,
88,150,155,111,183,11,236,133,122,204,69,62,222,89,133,70,169,226,1,160,179,123,150,50,155,29,203,102,199,182,110,221,170,23,102,179,217,159,253,236,103,215,223,240,9,61,24,114,177,67,168,47,114,185,153,
53,107,58,194,77,170,135,14,29,26,28,60,123,217,170,246,80,92,150,205,45,45,191,248,197,47,116,84,21,66,220,114,203,45,175,190,250,143,141,141,153,240,179,234,11,30,73,20,162,179,109,219,51,51,51,141,
141,233,222,222,217,246,185,206,141,155,45,75,72,41,251,122,123,126,250,211,159,92,125,245,213,66,136,125,251,246,125,229,43,95,185,230,154,107,212,21,61,243,204,51,55,124,236,70,213,16,27,190,124,41,
165,154,255,75,205,201,213,214,214,177,161,115,163,231,121,249,76,185,200,199,187,52,181,219,177,177,209,207,125,238,115,233,116,90,8,241,250,235,175,55,55,183,200,194,139,21,212,58,103,207,126,120,251,
237,159,217,187,119,111,209,230,15,61,244,208,255,251,255,253,69,71,199,26,81,136,233,225,116,43,66,81,117,193,143,43,8,130,5,175,72,20,98,107,212,161,168,101,92,190,254,122,193,155,28,177,120,107,168,
206,157,65,16,188,251,110,151,106,147,118,93,183,189,99,205,134,13,27,213,184,142,66,126,205,63,135,71,78,5,0,160,6,22,141,68,170,98,246,115,185,32,240,125,223,207,229,102,252,220,76,144,127,148,123,225,
77,172,144,37,14,121,236,232,219,255,252,79,7,115,51,147,251,247,255,181,138,119,202,15,127,248,67,53,251,233,121,3,141,250,254,216,216,232,167,63,253,233,240,242,35,71,142,52,52,52,232,184,172,98,104,
115,115,203,211,79,63,29,94,109,237,218,181,147,147,147,162,232,233,239,133,15,58,219,136,232,56,110,87,87,87,54,155,31,249,240,169,79,125,106,98,98,60,8,130,211,167,223,251,221,223,253,188,186,144,174,
174,174,175,127,253,247,91,91,219,155,155,155,45,203,106,110,110,110,107,235,80,9,71,53,149,134,255,244,246,156,126,224,129,61,234,115,126,224,129,61,189,61,167,131,64,250,126,160,201,243,41,90,83,77,
46,59,49,49,190,121,243,102,117,146,35,35,35,206,220,217,184,164,148,205,205,45,255,237,191,253,141,101,89,93,93,93,106,225,29,119,220,97,89,214,127,250,79,127,218,214,214,161,206,173,232,52,196,220,246,
236,197,14,189,224,21,169,189,249,126,16,250,162,216,130,23,165,169,173,22,219,54,60,185,129,254,57,206,95,161,232,139,162,11,12,125,43,223,38,45,165,28,26,26,234,235,237,81,187,87,83,125,217,182,163,
50,252,210,191,159,0,0,32,46,139,14,0,152,109,103,242,125,203,178,130,64,117,46,251,234,181,85,101,219,187,119,239,252,246,60,33,196,225,195,135,255,253,191,255,15,87,110,255,136,74,153,234,44,22,219,
73,248,245,87,97,195,195,195,225,39,138,164,148,150,37,60,47,113,236,216,177,240,106,141,141,141,57,191,240,142,128,243,199,226,217,20,155,76,166,6,6,6,84,59,238,234,213,171,207,124,112,54,145,72,246,
247,245,222,119,223,125,106,133,135,30,122,168,181,173,61,155,29,83,239,32,88,185,114,213,186,245,27,78,28,63,58,48,208,39,132,72,167,27,218,218,59,250,251,122,179,217,177,214,214,246,129,129,190,43,175,
188,82,109,248,210,75,47,117,119,159,154,156,156,108,204,100,250,122,123,178,217,49,33,68,123,251,154,141,155,182,12,15,207,142,124,85,163,14,250,251,251,250,122,123,198,198,70,245,73,182,181,117,92,190,
110,125,34,145,148,82,142,142,140,92,117,213,85,122,183,205,45,43,230,95,84,231,198,205,31,124,48,208,218,218,42,132,200,102,179,251,247,239,255,216,206,93,150,101,233,247,53,92,118,217,42,215,245,212,
215,234,52,44,43,63,53,216,228,228,196,233,247,223,211,47,104,80,77,143,77,77,205,31,156,57,115,222,43,82,163,35,6,7,63,104,107,235,104,104,108,92,232,74,123,6,7,63,80,107,94,177,161,243,221,83,93,234,
64,173,173,237,83,83,147,122,136,197,218,203,215,141,141,141,246,247,245,234,37,151,175,91,159,76,166,10,191,6,179,251,81,223,109,107,239,104,104,104,20,66,44,113,129,66,136,177,177,209,190,222,30,221,
38,125,232,208,161,92,46,247,243,127,120,165,48,52,130,103,170,0,0,168,181,165,90,85,133,110,91,245,213,67,54,126,224,251,213,232,247,220,183,111,223,141,55,238,106,109,107,119,93,207,204,28,160,174,58,
149,170,235,239,239,87,75,54,111,222,60,57,57,209,211,243,254,247,190,247,93,53,255,192,129,3,7,254,250,175,159,153,24,31,127,248,7,127,174,62,183,79,126,242,166,145,145,225,166,166,70,245,207,195,135,
15,125,254,142,223,62,124,248,144,148,242,187,223,189,95,74,169,31,41,123,234,169,167,164,148,15,63,252,231,125,189,61,106,5,41,229,77,55,221,56,50,50,220,219,211,243,163,31,253,141,90,210,216,152,30,
31,31,191,124,109,199,161,67,191,12,183,68,254,224,7,255,207,219,191,122,171,191,191,55,8,130,225,225,161,95,251,181,95,19,133,225,7,42,162,205,29,126,32,198,198,70,119,239,222,173,3,89,83,83,139,16,34,
151,155,201,100,26,212,14,127,244,163,231,116,251,232,93,119,253,31,199,143,189,51,62,62,30,4,242,221,119,79,102,26,235,245,183,84,211,227,31,221,119,239,77,187,62,177,99,199,149,231,189,162,207,126,246,
223,252,232,71,207,169,19,94,228,74,159,83,75,50,153,134,190,190,30,125,160,135,31,254,243,159,254,244,39,250,98,223,127,175,251,230,79,253,47,225,37,239,117,191,27,4,65,46,55,115,252,216,59,187,110,252,
184,222,143,148,242,241,199,255,114,60,59,210,215,215,51,61,61,181,196,5,78,76,140,247,245,246,60,241,196,99,250,33,188,157,59,119,234,143,61,87,24,159,106,230,239,39,0,0,23,171,243,78,86,149,239,148,
213,157,179,213,136,170,79,62,249,228,202,203,86,173,92,185,170,196,245,23,27,204,218,212,212,228,231,114,50,244,112,143,148,98,102,102,122,203,150,57,115,181,142,142,142,186,186,109,248,124,207,164,43,
234,88,201,100,82,63,7,182,126,253,250,201,201,201,129,254,190,47,124,225,11,106,201,131,15,62,184,186,181,109,100,100,88,39,197,253,251,247,79,77,77,254,246,111,255,182,90,161,179,179,115,207,158,61,
157,157,157,217,108,246,203,95,254,242,29,119,220,161,150,31,60,120,80,101,160,175,126,237,235,122,244,173,10,154,245,245,233,225,225,115,106,228,107,87,87,87,79,79,239,224,7,103,62,255,249,207,191,254,
250,235,106,66,174,173,91,183,118,117,117,237,222,189,251,240,225,67,253,125,189,225,241,187,58,131,234,15,74,255,236,134,135,206,221,114,203,45,234,107,53,106,66,74,57,52,116,78,159,106,67,67,195,147,
79,62,185,117,235,214,108,54,187,103,207,158,135,31,254,243,211,239,191,55,62,158,221,178,121,211,243,207,63,127,231,157,119,238,219,183,79,157,243,55,191,249,205,143,126,244,163,43,86,172,248,213,219,
71,150,190,34,33,196,222,189,123,85,150,125,246,217,103,207,123,165,163,35,163,186,141,246,253,247,223,191,241,198,93,251,247,239,23,66,236,222,189,251,137,39,30,19,66,236,218,117,211,129,3,7,212,146,
207,125,238,246,115,231,62,60,213,117,242,187,223,189,127,239,222,189,13,13,13,91,183,110,221,186,117,235,153,51,103,110,187,237,182,31,255,248,199,142,45,206,157,59,187,244,5,174,110,109,251,252,231,
191,112,240,224,65,181,142,26,23,97,89,214,232,104,86,13,186,85,191,12,75,254,194,0,0,128,56,157,127,212,157,174,155,195,17,176,108,106,94,213,162,25,85,31,121,228,145,129,254,190,169,169,201,18,143,162,
190,217,208,208,248,226,139,47,134,151,95,121,229,149,99,99,99,58,90,171,96,29,78,96,202,233,211,167,83,169,84,209,165,45,112,68,125,38,86,126,77,207,243,70,70,70,212,55,51,153,204,204,244,244,127,249,
47,255,89,53,169,238,219,183,239,95,255,245,237,84,42,85,148,20,39,39,39,215,175,95,175,54,209,241,174,169,169,169,181,181,253,163,31,253,168,90,126,228,200,145,203,215,93,113,253,13,159,104,105,89,169,
71,223,30,58,116,40,147,105,30,29,29,209,253,209,253,253,253,201,100,106,117,107,219,253,15,124,247,247,127,255,158,95,189,125,68,8,113,236,216,177,87,94,121,69,8,209,217,217,121,207,61,127,48,52,116,
78,239,65,143,220,157,255,68,215,88,118,76,167,192,238,238,238,100,42,37,132,24,27,29,213,35,7,158,121,230,153,238,247,78,159,59,55,252,243,159,255,92,20,178,224,64,127,223,87,190,242,21,117,50,79,62,
249,228,229,235,174,216,188,101,219,139,47,253,253,174,93,55,253,240,233,253,245,245,233,165,175,72,79,139,107,89,214,43,63,249,233,210,87,154,72,38,195,201,245,222,123,239,203,52,53,235,15,255,244,233,
211,207,255,237,223,101,154,154,79,159,62,173,150,172,88,177,98,98,98,226,27,223,248,15,119,222,121,167,16,226,15,254,224,15,142,29,59,118,236,216,177,191,253,219,191,85,31,206,55,190,241,141,243,94,224,
244,244,116,54,59,182,105,211,38,17,26,23,241,137,27,63,185,101,235,54,253,225,137,138,139,0,0,0,40,93,69,3,79,203,179,121,203,149,69,51,170,118,118,118,62,254,248,99,95,253,218,215,55,110,220,34,132,
173,70,201,46,22,8,116,27,167,235,122,61,61,189,93,93,93,186,209,238,154,107,174,185,236,178,21,19,19,227,117,117,245,82,230,39,132,26,58,119,238,227,31,255,120,120,15,106,4,167,101,137,240,67,57,11,30,
72,234,81,177,106,0,64,93,93,119,119,183,250,110,38,147,105,106,106,252,157,223,249,29,33,196,153,51,103,30,124,240,193,117,235,175,152,156,156,188,238,186,235,212,10,61,61,61,201,100,114,108,108,182,
105,240,193,7,31,252,159,63,122,131,154,178,234,189,238,83,151,95,126,185,90,254,230,155,111,166,211,13,66,136,241,236,216,181,215,94,171,22,30,57,114,36,221,208,48,50,50,28,110,254,76,55,52,116,191,123,
170,185,57,115,239,183,191,37,132,80,177,76,59,126,252,248,228,228,164,222,67,119,119,119,170,174,78,125,93,212,2,61,60,148,79,129,66,136,167,159,126,186,169,105,133,16,66,143,28,80,11,51,153,230,190,
222,30,253,132,214,139,47,190,152,203,229,50,153,140,250,231,35,143,60,242,202,43,175,116,119,119,127,239,123,223,107,107,235,88,177,226,178,243,94,209,51,207,60,179,121,203,54,213,118,222,219,243,254,
121,174,52,221,112,219,173,159,86,201,245,248,241,227,245,245,233,236,216,88,120,32,108,99,99,166,175,183,71,47,57,126,252,248,153,129,126,61,115,217,203,47,191,92,244,211,236,238,238,62,239,5,54,52,54,
175,95,191,78,221,123,156,60,121,178,161,161,81,231,124,41,101,224,47,60,203,44,0,0,168,158,11,240,44,179,101,89,109,237,29,95,250,210,151,206,156,57,163,23,238,222,189,251,255,252,189,187,186,223,237,
82,233,49,252,236,121,88,209,32,132,214,182,246,231,158,123,78,127,55,157,78,63,240,192,3,239,158,234,58,119,238,172,239,251,211,211,211,39,79,28,187,249,230,79,134,103,170,58,124,248,240,143,127,252,
63,84,10,145,161,103,207,151,56,97,153,127,4,94,36,147,169,227,199,143,171,133,237,237,237,223,248,198,55,84,150,250,171,191,250,171,201,169,25,215,245,70,134,135,116,222,122,235,173,183,234,211,233,145,
225,161,112,167,182,231,37,84,179,98,56,54,189,248,226,139,13,13,13,66,136,177,121,105,44,156,116,95,122,233,165,169,201,201,111,126,243,255,62,122,244,232,157,119,222,121,229,149,87,170,55,132,169,7,
249,85,43,96,56,207,61,253,244,211,205,205,45,225,140,170,218,155,103,102,166,59,59,59,213,153,171,179,114,28,55,60,114,160,171,171,235,244,233,30,33,196,218,181,107,244,146,158,158,222,213,173,109,15,
62,248,160,250,169,117,118,118,222,121,231,157,123,246,236,25,30,30,254,204,103,126,235,204,153,254,243,94,209,211,79,63,221,212,212,172,46,255,188,87,42,165,212,159,228,233,211,167,83,117,117,83,83,147,
109,109,109,250,74,211,233,134,145,145,33,61,41,216,254,253,251,245,217,30,56,112,192,154,231,191,254,215,71,194,151,51,255,2,79,159,238,25,30,30,210,13,240,71,143,30,77,167,27,244,230,82,202,32,240,213,
40,24,89,157,97,48,0,0,96,190,82,163,106,81,221,92,202,195,37,139,173,98,219,118,115,115,203,228,212,76,209,84,0,223,252,230,55,183,110,221,60,56,120,102,116,116,228,228,137,99,175,189,250,15,35,35,195,
69,219,142,140,12,191,246,234,63,156,56,126,52,155,29,179,44,171,173,173,227,190,251,254,72,79,186,36,132,216,189,123,247,127,255,239,207,183,183,173,122,237,213,127,248,151,127,126,245,123,223,123,32,
252,170,42,33,196,247,191,255,253,182,246,142,194,172,171,126,16,248,11,190,164,94,119,245,134,191,85,87,87,247,198,27,111,168,21,54,110,220,168,26,53,15,31,62,188,103,207,253,107,214,92,110,89,86,54,
59,39,153,37,147,41,253,244,82,127,127,127,170,174,78,77,249,228,251,185,112,46,236,233,233,85,207,147,233,46,239,217,52,54,60,39,141,125,228,35,219,239,185,231,30,117,208,223,248,141,255,237,7,15,255,
231,45,91,182,232,241,6,153,76,179,78,111,225,221,90,115,167,20,13,143,136,120,253,245,215,85,124,12,167,52,181,112,122,122,74,183,16,171,177,7,233,116,195,201,147,167,214,173,91,127,247,221,119,239,219,
183,79,125,236,233,116,250,158,123,238,57,51,208,95,148,107,213,76,17,225,43,234,234,234,74,36,146,234,124,138,82,230,252,43,29,207,102,195,201,53,147,105,210,251,87,35,43,198,199,179,225,39,195,50,153,
230,181,107,215,170,245,27,27,27,87,172,184,236,250,27,62,113,195,199,110,252,216,206,93,31,219,185,235,134,143,221,216,212,220,188,244,5,166,82,117,227,217,172,30,33,240,214,91,111,53,52,54,234,223,243,
66,78,157,253,101,32,173,2,0,80,3,209,90,85,85,199,252,98,223,157,255,120,244,130,137,214,182,45,219,182,215,174,93,247,23,143,60,170,30,148,81,210,233,244,159,253,217,159,13,244,247,245,247,245,62,241,
196,99,42,19,132,39,94,189,250,234,171,213,194,39,158,120,172,175,183,71,8,97,219,118,91,123,199,239,253,222,239,133,27,104,119,238,220,249,242,203,47,171,53,139,186,200,31,122,232,161,87,94,249,233,170,
85,173,150,101,233,240,161,90,113,23,189,222,124,96,13,44,203,114,93,79,79,173,170,66,146,16,226,251,223,255,126,107,91,187,110,43,157,243,96,208,232,200,156,167,151,10,173,116,217,236,152,30,169,169,
98,147,16,98,106,106,242,166,155,110,82,187,61,121,242,100,58,221,48,50,50,60,39,141,53,53,255,230,111,254,166,218,170,175,175,47,153,76,5,65,160,227,151,234,70,215,235,171,201,255,23,30,168,26,26,178,
57,50,50,226,186,174,16,34,59,54,86,148,210,138,122,228,27,26,26,250,251,123,198,198,198,58,55,110,122,249,239,127,250,157,61,15,108,223,190,35,252,177,23,93,145,186,204,162,121,6,84,82,159,154,154,220,
181,107,215,210,87,90,212,134,58,61,61,85,116,165,211,211,83,186,239,254,200,145,35,13,141,141,167,79,159,86,63,26,53,14,100,100,100,216,178,172,190,222,211,111,188,254,79,125,189,167,207,123,129,233,
134,134,241,241,172,126,39,133,106,147,46,250,101,160,247,31,0,128,26,139,220,170,42,69,73,239,28,210,61,167,11,126,75,77,38,191,118,237,186,111,127,251,219,225,184,115,245,213,87,255,233,159,254,73,137,
167,100,89,194,178,68,123,251,154,174,174,119,111,188,241,70,253,224,246,130,206,156,57,115,247,221,119,63,248,224,159,108,218,188,213,182,173,32,8,212,139,221,245,235,233,231,11,69,19,41,131,252,12,243,
106,106,85,189,206,129,3,7,116,246,205,102,199,194,175,137,106,106,106,46,26,94,217,178,98,165,250,72,60,47,241,225,135,31,170,229,91,183,110,237,237,61,253,47,255,252,234,153,129,126,253,144,80,91,91,
219,200,200,176,12,102,190,250,213,175,170,37,71,142,28,105,104,104,212,237,199,155,55,111,62,123,118,240,227,59,111,184,251,238,187,213,146,55,223,124,51,149,74,133,39,255,247,60,79,127,252,234,66,222,
61,213,245,143,175,253,188,183,247,180,238,169,127,233,165,151,166,166,166,198,199,179,83,83,83,107,214,172,81,11,85,79,253,120,118,206,201,91,150,117,239,183,191,245,252,243,207,125,234,147,55,189,115,
228,95,223,127,239,221,187,238,186,83,13,235,124,252,241,199,91,219,218,231,95,209,185,179,31,22,133,93,245,251,224,121,222,121,175,180,184,13,53,212,222,217,221,221,157,74,165,194,209,83,13,141,205,102,
39,126,248,195,31,10,33,210,233,244,99,143,61,118,228,237,183,94,61,248,179,127,251,111,127,247,189,247,186,239,189,247,91,83,211,231,185,192,166,166,102,215,117,199,198,198,212,146,79,127,250,211,255,
244,143,7,79,158,56,230,251,190,200,191,202,149,144,10,0,64,173,69,104,85,45,12,212,147,75,100,208,162,132,186,72,171,170,109,89,194,182,173,186,186,250,233,233,220,215,191,254,245,240,119,239,188,243,
206,221,187,63,91,202,249,168,3,217,182,181,246,242,245,137,100,221,111,253,214,103,84,199,180,126,161,148,114,224,192,129,125,251,246,173,91,183,254,239,254,238,199,155,183,108,83,93,255,234,45,92,65,
97,96,236,162,173,101,234,69,154,65,160,18,173,101,137,186,186,217,169,85,179,217,236,215,190,246,181,246,142,53,234,52,166,166,38,139,146,98,248,113,114,53,197,169,122,193,65,99,99,227,79,126,242,179,
125,251,246,137,66,83,241,208,208,80,58,93,55,60,60,170,222,38,176,122,245,106,41,229,15,126,240,131,209,209,252,60,255,47,189,244,82,115,115,203,51,207,60,171,182,234,236,236,28,30,30,190,229,150,91,
78,156,56,161,86,120,241,197,23,195,121,174,240,232,216,236,207,34,151,203,165,82,9,245,30,38,253,32,218,83,79,61,245,196,19,143,13,244,247,205,239,169,31,14,245,200,63,243,204,51,174,231,13,15,15,31,
57,114,228,143,255,248,143,213,199,181,119,239,222,253,251,247,223,113,199,29,127,241,23,143,182,181,117,188,242,202,79,231,95,145,238,148,47,36,117,97,219,150,231,121,35,35,99,75,92,105,93,93,93,184,
13,181,177,177,177,232,137,168,150,150,21,69,67,99,51,153,204,218,203,215,125,235,91,247,222,119,223,125,135,15,31,214,83,162,238,217,179,231,205,55,223,124,242,201,39,245,147,100,139,93,96,38,211,212,
214,222,241,240,195,15,171,251,129,189,123,247,74,41,239,191,255,59,125,189,61,139,141,15,1,0,0,213,102,237,216,190,253,252,43,89,150,237,56,174,235,218,182,227,186,158,151,72,90,150,117,252,216,209,190,
190,30,189,78,91,91,199,230,45,91,109,219,214,181,184,122,24,165,104,181,246,246,53,155,183,108,213,163,39,131,64,234,23,8,105,173,173,237,66,8,245,134,167,5,181,181,117,180,119,172,209,79,163,11,33,212,
139,61,207,157,251,112,232,220,185,129,129,62,53,97,187,222,91,42,149,106,239,88,227,186,158,202,169,185,153,25,223,207,249,126,46,8,124,53,15,235,130,81,85,229,60,215,243,212,85,187,158,231,186,222,185,
115,103,123,123,78,171,55,33,185,174,171,222,116,175,227,160,190,88,245,178,165,129,254,190,190,190,222,201,201,9,253,54,121,125,225,185,92,174,235,228,137,162,119,62,173,95,223,25,254,52,194,159,67,91,
91,199,198,77,91,124,63,167,95,224,228,186,110,91,123,199,228,196,132,126,189,211,218,203,215,233,247,72,233,207,89,63,21,36,132,232,58,121,162,183,247,116,248,195,209,31,230,224,224,153,240,139,239,215,
175,239,236,238,238,42,90,210,223,223,59,53,53,169,22,234,109,245,139,160,124,63,119,170,235,100,248,138,218,218,58,114,185,92,209,249,136,66,19,239,137,227,199,244,47,198,252,43,61,121,226,152,218,80,
125,146,131,131,31,20,189,218,106,96,96,246,149,93,250,117,83,66,136,193,193,51,250,45,86,81,47,80,157,67,111,207,105,117,32,181,231,206,141,155,108,219,206,205,76,207,204,76,7,129,159,203,229,212,67,
127,139,253,114,2,0,128,24,149,26,85,117,104,115,28,215,117,61,245,254,210,112,192,83,237,133,249,6,72,63,176,108,203,182,29,149,92,245,106,150,53,103,96,128,90,170,82,230,130,138,158,95,177,10,175,181,
180,44,213,52,155,159,142,42,28,128,230,207,114,165,214,183,242,175,134,247,253,92,206,247,125,213,245,175,98,199,98,77,170,249,86,91,199,113,28,215,182,109,215,245,28,215,115,93,87,159,176,190,156,197,
78,184,104,87,250,18,66,67,96,231,92,90,232,91,225,109,23,252,100,150,90,65,31,75,53,132,11,33,212,155,235,229,172,57,219,134,143,94,212,16,46,243,179,31,44,176,112,137,229,243,205,255,185,235,243,40,
58,153,165,149,50,248,100,254,47,64,209,194,165,119,18,190,58,245,25,170,123,155,92,110,70,253,254,84,233,69,24,0,0,96,190,8,243,170,6,65,96,89,86,16,248,190,111,73,41,29,215,181,109,219,182,245,35,210,
129,239,231,2,223,207,55,56,249,194,182,125,219,113,84,72,210,171,169,128,18,4,129,138,4,42,113,170,198,206,133,142,185,64,132,82,233,65,189,235,85,6,82,61,240,36,132,85,8,199,150,222,74,175,31,4,234,
236,124,245,200,127,254,159,190,191,244,172,67,249,32,21,4,210,14,130,64,248,190,106,74,148,234,40,69,225,82,31,75,44,146,132,116,72,180,44,161,46,92,136,252,223,69,103,187,216,249,148,78,29,200,247,115,
129,31,168,17,150,106,168,132,109,59,234,191,98,161,84,186,224,209,23,27,233,177,224,113,151,56,249,194,15,61,255,113,45,118,249,229,41,10,163,145,206,121,254,78,194,107,170,49,205,65,160,238,109,170,
245,182,54,0,0,176,152,82,163,170,148,50,240,125,33,132,16,150,16,170,211,60,80,205,142,66,15,99,157,157,123,82,90,150,21,4,150,29,228,215,9,133,137,124,75,170,218,109,161,165,205,178,157,243,132,54,221,
92,170,226,87,33,55,4,234,88,133,163,228,44,219,182,132,101,233,100,28,168,166,59,213,103,235,235,173,194,57,117,233,240,161,98,177,227,136,32,176,164,156,145,82,90,86,78,135,99,253,118,128,217,115,158,
151,86,103,27,123,67,43,23,82,90,254,196,75,252,41,148,66,22,238,6,10,55,5,170,85,213,178,109,71,157,185,101,217,101,31,81,6,82,109,43,3,213,176,172,126,158,234,162,44,245,207,162,157,203,64,10,75,132,
91,175,67,77,209,49,92,190,148,50,116,14,66,223,168,68,219,173,212,255,149,179,95,23,62,64,117,123,163,102,84,173,228,84,1,0,64,84,37,69,85,221,212,36,131,192,23,57,33,28,41,101,62,133,206,233,124,207,
231,194,194,250,86,160,87,10,173,38,22,236,211,247,109,81,66,211,151,206,196,161,216,39,11,123,202,31,197,182,237,80,195,170,156,43,223,162,170,207,225,188,141,100,82,74,17,4,249,144,110,217,82,206,44,
216,233,175,133,115,152,62,129,249,135,155,189,112,171,184,25,120,137,115,41,109,205,217,246,203,240,185,133,126,22,179,31,117,105,109,132,225,117,194,39,48,231,210,66,45,202,179,195,15,244,106,139,95,
126,37,13,171,115,246,185,224,105,148,184,147,162,205,103,47,111,238,175,77,209,71,10,0,0,170,45,194,0,128,124,218,240,125,41,165,234,212,159,31,92,242,61,164,82,230,99,136,109,207,11,13,179,169,101,110,
170,240,69,105,81,181,248,88,66,232,13,213,225,230,61,242,162,71,196,202,162,145,169,165,228,212,124,228,10,2,95,74,53,150,33,148,68,101,120,181,194,70,11,94,194,156,180,26,61,78,69,149,191,198,240,71,
17,250,89,204,126,212,113,4,175,133,131,108,40,170,206,57,165,5,127,238,177,158,131,136,239,83,205,159,112,212,219,27,0,0,16,151,8,3,0,102,195,135,234,16,45,116,118,207,174,17,174,194,165,148,66,4,190,
111,45,189,90,161,211,188,244,49,154,178,208,153,30,58,78,225,169,169,194,225,138,219,198,10,137,173,244,144,26,222,220,210,207,111,73,89,124,69,243,154,21,23,28,0,16,215,133,151,178,242,98,135,91,240,
195,41,241,184,250,235,5,175,75,132,190,45,22,186,223,40,250,145,205,238,42,250,201,44,122,110,243,30,206,42,113,207,231,249,77,152,215,30,76,78,5,0,160,150,34,183,170,234,192,90,98,157,93,82,15,123,148,
199,137,138,118,184,216,63,23,108,53,44,47,103,148,120,225,81,119,62,63,2,46,246,81,44,184,231,162,213,74,57,122,209,135,19,105,219,72,150,24,32,81,203,147,209,123,142,101,159,132,84,0,0,106,47,66,84,
85,170,84,97,87,184,219,249,155,199,126,158,85,77,42,225,157,199,117,15,80,165,109,99,223,127,245,78,134,112,9,0,192,114,23,207,108,65,0,0,0,64,236,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,
80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,168,200,243,170,2,0,112,137,184,245,246,187,46,244,41,0,203,216,11,207,62,90,249,78,172,29,219,183,87,190,23,0,165,163,242,3,42,17,75,229,119,94,148,
83,32,46,21,150,217,56,163,42,5,27,203,75,109,42,188,48,202,8,16,151,234,149,223,112,57,29,58,59,112,228,151,7,199,199,134,109,219,182,10,170,116,92,224,98,82,223,208,180,249,35,191,222,212,178,90,47,
41,187,204,198,19,85,169,128,177,124,213,190,133,134,202,15,40,79,140,149,223,98,116,81,61,55,216,255,206,225,87,199,199,134,45,203,114,28,199,113,28,85,96,133,16,20,88,160,68,245,13,77,27,182,93,215,
216,116,153,250,103,121,5,182,210,168,26,174,128,207,14,246,189,253,230,47,168,128,97,190,116,99,243,150,143,92,223,188,178,85,47,169,106,96,165,242,3,98,20,75,229,183,32,85,84,207,13,246,31,57,148,191,
153,116,11,116,129,21,148,86,160,52,82,74,245,119,178,174,97,237,198,171,26,50,43,69,89,5,182,162,168,170,43,96,21,82,39,178,35,78,1,21,48,12,39,165,172,75,103,58,175,252,181,76,243,42,181,164,74,105,
149,202,15,136,81,92,149,223,124,170,168,14,157,29,80,109,46,158,231,185,174,235,121,158,250,194,117,93,219,182,41,173,64,233,84,105,13,130,64,74,233,120,169,142,13,59,210,141,43,68,244,2,91,126,84,85,
165,250,236,96,223,175,222,248,249,68,118,196,13,161,2,134,249,116,17,242,146,245,235,54,95,163,90,104,170,212,153,72,229,7,196,37,174,202,175,136,46,170,106,112,142,231,121,137,68,34,145,72,232,210,26,
110,130,1,80,58,41,101,16,4,65,16,216,110,114,245,218,173,233,76,228,2,91,230,100,85,58,167,190,253,230,47,38,199,71,117,121,166,2,198,114,161,43,188,32,240,251,222,125,219,218,176,163,33,179,242,214,
219,239,138,189,51,81,85,126,19,217,145,68,1,149,31,80,161,66,229,231,159,121,255,168,170,252,98,41,188,42,167,170,114,154,76,38,85,105,13,23,85,6,182,1,145,200,130,32,8,130,32,55,216,123,60,157,185,62,
234,78,202,137,170,69,57,85,149,103,42,96,44,71,170,252,248,190,127,230,253,163,214,186,109,233,198,120,42,188,48,42,63,32,94,177,84,126,97,122,148,142,110,79,77,38,147,186,180,218,182,237,56,14,67,218,
128,242,232,65,59,190,239,7,65,110,34,59,84,151,110,142,84,213,70,142,170,225,156,58,53,49,86,84,164,169,128,177,140,232,10,207,113,28,223,207,13,246,28,183,214,110,169,111,104,137,37,173,82,249,1,213,
83,121,229,55,223,209,183,94,115,93,87,23,213,100,50,169,138,170,174,209,226,59,125,224,18,162,203,142,170,245,134,6,78,213,117,94,27,105,15,209,162,234,18,57,149,10,24,203,145,174,240,108,219,14,130,
220,135,189,39,68,199,166,184,210,170,160,242,3,170,163,242,202,79,211,3,117,212,96,182,240,64,29,122,8,129,184,232,22,204,192,159,158,204,14,167,210,77,165,215,179,118,25,199,83,253,254,158,231,37,67,
18,137,132,122,154,138,246,84,44,35,250,215,85,253,246,138,96,230,195,222,19,149,239,54,92,249,233,231,51,116,229,71,253,7,196,194,178,44,213,62,34,253,233,201,236,176,168,96,146,239,163,135,95,83,179,
115,232,231,46,244,45,101,172,167,12,92,210,84,153,29,58,115,42,210,86,17,162,106,190,73,245,131,62,245,128,72,56,164,82,1,99,89,211,21,158,74,171,147,227,21,213,121,26,149,31,80,3,229,85,126,69,38,178,
35,225,135,131,41,170,64,149,88,150,229,207,76,70,218,36,114,171,234,59,135,95,213,3,239,232,37,193,197,68,7,214,161,129,138,234,60,141,202,15,168,141,50,42,191,34,170,236,135,231,91,164,168,2,85,18,181,
112,149,26,85,243,207,136,124,216,191,96,135,38,21,48,46,14,42,173,6,185,169,169,137,17,81,113,195,42,149,31,80,51,21,22,46,85,66,139,158,12,142,235,220,0,132,85,43,170,42,71,126,121,48,220,155,73,135,
38,46,62,249,206,196,56,26,86,169,252,128,154,137,37,170,82,163,1,6,138,22,85,39,199,71,195,239,218,161,84,227,162,100,89,86,144,155,170,124,63,84,126,192,114,161,238,81,153,105,17,48,80,180,168,170,123,
51,233,208,196,197,45,150,95,108,42,63,96,57,162,168,2,70,137,28,85,233,208,196,165,32,246,95,108,74,10,96,50,238,39,1,99,69,139,170,234,49,17,58,52,129,82,80,249,1,0,80,161,104,81,149,14,77,0,0,0,212,
76,57,111,171,82,200,169,0,0,0,168,170,200,173,170,52,166,2,0,0,160,54,202,111,85,5,0,0,0,170,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,
134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,
67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,
136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,
68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,
42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,
21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,
10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,
0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,
0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,
0,96,40,162,42,0,0,0,12,21,45,170,214,165,51,85,58,15,192,40,142,151,186,208,167,0,0,0,34,70,213,13,91,175,171,210,121,0,70,201,172,90,127,161,79,1,0,128,139,144,148,50,210,250,165,70,213,23,158,125,84,
8,145,105,89,149,72,165,163,30,3,88,94,28,47,149,72,53,138,194,175,61,0,243,85,88,49,165,234,27,227,58,19,0,75,144,82,218,110,50,210,38,145,199,170,174,221,120,149,62,88,212,109,129,101,33,174,38,85,42,
63,160,54,202,168,252,138,92,177,229,218,184,78,6,192,18,164,148,45,109,157,145,54,137,16,85,85,11,83,186,113,133,155,168,147,5,209,78,16,48,94,140,77,170,84,126,64,109,148,81,249,105,244,25,2,53,163,
238,42,147,117,25,17,165,146,45,103,6,128,214,117,219,28,47,69,145,198,197,199,241,82,177,52,169,82,249,1,53,83,94,229,55,31,125,134,64,181,73,41,155,91,55,68,221,42,90,84,85,255,23,168,111,104,89,217,
177,73,165,85,138,52,46,26,42,167,198,59,74,149,202,15,168,182,242,42,191,48,221,103,168,235,53,10,44,16,59,41,165,229,36,202,184,171,140,220,170,170,246,94,151,110,110,105,235,180,156,4,229,25,23,135,
216,115,42,149,31,80,3,101,87,126,11,106,189,124,155,237,38,41,170,64,236,164,148,194,246,202,187,171,44,103,0,128,250,223,65,170,190,169,165,173,147,82,141,139,64,53,218,83,53,42,63,160,74,42,169,252,
138,228,239,45,51,43,86,182,111,82,5,150,50,11,196,69,23,213,84,125,147,136,94,207,58,171,87,173,42,227,168,39,143,188,177,241,202,235,92,47,233,37,235,167,39,198,100,144,179,44,171,140,253,0,23,92,245,
114,170,42,38,137,100,157,151,168,159,154,24,21,50,16,66,80,82,128,88,84,88,249,205,167,10,172,151,172,115,147,117,83,19,163,129,159,179,109,94,232,8,84,68,221,245,89,78,162,146,162,106,237,216,190,189,
236,51,184,245,246,187,212,23,83,227,35,163,31,190,231,207,76,150,189,43,160,246,194,33,85,84,109,22,85,85,76,38,178,67,195,103,222,13,114,83,142,227,84,227,40,192,165,35,150,202,111,49,186,94,155,204,
14,143,12,118,7,185,41,110,47,129,50,204,150,211,213,27,82,233,38,181,176,188,162,90,81,84,21,161,82,45,132,152,158,28,29,249,160,155,192,10,243,21,133,84,81,229,217,254,169,252,128,88,196,88,249,45,33,
92,175,77,77,140,12,13,156,202,77,79,196,123,8,224,226,38,165,116,19,117,250,102,82,41,187,168,86,26,85,149,112,193,6,150,151,218,188,146,138,202,15,168,80,188,149,223,121,81,175,1,113,169,176,156,198,
19,85,21,10,54,150,151,218,191,55,149,50,2,196,165,246,55,153,0,162,138,165,156,198,25,85,1,148,130,202,15,168,68,237,111,50,1,92,64,68,85,0,0,0,24,138,153,56,0,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,
161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,114,47,244,9,0,
0,96,168,91,111,191,235,66,159,2,176,140,189,240,236,163,149,239,196,218,177,125,123,229,123,1,80,58,42,63,160,18,177,84,126,231,69,57,5,226,82,97,153,141,51,170,82,176,177,188,212,166,194,11,163,140,
0,113,169,94,249,13,151,211,161,179,3,71,126,121,112,124,108,216,182,109,171,160,74,199,5,46,38,245,13,77,155,63,242,235,77,45,171,245,146,178,203,108,60,81,149,10,24,203,87,237,91,104,168,252,128,242,
196,88,249,45,70,23,213,115,131,253,239,28,126,117,124,108,216,178,44,199,113,28,199,81,5,86,8,65,129,5,74,84,223,208,180,97,219,117,141,77,151,169,127,150,87,96,43,141,170,84,192,88,142,106,80,225,133,
81,249,1,49,138,165,242,91,144,42,170,231,6,251,143,28,202,215,101,110,129,46,176,130,210,10,148,70,74,169,254,78,214,53,172,221,120,85,67,102,165,40,171,192,86,20,85,169,128,177,172,85,175,194,11,163,
242,3,98,20,87,229,55,159,42,170,67,103,7,222,126,243,23,227,99,195,158,231,185,174,235,121,158,250,194,117,93,219,182,41,173,64,233,84,105,13,130,64,74,233,120,169,142,13,59,210,141,43,68,244,2,91,126,
84,165,2,198,178,86,189,10,47,140,202,15,136,87,92,149,95,17,93,84,85,223,160,231,121,137,68,34,145,72,232,210,26,110,130,1,80,58,41,101,16,4,65,16,216,110,114,245,218,173,233,76,228,2,91,102,84,165,2,
198,114,87,165,10,47,140,202,15,168,146,202,43,191,34,170,180,190,250,247,127,51,62,54,172,202,105,50,153,84,165,53,92,84,25,216,6,68,34,11,84,129,181,156,196,250,109,215,139,136,165,181,156,121,85,195,
21,240,68,118,36,81,64,5,140,101,167,80,126,252,51,239,31,109,93,183,173,190,161,229,214,219,239,138,183,109,85,229,84,42,63,32,46,115,43,191,220,96,239,241,116,230,250,74,118,168,59,9,245,45,101,50,153,
212,165,213,182,109,199,113,24,210,6,148,71,247,97,250,190,31,4,185,137,236,80,93,186,57,82,85,27,57,170,46,152,83,169,128,177,28,21,87,120,61,199,47,91,179,57,174,180,74,229,7,84,79,229,149,223,124,71,
223,122,205,117,93,93,84,147,201,164,42,170,186,70,139,239,244,129,75,136,46,59,170,214,27,26,56,85,215,121,109,164,61,68,139,170,69,57,213,243,60,93,251,82,1,99,57,10,87,120,82,230,62,236,61,33,58,54,
197,216,182,74,229,7,84,67,229,149,159,166,235,181,201,241,209,68,136,231,121,244,16,2,113,209,45,152,129,63,61,153,29,78,165,155,74,175,103,237,50,142,167,7,222,37,67,18,137,132,122,154,138,246,84,44,
35,250,215,53,95,39,169,180,90,177,112,229,167,135,168,234,202,143,250,15,136,133,101,89,170,125,68,250,211,147,217,97,81,193,36,223,71,15,191,166,30,14,246,10,244,45,101,172,167,12,92,210,84,153,29,58,
115,42,210,86,17,162,234,210,29,154,84,192,88,190,116,133,103,219,182,8,102,38,198,134,68,28,47,182,160,242,3,106,160,188,202,175,136,234,39,212,79,92,80,84,129,42,177,44,203,159,153,140,180,73,228,86,
213,112,135,38,189,36,184,152,232,192,90,97,157,167,81,249,1,181,81,70,229,87,68,149,253,240,124,139,20,85,160,74,162,22,174,82,163,234,210,29,154,84,192,184,56,168,180,90,121,103,162,66,229,7,212,76,
133,133,75,149,208,162,39,131,227,58,55,0,97,213,138,170,10,29,154,184,232,197,210,153,168,80,249,1,53,19,75,84,165,70,3,12,20,45,170,210,161,137,75,65,229,157,137,10,149,31,176,92,168,123,84,102,90,4,
12,20,45,170,210,161,137,75,68,44,191,216,84,126,192,114,68,81,5,140,18,45,170,210,161,137,75,68,236,191,216,148,20,192,100,220,79,2,198,42,39,170,210,161,9,148,130,202,15,0,128,10,69,139,170,116,104,
2,0,0,160,102,202,121,91,149,66,78,5,0,0,64,85,69,110,85,165,49,21,0,0,0,181,81,126,171,42,0,0,0,80,85,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,
0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,
0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,
0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,
0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,
0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,
161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,
80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,
162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,
81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,
168,10,0,0,0,67,17,85,129,5,72,41,47,244,41,0,0,128,136,81,53,85,223,88,165,243,0,204,33,165,180,221,228,133,62,11,0,0,16,49,170,94,177,229,218,42,157,7,96,14,41,101,75,91,231,133,62,11,0,0,46,66,81,251,
45,75,141,170,47,60,251,168,16,34,211,178,42,145,74,211,55,138,139,152,106,82,77,214,101,68,225,215,30,128,249,42,172,152,232,51,4,106,163,140,126,203,200,99,85,215,110,188,74,31,44,234,182,128,249,164,
148,205,173,27,98,217,21,149,31,80,27,149,15,218,161,207,16,168,141,50,250,45,35,68,85,213,194,148,110,92,225,120,41,89,16,237,4,1,179,73,41,45,39,17,87,147,42,149,31,80,27,149,12,218,161,207,16,168,153,
242,250,45,203,153,1,160,245,242,109,182,155,164,72,227,34,35,165,20,182,23,75,147,42,149,31,80,51,113,13,218,161,207,16,168,182,242,250,45,163,69,213,124,195,106,102,197,202,246,77,42,173,82,164,113,
113,208,57,53,85,223,36,226,27,165,74,229,7,84,91,229,131,118,232,51,4,106,160,236,126,203,200,173,170,106,239,245,141,45,45,109,157,150,147,160,60,227,34,80,141,156,74,229,7,212,64,188,131,118,232,51,
4,170,164,146,126,203,114,6,0,168,255,29,212,165,155,155,91,55,80,170,177,220,85,169,61,85,163,242,3,170,36,246,65,59,244,25,2,213,80,97,61,235,172,94,181,170,140,163,158,60,242,198,198,43,175,115,189,
148,155,168,155,28,31,145,65,206,178,172,50,246,3,92,64,170,54,178,156,68,149,114,170,42,38,137,100,157,151,168,159,154,24,21,50,16,66,80,82,128,88,196,126,147,169,10,172,151,172,115,147,117,83,19,163,
129,159,179,109,94,232,8,84,36,150,122,214,218,177,125,123,217,103,112,235,237,119,169,47,38,179,195,35,131,221,65,110,138,106,24,203,194,108,225,89,189,33,149,110,82,11,171,52,139,170,42,38,19,217,161,
225,51,239,6,185,41,199,113,170,113,20,224,210,81,213,155,76,234,53,32,22,49,214,179,21,69,85,17,42,213,66,136,169,137,145,161,129,83,185,233,137,74,118,8,84,155,148,210,77,212,233,74,78,169,234,108,255,
84,126,64,44,106,115,147,73,189,6,84,40,222,122,182,210,168,170,132,11,54,176,188,212,230,149,84,84,126,64,133,106,124,147,73,189,6,196,165,194,114,26,79,84,85,40,216,88,94,106,255,222,84,202,8,16,151,
218,223,100,2,136,42,150,114,26,103,84,5,80,10,42,63,160,18,181,191,201,4,112,1,17,85,1,0,0,96,40,102,226,0,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,
0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,202,189,208,39,0,92,114,110,189,253,174,11,125,10,192,50,246,194,179,
143,214,236,88,148,86,160,18,177,148,86,107,199,246,237,149,239,5,64,41,168,246,128,184,84,59,176,82,90,129,184,84,88,90,227,140,170,20,108,44,47,23,170,109,102,232,236,192,145,95,30,28,31,27,182,109,
219,42,168,217,153,0,203,87,125,67,211,230,143,252,122,83,203,106,189,164,26,165,152,210,10,84,46,198,210,26,79,84,37,164,98,249,170,65,96,213,5,228,220,96,255,59,135,95,29,31,27,182,44,203,113,28,199,
113,84,253,39,132,160,254,3,74,84,223,208,180,97,219,117,141,77,151,169,127,198,91,132,41,173,64,140,98,41,173,149,70,85,238,62,177,28,213,166,109,70,81,101,228,220,96,255,145,67,249,210,225,22,232,250,
79,80,249,1,165,145,82,170,191,147,117,13,107,55,94,213,144,89,41,226,43,191,148,86,32,70,113,149,214,138,162,42,119,159,88,214,170,218,54,163,168,50,50,116,118,224,237,55,127,49,62,54,236,121,158,235,
186,158,231,169,47,92,215,181,109,155,202,15,40,157,170,252,130,32,144,82,58,94,170,99,195,142,116,227,10,17,71,249,165,180,2,241,138,171,180,150,31,85,185,251,196,178,86,213,182,25,69,215,124,170,183,
193,243,188,68,34,145,72,36,116,229,23,190,169,3,80,58,41,101,16,4,65,16,216,110,114,245,218,173,233,76,165,105,149,210,10,84,73,229,165,181,204,201,170,102,75,245,161,131,220,125,98,57,154,189,219,11,
102,250,222,125,91,221,237,221,122,251,93,177,183,173,170,154,79,85,123,201,100,82,85,126,225,154,143,161,50,64,36,178,32,8,130,32,200,13,246,30,79,103,174,143,101,207,148,86,32,94,177,148,214,114,90,
85,185,251,196,69,35,124,183,215,186,110,91,125,67,139,136,169,109,85,119,59,188,113,240,127,120,158,151,44,80,37,197,182,109,199,113,24,36,3,148,71,247,138,248,190,31,4,193,170,117,59,234,210,205,162,
220,194,75,105,5,170,167,242,210,26,185,85,53,156,83,39,178,35,220,125,98,249,42,190,219,235,57,126,217,154,205,245,13,45,49,182,173,30,125,235,53,215,117,85,25,81,84,205,167,203,72,44,71,1,46,53,186,
236,168,16,57,52,112,170,174,243,218,10,247,73,105,5,170,161,242,210,26,173,85,181,40,167,234,187,79,221,170,202,221,39,150,151,240,221,158,148,82,216,222,202,142,77,149,183,173,234,146,242,203,87,95,
72,36,18,169,84,42,149,74,169,146,66,159,3,16,47,117,183,185,162,99,91,42,221,36,162,151,92,74,43,80,51,229,149,86,187,140,35,233,126,255,100,136,42,213,42,167,114,3,138,229,66,255,186,230,235,36,153,
251,176,247,68,92,59,63,122,248,53,245,184,161,87,160,91,104,226,58,4,0,203,178,108,219,30,58,115,170,146,157,80,90,129,26,40,175,180,70,136,170,122,52,143,30,159,26,30,205,83,52,71,21,176,140,168,194,
147,159,182,34,152,153,24,27,18,113,188,216,66,245,60,232,49,220,212,124,64,149,88,150,229,207,76,86,178,7,74,43,80,27,101,148,214,200,173,170,225,209,60,186,223,159,144,138,139,128,14,172,21,54,207,104,
106,111,225,25,220,40,35,64,149,84,88,184,40,173,64,205,68,45,92,165,70,85,61,154,103,114,124,84,63,242,79,78,197,69,70,165,85,233,79,79,102,135,69,197,13,171,170,194,43,122,214,48,166,51,5,48,71,133,
133,139,210,10,212,76,181,162,170,194,104,30,92,244,98,25,247,166,232,81,49,148,17,192,112,148,86,192,88,209,162,42,163,121,112,41,168,124,220,155,222,79,120,166,27,74,10,96,44,74,43,96,172,104,81,149,
209,60,184,68,196,254,139,77,73,1,150,11,74,43,96,148,104,81,149,209,60,184,68,196,242,139,77,243,12,176,92,80,90,1,99,149,19,85,233,247,7,0,0,64,13,68,139,170,140,230,1,0,0,64,205,148,243,182,42,133,
156,10,0,0,128,170,138,220,170,74,99,42,0,0,0,106,163,252,86,85,0,0,0,160,170,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,
12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,
134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,
67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,
136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,
68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,
42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,
21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,
10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,
0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,
11,144,82,94,232,83,0,0,0,17,163,106,170,190,177,74,231,1,152,67,74,105,187,201,11,125,22,0,0,32,98,84,189,98,203,181,85,58,15,192,28,82,202,150,182,206,11,125,22,0,34,160,39,4,88,46,162,150,214,82,163,
234,11,207,62,42,132,200,180,172,74,164,210,252,31,1,23,49,213,164,154,172,203,136,194,175,125,217,232,133,0,106,163,242,158,16,74,43,80,27,101,148,214,200,99,85,215,110,188,74,31,44,234,182,128,249,164,
148,205,173,27,98,217,21,189,16,64,109,84,222,19,66,105,5,106,163,140,210,26,33,170,170,22,166,116,227,10,199,75,201,130,104,39,8,152,77,74,105,57,137,202,155,84,233,133,0,106,166,194,158,16,74,43,80,
51,229,149,214,114,102,0,104,189,124,155,237,38,41,210,184,200,72,41,133,237,197,213,164,170,208,11,1,84,91,92,61,33,148,86,160,218,202,43,173,209,162,106,190,97,53,179,98,101,251,38,149,86,41,210,184,
56,232,156,154,170,111,18,21,143,82,21,244,66,0,53,17,75,79,8,165,21,168,129,178,75,107,228,86,85,181,247,250,198,150,150,182,78,203,73,80,158,113,17,136,61,167,134,209,11,1,84,73,236,61,33,148,86,160,
74,42,41,173,206,234,85,171,162,110,115,242,200,27,27,175,188,206,75,164,220,100,221,244,196,152,12,124,203,178,202,56,54,96,130,234,229,84,85,82,18,201,58,47,81,63,53,49,42,100,32,132,160,176,0,177,136,
183,228,82,90,129,234,169,176,180,150,19,85,69,161,84,187,94,202,77,212,77,142,143,200,32,71,145,198,178,163,186,249,44,39,81,165,246,84,161,239,235,146,117,110,178,110,106,98,52,240,115,182,205,43,226,
128,138,84,169,228,82,90,129,216,197,82,90,173,29,219,183,151,125,6,183,222,126,151,250,98,50,59,60,50,216,29,228,166,8,172,88,22,102,11,207,234,13,169,116,147,90,24,123,78,213,40,41,64,44,106,80,114,
41,173,64,44,98,44,173,21,69,85,17,42,213,66,136,169,137,145,161,129,83,185,233,137,74,118,8,84,155,148,210,77,212,233,59,60,165,122,57,85,161,164,0,21,170,89,201,165,180,2,21,138,183,180,86,26,85,149,
112,193,6,150,151,106,135,212,48,74,10,16,151,90,222,94,2,168,68,133,165,53,158,168,170,80,176,177,188,212,50,164,134,81,82,128,74,112,123,9,44,23,177,148,214,56,163,42,0,0,0,16,35,30,111,4,0,0,128,161,
136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,148,27,203,94,120,75,50,0,0,0,194,94,120,
246,209,202,119,98,237,216,190,189,146,237,9,169,0,0,0,88,76,133,129,181,252,168,26,14,169,67,103,7,142,252,242,224,248,216,176,109,219,86,65,37,167,5,0,0,128,101,170,190,161,105,243,71,126,189,169,101,
181,94,82,118,96,45,51,170,234,156,122,110,176,255,157,195,175,142,143,13,91,150,229,56,142,227,56,42,173,10,33,72,171,0,0,0,151,172,250,134,166,13,219,174,107,108,186,76,253,179,188,180,90,78,84,85,57,
245,220,96,255,145,67,249,150,84,183,64,167,85,65,84,5,0,0,184,84,73,41,213,223,201,186,134,181,27,175,106,200,172,20,101,165,213,200,81,85,229,212,161,179,3,111,191,249,139,241,177,97,207,243,92,215,
245,60,79,125,225,186,174,109,219,68,85,0,0,128,75,153,138,170,65,16,72,41,29,47,213,177,97,71,186,113,133,136,158,86,163,69,85,157,83,213,200,84,207,243,18,137,68,34,145,208,81,53,60,0,0,0,0,0,151,50,
41,101,16,4,65,16,216,110,114,245,218,173,233,76,228,180,90,206,100,85,42,167,170,144,154,76,38,85,84,13,231,84,30,171,2,0,0,184,196,201,130,32,8,130,32,55,216,123,60,157,185,62,234,78,34,68,85,61,68,
85,183,167,38,147,73,29,85,109,219,118,28,135,7,170,0,0,0,160,232,17,171,190,239,7,65,110,34,59,84,151,110,190,245,246,187,74,111,88,141,252,182,170,163,111,189,230,186,174,206,169,42,170,170,167,169,
104,79,5,0,0,128,166,195,161,202,138,67,3,167,162,238,161,212,168,170,71,169,78,142,143,234,33,170,170,61,181,104,142,42,0,0,0,64,179,44,75,117,191,75,127,122,50,59,44,162,188,67,42,90,171,234,209,195,
175,169,169,169,188,2,245,188,63,33,21,0,0,0,75,80,129,117,232,76,180,134,213,104,81,117,34,59,162,67,170,158,151,138,156,10,0,0,128,243,178,44,203,159,153,140,180,73,180,168,170,26,111,195,179,253,147,
83,1,0,0,80,162,168,209,49,90,84,85,241,180,104,94,170,72,123,0,0,0,192,37,171,22,81,149,126,127,0,0,0,212,64,180,168,170,198,195,50,207,63,0,0,0,106,32,242,188,170,26,57,21,0,0,0,85,21,185,85,149,198,
84,0,0,0,212,70,249,173,170,0,0,0,64,85,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,
40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,
20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,69,84,5,0,0,128,161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,
168,10,0,0,128,26,145,82,70,90,63,90,84,77,213,55,70,90,31,0,0,0,80,164,148,182,155,140,180,73,180,168,122,197,150,107,35,173,15,0,0,0,40,82,202,150,182,206,72,155,148,26,85,95,120,246,81,33,68,166,101,
85,34,149,142,218,114,11,0,0,128,75,156,106,82,77,214,101,68,33,88,150,34,242,88,213,181,27,175,210,199,139,186,45,0,0,0,46,77,82,202,230,214,13,81,183,138,16,85,85,254,77,55,174,112,188,148,44,136,122,
60,0,0,0,92,106,164,148,150,147,136,218,164,42,202,155,1,160,245,242,109,182,155,36,167,2,0,0,224,188,164,148,194,246,202,104,82,21,81,163,106,190,97,53,179,98,101,251,38,149,86,9,172,0,0,0,88,140,206,
169,169,250,38,17,177,73,85,148,209,170,170,14,80,223,216,210,210,214,105,57,137,32,8,162,238,1,0,0,0,23,61,41,101,16,4,149,228,84,33,132,181,99,251,246,50,142,125,235,237,119,169,47,38,179,195,35,131,
221,65,110,202,178,172,50,246,3,0,0,128,139,140,234,120,183,156,68,243,234,13,169,116,147,90,88,70,78,21,101,71,85,17,74,171,66,136,169,137,145,161,129,83,185,233,137,242,118,5,0,0,128,139,131,148,210,
77,212,233,150,84,165,188,156,42,42,137,170,74,56,176,2,0,0,0,97,101,135,84,165,210,168,170,16,88,1,0,0,16,86,97,72,85,226,137,170,0,0,0,64,236,202,153,87,21,0,0,0,168,1,162,42,0,0,0,12,69,84,5,0,0,128,
161,136,170,0,0,0,48,20,81,21,0,0,0,134,34,170,2,0,0,192,80,68,85,0,0,0,24,138,168,10,0,0,0,67,17,85,1,0,0,96,40,162,42,0,0,0,12,245,255,3,65,106,193,202,20,200,238,253,0,0,0,0,73,69,78,68,174,66,96,130,
0,0};

const char* MainWindow::trio_png2 = (const char*) resource_MainWindow_trio_png2;
const int MainWindow::trio_png2Size = 20281;


//[EndFile] You can add extra defines here...
//[/EndFile]

