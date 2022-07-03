# Arduino-Sorter
**Objective**

Where Dal/Pulses is one of the major crops grown in India. There are almost 10-
15 different varieties of Dals which are grown and Flourish in India.

What if all of them are mixed with stones and you are told to sort them?
Now with the traditional sorter only a few units using dated technology-based
equipment, proper cleaning is not under, taken and acceptable products go into rejected
lots and between 5% - 8% wastage and tonne).

Thus there is a need for a new-age sorter thus we are introducing ML-Driven Sorter.
We will then cover how to use the images from the camera to create new classification
models using the Teachable Machine. Once we train the model, the sorter will be able
to classify and sort objects as they fall through the air, because of the Edge TPU’s fast
inference time.

**Method**

This project uses a laptop's built-in camera to identify various lentils. The computer
then sorts them based on a model you train. Adruino Uno communicates with the
computer to decide when to sort which lentils via a micro servo.

This project shows you how to build a machine to classify and sort objects. It leverages
Teachable Machine, a web-based tool that lets you easily train your own image
classification model without writing any code, and then uses the Adruino for
inferencing based on that model to classify and sort objects.

The first thing we’ll do is help you build the physical sorting machine itself, consisting
of a camera housing (The Decider). We will then cover how to use the images from the
camera to create new classification models using the Teachable Machine.

Once you have a trained model, your sorter will be able to classify and sort objects as
they fall through the air, because of the Edge TPU’s fast inference time. Finally, we’ll
run through other tips and tricks for improved classification and sorting accuracy
throughout the whole process
