---
layout: default
---

[Machine Communication](index)

[Project](project)

Imagine that a researcher emails you and tells you she wants to train mice to
reach for a food pellet after they hear a sound.

You do not know much about the researcher or her lab, but you know she studies
some sort of neural activity in the mouse brain as the mouse is reaching.
Perhaps she wants to increase the number of reaches, so she can collect more
data in a given amount of time, by training the to mouse to perform on cue.

This is a very vague project description so far. When I first hear about a
project I am tempted to focus on the details and start brainstorming. Play a
sound, how many different ways can I think of to play a sound?

Often, though, it is useful to figure out the fundamental problem of a project,
what the researcher is really asking you, before diving into the details of what
they request.

[Communication Diagram](communication)

I think that at the heart of this project is a communication problem.

This figure is from Claude Shannon's wonderful paper on the mathematical theory
of communciation.

You want to transmit information from a source to a destination. The information
source produces a message. The transmitter operations on that message to create
a signal sent over a channel to the receiver. The receiver converts the signal
back into a message and delivers it to the destination.

[Human Brain to Mouse Brain Communication](brains)

The researcher wants to send a message from her brain into the brain of the
mouse, asking it to please reach out and grab a food pellet.

[Ear Receiver](ear)

The researcher asked you to use the mouse ear to receive messages and deliver
them to the mouse brain.

When you frame the problem like this, you see that perhaps there could be other
choices for the receiver. You might be able to use any mouse sense to deliver
messages to its brain, like flashing lights in its eyes, producing an odor, or
poking or vibrating it. Or maybe there is a way to deliver messages into its
brain with some sort of probe, bypassing its senses.

The researcher requested using the ear as the receiver, so for now you assume
that is important. You make a mental note, though, that perhaps you can try
another receiver in the future if necessary.

[Mouth](mouth)

Perhaps the most obvious way to transmit a signal from a human brain into a
mouse ear is by using your mouth. Humans often transmit signals from their
mouths to other human ears when they want to communicate information.

Messages are going from my brain through my mouth into your ears and to your
brains right now.

Mice probably send each other information using their mouths and ears as well.

[Human and Mouse Languages](languages-human-mouse)

In order to transmit the information, however, you need to figure out a common
language between the mouse and the human.

In English, you want to be able to say something like "Reach for the food pellet
please." Now I have never trained a mouse, so I do not know if it is possible to
teach a mouse short English sentences like you might to a dog.

Another option is for the human to learn the equivalent in mouse language.
Perhaps some sort of ultrasonic "squeek, squeek, squeek" roughly translates, but
possibly no such mouse language exists.

[Droid Language](language-droid)

An alternative to using either human or mouse languages, would to make up a new
language and teach that to both the human and the mouse. Some sort of in between
language that is simplier for both to learn, like beeps or whistling tones.

[Whistle Solution](whistle)

Whistling a tone might work well. Farmers can teach dogs how to herd sheep this
way.

You email the researcher and tell her you have a great idea. It does not require
her to build anything or buy anything and it can be available immediately. Just
teach the mouse to reach whenever you whistle a tone.

She writes back, thank you, but she already knew she could whistle to it. She
likes the idea of using a tone, but not the idea of relying on her to whistle.

[Automated Experimental Rig](robot-feeding)

The project is a bit more complicated than just training the mouse.

The researcher is using some sort of experimental rig to automatically feed
pellets to the mouse.

The experimental rig does not necessarily look like the image shown, it could be
a rotating disk with food pellets on it, or some sort of X-Y-Z stage that
delivers pellets to a spot where the mouse can reach them.

For convenience, however, let us call this automated experimental rig "Rosie"
and ignore for now the specific details of how Rosie might operate.

[Automated Whistling](whistle-robot)

The issue with relying on the researcher to whistle, is that the researcher
would also like Rosie to ask the mouse to please reach for the pellet. This
requires that the researcher watch Rosie carefully to know when to send messages
to the mouse or have Rosie somehow communicate that to the researcher.

[Another Transmitter](transmitter)

The researcher wants to be able to send messages to the mouse manually and
independently let Rosie send messages to the mouse automatically as well.

So the researcher wants you to go back to the drawing board and think of another
way to transmit sounds to the mouse.

The transmitter most certainly will not look like R2D2, but for now let us use
that as a place holder representation of whatever transmitter we end up using.

[Sound is Mechanical](sound)

Sound is a mechanical process of air vibrations acting on the mouse ear drum.

[Mechanical Transmitter](mechanical)

If sound is mechanical, perhaps you should try using a purely mechanical
transmitter.

You could use a metal whistle instead of your lips and that could improve tone
fidelity.

You can construct mechanical devices that play sounds at time intervals like a
cuckoo clock. You can encode an entire song onto a metal cylinder and play that
song simply by rotating a handle at the proper rate.

People have trained dogs using bells, perhaps a bell is all you need.

[Bell Solution](bell)

So you email the researcher and ask her what she thinks of using a little bell.

She can flick the bell with her finger when she wants to send messages to the
mouse and perhaps the bell can be mounted next to Rosie in such a way so that
some part of Rosie hits the bell and rings it before each food pellet is
delivered.

[Messaging the Bell](human-bell)

The researcher writes back that a bell might work, but in addition to being able
to send signals using the bell, she also wants to be able to send messages to
the bell in order to changes its properties.

Perhaps she wants to be able to ring the bell at one frequency to tell the mouse
that there is a food pellet ready and then ring it at another frequency after
the mouse has successfully performed the reach or ring it at yet another
frequency if the reach was unsuccessful. That will help her when training the
mouse in some way.

[Human and Mechanical Languages](languages-human-mechanical)

How is it possible to send messages to something mechanical?

In English, you want to be able to say something like "Change the tone frequency
to 5000 Hz please." or "Change the tone duration to 75 ms please."

Information in mechanical devices is stored kinetically. Mass is distributed
geometrically in 3D space and time.

In order to change information stored in a mechanical device, you need to
physically move mass in the device. You need to sculpt it or machine it, push
it, or distort it. You might flip a lever or turn a screw.

So is it possible to come up with some sort of intermediate language in between
English and mechanical?

[Knob Language](language-knob)

Perhaps you can use something like labeled mechanical knobs. Turning on the
knobs might pull on a spring or move the location of the bell. Adding labels to
the knobs allows the human to read and adjust the value in something like
English, while the position of the knobs communicate those values to the
mechanical device.

One of the nice things about using an intermediate language is that it hides the
implementation details. That can free you up to change the implementation
details later if necessary, but not have to change the language that you are
speaking.

For example, say you are using an inexpensive electric stove at home to cook
food and you decide you want to upgrade to a fancy gas stove. The performance
and cost and other details may change, but the "Simmer, Low, Medium, High" knob
language will pretty much stay the same and recipes from cookbooks will work
with either stove, perhaps with some slight adjustments for different stove
performance. If the cookbook said send four amps through the cooking coil for 10
minutes, then you would need to translate the cookbook for specific stoves.

The details have been abstracted away by the intermediate language.

[Human Knob Bell](human-knob-bell)

So now we have a potential way for the human to transmit information to the
bell. The receiver might be something complicated, but you can figure out the
details if the researcher likes your approach.

So you email her and tell her your idea of adding knobs to the bell.

[Human Robot Knob Bell](human-robot-knob-bell)

The researcher responds while the knobs might work for her, she also needs Rosie
to be able to send messages to the bell automatically.

Since Rosie is most likely not anything resembling humanoid, without eyes to see
the labels or hands to turn the knobs, it would probably be very difficult for
Rosie to use the knob language to change the bell properties. Rosie might be
able to instead use the bell's mechanical language directly, but that might also
be difficult.

[Fly Alcohol Assay](fly-alcohol-assay)

This is a fly alcohol project that some of us here worked on years ago for
Ulrike's lab. There are six tunnels and one fly is placed into each tunnel. A
camera looked down at the tunnels and figured out in real time the location and
orientation of all of the flies. Three little gates in each tunnel could open
and let the fly run freely or close and trap a fly in a section of a tunnel. We
could then pump in odors or alcohol vapors.

Right after we got it to work, the researchers moved to Brown where they ran it
for a few years. I am not sure the researchers ever found anything of note
scientifically using this rig, so in that sense perhaps it was not a successful
project, but it was a pretty clever little device.

We made a mistake on this rig, though, that made it difficult to use. There was
an overly complicated mechanical linkage that controlled each gate. It worked
well if everything was adjusted properly, but if it was a little too tight, the
gates would jam, if it was a little too loose, the gates would fall down when
they were supposed to be closed. Every researcher using this rig had to be
trained how to adjust the linkage properly and do that before every experiment.
This was very frustrating for new researchers and it made them not like using
the rig.

This was something we could have pretty easily fixed with a simpler linkage in
another design iteration. We wanted to send two messages to the gates, open or
close and the linkage should have been correspondingly as simple. That is
something you have to be careful about when using a purely mechanical
communication scheme.

Sometimes you have no choice but to require your mechanical parts to have very
high precision with reliable techniques for aligning them and calibrating them.
Optical components in a microscope are an example. Ideally, though, you can make
your design tolerant to imperfections and misalignment and that sort of design
talent can take years of experience to achieve.

[Yet Another Transmitter](human-robot-transmitter)

So the researcher wants you to go back to the drawing board and think of yet
another way to transmit sounds to the mouse, one that will make it possible for
both her and Rosie to send messages to the transmitter to change its properties.

[Electro-Mechanical Transmitter](electro-mechanical)

If you are willing to add the complication of electronics to your transmitter
you can gain some interesting properties.

Electronics come at a cost. You need electrical power and electrical noise can
become audio noise corrupting your sound transmission. You might not want to add
electronics to a farmer's sound transmitter who is training his dog to herd
sheep in the rain.

The sound transmission will still be mechanical. A speaker physically vibrates
the air. The speaker will be controlled, however, by electric signals and power,
opening up more possibilities for triggering the device and communicating to it.

[Human and Electro-Mechanical Languages](languages-human-electro-mechanical)

In human language, you still want to be able to send messages to the device, like
"change the frequency." and "change the duration."

In electro-mechanical language, you still have the option of using mechanical
knobs and levers to change information stored in the system.

Adding electronics, however, also gives you the option of changing information
in the device by modifying component values and electric signals.

Many electronic components are mass produced in many different values. It can be
much easier and faster to swap a resistor for one with a different value than to
remachine a mechanical part to have new geometry.

Electronic knobs can change component values directly and you can use switches
and buttons and sensors to change properties of the circuit both manually and
with feedback.

[Electro-Mechanical Transmitter](pcb)

You could choose or create an electro-mechanical transmitter that plays a tone
whenever the researcher presses a button. It could also play a tone whenever
Rosie sends an electric signal to some input pin.

[Talking To the Electro-Mechanical Transmitter](human-robot-pcb)

When the researcher wants to send messages to the electro-mechanical
transmitter, she could flip switches or turn knobs to change the frequency or
duration of the tone.

When Rosie wants to send messages to the electro-mechanical transmitter, she
could change the value of analog voltage signal. Increasing the voltage might
increase the tone frequency.

Lots of rigs and devices in this building use variations of this analog voltage
language. Sometimes it is unavoidable like when a sensor only outputs an analog
voltage or some device only accepts analog input. Some people love using analog
voltages because you can look at them on an oscilloscope and vary them by
turning knobs.

Using analog voltages to send messages, however, has a drawback of being
susceptible to noise.

[Signal Noise](signal-noise)

Every signal contains some amount of noise. There are techniques for minimizing
noise and maximizing signal, like shielding wires and using differential
signals, but it is always going to be there to some extent.

[Light Sensor](light-sensor)

Here is another project that I worked on years ago that only used analog
circuitry. It is a light sensor for detecting IR light reflecting off of fly
wings. Researchers use it to tell how fast a fly is flying and as a way to
detect when flying starts and stops.

After a couple of iterations I got it to work well and it was used by Sung Soo
in a rig here and by other labs in several universities.

The first iteration of my design, though, I did something pretty stupid in
retrospect. I needed a nice bandpass filter to remove noise and the large DC
component of the signal. Ideal bandpass filters have nice sharp edges where
everything outside the frequency range is squashed to zero and everything inside
the range passes unchanged. Real filters are never so nice, but by adding orders
to the filter in stages you can better approximate an ideal filter. Filters
might reduce the signal, but by adding a gain stage afterwards you can increase
the signal back up to where you want it.

I wanted a really nice filter so I used four filter stages with an amplifier at
the end. This worked great when I simulated the filter, but in reality, each
stage reduced the signal more and more until it was the same magnitude as the
noise and when I amplified it at the end the noise was amplified too and the
resulting waveform looked horrible.

I fixed the filter by putting smaller amplifiers after each stage instead of one
big one at the end. Noise is always something you have to deal with properly in
analog circuits to get good results.

[Copy Degradation](copy-degradation)

[Processor](processor)

If you are willing to add even more complication to your electro-mechanical
device, you can throw in a processor.

[Human and Processor Languages](languages-human-processor)

Processors store information digitally and process that information using a
machine code instruction set.

Binary data and machine code might look much more complicated at first than
simple resistor values or knob settings, but changing information in the
processor can be much faster and less painful than resoldering a part on a
circuit board or resizing a gear.

[Software Language](language-software)

Just as we were able to find intermediate languages in between human and
mechanical and electro-mechanical devices, high-level software adds abstraction
to machine languages to make them very similar to natural human languages.

Now we can write something that looks almost like English that asks the mouse to
reach for a pellet. This calls another English like function name that plays a
tone through the speaker. Similar language can be used to set the tone frequency
and duration.

The beautiful thing about this intermediate language is that with some
conversions it can be understood by the human, the computer, and the mouse.

Software like this cannot exist on its own, however, it must be written for and
run on some type of hardware containing a processor.

[Software-Electro-Mechanical Transmitter](software-electro-mechanical)

There are many options for hardware that contain a processor and the electronics
necessary to control a speaker.

There is a huge variety of desktop and laptop computers, all of which can be
made to play sounds through a speaker.

Phones have a great user interface and have speakers built-in.

There is also a large variety of circuit boards that contain processors, made by
many different companies and organizations.

[Phone](phone)

Phones have speaker and microphones built-in and have powerful human language
processing capabilities.

Perhaps you could say "Siri ask mouse to reach for food pellet." or "Siri play
tone at 5000 Hertz for 75 milliseconds."

That might not work like you hope, but you could probably write an app for that
without too much trouble.

It might be tricky to get Rosie to communicate to the phone, but it could be
possible using Bluetooth or wifi or something.

You probably do not want to tie up your phone during automated experiments,
though, or at some point use it make phone calls.

[Computer](computer)

Desktops and laptops are more traditionally what people think of as computers.

Rosie may or may not already contain one, but even if a computer does not
directly control the automated experiments, the researcher probably has one
nearby and might use it to communicate with rig.

It is easy to write software using high-level programming languages on a
computer.

Researchers may have different tastes in computers though.

It can sometimes get tricky to support all operating systems, programming
language choices, and soundcard device drivers.

Sound output may accidentally be disabled or overridden by the user clicking on
a web page, plugging in head phones, playing a movie, or updating software.

Experiment timing may be adversely affected by other operating system processes,
like synchronizing dropbox, automatic updates, saving or processing giant files,
or going to sleep.

Might need to add extra hardware to get input and output pins if necessary.

[Dedicated Processor](dedicated)

There are lots of little boards that contain inexpensive processors.











Processors are inexpensive.

Easier to standardize on multiple rigs.

Easier to control the software and hardware environment.

Performance is not affected by user's computer.

Can be used standalone or as a connected device.

# [](#header-1) Operating System?

The software that supports a computer's basic functions, such as scheduling
tasks, executing applications, and controlling peripherals.

Enables the use of lots of prewritten, well-tested, software libraries.

Adds convenience, but also overhead.

Needs to be configured and maintained, needs time to boot up and shut down.

Not real-time. Operating system interrupts can affect timing.
