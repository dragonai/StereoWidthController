/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
StereoWidthControllerAudioProcessEditor::StereoWidthControllerAudioProcessEditor (StereoWidthControllerAudioProcessor* ownerFilter)
    : AudioProcessorEditor(ownerFilter)
{
    addAndMakeVisible (WidthCtrlSld = new Slider ("Width Factor Slider"));
    WidthCtrlSld->setRange (0, 5, 0.1);
    WidthCtrlSld->setSliderStyle (Slider::LinearHorizontal);
    WidthCtrlSld->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    WidthCtrlSld->addListener (this);

    addAndMakeVisible (BypassBtn = new TextButton ("Bypass Button"));
    BypassBtn->setButtonText (TRANS("Bypass"));
    BypassBtn->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Stereo Width Factor")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	startTimer(200); //starts timer with interval of 200ms
    //[/Constructor]
}

StereoWidthControllerAudioProcessEditor::~StereoWidthControllerAudioProcessEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    WidthCtrlSld = nullptr;
    BypassBtn = nullptr;
    label = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void StereoWidthControllerAudioProcessEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff0d304a));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void StereoWidthControllerAudioProcessEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    WidthCtrlSld->setBounds (16, 40, 504, 24);
    BypassBtn->setBounds (16, 80, 150, 24);
    label->setBounds (8, 8, 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void StereoWidthControllerAudioProcessEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == WidthCtrlSld)
    {
        //[UserSliderCode_WidthCtrlSld] -- add your slider handling code here..
        //[/UserSliderCode_WidthCtrlSld]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void StereoWidthControllerAudioProcessEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == BypassBtn)
    {
        //[UserButtonCode_BypassBtn] -- add your button handler code here..
        //[/UserButtonCode_BypassBtn]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void StereoWidthControllerAudioProcessEditor::timerCallback()
{
	StereoWidthControllerAudioProcessor* ourProcessor = getProcessor();
	//exchange any data you want between UI elements and the Plugin "ourProcessor"
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="StereoWidthControllerAudioProcessEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="StereoWidthControllerAudioProcessor* ownerFilter"
                 variableInitialisers="AudioProcessorEditor(ownerFilter)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff0d304a"/>
  <SLIDER name="Width Factor Slider" id="1321e30966bb6626" memberName="WidthCtrlSld"
          virtualName="" explicitFocusOrder="0" pos="16 40 504 24" min="0"
          max="5" int="0.10000000000000001" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <TEXTBUTTON name="Bypass Button" id="263ce844a3186623" memberName="BypassBtn"
              virtualName="" explicitFocusOrder="0" pos="16 80 150 24" buttonText="Bypass"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="602aece079b8e612" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="8 8 150 24" textCol="ffffffff" edTextCol="ff000000"
         edBkgCol="0" labelText="Stereo Width Factor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
