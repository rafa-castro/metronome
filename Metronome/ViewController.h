//
//  ViewController.h
//  Metronome
//
//  Created by Rafael Castro on 2/13/16.
//  Copyright © 2016 Rafael Castro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioUnit/AudioUnit.h>

@interface ViewController : UIViewController
{
    AudioComponentInstance toneUnit;

@public
    double frequency;
    double sampleRate;
    double theta;
    int bpm;
}
@end

