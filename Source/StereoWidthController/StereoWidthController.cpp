#include "StereoWidthController.h"

StereoWidthController::StereoWidthController(){SetWidth(1.0f);}
StereoWidthController::~StereoWidthController(){}

void StereoWidthController::SetWidth(float width)
{
m_width=width;
float tmp;
if(1.0f+width>2.0f)
tmp=1.0f/(1.0f+m_width);
else
tmp=1.0f/2.0f;

diffGain=m_width*tmp;
sumGain=tmp;
}

void StereoWidthController::ClockProcess(float* LeftSample, float* RightSample)
{
float m = sumGain*(*LeftSample+*RightSample);
float s = diffGain*
(*RightSample-*LeftSample);
*LeftSample=m-s;
*RightSample=m+s;
}