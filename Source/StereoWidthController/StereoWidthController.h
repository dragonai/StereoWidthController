/* Volume-Normalized Stereo Width Control, contributed by Michael Gruhn to the 
MusicDSP Source Code Archive: http://musicdsp.org/showArchiveComment.php?ArchiveID=256
'width' is the stretch factor of the stereo field:
width < 1: decrease in stereo width
width = 1: no change
width > 1: increase in stereo width
width = 0: mono */

class StereoWidthCtrl
{
public:
StereoWidthCtrl();
~StereoWidthCtrl();

//Parameters
void SetWidth(float width);
float Getwidth(void){return m_width;};

//Use
void ClockProcess(float* LeftSample, float* RightSample); 

private:
float m_width, sumGain, diffGain;
};