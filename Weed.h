#include <iostream>
#include <fstream>

class Weed:public Drawing_Element{
    public:
    virtual void draw(int j,std::ofstream& c){
    if(j==1)
c << "<path d=\"M340.21 639.2L355.66 626.12L373.5 616.61L381.82 597.59L386.57 577.38L383.01 557.17L368.74 540.52L350.91 529.83L329.51 522.69L311.68 509.62L302.17 490.59L303.36 469.2L304.55 448.99L316.43 431.15L329.51 447.8L322.38 468.01L318.81 488.22L334.27 501.29L353.29 508.43L372.31 517.94L386.57 532.2L393.71 552.41L402.03 571.43L423.43 571.43L438.88 558.36L444.83 538.15L443.64 516.75L457.9 502.48L475.73 490.59L484.06 470.38L481.68 448.99L491.19 429.97L509.02 441.85L506.64 463.25L494.76 479.9L492.38 500.1L494.76 520.31L479.3 534.58L463.85 548.85L462.66 569.06L451.96 586.89L432.94 596.4L415.1 605.91L402.03 621.36L413.92 638.01\" id=\"a1hi0TzNFI\"/><use xlink:href=\"#a1hi0TzNFI\" opacity=\"1\" fill=\"#76f843\" fill-opacity=\"1\"/>";
    if(j==2)
c << "<ellipse id=\"path3721\" cx=\"61.988106\" cy=\"132.95833\" rx=\"38.55357\" ry=\"24.190477\" style=\"fill:#5fd38d;stroke-width:0.26458332\" />";
    if(j==3)
c << "<ellipse xmlns=\"http://www.w3.org/2000/svg\" id=\"path3721\" cx=\"61.988106\" cy=\"132.95833\" rx=\"38.55357\" ry=\"24.190477\" style=\"fill:#5fd38d;stroke-width:0.26458332\"/>";
    //if(j==4)
    }

};