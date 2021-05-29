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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       cat
//  action 1:   the cat meows
cat.meow();
//  action 2:   the cat purrs
cat.purr();
//  action 3:   the cat sleeps
cat.sleep();
//  2)
//  Noun:       phone
//  action 1:   the phone rings
phone.ring();
//  action 2:   the phone uses battery
phone.useBattery();
//  action 3:   the phone connects to wifi
phone.connectToWifi();
//  3)
//  Noun:       jacket
//  action 1:   the jacket covers torso
jacket.coverTorso();
//  action 2:   the jacket warms torso
jacket.warmTorso();
//  action 3:   the jacket blocks wind
jacket.blockWind();
//  4)
//  Noun:       stove
//  action 1:   the stove heats coils
stove.heatCoil();
//  action 2:   the stove keeps time
stove.keepTime();
//  action 3:   the stove retains heat
stove.retainHeat();
//  5)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog drools
dog.drool();
//  action 3:   the dog wags its tail
dog.wagTail();
//  6)
//  Noun:       fish
//  action 1:   the fish swims
fish.swim();
//  action 2:   the fish breathes underwater
fish.breatheUnderwater();
//  action 3:   the fish sucks on rocks
fish.suckOnRock();
//  7)
//  Noun:       bee
//  action 1:   the bee flies
bee.fly();
//  action 2:   the bee buzzes
bee.buzz();
//  action 3:   the bee collects pollen
bee.collectPollen();
//  8)
//  Noun:       printer
//  action 1:   the printer prints
printer.print();
//  action 2:   the printer uses ink
printer.useInk();
//  action 3:   the printer scans photos
printer.scanPhoto();
//  9)
//  Noun:       audio interface
//  action 1:   the audio interface samples analog signal
audioInterface.sampleAnalogSignal();
//  action 2:   the audio interface shows input volume
audioInterface.showInputVolume();
//  action 3:   the audio interface quantizes analog amplitude
audioInterface.quantizeAnalogAmplitude();
//  10)
//  Noun:       person
//  action 1:   the person eats food
person.eatFood();
//  action 2:   the person breathes air
person.breatheAir();
//  action 3:   the person walks upright
person.walkUpright();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
