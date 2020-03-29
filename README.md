# RTLights

This project was developed as an assignment for the subject Object-Oriented Programming for the [Degree in Informatics Engineering](http://www2.uab.pt/guiainformativo/eng_detailcursos.php?curso=100) from Open University of Portugal (circa 2018)

It's a simple traffic (A) and rail load (B) lighting system. Each system includes 3 lights (green, yellow and red). Lights A when initialized are in an OFF state and includes a status panel that indicates which color is currently on (or if it's off) as well as how long is left until the light changes to another color. Lights B are similar to A, but are used to control the flow of a railroad, it has a sound alarm (which is a visual alarm only for this project) whenever the train is less than 5 km away from the crossing. Includes a panel that informs how far the train is from the crossing, the speed it is currently traveling and how long until it reaches the crossing.

### Demo

<div style="width:auto;text-align:center;padding:20px;">
    <img style="width:100%;height: 100%;object-fit: contain;" src="https://raw.githubusercontent.com/a-santo/RTLights/master/demo.gif">
</div>

### Technologies Used

* [C++](https://isocpp.org/)

### Instalation

1. Clone the repository
2. Compile it: `g++ *.cpp -o RTLights`
3. Run `./RTLights`

**Authors**: André Santo

