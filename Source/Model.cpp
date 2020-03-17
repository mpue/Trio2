/*
  ==============================================================================

    Model.cpp
    Created: 4 Jun 2016 8:56:23pm
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "Voice.h"
#include "Model.h"
#include "Oszillator.h"
#include "Sine.h"

#include <vector>
#include <iostream>

using namespace std;

Model::Model()
{
	this->volume = 1.0f;
	this->filterResonance = 0.1f;
}

Model::Model(vector<Voice*> voices, MultimodeFilter* mainFilter, vector <Trio::ADSR*> modEnv, MultimodeOscillator* lfo1, MultimodeOscillator* lfo2, Sequencer* seq, int sampleRate) {
    this->voices = voices;
    this->mainFilter = mainFilter;
    this->modEnv = modEnv;
    this->sampleRate = sampleRate;
    this->lfo1 = lfo1;
    this->lfo2 = lfo2;
    this->volume = 1.0f;
    this->filterResonance = 0.1f;
    this->seq = seq;
}

Model::~Model() {
}

void Model::changeListenerCallback (ChangeBroadcaster* source) {
    
}

float Model::getOsc1Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc1Pitch(int pitch) {
    this->osc1Pitch = pitch;
    
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(0)->setPitch(pitch);
        if (!voices[i]->isPlaying()) continue;
        voices[i]->updateOscillator(0);
    }

}

float Model::getOsc2Pitch() {
    return this->osc2Pitch;
}

void Model::setOsc2Pitch(int pitch) {

    this->osc2Pitch = pitch;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(1)->setPitch(pitch);
        if (!voices[i]->isPlaying()) continue;
        voices[i]->updateOscillator(1);
    }
}

float Model::getOsc3Pitch() {
    return this->osc1Pitch;
}

void Model::setOsc3Pitch(int pitch) {
    this->osc3Pitch = pitch;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(2)->setPitch(pitch);
        if (!voices[i]->isPlaying()) continue;
        voices[i]->updateOscillator(2);
    }
}

float Model::getOsc1Fine() {
    return this->osc1Fine;
}

void Model::setOsc1Fine(float fine) {
    this->osc1Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(0)->setFine(fine);
        if (!voices[i]->isPlaying()) continue;
        voices[i]->updateOscillator(0);
    }
}

float Model::getOsc2Fine() {
    return this->osc2Fine;
}

void Model::setOsc2Fine(float fine) {
    this->osc2Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(1)->setFine(fine);
        if (!voices[i]->isPlaying()) continue;
        voices[i]->updateOscillator(1);
    }
}

float Model::getOsc3Fine() {
    return this->osc3Fine;
}

void Model::setOsc3Fine(float fine) {
    this->osc3Fine = fine;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(2)->setFine(fine);
        if (!voices[i]->isPlaying()) continue;
        voices[i]->updateOscillator(2);
    }
        
}

float Model::getOsc1Volume() {
    return this->osc1Volume;
}

void Model::setOsc1Volume(float volume) {
    this->osc1Volume = volume;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(0)->setVolume(volume);
    }
}

float Model::getOsc2Volume() {
    return this->osc2Volume;
}

void Model::setOsc2Volume(float Volume) {
    this->osc2Volume = Volume;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(1)->setVolume(Volume);
    }
}

float Model::getOsc3Volume() {
    return this->osc3Volume;
}

void Model::setOsc3Volume(float Volume) {
    this->osc3Volume = Volume;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getOszillators().at(2)->setVolume(Volume);
    }
    
}

float Model::getAmpEnvAttack() {
    return this->ampEnvAttack;
}

void Model::setAmpEnvAttack(float attack) {
    this->ampEnvAttack = attack;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getAmpEnvelope()->setAttackRate(attack * voices[i]->getSampleRate());
    }
}

float Model::getAmpEnvDecay() {
    return this->ampEnvDecay;
}

void Model::setAmpEnvDecay(float decay) {
    this->ampEnvDecay = decay;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getAmpEnvelope()->setDecayRate(decay * voices[i]->getSampleRate());
    }
    
}

float Model::getAmpEnvSustain() {
    return this->ampEnvSustain;
}

void Model::setAmpEnvSustain(float sustain) {
    this->ampEnvSustain = sustain;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getAmpEnvelope()->setSustainLevel(sustain);
    }
    
}

float Model::getAmpEnvRelease() {
    return this->ampEnvRelease;
}

void Model::setAmpEnvRelease(float release) {
    this->ampEnvRelease = release;
    for (int i = 0; i < voices.size();i++) {
        voices[i]->getAmpEnvelope()->setReleaseRate(release * voices[i]->getSampleRate());
    }
    
}

float Model::getFilterCutoff() {
    return this->filterCutoff;
}

void Model::setFilterCutoff(float cutoff) {
    this->filterCutoff = cutoff;
    mainFilter->coefficients(filterCutoff * 1000, filterResonance);
}

float Model::getFilterResonance() {
    return this->filterResonance;
}

void Model::setFilterResonance(float resonance) {
    this->filterResonance = resonance;
    mainFilter->coefficients(filterCutoff * 1000, filterResonance);
}


float Model::getVolume() {
    return this->volume;
}

void Model::setVolume(float _volume) {
    this->volume = _volume;
}

float Model::getFilterEnvAttack(int index) {
    return this->filterEnvAttack[index];
}

void Model::setFilterEnvAttack(int index, float attack) {
    this->filterEnvAttack[index] = attack;
    modEnv.at(index)->setAttackRate(this->sampleRate * attack);
}

float Model::getFilterEnvDecay(int index) {
    return this->filterEnvDecay[index];
}

void Model::setFilterEnvDecay(int index, float decay) {
    this->filterEnvDecay[index] = decay;
     modEnv.at(index)->setDecayRate(this->sampleRate * decay);
}

float Model::getFilterEnvSustain(int index) {
    return this->filterEnvSustain[index];
}

void Model::setFilterEnvSustain(int index, float sustain) {
    this->filterEnvSustain[index] = sustain;
    modEnv.at(index)->setSustainLevel(sustain);
}

float Model::getFilterEnvRelease(int index) {
    return this->filterEnvRelease[index];
}

void Model::setFilterEnvRelease(int index, float release) {
    this->filterEnvRelease[index] = release;
    modEnv.at(index)->setReleaseRate(this->sampleRate * release);

}

float Model::getFilterModAmount()
{
	return 0.0f;
}

void Model::setFilterModAmount(float amount) {
    this->filterModAmount = amount;
    // this->mainFilter->setModAmount(amount);
}

float Model::getLfo1Rate() {
    return lfo1Rate;
}

void Model::setLfo1Rate(float rate) {
    this->lfo1Rate = rate;
    lfo1->setFrequency(rate);
}

float Model::getLfo1Amount() {
    return this->lfo1Amount;
}

void Model::setLfo1Amount(float amount) {
    this->lfo1Amount = amount;
    lfo1->setVolume(amount);
}

float Model::getLfo2Rate() {
    return lfo2Rate;
}

void Model::setLfo2Rate(float rate) {
    this->lfo2Rate = rate;
    lfo2->setFrequency(rate);
}

float Model::getLfo2Amount() {
    return this->lfo2Amount;
}

void Model::setLfo2Amount(float amount) {
    this->lfo2Amount = amount;
    lfo2->setVolume(amount);
}

void Model::setModsource(int source) {
    this->modsource = source;
}

int Model::getModsource() {
    return this->modsource;
}

void Model::setMod1Target(int target) {
    this->mod1target = target;
}

int Model::getMod1Target() {
    return this->mod1target;
}

void Model::setMod2Target(int target) {
    this->mod2target = target;
}

int Model::getMod2Target() {
    return this->mod2target;
}

void Model::setEnvelopes(vector <Trio::ADSR* > envelopes)
{
	this->modEnv = envelopes;
}

vector<Trio::ADSR*> Model::getModEnvelopes() {
    return this->modEnv;
}

void Model::setFilter(MultimodeFilter * filter)
{
	this->mainFilter = filter;
}

MultimodeFilter* Model::getFilter() {
    return mainFilter;
}

void Model::setLfo1(MultimodeOscillator * osc)
{
	this->lfo1 = osc;
}

MultimodeOscillator* Model::getLfo1() {
    return lfo1;
}

void Model::setLfo2(MultimodeOscillator * osc)
{
	this->lfo1 = osc;
}

MultimodeOscillator* Model::getLfo2() {
    return lfo2;
}

void Model::setVoices(vector<Voice*> voices)
{
	this->voices = voices;
}

vector<Voice*> Model::getVoices() {
    return this->voices;
}

void Model::setSequencer(Sequencer * sequencer)
{
	this->seq = sequencer;
}

Sequencer* Model::getSequencer() {
    return this->seq;
}

void Model::setCurrentModEnvIdx(int idx ) {
    this->currentModEnvIdx = idx;
}

int Model::getCurrentModEnvIdx() {
    return this->currentModEnvIdx;
}

void Model::setSampleRate(float sampleRate)
{
	this->sampleRate = sampleRate;
}

int Model::getGlobalTranspose() {
    return this->globalTranspose;
}

void Model::setGlobalTranspose(int transpose) {
    this->globalTranspose = transpose;
    sendChangeMessage();
}

int Model::getPitchbendRange() {
    return this->pitchbendRange;
}

void Model::setPitchbendRange(int range) {
    this->pitchbendRange = range;
    sendChangeMessage();
}
