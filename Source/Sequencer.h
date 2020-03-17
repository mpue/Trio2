/*
  ==============================================================================

    Sequencer.h
    Created: 29 Nov 2016 8:56:51pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#ifndef SEQUENCER_H_INCLUDED
#define SEQUENCER_H_INCLUDED

#include <vector>

#include "../JuceLibraryCode/JuceHeader.h"
#include "Modulator.h"

using namespace std;

class Sequencer : public Modulator , public ChangeBroadcaster, public Timer {
    
public:
    Sequencer();
    ~Sequencer();

    virtual void timerCallback() override;
    
    vector<int> getVelocities();
    vector<bool> getSteps();

    float process(void) override;
    float getOutput(void) override;
    
    int getStepConfig();
    void setStepConfig(int config);
    void setPlaying(bool playing);
    bool isPlaying();
    void setEnabled(bool enabled);
    bool isEnabled();
    void tick();
    void setRaster(int raster);
    int getRaster();
    int getCurrentStep();
    void setOctave(int octave);
    int getOctave();
    void setOffset(int step, int offset);
    int getOffset();
    int getOffsetAt(int step);
    int getVelocity();
    int getVelocityAt(int step);
    void setVelocity(int step, int offset);
    void setStepEnabled(int step, bool enabled);
    bool isStepEnabled(int step);
    bool isCurrentStepEnabled();
    void setNumOctaves(int octaves);
    int getNumOctaves();
    bool isModulator();
    void setModulator(bool modulator);
    void update();
    
private:
    vector<bool> steps;
    vector<int> offsets;
    vector<int> velocities;
    bool playing;
    bool enabled;
    int octave;
    int numOctaves = 1;
    int raster;
    int currentStep = 0;
    bool modulator;
    int speed = 120;
    
    JUCE_LEAK_DETECTOR(Sequencer);
};



#endif  // SEQUENCER_H_INCLUDED
