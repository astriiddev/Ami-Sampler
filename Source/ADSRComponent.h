/*
  ==============================================================================

    ADSRComponent.h
    Created: 22 Jan 2023 7:35:43pm
    Author:  finle

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "OtherLookAndFeel.h"

/*
  ==============================================================================


  //// ADSR and volume controls ////


  ==============================================================================
*/

//==============================================================================
class ADSRComponent  : public juce::Component

{
public:
    ADSRComponent(AmiSamplerAudioProcessor&p);
    ~ADSRComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

    /* Greys out pan slider, will be deleted when panning is implemented */
    void paintOverChildren(juce::Graphics&) override;

private:

    /* Slider and label intialization */
    juce::Slider mVolSlider, mPanSlider, mAttackSlider, mDecaySlider, mSustainSlider, mReleaseSlider;
    juce::Label mVolLabel, mPanLabel, mAttackLabel, mDecayLabel, mSustainLabel, mReleaseLabel;

    /* Slider value tree -- saves slider setting to be recalled when DAW session is reopened */
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> mVolAttachment;
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> mAttackAttachment;
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> mDecayAttachment;
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> mSustainAttachment;
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> mReleaseAttachment;

    /* Custom slider graphics */
    OtherLookAndFeel mLookAndFeel;

    AmiSamplerAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ADSRComponent)
};

