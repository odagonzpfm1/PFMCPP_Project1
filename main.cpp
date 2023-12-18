#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: dog
//  action 1: the dog barks
dog.bark()
//  action 2: the dog wags its tail
dog.wagTail()
//  action 3: the dog eats
dog.eat()
//  2)
//  Noun: car
//  action 1: the car starts
car.start()
//  action 2: the car accelerates
car.accelerate()
//  action 3: the car stops
car.stop()
//  3)
//  Noun: cup
//  action 1: fill the cup
cup.fill()
//  action 2: empty the cup
cup.empty()
//  action 3: wash the cup
cup.clean()
//  4)
//  Noun: door
//  action 1: open the door
door.open()
//  action 2: close the door
door.close()
//  action 3: lock the door
door.lock()
//  5)
//  Noun: skateboard
//  action 1: ride the skateboard
skateboard.ride()
//  action 2: do an ollie with the skateboard
skateboard.ollie()
//  action 3: do a kickflip
skateboard.kickflip()
//  6)
//  Noun: drums
//  action 1: play the kick drum
drums.playKick()
//  action 2: play the snare drum
drums.playSnare()
//  action 3: play the china cymbal
drums.playChina()
//  7)
//  Noun: keyboard
//  action 1: play major chord
keyboard.playMajorChord()
//  action 2: play minor chord
keyboard.playMinorChord()
//  action 3: use arpeggiator
keyboard.arpeggio()
//  8)
//  Noun: guitar
//  action 1: turn up the volume
guitar.volumeUp()
//  action 2: turn on distortion
guitar.distortionOn()
//  action 3: turn off delay
guitar.delayOff()
//  9)
//  Noun: bass
//  action 1: play slap note
bass.playSlap()
//  action 2: play finger note
bass.playFinger()
//  action 3: play like Les Claypool
bass.lesClaypoolModeOn()
//  10)
//  Noun: synth
//  action 1: select wavetable oscillator
synth.selectWavetable()
//  action 2: turn low pass filter on
synth.lowPassFilterOn()
//  action 3: sync to vst plugin
synth.syncWithVST()
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
