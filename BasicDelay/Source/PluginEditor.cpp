/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.1.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
BasicDelayAudioProcessorEditor::BasicDelayAudioProcessorEditor (BasicDelayAudioProcessor& p)
    : AudioProcessorEditor(p), processor(p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (sliderDelayTime = new Slider ("delay time"));
    sliderDelayTime->setRange (0.01, 1, 0);
    sliderDelayTime->setSliderStyle (Slider::LinearHorizontal);
    sliderDelayTime->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderDelayTime->addListener (this);

    addAndMakeVisible (sliderFeedback = new Slider ("feedback"));
    sliderFeedback->setRange (0, 0.95, 0);
    sliderFeedback->setSliderStyle (Slider::LinearHorizontal);
    sliderFeedback->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderFeedback->addListener (this);

    addAndMakeVisible (labelDelayTime = new Label (String(),
                                                   TRANS("Delay time (seconds)")));
    labelDelayTime->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    labelDelayTime->setJustificationType (Justification::centredLeft);
    labelDelayTime->setEditable (false, false, false);
    labelDelayTime->setColour (Label::backgroundColourId, Colour (0x00000000));
    labelDelayTime->setColour (Label::textColourId, Colours::black);
    labelDelayTime->setColour (Label::outlineColourId, Colour (0x00000000));
    labelDelayTime->setColour (TextEditor::textColourId, Colours::black);
    labelDelayTime->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelFeedback = new Label ("new label",
                                                  TRANS("Feedback (0 - 0.95)")));
    labelFeedback->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    labelFeedback->setJustificationType (Justification::centredLeft);
    labelFeedback->setEditable (false, false, false);
    labelFeedback->setColour (Label::textColourId, Colours::black);
    labelFeedback->setColour (TextEditor::textColourId, Colours::black);
    labelFeedback->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    startTimer(200);//starts timer with interval of 200mS
    //[/Constructor]
}

BasicDelayAudioProcessorEditor::~BasicDelayAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    sliderDelayTime = nullptr;
    sliderFeedback = nullptr;
    labelDelayTime = nullptr;
    labelFeedback = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void BasicDelayAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void BasicDelayAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    sliderDelayTime->setBounds (48, 48, 192, 24);
    sliderFeedback->setBounds (48, 152, 192, 24);
    labelDelayTime->setBounds (40, 16, 150, 24);
    labelFeedback->setBounds (40, 112, 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void BasicDelayAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == sliderDelayTime)
    {
        //[UserSliderCode_sliderDelayTime] -- add your slider handling code here..
        //[/UserSliderCode_sliderDelayTime]
    }
    else if (sliderThatWasMoved == sliderFeedback)
    {
        //[UserSliderCode_sliderFeedback] -- add your slider handling code here..
        //[/UserSliderCode_sliderFeedback]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void BasicDelayAudioProcessorEditor::timerCallback()
{
    //exchange any data you want between UI elements and the Plugin "ourProcessor"
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="BasicDelayAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="BasicDelayAudioProcessor&amp; p" variableInitialisers="AudioProcessorEditor(p), processor(p)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="delay time" id="6affa197f0fa4de6" memberName="sliderDelayTime"
          virtualName="" explicitFocusOrder="0" pos="48 48 192 24" min="0.010000000000000000208"
          max="1" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="feedback" id="2423c7b25ae77671" memberName="sliderFeedback"
          virtualName="" explicitFocusOrder="0" pos="48 152 192 24" min="0"
          max="0.94999999999999995559" int="0" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="" id="c7e6e91721d328a9" memberName="labelDelayTime" virtualName=""
         explicitFocusOrder="0" pos="40 16 150 24" bkgCol="0" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Delay time (seconds)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" kerning="0" bold="0" italic="0"
         justification="33"/>
  <LABEL name="new label" id="772c4647f5c58ed8" memberName="labelFeedback"
         virtualName="" explicitFocusOrder="0" pos="40 112 150 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Feedback (0 - 0.95)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" kerning="0" bold="0" italic="0"
         justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
